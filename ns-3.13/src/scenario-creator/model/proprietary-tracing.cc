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

#include "proprietary-tracing.h"
#include "ns3/mp-tcp-header.h"

using namespace ns3;
using namespace std;

NS_LOG_COMPONENT_DEFINE ("ProprietaryTracing");
NS_OBJECT_ENSURE_REGISTERED (ProprietaryTracing);

ProprietaryTracing::ProprietaryTracing()
{
	NS_LOG_FUNCTION (this);
	m_totalDataPackets = 0;
	m_totalDataCorrectPackets = 0;
	m_totalDataCorruptedPackets = 0;
	m_startTransmision = false;
	m_finishTransmision = false;
}

ProprietaryTracing::~ProprietaryTracing()
{
	NS_LOG_FUNCTION (this);
}

void ProprietaryTracing::OpenTraceFile(string fileName)
{
	char buf[FILENAME_MAX];
	string path = string (getcwd(buf, FILENAME_MAX)) + "/traces/" + fileName;
	NS_LOG_FUNCTION (this << path);
	m_file.open(path.c_str(), fstream::out);

	NS_LOG_UNCOND ("Open trace file: " << fileName);

	sprintf (buf,  "%16s %8s %5s %20s %20s %6s %6s %16s %16s %6s %8s %8s %12s %12s %8s %13s",
			"Time", "Node_ID", "CRC", "MAC_SRC", "MAC_DST", "RETX", "SN", "IP_SRC", "IP_DST", "PROT", "SRC_PORT", "DST_PORT", "TCP_SN", "TCP_Ack", "Length", "SNR/State");

	TraceToFile(buf);
}

void ProprietaryTracing::OpenMpTcpTraceFile(string mpFileName)
{
	NS_LOG_FUNCTION(this);
	char buf[FILENAME_MAX];
	string path = string (getcwd(buf, FILENAME_MAX)) + "/traces/" + mpFileName;
	NS_LOG_FUNCTION (this << path);
	m_transportFile.open(path.c_str(), fstream::out);

	sprintf (buf,  "%16s %8s %16s %16s %8s %8s %16s %8s %16s %16s %16s",
			"Time", "Sflow", "IP_SRC", "IP_DST", "SRC_PORT", "DST_PORT", "Length", "Flags" , "Seq_Number", "Ack_Number", "Options");

	TraceToFileTransport(buf);
}

void ProprietaryTracing::OpenTransportShortTraceFile(string scenario, uint32_t run,string algorithm, uint8_t congestionControl, string mpFileName)
{
	char buf[FILENAME_MAX];
	string path = string (getcwd(buf, FILENAME_MAX)) + "/traces/" + mpFileName;
	NS_LOG_FUNCTION (this << path);

	NS_LOG_UNCOND("Escenario prop: " << scenario);
	m_scenario = scenario;
	m_run = run;
	m_algorithm = algorithm;

	m_transportShortFile.open (path.c_str(), fstream::in | fstream::out | fstream::ate);

	if (m_transportProtocol == MPTCP_PROTOCOL)
	{

		if (m_transportShortFile.fail())
		{
			m_transportShortFile.close ();
			NS_LOG_DEBUG ("ProprietaryTracing::OpenTraceFile --> File not found");

			m_transportShortFile.open (path.c_str (), fstream::out | fstream::ate);
			char line[255];
			sprintf (line,  "%15s %10s %15s %10s %18s %15s %15s %15s",
					"Escenario", "RUN", "TOTAL_BYTES" ,"ALGORITMO", "CNTRL_CONGESTION", "Thput_1", "Thput_2", "Thput_Total");

			m_transportShortFile << line << endl;
		}

		switch (congestionControl)
		{
		case 0:
			m_congestionControl = "UNCOUPLED_TCPs";
			break;
		case 1:
			m_congestionControl = "LINKED_INCREASE";
			break;
		case 2:
			m_congestionControl = "RTT_COMPENSATOR";
			break;
		case 3:
			m_congestionControl = "FULLY_COUPLED";
			break;
		default:
			m_congestionControl = "UNKNOWN";
		}
	}
	else if (m_transportProtocol == TCP_PROTOCOL)
	{

		if (m_transportShortFile.fail())
		{
			m_transportShortFile.close ();
			NS_LOG_DEBUG ("ProprietaryTracing::OpenTraceFile --> File not found");

			m_transportShortFile.open (path.c_str (), fstream::out | fstream::ate);
			char line[255];
			sprintf (line,  "%15s %10s %15s %15s",
					"Escenario", "RUN", "TOTAL_BYTES", "Thput_Total");

			m_transportShortFile << line << endl;
		}
	}


}

