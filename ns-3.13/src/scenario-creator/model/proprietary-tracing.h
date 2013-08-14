/* -*-  Mode: C++; c-file-style: "gnu"; indent-tabs-mode:nil; -*- */
/*
 * Copyright (c) 2011 Universidad de Cantabria
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation;
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Author: David Gómez Fernández <dgomez@tlmat.unican.es>
 *         Ramón Agüero Calvo <ramon@tlmat.unican.es>
 */

#ifndef PROPRIETARY_TRACING_H_
#define PROPRIETARY_TRACING_H_

#include "ns3/object.h"
#include "ns3/random-variable.h"
#include "ns3/traced-value.h"
#include "ns3/traced-callback.h"
#include "ns3/nstime.h"
#include "ns3/simulator.h"
#include "ns3/packet.h"

#include "ns3/core-module.h"
#include "ns3/wifi-module.h"

//Needed to parse the packet content (BurstyErrorModel::ParsePacket)
#include "ns3/wifi-mac-header.h"
#include "ns3/llc-snap-header.h"
#include "ns3/ipv4-header.h"
#include "ns3/tcp-header.h"
#include "ns3/udp-header.h"

#include "ns3/bear-error-model.h"
//#include "ns3/configure-scenario.h"

#include <math.h>

namespace ns3{

enum TransportProtocol_t{
	TCP_PROTOCOL,
	UDP_PROTOCOL,
	MPTCP_PROTOCOL,
	NSC_TCP_PROTOCOL
};

class ProprietaryTracing: public Object
{
public:
	/**
	 * Default constructor
	 */
	ProprietaryTracing();


	/**
	 * Default destructor
	 */
	~ProprietaryTracing();

	/**
	 * Set the name of the file which will be used to store the results of the simulations
	 * \param fileName Name of the trace file
	 */
	void OpenTraceFile (string fileName);
	/**
	 * Set the name of the file which will be used to store the results of the simulations (at the Network Coding layer)
	 * \param fileName Name of the trace file
	 */
	void OpenNetworkCodingTraceFile (string fileName);
	/**
	 * Set the name of the file which will be used to store the results of the simulations
	 * \param fileName Name of the trace file. In case of Multipath
	 */

	void OpenMpTcpTraceFile (string fileName);
	/**
		 * Set the name of the file which will be used to store the results of the simulations
		 * \param fileName Name of the trace file. In case of Multipath
		 */
	void OpenMpTcpWindowTraceFile(string mpFileName);
	/**
		 * Set the name of the file which will be used to store the results of the simulations
		 * \param fileName Name of the trace file. In case of Multipath
		 */
	void OpenTransportShortTraceFile (string scenario, uint32_t run,string algorithm, uint8_t congestionControl, string mpFileName);
	/**
	 * Close the trace file
	 */
	void CloseTraceFile ();
	/**
	* Close the trace file. In case of Multipath
	*/
	void CloseMpTcpTraceFile ();
	/**
	* Close the trace file. In case of Multipath
	*/
	void CloseMpTcpWindowTraceFile ();
	/**
	* Close the trace file. In case of Multipath
	*/
	void CloseTransportShortTraceFile();
	/**
	 * \return The transport protocol (EnumValue  TransportProtocol_t)
	 */
	inline TransportProtocol_t GetTransportProtocol() {return m_transportProtocol;}
	/**
	 * \param transportProtocol The transport protocol (EnumValue  TransportProtocol_t)
	 */
	inline void SetTransportProtocol (TransportProtocol_t transportProtocol) {m_transportProtocol = transportProtocol;}

	//Statistics
	inline u_int32_t GetCorrectPackets () {return m_totalDataCorrectPackets;}
	inline u_int32_t GetCorruptedPackets () {return m_totalDataCorruptedPackets;}
	inline u_int32_t GetTotalPackets () {return m_totalDataPackets;}

	//Getters/Setters
	bool GetWriteToFile () {return m_writeToFile;}
	void SetWriteToFile (bool flag) {m_writeToFile = flag;}

	inline bool GetNetworkCodingWriteToFile () {return m_networkCodingWriteToFile;}
	inline void SetNetworkCodingWriteToFile (bool flag) {m_networkCodingWriteToFile = flag;}

