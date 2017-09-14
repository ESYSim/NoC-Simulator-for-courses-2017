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

#ifndef ESYNET_STATISTICS_H
#define ESYNET_STATISTICS_H

using namespace std;

/** @defgroup statisticunit Statistic Units */

/**
 * @ingroup statisticunit
 * @brief  Structure for statistics variable for a router.
 */
class EsynetRouterStatistic
{
protected:
    /** @name Variables for BIST for TARRA
     *  @brief In TARRA, the router should be emptied before test and recover
     * after the test. These variables check the average time for that. */
    ///@{
    long m_bist_empty_counter; /**< \brief counter of empty phase. */
    double m_bist_empty_cycle; /**< \brief cycles of empty phase. */
    long m_bist_recover_counter; /**< \brief counter of recover phase. */
    double m_bist_recover_cycle; /**< \brief cycles of recover phase. */
    ///@}

public:
    /** @name Constructor  */
    ///@{
    /*!
     * \brief Create an empty structure.
     */
	EsynetRouterStatistic();
    /*!
     * \brief Create a new structure by copying from exist structure.
     * \param t  structure to copy.
     */
	EsynetRouterStatistic(const EsynetRouterStatistic & t);
    ///@}

    /** @name Functions to access variables  */
    ///@{
    /*!
     * \brief Access the counter of empty phase for BIST #m_bist_empty_counter.
     * \return the counter of empty phase for BIST #m_bist_empty_counter.
     */
    long bistEmptyCounter() const { return m_bist_empty_counter; }
    /*!
     * \brief Increase the counter of empty phase for BIST #m_bist_empty_counter
     * by 1.
     */
    void increaseBistEmptyCounter() { m_bist_empty_counter ++; }
    /*!
     * \brief Access the cycles of empty phase for BIST #m_bist_empty_counter.
     * \return the cycles of empty phase for BIST #m_bist_empty_counter.
     */
    double bistEmptyCycle() const { return m_bist_empty_cycle; }
    /*!
     * \brief Increase the cycle of empty phase for BIST #m_bist_empty_counter
     * by the cycle for one empty phase.
     * \param a  the cycle for one empty phase.
     */
    void increaseBistEmptyCycle( double a ) { m_bist_empty_cycle += a; }
    /*!
     * \brief Access the counter of recover phase for BIST
     * #m_bist_recover_counter.
     * \return the counter of recover phase for BIST #m_bist_recover_counter.
     */
    long bistRecoverCounter() const { return m_bist_recover_counter; }
    /*!
     * \brief Increase the counter of recover phase for BIST
     * #m_bist_recover_counter by 1.
     */
    void increaseBistRecoverCounter() { m_bist_recover_counter ++; }
    /*!
     * \brief Access the cycles of recover phase for BIST #m_bist_recover_cycle.
     * \return the cycles of recover phase for BIST #m_bist_recover_cycle.
     */
    double bistRecoverCycle() const { return m_bist_recover_cycle; }
    /*!
     * \brief Increase the cycle of recover phase for BIST #m_bist_recover_cycle
     * by the cycle for one recover phase.
     * \param a  the cycle for one recover phase.
     */
    void increaseBistRecoverCycle( double a ) { m_bist_recover_cycle += a; }
    ///@}

    /*!
     * \brief Add the value of fields from exist structure.
     * \param a  structure to add.
     */
	void add(const EsynetRouterStatistic& a);
};

/**
 * @ingroup statisticunit
 * @brief  Structure for statistics variable for a process element.
 */
class EsynetNIStatistic
{
protected:
    /** @name Variables for End-to-End packets
     *  @brief Statistic latency and throughput of one packet without ack and
     * retransmission */
    ///@{
    long m_inject_packet; /**< \brief counter of injected packets */
    long m_accept_packet; /**< \brief counter of accepted packets */
    double m_accept_start_time;	/**< \brief time of first accept packet */
    double m_accept_stop_time;	/**< \brief time of last accept packet */
    double m_total_delay; /**< \brief delay of accepted packet */
    double m_max_delay; /**< \brief max delay of accepted packet */
    long m_accept_mark_packet; /**< \brief counter of accepted packets with
        marked for latency measurement. */
    double m_total_mark_delay; /**< \brief delay of accepted packets with
        marked for latency measurement. */
    ///@}