void ProprietaryTracing::OpenMpTcpWindowTraceFile(string mpFileName)
{
	NS_LOG_FUNCTION(this);
	char buf[FILENAME_MAX];
	string path = string (getcwd(buf, FILENAME_MAX)) + "/traces/" + mpFileName;
	NS_LOG_FUNCTION (this << path);
	m_mpTcpWindowFile.open(path.c_str(), fstream::out);

	sprintf (buf,  "%16s %8s %16s %16s %16s",
			"Time", "Sflow", "IP", "Window", "RTT");

	NS_ASSERT_MSG (m_mpTcpWindowFile.is_open(), "No trace file to write to");
	m_mpTcpWindowFile << buf << endl;
}


void ProprietaryTracing::CloseTraceFile()
{
	NS_LOG_FUNCTION(this);
	if (m_file.is_open())
		m_file.close();
	else
		NS_LOG_ERROR("Open file not found");
}

void ProprietaryTracing::CloseMpTcpTraceFile()
{
	NS_LOG_FUNCTION(this);
	if (m_transportFile.is_open())
		m_transportFile.close();
	else
		NS_LOG_ERROR("Open file not found");
}

void ProprietaryTracing::CloseMpTcpWindowTraceFile()
{
	NS_LOG_FUNCTION(this);
	if (m_mpTcpWindowFile.is_open())
		m_mpTcpWindowFile.close();
	else
		NS_LOG_ERROR("Open file not found");
}

void ProprietaryTracing::CloseTransportShortTraceFile()
{
	NS_LOG_FUNCTION(this);

	char line [255];
	uint32_t totalBytes;

	if (m_transportProtocol == MPTCP_PROTOCOL)
	{
		m_thput1 = m_lengthSubflow1 * 8 / (m_lastTime- m_startTime) / 1e6;
		m_thput2 = m_lengthSubflow2 * 8 / (m_lastTime - m_startTime) / 1e6;
		m_thputTotal = (m_lengthSubflow1 + m_lengthSubflow2) * 8 / (m_lastTime - m_startTime) / 1e6;
		totalBytes = m_lengthSubflow1 + m_lengthSubflow2;

		const char * algorithm = m_algorithm.c_str();
		const char * congestionControl = m_congestionControl.c_str();
		const char * scenario = m_scenario.c_str();

		sprintf (line, "%15s %10d %15d %10s %18s %15f %15f %15f",
						scenario, m_run, totalBytes, algorithm ,congestionControl, m_thput1, m_thput2, m_thputTotal);

	}
	else if (m_transportProtocol == TCP_PROTOCOL)
	{
		m_thputTotal = m_lengthSubflow1 * 8 / (m_lastTime- m_startTime) / 1e6;
		totalBytes = m_lengthSubflow1;

		const char * scenario = m_scenario.c_str();

		sprintf (line, "%15s %10d %15d %15f",
						scenario, m_run, totalBytes, m_thputTotal);
	}

	if (m_transportShortFile.is_open())
	{
		m_transportShortFile << line << endl;
		m_transportShortFile.close();
	}
	else
		NS_LOG_ERROR("Open file not found");
}

packetInfo_t ProprietaryTracing::ParsePacket (Ptr<const Packet> packet)
{
//	NS_LOG_FUNCTION(this << packet);

	packetInfo_t packetInfo;
	Ptr<Packet> pktCopy = packet->Copy();

	pktCopy->RemoveHeader(packetInfo.wifiHdr);

	if (packetInfo.wifiHdr.IsData())
	{
		pktCopy->RemoveHeader(packetInfo.llcHdr);
		switch (packetInfo.llcHdr.GetType())
		{
		case 0x0806:			//ARP
			packetInfo.type = ARP_PACKET;
			break;
		case 0x0800:			//IP packet
			pktCopy->RemoveHeader(packetInfo.ipv4Hdr);
			switch (packetInfo.ipv4Hdr.GetProtocol())
			{
			case 6:				//TCP
				pktCopy->RemoveHeader(packetInfo.tcpHdr);
				packetInfo.type = TCP_DATA;

				break;
			case 17:			//UDP
				pktCopy->RemoveHeader(packetInfo.udpHdr);
				packetInfo.type = UDP_DATA;
				break;
			case 99:			//Network Coding Proprietary Tracing
				packetInfo.type = NETWORK_CODING_DATA;
				break;
			default:
				NS_LOG_ERROR ("Protocol not implemented yet (IP) --> " << packetInfo.llcHdr.GetType());
				break;
			}
			break;
			default:
				NS_LOG_ERROR ("Protocol not implemented yet (LLC) --> " << packetInfo.llcHdr.GetType());
				break;
		}
	}

	else if (packetInfo.wifiHdr.IsAck())
	{
		packetInfo.type = IEEE_80211_ACK;
	}
	else			// 802.11 Control/Management frame
	{
		packetInfo.type = IEEE_80211_NODATA;
	}

	packetInfo.payloadLength = pktCopy->GetSize() - 4;								//Last four bytes are used for tagging

	return packetInfo;
}

