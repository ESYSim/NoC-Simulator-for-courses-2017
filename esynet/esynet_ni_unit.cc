/*
This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor,
Boston, MA  02110-1301, USA.

---
Copyright (C) 2015, Junshi Wang <>
*/

#include "esynet_ni_unit.h"

/* Bit Operation Functions */
/* Set the w-th bit in integer x as v */
void setBit( int &x, int w, int v );
/* Get the value of the w-th bit in integer x */
int getBit( int x, int w );
/* Return the log2(x) and round up to a integer */
double log2Ceil( double x );

/*************************************************
  Function: 
    EsynetNI::EsynetNI(long id, long phy_port, void * router)
  Description: 
    Constructs a EsynetNI with router identification $id$.
    The total router number, network size, traffic rule, packet inject rate and
    flag of generate traffic are initialied by input arguments.
  Input:
      long id        indentification of the router
      long phy_port  the number of physical port
    void * router    pointer to router
*************************************************/
EsynetNI::EsynetNI( EsyNetworkCfg * network_cfg, 
	long id, EsynetConfig * argument_cfg ) :
	EsynetSimBaseUnit(),
	m_id( id ), 
	m_network_cfg( network_cfg ),
	m_router_cfg( &( network_cfg->router( id ) ) ),
	m_argu_cfg( argument_cfg ),
	m_generate_traffic_enable( !argument_cfg->trafficInjectDisable() &&
		!argument_cfg->inputTraceEnable() ),
	m_inject_vc( 0 ),
	m_vc_counter( network_cfg->router( id ).maxVcNum(), 
		network_cfg->router( id ).maxInputBuffer() ),
	m_init_data( network_cfg->flitSize( ATOM_WIDTH_ ), 0 ),
	m_flit_size( network_cfg->flitSize( ATOM_WIDTH_ ) ),
	m_flit_on_link( false ),
	m_empty_require( false ),
	m_ecc_encoder( id, 0, network_cfg->dataPathWidth(), 
		argument_cfg->eccEnable(), argument_cfg->eccName(), 
		argument_cfg->eccFipEnable() ),
	m_ecc_decoder( id, 0, network_cfg->dataPathWidth(), 
		argument_cfg->eccEnable(), argument_cfg->eccName(), 
		argument_cfg->eccFipEnable() )
{
	m_retransmission_buffer.resize( m_network_cfg->routerCount() );
	m_retransmission_timer.resize( m_network_cfg->routerCount(), 0 );

	/* initalization data */
	m_init_data.resize( m_flit_size );
	for ( long l_byte = 0; l_byte < m_flit_size; l_byte ++ )
	{
		m_init_data[ l_byte ] = 
			EsynetSRGenFlatUnsignedLongLong(0, MAX_64_);
	} /* for ( long l_byte = 0; l_byte < m_flit_size; l_byte ++ ) */    
}

/*************************************************
  Function :
    void EsynetNI::setBit(int &x, int w, int v)
  Description :
    Set the w-th bit in integer x as v.
  Called By:
    void EsynetNI::trafficBitReversal(BenchmarkItem * p)
    void EsynetNI::trafficShuffle(BenchmarkItem * p)
    void EsynetNI::trafficButterfly(BenchmarkItem * p)
  Input:
    int& x  integer to operate
    int  w  the position of bit to operate
    int  v  the value of bit
*************************************************/
void setBit( int &x, int w, int v )
{
	/* bit mask of w-th bit in integer */
	int mask = 1 << w;

	/* if the v is 1, set w-th bit 1. */
	if ( v == 1 )
	{
		x = x | mask;
	} /* if ( v == 1 ) */
	/* if the v is 0, set w-th bit 0. */
	else if ( v == 0 )
	{
		x = x & ~mask;
	} /* else if ( v == 0 ) */
	/* if the v is neither 0 nor 1, call assertion report. */
}

/*************************************************
  Function :
    int EsynetNI::getBit(int x, int w)
  Description :
    Get the value of the w-th bit in integer x.
  Called By :
    void EsynetNI::trafficBitReversal(BenchmarkItem * p)
    void EsynetNI::trafficShuffle(BenchmarkItem * p)
    void EsynetNI::trafficButterfly(BenchmarkItem * p)
  Input :
    int  x  integer to operate
    int  w  the position of bit to operate
  Return :
    int  v  the value of the bit
*************************************************/
int getBit( int x, int w )
{
	return ( x >> w ) & 1;
}

