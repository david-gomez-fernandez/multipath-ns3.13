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
 *		   Ramón Agüero Calvo <ramon@tlmat.unican.es>
 */

#include "ns3/core-module.h"
#include "ns3/mobility-module.h"
#include "ns3/applications-module.h"

#include "ns3/wifi-helper.h"
#include "ns3/yans-wifi-helper.h"
#include "ns3/inet-socket-address.h"
#include "ns3/internet-stack-helper.h"
#include "ns3/ipv4-address-helper.h"
#include "ns3/wifi-module.h"
#include "ns3/propagation-loss-model.h"

#include "ns3/aodv-routing-protocol.h"

#include "ns3/bear-propagation-loss-model.h"
#include "ns3/hidden-markov-error-model.h"

#include "ns3/socket.h"
#include <ns3/node-list.h>

#include "ns3/wifi-mac-header.h"
#include "ns3/llc-snap-header.h"
#include "ns3/ipv4-header.h"
#include "ns3/tcp-header.h"
#include "ns3/udp-header.h"

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdio.h>

#include "scratch-logging.h"
//#include "experiment.h"

NS_LOG_COMPONENT_DEFINE("TcpErrorModelTest");

using namespace std;
using namespace ns3;

std::string ConvertMacToString(Mac48Address mac);
std::string getcwd();

enum ChannelMode_t {
	HIDDEN_MARKOV_ERROR_MODEL,
	BURSTY_ERROR_AUTO_REGRESSIVE_MODEL,
	NIST_ERROR_RATE_MODEL
};

enum TransportProtocol_t {
	TCP_PROTOCOL,
	UDP_PROTOCOL
};

class Experiment {
public:
	Experiment ();
	~Experiment ();

	u_int32_t GetPacketCounter() const;
	void SetPacketCounter(u_int32_t packetCounter);
	u_int32_t GetPktsCorrect() const;
	void SetPktsCorrect(u_int32_t pktsCorrect);
	u_int32_t GetPktsReceived() const;
	void SetPktsReceived(u_int32_t pktsReceived);
	u_int32_t GetPktsTransmitted () const;

	void SetTransportProtocol (TransportProtocol_t protocol);
	TransportProtocol_t GetTransportProtocol () const;

	Ptr<Socket> SetupPacketReceive(Ptr<Node> node);
	void GenerateTraffic(Ptr<Socket> socket, uint32_t pktSize,
			uint32_t pktCount, Time pktInterval);
	//Tracing
	void PhyRxOkTrace (std::string context, Ptr<const Packet> packet, double snr, WifiMode mode, enum WifiPreamble preamble);
	void PhyRxErrorTrace (std::string context, Ptr<const Packet> packet, double snr);

	//BEAR Callback integration
	void HmmRxTrace (Ptr<Packet> packet, Time timestamp, bool error, u_int16_t state);
	void BearRxTrace (Ptr<Packet> packet, Time timestamp, bool error, double propagation, double slowFading, double fastFading);

	//Upper Layer parser
	packetInfo_t ParsePacket (Ptr<const Packet> packet);

	void OpenTraceFile (string fileName,  ChannelMode_t channelModel);
	void CloseTraceFile ();

	void TraceToFile (string line);


private:
	fstream m_file;

	void ReceivePacket(Ptr<Socket> socket);
	void SetPosition(Ptr<Node> node, Vector position);
	Vector GetPosition(Ptr<Node> node);
	u_int32_t m_pktsReceived;
	u_int32_t m_pktsCorrect;
	u_int32_t m_packetCounter;

	u_int32_t m_packetsTransmitted;

	TransportProtocol_t m_protocol;
};


Experiment::Experiment(): m_pktsReceived (0),
		m_pktsCorrect (0),
		m_packetCounter (0),
		m_packetsTransmitted (0)
{}

Experiment::~Experiment()
{}


void Experiment::SetPosition(Ptr<Node> node, Vector position) {
	Ptr<MobilityModel> mobility = node->GetObject<MobilityModel>();
	mobility->SetPosition(position);
}
Vector Experiment::GetPosition(Ptr<Node> node) {
	Ptr<MobilityModel> mobility = node->GetObject<MobilityModel>();
	return mobility->GetPosition();
}
void Experiment::ReceivePacket(Ptr<Socket> socket) {
	Ptr<Packet> packet;
	while (packet = socket->Recv()) {
		//		m_pktsReceived++;
	}
}