    /** @name Variables for acknowledge and retransmission packets
     *  @brief Statistic latency and throughput of one packet considering ack
     * and retransmission */
    ///@{
    long m_inject_ack_packet; /**< \brief counter of injected ACK packets */
    long m_accept_ack_packet; /**< \brief counter of accepted ACK packets */
    long m_retransmission_packet; /**< \brief counter of retransmission
        packets */
    double m_total_e2e_ack_delay; /**< \brief delay of packets from injection
        to the receive of ACK packets */
    ///@}

    /** @name Variables for drop packets */
    ///@{
    long m_drop_flit; /**< \brief counter of dropped flit */
    long m_nondrop_packet; /**< \brief counter of non-dropped packet */
    long m_nondrop_ack_packet; /**< \brief counter of non-dropped ACK packet */
    ///@}

public:
    /** @name Constructor  */
    ///@{
    /*!
     * \brief Create an empty structure.
     */
	EsynetNIStatistic();
    /*!
     * \brief Create a new structure by copying from exist structure.
     * \param t  structure to copy.
     */
	EsynetNIStatistic(const EsynetNIStatistic & t);
    ///@}

    /** @name Functions to access variables  */
    ///@{
    /*!
     * \brief Access the counter of injected packets #m_inject_packet.
     * \return the counter of injected packets #m_inject_packet.
     */
    long injectPacket() const { return m_inject_packet; }
    /*!
     * \brief Increase the counter of injected packets #m_inject_packet by 1.
     */
    void incInjectPacket() { m_inject_packet ++; }
    /*!
     * \brief Access the counter of accepted packets #m_accept_packet.
     * \return the counter of accepted packets #m_accept_packet.
     */
    long acceptPacket() const { return m_accept_packet; }
    /*!
     * \brief Increase the counter of accepted packets #m_accept_packet by 1.
     */
    void incAcceptPacket() { m_accept_packet ++; }

    double acceptStartTime() const { return m_accept_start_time; }
    void setAcceptStartTime( double a ) { m_accept_start_time = a; }
    double acceptStopTime() const { return m_accept_stop_time; }
    void setAcceptStopTime( double a ) { m_accept_stop_time = a; }
    