/*************************************************
  Function :
    double EsynetNI::log2Ceil(double x)
  Description :
    Return the log2(x) and round up to a integer.
  Called By :
    void EsynetNI::trafficBitReversal(BenchmarkItem * p)
    void EsynetNI::trafficShuffle(BenchmarkItem * p)
    void EsynetNI::trafficButterfly(BenchmarkItem * p)
  Input :
    double  x  the digital to log
  Return
    double  log2(x) and round up
*************************************************/
double log2Ceil( double x )
{
	return ceil( log( x ) / log( 2.0 ) );
}

/*************************************************
  Function :
    void EsynetNI::generatePacket()
  Description :
    Generate packets.
  Calls :
    double SRGen::flatDouble( double low, double high )
    const BenchmarkItem & EsynetNI::trafficRandom()
    const BenchmarkItem & EsynetNI::trafficTranspose1()
    const BenchmarkItem & EsynetNI::trafficTranspose2()
    const BenchmarkItem & EsynetNI::trafficBitReversal()
    const BenchmarkItem & EsynetNI::trafficShuffle()
    const BenchmarkItem & EsynetNI::trafficButterfly()
  Called By:
    void SimRouter::runBeforeRouter()
*************************************************/
void EsynetNI::generatePacket()
{
	/* detemine if there is a new packet, if the random number is lower then 
	 * pir, shot will be TRUE;
	 * Thus, the packet inject rate ranges from 0 to 1 packet/cycle/router. */
	bool shot = (EsynetSRGenFlatDouble(0, 1) < m_argu_cfg->trafficPir() );
	/* if there is a new packet, determine each field for the new packet. */
	if ( shot )
	{
		/* size of source id (bit) */
		int nbits = (int)log2Ceil( m_network_cfg->routerCount() );
		/* coordinate of source id. */
		vector< long > src_cord = m_network_cfg->seq2Coord( m_id );
		
		/* generate new packet */
		int dst = m_id;
		switch ( (TrafficRule)m_argu_cfg->trafficRule() )
		{
		/* Determine the destination in new packet according to Random rule */
		case TRAFFIC_RANDOM : 
			dst = EsynetSRGenFlatLong(0, m_network_cfg->routerCount());
			break;
		/* Determine the destination in new packet according to Transpose1 rule
		 * (x,y) -> (Y-1-y,X-1-x), X,Y is the size of network */
		case TRAFFIC_TRANSPOSE1: 
			{
				vector< long > dst_cord( 2, 0 );
				dst_cord[ EsyNetworkCfg::AX_X ] = 
					m_network_cfg->size( EsyNetworkCfg::AX_Y ) - 1 
						- src_cord[ EsyNetworkCfg::AX_Y ];
				dst_cord[ EsyNetworkCfg::AX_Y ] = 
					m_network_cfg->size( EsyNetworkCfg::AX_X ) - 1 
						- src_cord[ EsyNetworkCfg::AX_X ];
				dst = m_network_cfg->coord2Seq( dst_cord );
			}
			break;
		/* Determine the destination in new packet according to Transpose2 rule
		 * (x,y) -> (y,x) */
		case TRAFFIC_TRANSPOSE2: 
			{
				vector< long > dst_cord( 2, 0 );;
				dst_cord[ EsyNetworkCfg::AX_X ] = 
					src_cord[ EsyNetworkCfg::AX_Y ];
				dst_cord[ EsyNetworkCfg::AX_Y ] = 
					src_cord[ EsyNetworkCfg::AX_X ];
				dst = m_network_cfg->coord2Seq( dst_cord );
			}
			break;
		/* Determine the destination in new packet according to bit reversal 
		 * rule */
		case TRAFFIC_BIT_REVERSAL: 
			{
				for ( int l_bit = 0; l_bit < nbits; l_bit ++ )
				{
					setBit( dst, l_bit, getBit( m_id, nbits - l_bit - 1 ) );
				}
			}
			break;
		/* Determine the destination in new packet according to suffle rule
		 * loop left shift */
		case TRAFFIC_SHUFFLE: 
			{
				for ( int l_bit = 0; l_bit < nbits - 1; l_bit ++ )
				{
					setBit( dst, l_bit + 1, getBit( m_id, l_bit ) );
				} 
				setBit( dst, 0, getBit( m_id, nbits - 1 ) );
			}
			break;
		/* Determine the destination in new packet according to butterfly rule
		 * swap the MSB and LSB */
		case TRAFFIC_BUTTERFLY: 
			{
				for ( int l_bit = 1; l_bit < nbits - 1; l_bit ++ )
				{
					setBit(dst, l_bit, getBit(m_id, l_bit) );
				}
				setBit( dst, 0, getBit( m_id, nbits - 1 ) );
				setBit( dst, nbits - 1, getBit( m_id, 0 ) );
			}
			break;
		/* if unknown traffic, call asseration */
		default: break;
		} /* switch ( m_traffic ) */
		/* insert new packets */
		addEvent(EsynetMessEvent::generateEvgMessage(m_current_time,
			m_id, dst,  m_argu_cfg->packetSize(), -1, m_current_time ) );
	} /* if ( shot ) */
}