Ptr<Socket> Experiment::SetupPacketReceive(Ptr<Node> node) {

	TypeId tid = TypeId::LookupByName("ns3::TcpSocketFactory");

	if (m_protocol == UDP_PROTOCOL)
		tid = TypeId::LookupByName("ns3::UdpSocketFactory");
	Ptr<Socket> sink = Socket::CreateSocket(node, tid);
	InetSocketAddress local = InetSocketAddress(Ipv4Address::GetAny(), 80);
	sink->Bind(local);
	sink->SetRecvCallback(MakeCallback(&Experiment::ReceivePacket, this));
	return sink;
}
void Experiment::GenerateTraffic(Ptr<Socket> socket, uint32_t pktSize,
		uint32_t pktCount, Time pktInterval) {
	m_packetCounter --;
	if (m_packetCounter > 0) {
		socket->Send(Create<Packet>(pktSize));
		Simulator::Schedule(pktInterval, &Experiment::GenerateTraffic, this,
				socket, pktSize, pktCount - 1, pktInterval);
	} else {
		socket->Close();
	}
	m_packetsTransmitted ++;
}

u_int32_t Experiment::GetPacketCounter () const
{
	return m_packetCounter;
}

void Experiment::SetPacketCounter (u_int32_t packetCounter)
{
	this->m_packetCounter = packetCounter;
}

u_int32_t Experiment::GetPktsCorrect () const
{
	return m_pktsCorrect;
}

void Experiment::SetPktsCorrect (u_int32_t pktsCorrect)
{
	this->m_pktsCorrect = pktsCorrect;
}

u_int32_t Experiment::GetPktsReceived () const
{
	return m_pktsReceived;
}

void Experiment::SetPktsReceived(u_int32_t pktsReceived)
{
	this->m_pktsReceived = pktsReceived;
}

u_int32_t Experiment::GetPktsTransmitted() const
{
	return m_packetsTransmitted;
}

void Experiment::SetTransportProtocol(TransportProtocol_t protocol)
{
	m_protocol = protocol;
}

TransportProtocol_t Experiment::GetTransportProtocol () const
{
	return m_protocol;
}

//// Trace data frames and their corresponding ACKs

void Experiment::PhyRxOkTrace(std::string context, Ptr<const Packet> packet, double snr, WifiMode mode, enum WifiPreamble preamble)
{

	///////////////////////////////////////////////////////
	NS_LOG_FUNCTION_NOARGS();
	WifiMacHeader hdr;
	packetInfo_t packetInfo;
	char line [255];
	bool dataOrAck;

	//Ip addresses variables needed for Ipv4Address to String conversion
	u_int8_t source [4];
	u_int8_t destination [4];
	char sourceChar [32];
	char destChar [32];

	packet->PeekHeader (hdr); 		//Don't forget to uncomment
	packetInfo = ParsePacket(packet);

	switch (packetInfo.type)
	{
	case TCP_DATA:
		if (m_protocol == TCP_PROTOCOL)
		{
			m_pktsCorrect ++;
			m_pktsReceived ++;

			//Get the MAC and IP Addresses
			packetInfo.ipv4Hdr.GetSource().Serialize(source);						//Get a string from Ipv4Address
			packetInfo.ipv4Hdr.GetDestination().Serialize(destination);
			sprintf(sourceChar, "%d.%d.%d.%d", source[0], source[1], source[2], source[3]);
			sprintf(destChar, "%d.%d.%d.%d", destination[0], destination[1], destination[2], destination[3]);

			sprintf (line, "%16f %16d %20s %20s %16d %16d %16d %16d %16d %16f",		\
					Simulator::Now().GetSeconds(), true, sourceChar, 				\
					destChar, packetInfo.wifiHdr.IsRetry(),							\
					packetInfo.payloadLength,		 								\
					packetInfo.wifiHdr.GetSequenceNumber(),							\
					packetInfo.tcpHdr.GetSequenceNumber().GetValue(),				\
					packetInfo.tcpHdr.GetAckNumber().GetValue(),  					\
					snr);
			TraceToFile(line);
		}
		break;
	case UDP_DATA:
		if (m_protocol == UDP_PROTOCOL)
		{
			//Distinguish between data or ACK
			if (hdr.IsData())
				dataOrAck = false;
			else if (hdr.IsAck())
				dataOrAck = true;

			sprintf(line, "%10f %10d %20s %20s %10s %8d %8d %10f",      	      \
					Simulator::Now().GetSeconds(), 						      \
					true,												      \
					ConvertMacToString(hdr.GetAddr2()).c_str(), 		      \
					ConvertMacToString(hdr.GetAddr1()).c_str(), 		      \
					dataOrAck ? "ACK" : "DATA",							      \
							packet->GetSize(),							      \
							hdr.GetSequenceNumber(),						  \
							snr);
			m_pktsCorrect ++;
			m_pktsReceived ++;

			TraceToFile(line);
		}
		break;
	default:
		NS_LOG_ERROR("Unknown packet type --> " << packetInfo.type);
		break;
	}


	////////////////////////////////////

}

