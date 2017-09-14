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

#include "esynet_ecc_unit.h"

EsynetECCBufferUnit::EsynetECCBufferUnit(ECCMethod ecc_name, long data_width,
    bool ecc_enable, bool fault_injection_enable ) :
    m_ecc_enable( ecc_enable ), 
    m_fault_injection_enable( fault_injection_enable ),
    m_buf_state( false ), m_ecc_buffer(),
    m_ecc_word_width( 1 ), 
    m_ecc_correct_capacity( 1 ), m_ecc_detect_capacity( 1 ), 
    m_vc( 0 ), m_data_width( data_width )
{
	if (ecc_name == ECC_HM74 )
    {
        m_ecc_word_width = 7;  
        m_ecc_correct_capacity = 1; 
        m_ecc_detect_capacity = 2;
    }
	else if (ecc_name == ECC_HM128)
    {
        m_ecc_word_width = 12; 
        m_ecc_correct_capacity = 1; 
        m_ecc_detect_capacity = 2;
    }
	else if (ecc_name == ECC_HM2216)
    {
        m_ecc_word_width = 22; 
        m_ecc_correct_capacity = 1; 
        m_ecc_detect_capacity = 2;
    }
	else if (ecc_name == ECC_HM3932)
    {
        m_ecc_word_width = 39; 
        m_ecc_correct_capacity = 1; 
        m_ecc_detect_capacity = 2;
    }
    else
    {
        cerr << "Unknown Error Correcting Code " << ecc_name;
        return;
    }
}

void EsynetECCBufferUnit::decode(EsynetFlit & flit)
{
    DataType fault_pattern = flit.faultPattern();
    
    long totalbit = m_data_width;
    long totalgroup = totalbit / m_ecc_word_width;
    for (int group = 0; group < totalgroup; group ++)
    {
        long groupfault = 0;
        for (int gbit = group * m_ecc_word_width; 
            gbit < (group + 1) * m_ecc_word_width; gbit ++)
        {
            long byteid = gbit / ATOM_WIDTH_;
            long bitid = gbit % ATOM_WIDTH_;
            long bitvalue = fault_pattern[byteid] & (0x01ULL << bitid);
            if (bitvalue > 0)
            {
                groupfault ++;
                if (groupfault <= m_ecc_correct_capacity)
                {
                    fault_pattern[byteid] = 
                        fault_pattern[byteid] & (~(0x01ULL << bitid));
					flit.clearDrop();
                }
                else if (groupfault <= m_ecc_detect_capacity)
                {
                    flit.setDrop();
                    //reportFault(phy);
                }
                else
                {
                    flit.setDrop();
                }
            }
        }
    }

    flit.setFaultPattern( fault_pattern );
}

void EsynetECCEncoder::encoder(long vc, const EsynetFlit& flit)
{
	EsynetFlit flit_t = flit;

    if ( m_fault_injection_enable )
    {
        DataType fault_pattern = flit_t.faultPattern();
        long l_point = 0;
        for ( ; l_point < m_data_width; l_point ++ )
        {
            int word = l_point / ATOM_WIDTH_;
            int bit = l_point % ATOM_WIDTH_;

            if ( at( l_point ).currentStateOut() )
            {
                fault_pattern[ word ] |= (0x01ULL << bit);
            }
        }
        flit_t.setFaultPattern( fault_pattern );
        for ( ; l_point < (long)size(); l_point ++ )
        {
            if ( at( l_point ).currentStateOut() )
            {
                flit_t.setDrop();
            }
        }
    }
    
    injectFlit( vc, flit_t );
}

void EsynetECCInterDecoder::decoder(long vc, const EsynetFlit& flit)
{
	EsynetFlit flit_t = flit;
    decode( flit_t );
    
    if ( m_fault_injection_enable )
    {
        DataType fault_pattern = flit_t.faultPattern();
        long l_point = 0;
        for ( ; l_point < m_data_width; l_point ++ )
        {
            int word = l_point / ATOM_WIDTH_;
            int bit = l_point % ATOM_WIDTH_;

            if ( at( l_point ).currentStateOut() )
            {
                fault_pattern[ word ] |= (0x01ULL << bit);
            }
        }
        flit_t.setFaultPattern( fault_pattern );
        for ( ; l_point < (long)size(); l_point ++ )
        {
            if ( at( l_point ).currentStateOut() )
            {
                flit_t.setDrop();
            }
        }
    }
        
    injectFlit( vc, flit_t );
}


void EsynetECCFinalDecoder::decoder(long vc, const EsynetFlit& flit)
{
	EsynetFlit flit_t = flit;
    decode( flit_t );
    
    if ( m_fault_injection_enable )
    {
        for ( size_t l_point = 0; l_point < size(); l_point ++ )
        {
            if ( at( l_point ).currentStateOut() )
            {
                flit_t.setDrop();
            }
        }
    }
    
    injectFlit( vc, flit_t );
}