/*************************************************
  Function :
    void e2eRetransmissionTimerOverflow()
  Description :
    1. Increase E2E Retransmission timer
    2. Retransmission packets when timer overflows
  Called By:
    void EsynetNI::runAfterRouter()
*************************************************/
void EsynetNI::e2eRetransmissionTimerOverflow()
{
	/* loop for each destination address */
	for ( size_t l_dest = 0; l_dest < m_retransmission_buffer.size();
		l_dest ++ )
	{
		/* increase timer */
		m_retransmission_timer[ l_dest ] ++;
		/* retransmission counter overflow */
		if ( m_retransmission_timer[ l_dest ] >= 
			m_argu_cfg->e2eRetransTimerMax() )
		{
			/* renew retransmission timer */
			m_retransmission_timer[ l_dest ] = 0;
#if 0
			/* Methods 1: retransmission all packets to the address */
			/* loop for each packets */
			while ( m_retransmission_buffer[dest].size() > 0 )
#endif
#if 1
			/* Methods 2: retransmission the first packet */
			/* if there is at lest 1 packets in buffer */
			if ( m_retransmission_buffer[ l_dest ].size() > 0 )
#endif
			{
				/* insert the first packet into message queue */
				addEvent(EsynetMessEvent::generateEvgMessage(m_current_time,
					m_retransmission_buffer[ l_dest ][ 0 ].sorAddr(),
					m_retransmission_buffer[ l_dest ][ 0 ].desAddr(),
					m_argu_cfg->packetSize(), -1,
					m_retransmission_buffer[ l_dest ][ 0 ].startTime() ) );
				/* remove the first packet from queue */
				m_retransmission_buffer[ l_dest ].erase(
					m_retransmission_buffer[ l_dest ].begin() );
				/* increase retransmission counter */
				m_statistic.incRetransmissionPacket();
			} 
		} 
	} 
}

/*************************************************
  Function :
    void e2eRetransmissionInjection( const EsynetFlit & b )
  Description :
    Inject packet $b$ into retransmission buffer
  Called By:
    void SimRouter::routerSimPipeline()
*************************************************/
void EsynetNI::e2eRetransmissionInjection(const EsynetFlit & b)
{
	/* ACK packet does not store in buffer */
	if ( b.ack() == false )
	{
		/* check whether the packet have been in the buffer  */
		size_t l_buffer = 0;
		for ( l_buffer = 0; m_current_time <
			m_retransmission_buffer[ b.desAddr() ].size(); l_buffer ++ )
		{
			if ( m_retransmission_buffer[ b.desAddr() ][ l_buffer ].flitId()
				== b.flitId() )
			{
				break;
			}
		} /* for ( l_buffer = 0; MessQueueCurrentTime() < */
		/* insert flit into buffer */
		if ( l_buffer == m_retransmission_buffer[ b.desAddr() ].size() )
		{
			m_retransmission_buffer[ b.desAddr() ].push_back( b );
			/* if this is the first flit in queue, restart timer */
			if ( m_retransmission_buffer[ b.desAddr() ].size() == 1 )
			{
				m_retransmission_timer[ b.desAddr() ] = 0;
			} /* if ( m_retransmission_buffer[ b.desAddr() ].size() == 1 ) */
		} /* if ( l_buffer == m_retransmission_buffer[ b.desAddr() ].size() ) */
	} /* if ( b.ack() < 0 ) */
}