void Experiment::PhyRxErrorTrace (std::string context, Ptr<const Packet> packet, double snr)
{
	///////////////////////////////////////////////////////
	NS_LOG_FUNCTION_NOARGS();
	WifiMacHeader hdr;
	packetInfo_t packetInfo;
	char line [255];
	bool dataOrAck;

	//Ip addresses variables needed for Ipv4Address to String conversion
	u_int8_t source [4];
	u_int8_t destination [4];
	char sourceChar [32];
	char destChar [32];

	packet->PeekHeader (hdr); 		//Don't forget to uncomment
	packetInfo = ParsePacket(packet);

	switch (packetInfo.type)
	{
	case TCP_DATA:
		if (m_protocol == TCP_PROTOCOL)
		{
			m_pktsReceived ++;

			//Get the MAC and IP Addresses
			packetInfo.ipv4Hdr.GetSource().Serialize(source);						//Get a string from Ipv4Address
			packetInfo.ipv4Hdr.GetDestination().Serialize(destination);
			sprintf(sourceChar, "%d.%d.%d.%d", source[0], source[1], source[2], source[3]);
			sprintf(destChar, "%d.%d.%d.%d", destination[0], destination[1], destination[2], destination[3]);

			sprintf (line, "%16f %16d %20s %20s %16d %16d %16d %16d %16d %16f",		\
					Simulator::Now().GetSeconds(), false, sourceChar, 				\
					destChar, packetInfo.wifiHdr.IsRetry(),							\
					packetInfo.payloadLength,		 								\
					packetInfo.wifiHdr.GetSequenceNumber(),							\
					packetInfo.tcpHdr.GetSequenceNumber().GetValue(),				\
					packetInfo.tcpHdr.GetAckNumber().GetValue(),  					\
					snr);
			TraceToFile(line);
		}

		break;
	case UDP_DATA:
		if (m_protocol == UDP_PROTOCOL)
		{
		//Distinguish between data or ACK
		if (hdr.IsData())
			dataOrAck = false;
		else if (hdr.IsAck())
			dataOrAck = true;

		sprintf(line, "%10f %10d %20s %20s %10s %8d %8d %10f",      	      \
				Simulator::Now().GetSeconds(), 						      \
				false,												      \
				ConvertMacToString(hdr.GetAddr2()).c_str(), 		      \
				ConvertMacToString(hdr.GetAddr1()).c_str(), 		      \
				dataOrAck ? "ACK" : "DATA",							      \
						packet->GetSize(),							      \
						hdr.GetSequenceNumber(),						  \
						snr);
		m_pktsReceived ++;
		TraceToFile(line);

		}
		break;
	default:
		NS_LOG_ERROR("Unknown packet type --> " << packetInfo.type);
		break;
	}


	////////////////////////////////////

}