void ProprietaryTracing::DefaultPhyRxTrace (Ptr<Packet> packet, bool error, double snr, int nodeId)
{
	NS_LOG_FUNCTION (this);
	//Update statistics
	if (packet->GetSize() > 500)
	{
		if (error == 1)
		{
			m_totalDataCorrectPackets ++;
			m_totalDataPackets ++;
		}
		else
		{
			m_totalDataCorruptedPackets ++;
			m_totalDataPackets ++;
		}
	}

//	NS_LOG_UNCOND("ProprietaryTracing --> SNR " <<  snr);

	if (m_writeToFile)
		PrintPacketData(ParsePacket(packet), nodeId, error, snr);
}

void ProprietaryTracing::DefaultMpTcpRxTrace (Ptr<Packet> packet, Ipv4Header ipHeader)
{
	NS_LOG_FUNCTION (this);

		PrintMpTcpPacketData(packet, ipHeader);

}

void ProprietaryTracing::DefaultTransportShortRxTrace (Ptr<Packet> packet, Ipv4Header ipHeader)
{
	NS_LOG_FUNCTION (this);

	u_int8_t source [4], destination [4];
	if ( m_transportProtocol == MPTCP_PROTOCOL )
	{
		MpTcpHeader mpHeader;
		Ptr <Packet> nPacket;
		packet->PeekHeader (mpHeader);

		//Get the IP Addresses printable
		ipHeader.GetSource().Serialize(source);						//Get a string from Ipv4Address
		ipHeader.GetDestination().Serialize(destination);

		uint8_t sFlowId=source[2];                   //Get SubflowID

		if (m_startTransmision == false && packet->GetSize()-mpHeader.GetSerializedSize() > 0)
		{
			m_lengthSubflow1 = 0;
			m_lengthSubflow2 = 0;
			m_startTransmision = true;
			m_startTime = Simulator::Now().GetSeconds();
		}

		if (sFlowId == 1)
			m_lengthSubflow1 += packet->GetSize()-mpHeader.GetSerializedSize();
		else if (sFlowId == 2)
			m_lengthSubflow2 += packet->GetSize()-mpHeader.GetSerializedSize();

		uint8_t flags = mpHeader.GetFlags();
		if (flags == 11 || flags ==1)
			m_finishTransmision = true;
		if (m_finishTransmision == false)         //In MPTCP the finish packet has not data
			m_lastTime = Simulator::Now().GetSeconds();

	}
	else if (m_transportProtocol == TCP_PROTOCOL)
	{
		TcpHeader tcpHeader;
		Ptr <Packet> nPacket;
		packet->PeekHeader (tcpHeader);

		//Get the IP Addresses printable
		ipHeader.GetSource().Serialize(source);						//Get a string from Ipv4Address
		ipHeader.GetDestination().Serialize(destination);

		if (m_startTransmision == false && packet->GetSize()-tcpHeader.GetSerializedSize() > 0)
		{
			m_lengthSubflow1 = 0;
			m_startTransmision = true;
			m_startTime = Simulator::Now().GetSeconds();
		}

		m_lengthSubflow1 += packet->GetSize()-tcpHeader.GetSerializedSize();

		uint8_t flags = tcpHeader.GetFlags();
		if (m_finishTransmision == false)          //In TCP the finish packet has data
			m_lastTime = Simulator::Now().GetSeconds();
		if (flags == 11 || flags ==1)
			m_finishTransmision = true;
	}


}