	/*!
     * \brief Access the counter of accepted packets with mark for latency
     * measurement #m_accept_mark_packet.
     * \return the counter of accepted packets with mark for latency measurement
     * #m_accept_mark_packet.
     */
    long acceptMarkPacket() const { return m_accept_mark_packet; }
    /*!
     * \brief Increase the counter of accepted packets with mark for latency
     * measurement #m_accept_mark_packet by 1.
     */
    void incAcceptMarkPacket() { m_accept_mark_packet ++; }
    /*!
     * \brief Access the delay of accepted packets #m_total_delay.
     * \return the delay of accepted packets #m_total_delay.
     */
    double totalDelay() const { return m_total_delay; }
    /*!
     * \brief Increase the delay of accepted packets #m_total_delay by the delay
     * for one packets.
     * \param a  the delay for one packets.
     */
    void incTotalDelay( double a ) { m_total_delay += a; }
    /*!
     * \brief Access the maximum delay of accepted packets m_max_delay.
     * \return the maximum delay of accepted packets m_max_delay.
     */
    double maxDelay() const { return m_max_delay; }
    /*!
     * \brief Update the maximum delay of accepted packets m_max_delay by 
     * the delay for one packets.
     * \param a  the delay for one packets.
     */
    void updateMaxDelay( double a ) { if (a > m_max_delay) m_max_delay = a; }
    /*!
     * \brief Access the delay of accepted packets with mark for latency
     * measurement #m_total_mark_delay.
     * \return the delay of accepted packets with mark for latency measurement
     * #m_total_mark_delay.
     */
    double totalMarkDelay() const { return m_total_mark_delay; }
    /*!
     * \brief Increase the delay of accepted packets with mark for latency
     * measurement #m_total_mark_delay by the delay for one packets.
     * \param a  the delay for one packets.
     */
    void incTotalMarkDelay( double a ) { m_total_mark_delay += a; }
    /*!
     * \brief Access the counter of injected ACK packets #m_inject_ack_packet.
     * \return the counter of injected ACK packets #m_inject_ack_packet.
     */
    long injectAckPacket() const { return m_inject_ack_packet; }
    /*!
     * \brief Increase the counter of injected ACK packets #m_inject_ack_packet
     * by 1.
     */
    void incInjectAckPacket() { m_inject_ack_packet ++; }
    /*!
     * \brief Access the counter of accepted ACK packets #m_accept_ack_packet.
     * \return the counter of accepted ACK packets #m_accept_ack_packet.
     */
    long acceptAckPacket() const { return m_accept_ack_packet; }
    /*!
     * \brief Increase the counter of accepted ACK packets #m_accept_ack_packet
     * by 1.
     */
    void incAcceptAckPacket() { m_accept_ack_packet ++; }
    /*!
     * \brief Access the delay of accepted packets from injection to receiving
     * ACK #m_total_e2e_ack_delay.
     * \return the delay of accepted packets from injection to receiving ACK
     * #m_total_e2e_ack_delay.
     */
    double totalE2EAckDelay() const { return m_total_e2e_ack_delay; }
    /*!
     * \brief Increase the delay of accepted packets from injection to receiving
     * ACK #m_total_e2e_ack_delay by the delay for one packet.
     * \param a  the delay of one packet.
     */
    void incTotalE2EAckDelay( double a ) { m_total_e2e_ack_delay += a; }
    /*!
     * \brief Access the counter of dropped packet #m_drop_flit.
     * \return the counter of dropped packet #m_drop_flit.
     */
    long dropFlit() const { return m_drop_flit; }
    /*!
     * \brief Increase the counter of dropped packet #m_drop_flit by 1.
     */
    void incDropFlit() { m_drop_flit ++; }
    /*!
     * \brief Access the counter of non-dropped packet #m_nondrop_packet.
     * \return the counter of non-dropped packet #m_nondrop_packet.
     */
    long nonDropPacket() const { return m_nondrop_packet; }
    /*!
     * \brief Increase the counter of non-dropped packet #m_nondrop_packet by 1.
     */
    void incNonDropPacket() { m_nondrop_packet ++; }
    /*!
     * \brief Access the counter of non-dropped ACK packet 
#m_nondrop_ack_packet.
     * \return the counter of non-dropped ACK packet #m_nondrop_ack_packet.
     */
    long nonDropAckPacket() const { return m_nondrop_ack_packet; }
    /*!
     * \brief Increase the counter of non-dropped ACK packet
     * #m_nondrop_ack_packet by 1.
     */
    void incNonDropAckPacket() { m_nondrop_ack_packet ++; }
    /*!
     * \brief Access the counter of retransmission packet
     * #m_retransmission_packet.
     * \return the counter of retransmission packet
     * #m_retransmission_packet.
     */
    long retransmissionPacket() const { return m_retransmission_packet; }
    /*!
     * \brief Increase the counter of retransmission ACK packet
     * #m_retransmission_packet by 1.
     */
    void incRetransmissionPacket() { m_retransmission_packet ++; }
    ///@}

    /*!
     * \brief Add the value of fields from exist structure.
     * \param a  structure to add.
     */
	void add(const EsynetNIStatistic& a);
};

/**
 * @ingroup statisticunit
 * @brief  Structure for statistics variable for a foundation platform.
 */
class EsynetFoundationStatistic
{
protected:
    /** @name Variables for injected packets and measurement control */
    ///@{
    long m_injected_packet;     /**< \brief counter of injected packet */
    double m_inject_start_time; /**< \brief time of first injected packet */
    double m_inject_stop_time;  /**< \brief time of last injected packet */
    long m_throughput_measure_start_packet; /**< \brief counter of injected
        packet before throughput measurement start */
    long m_throughput_measure_stop_packet;  /**< \brief counter of injected
        packet before throughput measurement finished */
    double m_throughput_measure_start_time; /**< \brief time of throughput
        measurement start */
    double m_throughput_measure_stop_time;  /**< \brief time of throughput
        measurement finished */
    ///@}

public:
    /** @name Constructor  */
    ///@{
    /*!
     * \brief Create an empty structure.
     */
	EsynetFoundationStatistic();
    /*!
     * \brief Create a new structure by copying from exist structure.
     * \param t  structure to copy.
     */
	EsynetFoundationStatistic(const EsynetFoundationStatistic & t);
    ///@}