	/**
	 * \brief Upper Layer parser (Raw content overheard from the channel)
	 * \param packet The received packet
	 * \return Structure which contains the information relative to the data extracted from the different headers
	 */
	packetInfo_t ParsePacket (Ptr<const Packet> packet);
	/**
	 * \brief HMM trace hook (Used for analyzing the behavior of the wireless channel model)
	 * \param packet The overheard packet
	 * \param timestamp The instant in which the packet was caught by the YansWifiPhy:EndReceive method
	 * \param error Bool that defines whether the packet is corrupted or not
	 * \param state State in which the chain is located at the moment of the packet reception
	 */
//	void HmmRxTrace (Ptr<Packet> packet, Time timestamp, bool error, u_int16_t state);
	/**
	 * \brief BEAR trace hook (Used for analyzing the behavior of the wireless channel model)
	 * \param packet The overheard packet
	 * \param nodeId ID of the node which has just overheard the packet
	 * \param error Bool that defines whether the packet is corrupted or not
	 * \param propagation SNR of the received packet (direct result obtained from the PropagationLossModel implemented)
	 * \param slowFading Contribution (in dB) of the slow fading component over the wireless channel (output of the auto-regressive filter)
	 * \param fastFading Contribution (in dB) of the fast fading component over the wireless channel (raw random value)
	 */
//	void BearRxTrace (Ptr<Packet> packet, int nodeId, bool error, double propagation, double slowFading, double fastFading);
	/**
	 * Default trace callback (invoked at YansWifiPhy::EndReceive) for those frames which are corrupted
	 * \param packet
	 * \param error
	 * \param snr
	 * \param nodeId
	 */
	void DefaultPhyRxTrace (Ptr<Packet> packet, bool error, double snr, int nodeId);
	 /**
	 * Default trace in case of multipath callback (invoked at MpTcpL4Protocol::Reveive) for those frames which are corrupted
	 * \param packet
	 * \param Ipv4Header
	 */

	void DefaultMpTcpRxTrace (Ptr<Packet> packet, Ipv4Header);

	void DefaultTransportShortRxTrace (Ptr<Packet> packet, Ipv4Header ipHeader);

	 /**
		 * Default trace in case of multipath callback (invoked at MpTcpSocketBase::OpenWindow) for
		 * \param Window
		 */


	void DefaultWindowTrace (uint8_t subFlowIdx, double window, Ipv4Address ipAddress, double rtt);

	/**
	 * Receive a packet from the SimpleNetworkCoding layer
	 * \param packet The packet itself
	 * \param tx 0 for a reception, 1 for a transmission at the TX nodes; 2 for a transmission (coded or not) at the coding router
	 * \param nodeId ID of the node which sent the signal to this member function
	 * \param source Packet's IP source address
	 * \param destination Packet's IP destination address
	 * \param codedPackets The total number of coded packets
	 * \param embeddedPackets
	 * \param decodeSuccess True if the reception of a coded packet brang about a decoding success; false otherwise
	 */
	void NetworkCodingTrace (Ptr<Packet> packet, u_int8_t tx, u_int32_t nodeId, Ipv4Address source, Ipv4Address destination, u_int8_t codedPackets, u_int8_t embeddedAcks, bool decodeSuccess = false);

	/**
	 * \brief Conversion from Mac48Address format to
	 * \param mac Mac address in Mac48Address format
	 * \return The MAC address in string format
	 */
	std::string ConvertMacToString(Mac48Address mac);
	/**
	 * Print the packet information into the trace file
	 * \param packetInfo The struct that contains the information relative to the packet
	 * \param nodeId The receiver node's ID
	 * \param error Flag that defines whether the error is correct or not
	 * \param lastField Variable parameter, which depends of the type of channel simulated (i.e. HMM state, SNR, etc.)
	 */
	void PrintPacketData (packetInfo_t packetInfo, int nodeId, bool error, double lastField);
	/**
     * Print the packet information into the trace file
	 * \param Packet receive
     * \param Ipv4Header
	 */
	void PrintMpTcpPacketData (Ptr <Packet> packet, Ipv4Header ipHeader);

	/**
	 * \brief Print line to the corresponding file
	 * \param line String to record into the file
	 */
	void TraceToFile (string line);
	/**
     * \brief Print line to the corresponding file
	 * \param line String to record into the file. In case of Multipath
	 */
	void TraceToFileTransport (string line);


private:
	bool m_writeToFile;
	bool m_networkCodingWriteToFile;
	bool m_startTransmision;
	bool m_finishTransmision;

	u_int32_t m_totalDataPackets;
	u_int32_t m_totalDataCorrectPackets;
	u_int32_t m_totalDataCorruptedPackets;

	string m_scenario;
	string m_algorithm;
	string m_congestionControl;
	u_int32_t m_run;

	u_int32_t m_lengthSubflow1;
	u_int32_t m_lengthSubflow2;
	u_int32_t m_lengthTotal;
	u_int16_t m_controlCongestion;

	double m_thput1;
	double m_thput2;
	double m_thputTotal;
	double m_startTime;
	double m_lastTime;

	TransportProtocol_t m_transportProtocol;

	fstream m_file;					//File used to store the trace
	fstream m_transportFile;            //File used to store the trace in Multipath
	fstream m_transportShortFile;            //File used to store the trace in Multipath
	fstream m_mpTcpWindowFile;
	fstream m_networkCodingFile;	//File to store the trace (SimpleNetworkCoding level)
};

}  //End namespace ns3

#endif /* PROPRIETARY_TRACING_H_ */