void ProprietaryTracing::DefaultWindowTrace (uint8_t subFlowIdx, double window, Ipv4Address ipAddress, double rtt)
{
	NS_LOG_FUNCTION(this);

	char line [255];
	u_int8_t source [4];
	char ip [32];

    //Get the IP Addresses printable
	ipAddress.Serialize(source);						//Get a string from Ipv4Address

	sprintf(ip, "%d.%d.%d.%d", source[0], source[1], source[2], source[3]);

	sprintf (line, "%16f %8d %16s %16f %16f",
			Simulator::Now().GetSeconds(), subFlowIdx, ip, window, rtt);

	NS_ASSERT_MSG (m_mpTcpWindowFile.is_open(), "No trace file to write to");
		m_mpTcpWindowFile << line << endl;
}

//void ProprietaryTracing::BearRxTrace (Ptr<Packet> packet, int nodeId, bool error, double propagation, double slowFading, double fastFading)
//{
//	NS_LOG_FUNCTION (this);
//	//Update statistics
//	if (error == 0)
//	{
//		m_totalDataCorrectPackets ++;
//		m_totalDataPackets ++;
//	}
//	else
//	{
//		m_totalDataCorruptedPackets ++;
//		m_totalDataPackets ++;
//	}
//
//	PrintPacketData (ParsePacket(packet), 0, error, propagation + slowFading + fastFading);
//}

//void ProprietaryTracing::HmmRxTrace (Ptr<Packet> packet, Time timestamp, bool error, u_int16_t state)
//{
//	NS_LOG_FUNCTION(this);
//	//Update statistics
//	if (error == 0)
//	{
//		m_totalDataCorrectPackets ++;
//		m_totalDataPackets ++;
//	}
//	else
//	{
//		m_totalDataCorruptedPackets ++;
//		m_totalDataPackets ++;
//	}
//	PrintPacketData (ParsePacket(packet), 0, !error, state);
//}

void ProprietaryTracing::PrintPacketData (packetInfo_t packetInfo, int nodeId, bool error, double lastField)
{
	NS_LOG_FUNCTION(this);

	char line [255];
	u_int8_t source [4], destination [4];
	char sourceChar [32], destChar [32];

	switch (packetInfo.type)
	{
	case TCP_DATA:
	case UDP_DATA:
		//Get the IP Addresses printable
		packetInfo.ipv4Hdr.GetSource().Serialize(source);						//Get a string from Ipv4Address
		packetInfo.ipv4Hdr.GetDestination().Serialize(destination);
		sprintf(sourceChar, "%d.%d.%d.%d", source[0], source[1], source[2], source[3]);
		sprintf(destChar, "%d.%d.%d.%d", destination[0], destination[1], destination[2], destination[3]);

		sprintf (line, "%16f %8d %5d %20s %20s %6d %6d %16s %16s %6s %8d %8d %12d %12d %8d %13.3f",
				Simulator::Now().GetSeconds(), nodeId, error, ConvertMacToString(packetInfo.wifiHdr.GetAddr2()).c_str(), ConvertMacToString(packetInfo.wifiHdr.GetAddr1()).c_str(),
				packetInfo.wifiHdr.IsRetry(), packetInfo.wifiHdr.GetSequenceNumber(),
				sourceChar, destChar, packetInfo.type ? "UDP" : "TCP", packetInfo.udpHdr.GetSourcePort(), packetInfo.udpHdr.GetDestinationPort(),
				packetInfo.type ?  0 : packetInfo.tcpHdr.GetSequenceNumber().GetValue() ,packetInfo.type ?  0 : packetInfo.tcpHdr.GetAckNumber().GetValue(), packetInfo.payloadLength, lastField);
		TraceToFile(line);
		break;
	case ARP_PACKET:

		break;
	case IEEE_80211_ACK:

		break;

	case NETWORK_CODING_DATA:
		//Get the IP Addresses printable
		packetInfo.ipv4Hdr.GetSource().Serialize(source);						//Get a string from Ipv4Address
		packetInfo.ipv4Hdr.GetDestination().Serialize(destination);
		sprintf(sourceChar, "%d.%d.%d.%d", source[0], source[1], source[2], source[3]);
		sprintf(destChar, "%d.%d.%d.%d", destination[0], destination[1], destination[2], destination[3]);

		sprintf (line, "%16f %8d %5d %20s %20s %6d %6d %16s %16s %6s %8d %8d %12d %12d %8d %13.3f",
				Simulator::Now().GetSeconds(), nodeId, error, ConvertMacToString(packetInfo.wifiHdr.GetAddr2()).c_str(), ConvertMacToString(packetInfo.wifiHdr.GetAddr1()).c_str(),
				packetInfo.wifiHdr.IsRetry(), packetInfo.wifiHdr.GetSequenceNumber(),
				sourceChar, destChar, "NC", packetInfo.tcpHdr.GetSourcePort(), packetInfo.tcpHdr.GetDestinationPort(),
						packetInfo.type ?  0 : packetInfo.tcpHdr.GetSequenceNumber().GetValue() ,packetInfo.type ?  0 : packetInfo.tcpHdr.GetAckNumber().GetValue(), packetInfo.payloadLength, lastField);
		TraceToFile(line);
		break;

	default:
		NS_LOG_ERROR("Unknown packet type --> " << packetInfo.type);
		break;
	}

}