/*************************************************
  Function :
    void e2eRetransmissionComfirm( const EsynetFlit & b )
  Description :
    Confirm flits $b$ in retransmission buffer.
  Called By:
    void EsynetNI::runAfterReceiving()
*************************************************/
void EsynetNI::e2eRetransmissionComfirm(const EsynetFlit & b)
{
#if 0
	/* go-back-N */
	/* check packet and remove from buffer */
	if ( m_retransmission_buffer[ b.sorAddr() ][ 0 ].flit_id() == b.ack() )
	{
		/* remove the packet */
		m_retransmission_buffer[ b.sorAddr() ].erase(
			m_retransmission_buffer[ b.sorAddr() ].begin() );
		/* restart the timer. */
		m_retransmission_timer[ b.sorAddr() ] = 0;
	}
#endif
#if 1
	/* check packet and remove from buffer */
	for ( size_t l_unit = 0;
		l_unit < m_retransmission_buffer[ b.sorAddr() ].size(); l_unit ++ )
	{
		if ( m_retransmission_buffer[ b.sorAddr() ][ l_unit ].flitId() == 
			b.ackPacket() )
		{
			/* remove the packet */
			m_retransmission_buffer[ b.sorAddr() ].erase(
				m_retransmission_buffer[ b.sorAddr() ].begin() + l_unit );
			/* if removed unit is the first unit, restart the timer. */
			if ( l_unit == 0 )
			{
				m_retransmission_timer[ b.sorAddr() ] = 0;
			} /* if ( l_unit == 0 ) */
		} 
	} /* for ( int l_unit = 0; */
#endif
}