packetInfo_t Experiment::ParsePacket (Ptr<const Packet> packet)
{
	NS_LOG_FUNCTION(packet);

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

void Experiment::BearRxTrace(Ptr<Packet> packet, Time timestamp, bool error, double propagation, double slowFading, double fastFading)
{
	NS_LOG_FUNCTION_NOARGS();
	WifiMacHeader hdr;
	packetInfo_t packetInfo;
	char line [255];
	bool dataOrAck;				//Value used for UDP tracing

	//Ip addresses variables needed for Ipv4Address to String conversion
	u_int8_t source [4];
	u_int8_t destination [4];
	char sourceChar [32];
	char destChar [32];

	packet->PeekHeader (hdr); 		//Don't forget to uncomment
	packetInfo = ParsePacket(packet);

	switch (packetInfo.type)
	{

	case TCP_DATA:
		if (m_protocol == TCP_PROTOCOL)
		{
			if (error == 0)
			{
				m_pktsCorrect ++;
				m_pktsReceived ++;
			}
			else
			{
				m_pktsReceived ++;
			}

			//Get the MAC and IP Addresses
			packetInfo.ipv4Hdr.GetSource().Serialize(source);						//Get a string from Ipv4Address
			packetInfo.ipv4Hdr.GetDestination().Serialize(destination);
			sprintf(sourceChar, "%d.%d.%d.%d", source[0], source[1], source[2], source[3]);
			sprintf(destChar, "%d.%d.%d.%d", destination[0], destination[1], destination[2], destination[3]);

			sprintf (line, "%16f %16d %20s %20s %16d %16d %16d %16d %16d %16f",		\
					Simulator::Now().GetSeconds(), !error, sourceChar, 				\
					destChar, packetInfo.wifiHdr.IsRetry(),							\
					packetInfo.payloadLength,		 								\
					packetInfo.wifiHdr.GetSequenceNumber(),							\
					packetInfo.tcpHdr.GetSequenceNumber().GetValue(),				\
					packetInfo.tcpHdr.GetAckNumber().GetValue(),  					\
					propagation + slowFading + fastFading);

			TraceToFile(line);
		}
		break;
	case UDP_DATA:
		if (m_protocol == UDP_PROTOCOL)
		{
			if (error == 0)
			{
				m_pktsCorrect ++;
				m_pktsReceived ++;
			}
			else
			{
				m_pktsReceived ++;
			}
			//Distinguish between data or ACK
			if (hdr.IsData())
				dataOrAck = false;
			else if (hdr.IsAck())   //
				dataOrAck = true;

			sprintf(line, "%10f %10d %20s %20s %10s %8d %8d %12f %12f %12f",  \
					timestamp.GetSeconds(), 						      	  \
					!error,												      \
					ConvertMacToString(hdr.GetAddr2()).c_str(), 		      \
					ConvertMacToString(hdr.GetAddr1()).c_str(), 		      \
					dataOrAck ? "ACK" : "DATA",							      \
							packet->GetSize(),									      \
							hdr.GetSequenceNumber(),								  \
							propagation,										      \
							slowFading,											      \
							fastFading											      \
			);
			TraceToFile(line);
		}
		break;
	default:
		NS_LOG_ERROR("Unknown packet type --> " << packetInfo.type);
		break;
	}



}

void Experiment::HmmRxTrace(Ptr<Packet> packet, Time timestamp, bool error, u_int16_t state)
{
	NS_LOG_FUNCTION_NOARGS();
	WifiMacHeader hdr;
	packetInfo_t packetInfo;
	char line [255];
	bool dataOrAck;				//Value used for UDP tracing

	//Ip addresses variables needed for Ipv4Address to String conversion
	u_int8_t source [4];
	u_int8_t destination [4];
	char sourceChar [32];
	char destChar [32];

	packet->PeekHeader (hdr); 		//Don't forget to uncomment
	packetInfo = ParsePacket(packet);

	switch (packetInfo.type)
	{
	case TCP_DATA:
		if (m_protocol == TCP_PROTOCOL)
		{
			if (error == 0)
			{
				m_pktsCorrect ++;
				m_pktsReceived ++;
			}
			else
			{
				m_pktsReceived ++;
			}

			//Get the MAC and IP Addresses
			packetInfo.ipv4Hdr.GetSource().Serialize(source);						//Get a string from Ipv4Address
			packetInfo.ipv4Hdr.GetDestination().Serialize(destination);
			sprintf(sourceChar, "%d.%d.%d.%d", source[0], source[1], source[2], source[3]);
			sprintf(destChar, "%d.%d.%d.%d", destination[0], destination[1], destination[2], destination[3]);

			sprintf (line, "%16f %16d %20s %20s %16d %16d %16d %16d %16d %16d",		\
					Simulator::Now().GetSeconds(), !error, sourceChar, 				\
					destChar, packetInfo.wifiHdr.IsRetry(),							\
					packetInfo.payloadLength,		 								\
					packetInfo.wifiHdr.GetSequenceNumber(),							\
					packetInfo.tcpHdr.GetSequenceNumber().GetValue(),				\
					packetInfo.tcpHdr.GetAckNumber().GetValue(),  					\
					state);
			TraceToFile(line);
		}
		break;
	case UDP_DATA:
		if (m_protocol == UDP_PROTOCOL)
		{
			if (error == 0)
			{
				m_pktsCorrect ++;
				m_pktsReceived ++;
			}
			else
			{
				m_pktsReceived ++;
			}
			//Distinguish between data or ACK
			if (hdr.IsData())
				dataOrAck = false;
			else if (hdr.IsAck())
				dataOrAck = true;
			sprintf(line, "%10f %10d %20s %20s %10s %8d %8d %8d",      	      \
					timestamp.GetSeconds(), 						      	  \
					!error,												      \
					ConvertMacToString(hdr.GetAddr2()).c_str(), 		      \
					ConvertMacToString(hdr.GetAddr1()).c_str(), 		      \
					dataOrAck ? "ACK" : "DATA",							      \
					packet->GetSize(),							      		  \
					hdr.GetSequenceNumber(),						   		  \
					state);
			TraceToFile(line);
		}
		break;
	default:
		NS_LOG_ERROR("Unknown packet type --> " << packetInfo.type);
		break;
	}


}


void Experiment::OpenTraceFile (string fileName,  ChannelMode_t channelModel = BURSTY_ERROR_AUTO_REGRESSIVE_MODEL)
{
	string path = getcwd() + "/traces/" + fileName;
	char title [255];
	string lastField;					//Channel Model Dependent field (trace field)
	NS_LOG_DEBUG(path);
	m_file.open(path.c_str(), fstream::out);

	//Split into TCP and UDP simulations
	switch (m_protocol)
	{
	case TCP_PROTOCOL:
		if (channelModel == HIDDEN_MARKOV_ERROR_MODEL)
			lastField = "State";
		else
			lastField = "SNR (dB)";

		sprintf (title, "%16s %16s %20s %20s %16s %16s %16s %16s %16s %16s",    	\
				"Time", "CRC", "Source", "Destination", "802.11 RETX", 				\
				"Length","SeqNum", "TCP SeqNum", "TCP AckNum", 						\
				lastField.c_str());
		break;

	case UDP_PROTOCOL:
		switch (channelModel)
		{
		case BURSTY_ERROR_AUTO_REGRESSIVE_MODEL:
			sprintf(title, "%10s %10s %20s %20s %10s %8s %8s %12s %12s %12s", 								\
					"Time", "CRC", "SRC", "DST", "DATA/ACK", "Length", "SeqNum",							\
					"Propagation","Slow Fading", "Fast Fading");
			break;
		case HIDDEN_MARKOV_ERROR_MODEL:
			sprintf(title, "%10s %10s %20s %20s %10s %8s %8s %8s", 											\
					"Time", "CRC", "SRC", "DST", "DATA/ACK", "Length", "SeqNum",							\
					"State");
			break;
		case NIST_ERROR_RATE_MODEL:
			sprintf(title, "%10s %10s %20s %20s %10s %8s %8s %10s", 								   		\
					"Time", "CRC", "SRC", "DST", "DATA/ACK", "Length", "SeqNum", "SNR (dB)");
			break;
		}

		break;
	default:
		NS_LOG_ERROR("Cannot open a trace file because transport protocol is not correct");
	}

	m_file << title << endl;
}

void Experiment::CloseTraceFile()
{
	NS_LOG_FUNCTION_NOARGS();
	if (m_file.is_open())
		m_file.close();
	else
		NS_LOG_ERROR("Open file not found");
}

void Experiment::TraceToFile(string line)
{
	NS_LOG_DEBUG(line);
	m_file << line << endl;
}



std::string getcwd() {
	char buf[FILENAME_MAX];
	char* succ = getcwd(buf, FILENAME_MAX);
	if (succ)
		return std::string(succ);
	return ""; // raise a flag, throw an exception, ...
}

std::string ConvertMacToString(Mac48Address mac)
{
	NS_LOG_FUNCTION(mac);
	u_int8_t temp[6];
	char result[24];
	mac.CopyTo(temp);

	sprintf(result,"%02X:%02X:%02X:%02X:%02X:%02X", temp[0], temp[1], temp[2], temp[3], temp[4], temp[5] );

	return std::string(result);
}

////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////     MAIN     ///////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

int main (int argc, char *argv[])
{
	//Logging
	EnableLogging();


	//Variable initialization
	// Hidden Markov Model Coefficient file
	string transitionFileHmm = "HMM_4states/HMM_03_TR_1.txt" ;
	string emissionFileHmm = "HMM_4states/HMM_03_EMIS_1.txt" ;

	string hmmChannel = "Good";

	//BEAR model Coefficients file
	string arModelCoefficientsFile = "coefsAR.cfg";

	//Parameter to switch among the different channel models
	string channelModel = "Bear";

	//Transport protocol
	string transportProtocol = "TCP";
	TransportProtocol_t protocol;

	//Random variable generation (Random seed)
	SeedManager::SetSeed(1);

	//Trace file name
	u_int16_t scenario = 1;				//Scenario number --> Used for trace file naming (see documentation to get the model particular parameters)
	string outputChannelTypeFileName;
	string outputFileName = "TCP";
	ChannelMode_t enumChannelModel;

	//Simulation parameters
	float distance = 20;			//Distance between nodes


	u_int32_t numPackets = 10000;
	u_int32_t packetLength = 1460;
	uint64_t interPacketTime = 1000000;
	u_int32_t run = 1;
	u_int32_t runCounter;
	u_int32_t runOffset = 0;

	//Command parsing
	CommandLine cmd;

	//Error model parameters
	cmd.AddValue ("ChannelModel", "Channel model to insert into the nodes", channelModel );
	//BEAR model
	cmd.AddValue ("ArModelCoefficientFile", "File name which contains the AR model coefficients", arModelCoefficientsFile);

	//Hidden Markov Error Model parameters
	cmd.AddValue ("HmmChannel", "Type of HMM channel: Good, Average or bad", hmmChannel);
	cmd.AddValue ("TransitionFileHmm", "HMM transition file name (from configs file)", transitionFileHmm);
	cmd.AddValue ("EmissionFileHmm", "HMM emission file name (from configs file)", emissionFileHmm);

	//Simulation-related parameters
	cmd.AddValue ("Run", "Number of simulations to run", run);
	cmd.AddValue ("RunOffset", "Offset introduced at the SeedManager and the file naming counter", runOffset);
	cmd.AddValue ("Scenario", "Type of analysis (channel model coefficients and conditions)", scenario);
	cmd.AddValue ("NumPackets", "Total number of packets sent in the simulation", numPackets);
	cmd.AddValue ("PacketLength", "Number of bytes in each packet", packetLength);
	cmd.AddValue ("InterPacketTime", "Time (in microseconds) between two consecutive packets (application level)", interPacketTime);
	cmd.AddValue ("OutputChannelTypeFileName", "File name to store the output trace", outputChannelTypeFileName);
	cmd.AddValue ("Distance", "Distance (in meters) between nodes", distance);
	cmd.AddValue ("TransportProtocol", "TCP or UDP" , transportProtocol);

	cmd.Parse (argc, argv);

	//Default attributes initialization
	//Wifi attributes
	Config::SetDefault ("ns3::WifiRemoteStationManager::NonUnicastMode",StringValue ("DsssRate2Mbps"));
	// Config::SetDefault ("ns3::WifiRemoteStationManager::RtsCtsThreshold", StringValue ("2200"));    		//Disable RTS/CTS transmission
	Config::SetDefault ("ns3::WifiRemoteStationManager::FragmentationThreshold", StringValue ("2200"));     //Disable fragmentation
	Config::SetDefault ("ns3::ConstantRateWifiManager::DataMode", StringValue ("DsssRate11Mbps"));
	Config::SetDefault ("ns3::ConstantRateWifiManager::ControlMode", StringValue ("DsssRate11Mbps"));	//WiFi Buffer Size
	Config::SetDefault ("ns3::WifiMacQueue::MaxPacketNumber", UintegerValue (900000000));
	Config::SetDefault ("ns3::WifiRemoteStationManager::MaxSlrc", UintegerValue (4));
	Config::SetDefault ("ns3::WifiNetDevice::Mtu", UintegerValue (1512));

	//HiddenErrorMarkov model attributes
	Config::SetDefault ("ns3::HiddenMarkovErrorModel::TransitionMatrixFileName", StringValue (transitionFileHmm));
	Config::SetDefault ("ns3::HiddenMarkovErrorModel::EmissionMatrixFileName", StringValue (emissionFileHmm));

	GlobalValue::Bind ("ChecksumEnabled", BooleanValue (true));

	if (transportProtocol == "TCP")
		protocol = TCP_PROTOCOL;
	else if (transportProtocol == "UDP")
		protocol = UDP_PROTOCOL;
	else
		NS_LOG_ERROR("Transport Protocol undefined");

	if (channelModel == "SWEEP")
		distance = 72;

	if ((scenario < 1) || (scenario > 6))
	{
		NS_LOG_ERROR("HMM configuration et not supported");
		return -1;
	}

	/////////-----------------------MAIN LOOP-----------------------/////////

	for (runCounter = 1; runCounter <= run; runCounter ++)
	{
		Experiment exp_;
		exp_.SetTransportProtocol(protocol);
		//Create the nodes
		NodeContainer wifiNodes;
		wifiNodes.Create(2);

		//Prepare the Wifi NetDevices
		YansWifiPhyHelper wifiPhy = YansWifiPhyHelper::Default();			//Don't remove (Necessary at YansWifiPhy::EndReceive)
		YansWifiChannelHelper wifiChannel;

		//Change the seed for each simulation run
		SeedManager::SetRun(runCounter + runOffset);

		//Channel model initialization
		// BEAR model = BearPropagationLossModel + BearErrorModel

		if (channelModel == "Bear")
		{
			outputChannelTypeFileName = "Bear";
			enumChannelModel = BURSTY_ERROR_AUTO_REGRESSIVE_MODEL;

			//Set the propagation delay model
			wifiChannel.SetPropagationDelay("ns3::ConstantSpeedPropagationDelayModel");
			//Set the propagation loss model
			wifiChannel.AddPropagationLoss("ns3::BearPropagationLossModel");
			Ptr<BearPropagationLossModel> arBaseModel = CreateObject<BearPropagationLossModel> ();
			wifiChannel.AddPropagationLoss(arBaseModel);
			//Set the error model
			Ptr<BearErrorModel> errorModel = CreateObject<BearErrorModel> ();   	//Manual BEAR model instance
			wifiPhy.SetErrorModel(errorModel);
			arBaseModel->SetErrorModel(errorModel);    		// Bursty error model is closely linked to the AR propagation loss model

			//Callback
			errorModel->SetRxCallback (MakeCallback (&Experiment::BearRxTrace, &exp_));
		}

		// HiddenMarkovErrorModel --> Does not take into account the SNR, hence the propagation loss model is not relevant
		else if (channelModel == "HMM")
		{
			//Prepare the coefficients files according to the channel type
			if (hmmChannel == "Good")
			{
				sprintf((char *) transitionFileHmm.c_str(), "HMM_4states/HMM_12_TR_%1d.txt", scenario);
				sprintf((char *) emissionFileHmm.c_str(), "HMM_4states/HMM_12_EMIS_%1d.txt", scenario);

			}
			else if (hmmChannel == "Average")
			{
				sprintf((char *) transitionFileHmm.c_str(), "HMM_4states/HMM_09_TR_%1d.txt", scenario);
				sprintf((char *) emissionFileHmm.c_str(), "HMM_4states/HMM_09_EMIS_%1d.txt", scenario);
			}
			else if (hmmChannel == "Bad")
			{
				sprintf((char *) transitionFileHmm.c_str(), "HMM_4states/HMM_05_TR_%1d.txt", scenario);
				sprintf((char *) emissionFileHmm.c_str(), "HMM_4states/HMM_05_EMIS_%1d.txt", scenario);
			}
			else
			{
				NS_LOG_UNCOND ("HMM Channel Model not valid... Exiting");
				return -1;
			}

			outputChannelTypeFileName = "HMM_" + hmmChannel;
			enumChannelModel = HIDDEN_MARKOV_ERROR_MODEL;

			//Set the propagation delay model
			wifiChannel.SetPropagationDelay ("ns3::ConstantSpeedPropagationDelayModel");
			//Set the propagation loss model
			wifiChannel.AddPropagationLoss ("ns3::SimplePropagationLossModel", "MaxDistance", DoubleValue(200.0));

			//Set the error model
			Ptr<HiddenMarkovErrorModel> errorModel = CreateObject<HiddenMarkovErrorModel> ();
			errorModel->SetTransitionMatrixFileName(transitionFileHmm);
			errorModel->SetEmissionMatrixFileName(emissionFileHmm);
			errorModel->GetCoefficients();

			wifiPhy.SetErrorModel(errorModel);

			//Callback
			errorModel->SetRxCallback(MakeCallback(&Experiment::HmmRxTrace, &exp_));
		}

		//NS-3 Legacy error decision model --> LogDistancePropagationLossModel + NistErrorRateModel
		else if (channelModel == "NIST")
		{
			outputChannelTypeFileName = "NIST";
			enumChannelModel = NIST_ERROR_RATE_MODEL;
//			distance = 89.6;			//Distance value which FER yields approximately 0.5
			distance = 80;   			//FER ~ 0.16

			//Set the propagation delay model
			wifiChannel.SetPropagationDelay("ns3::ConstantSpeedPropagationDelayModel");
			//Set the propagation loss model
			wifiChannel.AddPropagationLoss("ns3::LogDistancePropagationLossModel");
			wifiChannel.AddPropagationLoss("ns3::RandomPropagationLossModel", "Variable", RandomVariableValue (NormalVariable (0.0, 2.8)));

			wifiPhy.SetErrorRateModel("ns3::YansErrorRateModel");
		}

		//Make a sweep in order to fully characterize the throughput vs FER curve shape in a memoryless channel
		else if (channelModel == "SWEEP")
		{
		if ((int) runCounter % 5 == 0)
				distance += 0.5	;

			outputChannelTypeFileName = "SWEEP";
			enumChannelModel = NIST_ERROR_RATE_MODEL;
			//			distance = 89.6;			//Distance value which FER yields approximately 0.5
//			distance = 80;   			//FER ~ 0.16

			//Set the propagation delay model
			wifiChannel.SetPropagationDelay("ns3::ConstantSpeedPropagationDelayModel");
			//Set the propagation loss model
			wifiChannel.AddPropagationLoss("ns3::LogDistancePropagationLossModel");
//			wifiChannel.AddPropagationLoss("ns3::RandomPropagationLossModel", "Variable", RandomVariableValue (NormalVariable (0.0, 2.8)));
			wifiPhy.SetErrorRateModel("ns3::YansErrorRateModel");

		}

		wifiPhy.SetChannel (wifiChannel.Create());
		WifiHelper wifi = WifiHelper::Default();
		wifi.SetStandard (WIFI_PHY_STANDARD_80211b);
		wifi.SetRemoteStationManager ("ns3::ConstantRateWifiManager");
		NqosWifiMacHelper wifiMac = NqosWifiMacHelper::Default();

		NetDeviceContainer wifiDevices = wifi.Install(wifiPhy, wifiMac, wifiNodes);

		//Node mobility configuration
		MobilityHelper mobility;
		Ptr<ListPositionAllocator> positionAlloc = CreateObject<ListPositionAllocator>();
		positionAlloc->Add(Vector(0.0, 0.0, 0.0));
		positionAlloc->Add(Vector(distance, 0.0, 0.0));
		mobility.SetPositionAllocator(positionAlloc);
		mobility.SetMobilityModel("ns3::ConstantPositionMobilityModel");
		mobility.Install (wifiNodes);

		//Set the upper layers (default configuration)
		InternetStackHelper internet;

		// Sysctl option configuration
		if (transportProtocol == "TCP")
		{
			internet.SetTcp ("ns3::NscTcpL4Protocol","Library",StringValue ("liblinux2.6.26.so"));
			Config::Set ("/NodeList/3/$ns3::Ns3NscStack<linux2.6.26>/net.inet.tcp.mssdflt", StringValue ("1460"));
			Config::SetDefault ("ns3::TcpSocket::SegmentSize", UintegerValue (1460));
			//		Config::Set ("/NodeList/3/$ns3::Ns3NscStack<linux2.6.26>/net.ipv4.tcp_sack", StringValue ("0"));
			//		Config::Set ("/NodeList/3/$ns3::Ns3NscStack<linux2.6.26>/net.ipv4.tcp_timestamps", StringValue ("0"));
			//		Config::Set ("/NodeList/3/$ns3::Ns3NscStack<linux2.6.26>/net.ipv4.tcp_window_scaling", StringValue ("0"));

			//TCP parameter set
			Config::SetDefault ("ns3::TcpSocket::SegmentSize", UintegerValue (1460));
			Config::SetDefault ("ns3::TcpSocket::RcvBufSize", UintegerValue (90000000));
			Config::SetDefault ("ns3::TcpSocket::SndBufSize", UintegerValue (90000000));

			outputFileName= "TCP";

			//		Config::SetDefault("ns3::TcpL4Protocol::SocketType", StringValue("ns3::TcpNewReno"));
			//		Config::SetDefault("ns3::TcpL4Protocol::SocketType", StringValue("ns3::TcpReno"));
		}
		else if (transportProtocol == "UDP")
		{
			outputFileName = "UDP";
			Config::SetDefault ("ns3::UdpSocket::RcvBufSize", UintegerValue (90000000));
		}

		internet.Install (wifiNodes);

		//New TCP simulation model  (Application changes)
		//Define IP level
		Ipv4AddressHelper ipv4;
		NS_LOG_INFO("Assign IP Addresses.");
		ipv4.SetBase("10.1.1.0", "255.255.255.0");
		Ipv4InterfaceContainer ipInterfaceContainer = ipv4.Assign(wifiDevices);


		uint16_t port = 50000;   									// Server Port

		OnOffHelper onoff ("ns3::TcpSocketFactory", Address (InetSocketAddress (Ipv4Address	("10.1.1.1"), port)));  //OnOffHelper instance

		//If UDP-based simulation, establish UDP at the OnOffHelper object
		if (transportProtocol == "UDP")
			onoff.SetAttribute("Protocol", StringValue ("ns3::UdpSocketFactory"));

		onoff.SetAttribute ("OnTime", RandomVariableValue (ConstantVariable (1)));
		onoff.SetAttribute ("OffTime", RandomVariableValue (ConstantVariable (0)));
		onoff.SetAttribute ("DataRate", StringValue ("11Mbps"));
		onoff.SetAttribute ("PacketSize", UintegerValue (packetLength));
		onoff.SetAttribute ("MaxBytes", UintegerValue (packetLength * numPackets));
		//	onoff.SetAttribute ("Tx", MakeTraceSourceAccessor (&OnOffApplication::m_txTrace));

		ApplicationContainer app = onoff.Install (wifiNodes.Get(1));  //install the onoff aplication in the AP node
		// Start the application
		app.Start (Seconds (1.0));
		app.Stop (Seconds (10000.0));

		// Create a packet sink to receive these packets in the Station node
			PacketSinkHelper sink ("ns3::TcpSocketFactory",	Address (InetSocketAddress (Ipv4Address::GetAny (), port)));
		//If UDP-based simulation, establish UDP at the OnOffHelper object
		if (transportProtocol == "UDP")
			 sink.SetAttribute("Protocol", StringValue("ns3::UdpSocketFactory"));

		app = sink.Install (wifiNodes.Get(0));
		app.Start (Seconds (0.0));
		app.Stop (Seconds (11000.0));

		//End new simulation scheme
		////////////////////

		//Tracing connectors
		if (enumChannelModel == NIST_ERROR_RATE_MODEL)		//Frame reception tracing for
		{
			Config::Connect ("/NodeList/*/DeviceList/*/Phy/State/RxOk", MakeCallback (&Experiment::PhyRxOkTrace, &exp_));
			Config::Connect ("/NodeList/*/DeviceList/*/Phy/State/RxError", MakeCallback (&Experiment::PhyRxErrorTrace, &exp_));
		}

		//Connect to the error models
			wifiPhy.EnablePcap (outputChannelTypeFileName, wifiNodes, true);
			wifiPhy.EnableAscii("Prueba", wifiNodes);


		//TCP trace file
		char temp[128];
		sprintf(temp,"%s_%s_%02d_%03d.tr", outputFileName.c_str(), outputChannelTypeFileName.c_str(), scenario, runCounter + runOffset);
		exp_.OpenTraceFile(temp, enumChannelModel);

		Simulator::Stop(Seconds(11010));

		Simulator::Run();
		Simulator::Destroy();

		//Print statistics
		NS_LOG_UNCOND("Run " << runCounter + runOffset << " FER = " << exp_.GetPktsReceived() - exp_.GetPktsCorrect() << "/"  			\
				<< exp_.GetPktsReceived() << " = " << 																					\
				((double) exp_.GetPktsReceived() - (double) exp_.GetPktsCorrect())/(double)exp_.GetPktsReceived());
		exp_.CloseTraceFile();
	}
}