void ProprietaryTracing::PrintMpTcpPacketData (Ptr<Packet> packet, Ipv4Header ipHeader)
{
	NS_LOG_FUNCTION(this);

	char line [255];
	u_int8_t source [4], destination [4];
	char sourceChar [32], destChar [32];
	char option [85];
	MpTcpHeader mpHeader;
	Ptr <Packet> nPacket;
	packet->PeekHeader (mpHeader);
	uint16_t srcPort = mpHeader.GetSourcePort ();           //Get Source and Destination Port
	uint16_t dstPort = mpHeader.GetDestinationPort ();

    //Get the IP Addresses printable
	ipHeader.GetSource().Serialize(source);						//Get a string from Ipv4Address
	ipHeader.GetDestination().Serialize(destination);

	uint8_t flags=mpHeader.GetFlags();
	uint32_t sequenceNumber=mpHeader.GetSequenceNumber().GetValue();
	uint32_t ackNumber=mpHeader.GetAckNumber().GetValue();
	uint8_t SflowId=source[2];                   //Get SubflowID
	uint32_t length=packet->GetSize()-mpHeader.GetSerializedSize();

	vector< TcpOptions* > options=mpHeader.GetOptions();
	uint32_t j=options.size();
	if (j==1)
			sprintf(option,"%d", options[0]->optName);
	else if (j==2)
		sprintf(option,"%d,%d", options[0]->optName,options[1]->optName);
	else if (j==3)
			sprintf(option,"%d,%d,%d", options[0]->optName,options[1]->optName,options[2]->optName);
	else if (j==4)
			sprintf(option,"%d,%d,%d,%d", options[0]->optName,options[1]->optName,options[2]->optName,options[3]->optName);
	else if (j==5)
			sprintf(option,"%d,%d,%d,%d,%d", options[0]->optName,options[1]->optName,options[2]->optName,options[3]->optName,options[4]->optName);
	else if (j==6)
		    sprintf(option,"%d,%d,%d,%d,%d,%d", options[0]->optName,options[1]->optName,options[2]->optName,options[3]->optName,options[4]->optName,options[5]->optName);
	else if (j==7)
			sprintf(option,"%d,%d,%d,%d,%d,%d,%d", options[0]->optName,options[1]->optName,options[2]->optName,options[3]->optName,options[4]->optName,options[5]->optName,options[6]->optName);
	else if (j==8)
			sprintf(option,"%d,%d,%d,%d,%d,%d,%d,%d", options[0]->optName,options[1]->optName,options[2]->optName,options[3]->optName,options[4]->optName,options[5]->optName,options[6]->optName,options[7]->optName);
	else
            sprintf(option, "%d", 0);

	sprintf(sourceChar, "%d.%d.%d.%d", source[0], source[1], source[2], source[3]);
	sprintf(destChar, "%d.%d.%d.%d", destination[0], destination[1], destination[2], destination[3]);
	sprintf (line, "%16f %8d %16s %16s %8d %8d %16d %8X %16d %16d %16s",
			Simulator::Now().GetSeconds(), SflowId, sourceChar, destChar, srcPort, dstPort,
			length, flags, sequenceNumber, ackNumber, option);

	TraceToFileTransport(line);
}



std::string ProprietaryTracing::ConvertMacToString(Mac48Address mac)
{
//	NS_LOG_FUNCTION(mac);
	u_int8_t temp[6];
	char result[24];
	mac.CopyTo(temp);

	sprintf(result,"%02X:%02X:%02X:%02X:%02X:%02X", temp[0], temp[1], temp[2], temp[3], temp[4], temp[5] );

	return std::string(result);
}

void ProprietaryTracing::TraceToFile(string line)
{
	NS_ASSERT_MSG (m_file.is_open(), "No trace file to write to");
	m_file << line << endl;
}

void ProprietaryTracing::TraceToFileTransport(string line)
{
	NS_ASSERT_MSG (m_transportFile.is_open(), "No trace file to write to");
	m_transportFile << line << endl;
}