/*************************************************
  Function:
    bool EsynetNI::receivePacket(const EsynetFlit &b)
  Description:
    Check if a packet can be accepted without faults.
  Called By:
    bool EsynetNI::runAfterReceiving(const EsynetFlit & b)
  Inputs:
    const EsynetFlit & b  received flit
  Return:
    bool  if a packet is received successful, return TRUE
*************************************************/
void EsynetNI::receivePacket(long vc, const EsynetFlit & flit)
{
	EsynetFlit flit_t = flit;
	if ( m_ecc_decoder.eccEnable() )
	{
		m_ecc_decoder.decoder( vc, flit_t );
		flit_t = m_ecc_decoder.getFlit();
	}
	else
	{
		if ( flit_t.faultBitCount() > 0 )
		{
			flit_t.setDrop();
		}
	}

	addEvent(EsynetMessEvent::generateCreditMessage(
		m_current_time + CREDIT_DELAY_, m_id + m_network_cfg->routerCount(), 
		0, 0, m_id, 0, vc, 10 ) );
	if (flit_t.desAddr() != m_id) 
	{
		return;
	}
    /* skip testing packets, return credit direcly */
	if ( flit.testFlit() )
	{
		return;
	}

	if (flit_t.flitType() == EsynetFlit::FLIT_TAIL || flit_t.flitSize() == 1)
	{
		m_statistic.incAcceptPacket();
		if ( m_statistic.acceptStartTime() < 1e-5 )
		{
			m_statistic.setAcceptStartTime( m_current_time );
		}
		m_statistic.setAcceptStopTime( m_current_time );
		m_statistic.incTotalDelay( m_current_time - flit_t.startTime() );
		m_statistic.updateMaxDelay( m_current_time - flit_t.startTime() );
		if ( flit_t.marked() )
		{
			m_statistic.incAcceptMarkPacket();
			m_statistic.incTotalMarkDelay( 
				m_current_time - flit_t.startTime() );
		}
	}
	if ( flit_t.drop() )
	{
		m_statistic.incDropFlit();
	}
	/* inject the new packet into retransmisson buffer */
	/* if flit is ACK */
	if ( flit_t.ack() )
	{
		/* receive ack packet */
		m_statistic.incAcceptAckPacket();
		/* ack flit is ok */
		if ( flit_t.drop() == false )
		{
			m_statistic.incNonDropAckPacket();
			m_statistic.incTotalE2EAckDelay( 
				m_current_time - flit_t.e2eStartTime() );
			/* confirm packet in retransmission buffer */
			if ( m_argu_cfg->e2eRetransEnable() )
			{
				e2eRetransmissionComfirm( flit_t );
			} /* if ( m_retransmission ) */
		} /* if ( b.drop() == false ) */
	}
	/* else */
	else
	{
		/* head flit */
		/* if the flit is ok, it will register into receive buffer */
		if (flit_t.flitType() == EsynetFlit::FLIT_HEAD && 
			flit_t.drop() == false)
		{
			/* if the packet only contain one flit, send ack directly */
			if ( flit_t.flitSize() == 1 )
			{
				/* generate ack packet */
				if ( m_argu_cfg->e2eAckEnable() )
				{
					addEvent(EsynetMessEvent::generateEvgMessage(
						m_current_time,
						flit_t.desAddr(), flit_t.sorAddr(), 1, -1, 
						flit_t.startTime(), EsynetFlit::FLIT_ACK, 
						flit_t.flitId()));
					m_statistic.incInjectAckPacket();
				} /* if ( m_ack_packet ) */
				
				m_statistic.incNonDropPacket();

				addEvent(EsynetMessEvent(m_current_time, ET_PACKET_ACCEPT,
					flit_t.sorAddr(), -1, -1, flit_t.desAddr(), -1, -1, 
					flit_t ) );
#ifdef ESYNETINTERFACE
				m_accept_list.push_back( 
					EsynetMessEvent(m_current_time, ET_PACKET_ACCEPT,
					flit_t.sorAddr(), -1, -1, flit_t.desAddr(), -1, -1, 
					flit_t )
				);
#endif
				/* receive a packet successfully */
			} /* if ( b.flitSize() == 1 ) */
			else
			{
				m_retransmission_receive_buffer.push_back( flit_t );
			} /* else ( b.flitSize() == 1 ) */
		} /* if (b.type() == EsynetFlit::FLIT_HEADER_) */
		/* body flit */
		else if (flit_t.flitType() == EsynetFlit::FLIT_BODY &&
			flit_t.drop() == true )
		{
			/* find the packet in buffer, and erase it away */
			for ( size_t l_unit = 0;
				l_unit < m_retransmission_receive_buffer.size(); 
				l_unit ++ )
			{
				if ( m_retransmission_receive_buffer[ l_unit ].flitId() ==
					flit_t.flitId() )
				{
					m_retransmission_receive_buffer.erase(
						m_retransmission_receive_buffer.begin() + 
						l_unit );
				} /* if ( m_retransmission_receive_buffer[ i ].flitId() */
			} /* for ( size_t i = 0; */
		}
		/* tail flit */
		else if (flit_t.flitType() == EsynetFlit::FLIT_TAIL &&
			flit_t.drop() == false )
		{
			/* find the packet in buffer */
			for ( size_t l_unit = 0;
				l_unit < m_retransmission_receive_buffer.size(); l_unit ++ )
			{
				if ( m_retransmission_receive_buffer[ l_unit ].flitId() ==
					flit_t.flitId() )
				{
					/* the packet is i-th item, so the head and body flit is    
						* ok! */
					/* remove packet */
					m_retransmission_receive_buffer.erase(
						m_retransmission_receive_buffer.begin() + l_unit);
								/* if the tail flit is ok, send ack back */
					if (flit_t.drop() == false)
					{
						/* generate ack packet */
						if ( m_argu_cfg->e2eAckEnable() )
						{
							addEvent(EsynetMessEvent::generateEvgMessage(
								m_current_time, flit_t.desAddr(), 
								flit_t.sorAddr(), 
								1, -1, flit_t.startTime(), EsynetFlit::FLIT_ACK,
								flit_t.flitId() ) );
							m_statistic.incInjectAckPacket();
						} /* if ( m_ack_packet ) */

						m_statistic.incNonDropPacket();

						addEvent(EsynetMessEvent(
							m_current_time, ET_PACKET_ACCEPT,
							flit_t.sorAddr(), -1, -1, flit_t.desAddr(), -1, -1, 
							flit_t ) );
#ifdef ESYNETINTERFACE
						m_accept_list.push_back( EsynetMessEvent(
							m_current_time, ET_PACKET_ACCEPT,
							flit_t.sorAddr(), -1, -1, flit_t.desAddr(), -1, -1, 
							flit_t ) );
#endif
					} /* if (b.drop() == false) */
				} /* if ( m_retransmission_receive_buffer[ l_unit ].flitId() */
			} /* for ( size_t l_unit = 0; */
		}
	} /* else ( b.ack() >= 0 ) */
}