    /** @name Functions to access variables  */
    ///@{
    /*!
     * \brief Access the counter of injected packets #m_injected_packet.
     * \return the counter of injected packets #m_injected_packet.
     */
    long injectPacket() const { return m_injected_packet; }
    /*!
     * \brief Increase the counter of injected packets #m_injected_packet by 1.
     */
    void incInjectPacket() { m_injected_packet ++; }
    /*!
     * \brief Access the time of first injected packets #m_inject_start_time.
     * \return the time of first injected packets #m_inject_start_time.
     */
    double injectStartTime() const { return m_inject_start_time; }
    /*!
     * \brief Set the time of first injected packets #m_inject_start_time.
     * \param a  the time of first injected packets
     */
    void setInjectStartTime( double a ) { m_inject_start_time = a; }
    /*!
     * \brief Access the time of last injected packets #m_inject_stop_time.
     * \return the time of last injected packets #m_inject_stop_time.
     */
    double injectStopTime() const { return m_inject_stop_time; }
    /*!
     * \brief Set the time of last injected packets #m_inject_stop_time.
     * \param a  the time of last injected packets
     */
    void setInjectStopTime( double a ) { m_inject_stop_time = a; }
    
    /*!
     * \brief Access the counter of packets before the start of throughput
     * measurement #m_throughput_measure_start_packet.
     * \return the counter of packets before the start of throughput
     * measurement #m_throughput_measure_start_packet.
     */
    long throughputMeasureStartPacket() const
        { return m_throughput_measure_start_packet; }
    /*!
     * \brief Set the counter of packets before the start of throughput
     * measurement #m_throughput_measure_start_packet.
     * \param a  the counter of packets before the start of throughput
     * measurement.
     */
    void setThroughputMeasureStartPacket( long a )
        { m_throughput_measure_start_packet = a; }
    /*!
     * \brief Access the counter of packets before the end of throughput
     * measurement #m_throughput_measure_stop_packet.
     * \return the counter of packets before the end of throughput
     * measurement #m_throughput_measure_stop_packet.
     */
    long throughputMeasureStopPacket() const
        { return m_throughput_measure_stop_packet; }
    /*!
     * \brief Set the counter of packets before the end of throughput
     * measurement #m_throughput_measure_stop_packet.
     * \param a  the counter of packets before the end of throughput
     * measurement.
     */
    void setThroughputMeasureStopPacket( long a )
        { m_throughput_measure_stop_packet = a; }
    /*!
     * \brief Access the time of the start of throughput measurement
     * #m_throughput_measure_start_time.
     * \return the the time of the start of throughput measurement
     * #m_throughput_measure_start_time.
     */
    double throughputMeasureStartTime() const
        { return m_throughput_measure_start_time; }
    /*!
     * \brief Set the time of the start of throughput measurement
     * #m_throughput_measure_start_time.
     * \return the the time of the start of throughput measurement.
     */
    void setThroughputMeasureStartTime( double a )
        { m_throughput_measure_start_time = a; }
    /*!
     * \brief Access the time of the stop of throughput measurement
     * #m_throughput_measure_stop_time.
     * \return the the time of the stop of throughput measurement
     * #m_throughput_measure_stop_time.
     */
    double throughputMeasureStopTime() const
        { return m_throughput_measure_stop_time; }
    /*!
     * \brief Set the time of the stop of throughput measurement
     * #m_throughput_measure_stop_time.
     * \return the the time of the stop of throughput measurement.
     */
    void setThroughputMeasureStopTime( double a )
        { m_throughput_measure_stop_time = a; }
};

#endif