/*************************************************
  Function :
    void EsynetNI::runBeforeRouter()
  Description :
    Functions run before simulationrouter
    1. generate packets.
  Calls :
    void EsynetNI::generatePacket()
  Called By:
    void SimRouter::routerSimPipeline()
*************************************************/
void EsynetNI::runBeforeRouter()
{
	/* generate new packet */
	/* if the function of generating traffic is enabled */
	if ( m_generate_traffic_enable )
	{
		generatePacket();
	} /* if ( m_generate_traffic ) */

	flitTraversal();
	/* fault injection function */
	if ( m_argu_cfg->faultInjectEnable() )
	{
		m_ecc_encoder.nextState();
		m_ecc_decoder.nextState();
	}
}

/*************************************************
  Function :
    void EsynetNI::runAfterRouter()
  Description :
    Functions run before simulationrouter
    1. check time-out of retransmission timer.
    2. BIST interval timer
  Calls :
    void EsynetNI::e2eRetransmissionTimerOverflow()
  Called By :
    void SimRouter::routerSimPipeline()
*************************************************/
void EsynetNI::runAfterRouter()
{
	/* retransmission function */
	if ( m_argu_cfg->e2eRetransEnable() )
	{
		e2eRetransmissionTimerOverflow();
	} /* if ( m_retransmission ) */

	if ( m_argu_cfg->eccEnable() )
	{
		eccBuffer();
	}
}

void EsynetNI::injectPacket(const EsynetFlit& t_flit)
{
	/* inject flits */
	long pac_size = t_flit.flitSize();

	VCType vc_t;
	/* loop all flits in packet */
	for (long l = 0; l < pac_size; l ++)
	{
		DataType flit_data;
		/* set flit data */
		for(long i = 0; i < m_flit_size; i ++)
		{
			/* set data, the next data is the previous data * 0.8 +a reandom 
				* number */
			m_init_data[i] = static_cast<AtomType>( m_init_data[i] * CORR_EFF_ 
				+ EsynetSRGenFlatUnsignedLongLong(0, MAX_64_));
			/* set data in flit */
			flit_data.push_back(m_init_data[i]);
		} /* end of  for(long i = 0; i < flit_size_; i ++) */
		/* head flit */
		if (l == 0)
		{
			/* insert head flit */
			m_inject_queue.push_back( 
				EsynetFlit(t_flit.flitId(), t_flit.flitSize(), 
					EsynetFlit::FLIT_HEAD,
					t_flit.sorAddr(), t_flit.desAddr(), t_flit.startTime(), 
					t_flit.e2eStartTime(), flit_data, t_flit.flitFlag(), 
					t_flit.ack() ) );
		} /* end of  if (l == 0) */
		/* tail flit */
		else if( l == ( pac_size - 1) )
		{
			/* insert tail flit */
			m_inject_queue.push_back(
				EsynetFlit(t_flit.flitId(), t_flit.flitSize(), 
					EsynetFlit::FLIT_TAIL,
					t_flit.sorAddr(), t_flit.desAddr(), t_flit.startTime(), 
					t_flit.e2eStartTime(), flit_data, t_flit.flitFlag(), 
					t_flit.ack() ) );
		} /* end of  else if(l == (size - 1) ) */
		else 
		{
			/* insert body flit */
			m_inject_queue.push_back( 
				EsynetFlit(t_flit.flitId(), t_flit.flitSize(), 
					EsynetFlit::FLIT_BODY,
					t_flit.sorAddr(), t_flit.desAddr(), t_flit.startTime(), 
					t_flit.e2eStartTime(), flit_data, t_flit.flitFlag(), 
					t_flit.ack() ) );
		} /* end of  else */
	}
	addEvent(EsynetMessEvent(m_current_time, ET_PACKET_INJECT,
		t_flit.sorAddr(), -1, -1, t_flit.desAddr(), -1, -1, t_flit ) );
	m_statistic.incInjectPacket();

	/* inject the new packet into retransmisson buffer */
	if ( m_argu_cfg->e2eRetransEnable() )
	{
		e2eRetransmissionInjection( t_flit );
	} /* end of  if (m_retransmission) */
}

//***************************************************************************//
//flit traversal through the link stage
void EsynetNI::flitTraversal()
{
	if( m_inject_queue.size() > 0) 
	{
		long vs = 0;

		if ( m_vc_counter[ vs ] > 0 && !(m_empty_require && 
			m_inject_queue[0].flitType() == EsynetFlit::FLIT_HEAD))
		{
			EsynetFlit flit_t = m_inject_queue[0];
			
			m_inject_queue.erase( m_inject_queue.begin() );
			
			if ( m_ecc_encoder.eccEnable() )
			{
				if (m_argu_cfg->eccStrategy() == ECC_COUNT)
				{
					flit_t.eccCounterReset();
				}
				m_ecc_encoder.encoder( vs, flit_t );
			}
			else
			{
				addEvent(EsynetMessEvent::generateWireMessage(
					m_current_time + WIRE_DELAY_, 
					m_id + m_network_cfg->routerCount(), 0, 0, m_id, 0, vs, 
					flit_t) );
			}
			m_vc_counter[ vs ] --;

			m_flit_on_link = true;
		}
	}
}

/*************************************************
 *  Function: long sim_router_template::suggestVC()
 *  Description: get the suggest VC for a packet, return the vc with least 
 * flits.
 *  Called by:
 *    int esynetBufferSpace(long s1, long s2, int opt)
 *  Return:
 *    the number of suggest VC
 *************************************************/
long EsynetNI::suggestVC()
{
	/* check the inject vc with least flits in */
	VCType vc_t = pair<long, long> (0, m_vc_counter[ 0 ] );
	for (size_t i = 1; i < m_vc_counter.size(); i ++)
	{
		long t = m_vc_counter[ i ];
		if (vc_t.second > t)
		{
			vc_t = pair<long, long>( (long)i, t);
		} /* end of  vc_t.second > t */
	} /* end of  for (long i = 0; i < (vc_number_); i ++) */
	/* return the id of vc with least flits */
	return vc_t.first;
}

bool EsynetNI::isEmpty()
{
	if ( m_flit_on_link )
	{
		return false;
	}

	if ( m_inject_queue.size() == 0 )
	{
		return true;
	}
	else
	{
		if (m_inject_queue[0].flitType() == EsynetFlit::FLIT_HEAD)
		{
			return true;
		}
	}
	return false;
}

void EsynetNI::configFault( EsyFaultConfigList & fault )
{
	/* if fault injection is not enable, quit */
	if ( !m_argu_cfg->faultInjectEnable() )
	{
		return;
	} /* if ( !m_fault_injection_enable ) */

	/* router fault configuration */
	m_ecc_encoder.configFaultList( fault );
	m_ecc_decoder.configFaultList( fault );
}

void EsynetNI::eccBuffer()
{
	if ( m_ecc_encoder.eccEnable() && m_ecc_encoder.bufferState() )
	{
		EsynetFlit flit_t = m_ecc_encoder.getFlit();
		addEvent(EsynetMessEvent::generateWireMessage(
			m_current_time + WIRE_DELAY_, 
			m_id + m_network_cfg->routerCount(), 0, 0, m_id, 0, 
			m_ecc_decoder.vcToGo(), flit_t) );
		m_flit_on_link = true;
	}
}
