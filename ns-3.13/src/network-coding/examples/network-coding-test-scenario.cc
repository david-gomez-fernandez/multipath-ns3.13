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

#include <ns3/node-list.h>
#include "ns3/core-module.h"
#include "ns3/mobility-module.h"
#include "ns3/applications-module.h"
#include "ns3/wifi-module.h"
#include "ns3/network-module.h"
#include "ns3/internet-module.h"
#include "ns3/propagation-module.h"

#include "scratch-logging.h"

#include "ns3/ar-model.h"
#include "ns3/hidden-markov-error-model.h"
#include "ns3/simple-network-coding.h"

#include "ns3/olsr-helper.h"

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdio.h>

NS_LOG_COMPONENT_DEFINE("NetworkCodingTestScenario");

using namespace std;
using namespace ns3;

std::string ConvertMacToString(Mac48Address mac);
std::string getcwd();

enum ChannelMode_t {
	HIDDEN_MARKOV_ERROR_MODEL,
	BURSTY_ERROR_AUTO_REGRESSIVE_MODEL,
	NIST_ERROR_RATE_MODEL
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

	Ptr<Socket> SetupPacketReceive(Ptr<Node> node);
	void GenerateTraffic(Ptr<Socket> socket, uint32_t pktSize,
			uint32_t pktCount, Time pktInterval);
	//Tracing
	void PhyRxOkTrace (std::string context, Ptr<const Packet> packet, double snr, WifiMode mode, enum WifiPreamble preamble);
	void PhyRxErrorTrace (std::string context, Ptr<const Packet> packet, double snr);

	//BEAR Callback integration
	void HmmRxTrace (Ptr<Packet> packet, Time timestamp, bool error, u_int16_t state);
	void BearRxTrace (Ptr<Packet> packet, Time timestamp, bool error, double propagation, double slowFading, double fastFading);

	//TCP specific trace format
	void TcpTrace (packetInfo_t info, Time timestamp, bool error, double snr);

	//Upper Layer parser
	packetInfo_t ParsePacket (Ptr<const Packet> packet);

	void OpenTraceFile (string fileName, u_int8_t mode);
	void OpenTcpTraceFile (string fileName,  ChannelMode_t channelModel);
	void CloseTraceFile ();

	void TraceToFile (string line);
	void TraceToTcpFile (string line);

	//Tracing tests ---> Don't forget to remove
	void TraceTest (std::string context, Ptr <const Packet> packet);
	void IpTraceTest (std::string context, Ptr<const Packet> packet, Ptr<Ipv4> ip , uint32_t interface);

private:
	fstream m_file;
	fstream m_tcpFile;

	void ReceivePacket(Ptr<Socket> socket);
	void SetPosition(Ptr<Node> node, Vector position);
	Vector GetPosition(Ptr<Node> node);

	u_int32_t m_pktsReceived;
	u_int32_t m_pktsCorrect;
	u_int32_t m_packetCounter;
	u_int32_t m_packetsTransmitted;

	std::map <int, u_int32_t> m_packetCounterMap;
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
	Ptr<Socket> sink = Socket::CreateSocket(node, tid);
	InetSocketAddress local = InetSocketAddress(Ipv4Address::GetAny(), 80);
	sink->Bind(local);
	sink->SetRecvCallback(MakeCallback(&Experiment::ReceivePacket, this));
	return sink;
}
void Experiment::GenerateTraffic(Ptr<Socket> socket, uint32_t pktSize,
		uint32_t pktCount, Time pktInterval) {

	m_packetCounter = pktCount;

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

//// Trace data frames and their corresponding ACKs

void Experiment::PhyRxOkTrace(std::string context, Ptr<const Packet> packet, double snr, WifiMode mode, enum WifiPreamble preamble)
{
	char line[255];
	WifiMacHeader hdr;
	packet -> PeekHeader (hdr);
	bool dataOrAck;
	bool error;
	packetInfo_t info;

	info = ParsePacket(packet);

	if (hdr.IsData() && packet->GetSize() > 500)
	{
		dataOrAck = false;
		error = false;
		NS_LOG_DEBUG(" ---- DATAOK (" << Simulator::Now().GetSeconds()  <<      				\
				") mode=" << mode << " SNR =" << 10*log10 (snr) << " PacketSize = " << 			\
				*packet << packet->GetSize() << " SRC " << hdr.GetAddr1() <<					\
				" DST " << hdr.GetAddr2() << " SequenceNumber= " << hdr.GetSequenceNumber());
	}
	if (hdr.IsAck())
	{
		dataOrAck = true;
		error = false;
		NS_LOG_DEBUG(" ---- ACKOK (" << Simulator::Now().GetSeconds()  <<      					\
				") mode=" << mode << " SNR =" << 10*log10 (snr) << " PacketSize = " << 			\
				*packet << packet->GetSize() << " SRC " << hdr.GetAddr1() <<					\
				" DST " << hdr.GetAddr2() << " SequenceNumber= " << hdr.GetSequenceNumber());
	}

	if (info.type == TCP_DATA)
		TcpTrace(info, Simulator::Now(), error, snr);

	sprintf(line, "%10f %10d %20s %20s %10s %8d %8d %10f",      	      	\
			Simulator::Now().GetSeconds(), 						      		\
			!error,												      		\
			ConvertMacToString(hdr.GetAddr2()).c_str(), 		      		\
			ConvertMacToString(hdr.GetAddr1()).c_str(), 		      		\
			dataOrAck ? "ACK" : "DATA",							      		\
					packet->GetSize(),							      		\
					hdr.GetSequenceNumber(),							  	\
					snr);
	TraceToFile(line);

	m_pktsCorrect ++;
	m_pktsReceived ++;
}

void Experiment::PhyRxErrorTrace (std::string context, Ptr<const Packet> packet, double snr)
{
	char line[255];
	WifiMacHeader hdr;
	packet->PeekHeader (hdr);
	bool dataOrAck;
	bool error;
	packetInfo_t info;

	if (hdr.IsData() && packet->GetSize() > 500)
	{
		dataOrAck = false;
		error = true;
		NS_LOG_DEBUG(" ---- DATAERROR (" << Simulator::Now().GetSeconds()  <<      				\
				") SNR =" << 10*log10 (snr) << " PacketSize = " << 								\
				*packet << packet->GetSize() << " SRC " << hdr.GetAddr1() <<					\
				" DST " << hdr.GetAddr2() << " SequenceNumber= " << hdr.GetSequenceNumber());
		//		m_pktsReceived ++;
	}

	if (hdr.IsAck())
	{
		dataOrAck = true;
		error = true;
		NS_LOG_DEBUG(" ---- ACKERROR (" << Simulator::Now().GetSeconds()  <<      				\
				") SNR =" << 10*log10 (snr) << " PacketSize = "           << 					\
				*packet << packet->GetSize() << " SRC " << hdr.GetAddr1() <<					\
				" DST " << hdr.GetAddr2() << " SequenceNumber= " << hdr.GetSequenceNumber());
	}

	if (info.type == TCP_DATA)
		TcpTrace(info, Simulator::Now(), error, snr);

	sprintf(line, "%10f %10d %20s %20s %10s %8d %8d %10f",      	  \
			Simulator::Now().GetSeconds(), 						      \
			!error,												      \
			ConvertMacToString(hdr.GetAddr2()).c_str(), 		      \
			ConvertMacToString(hdr.GetAddr1()).c_str(), 		      \
			dataOrAck ? "ACK" : "DATA",							      \
					packet->GetSize(),							      \
					hdr.GetSequenceNumber (),						  \
					snr);
	TraceToFile (line);
	m_pktsReceived ++;
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
	packetInfo_t packetInfo;
	bool printablePacket;
	char line [255];

	//Ip addresses variables needed for Ipv4Address to String conversion
//	u_int8_t source [4];
//	u_int8_t destination [4];
//	char sourceChar [32];
//	char destChar [32];

	packetInfo = ParsePacket(packet);

	switch (packetInfo.type)
	{
	case IEEE_80211_ACK:
		printablePacket = false;
		break;
	case IEEE_80211_NODATA:			//IEEE 802.11 control management frames --> Do not print anything into the file
		printablePacket = false;
		break;
	case ARP_PACKET:				//ARP packet --> Do not print anything into the file
		printablePacket = false;
		break;
	case TCP_DATA:
		//Avoid printing establishing / ending TCP connections

		TcpTrace(packetInfo, timestamp, error, propagation + slowFading + fastFading);

//		if ((!(packetInfo.tcpHdr.GetFlags() & 0x01)) && (!(packetInfo.tcpHdr.GetFlags() & 0x02)))
//		{
////			printf("Printable packet %02X\n", packetInfo.tcpHdr.GetFlags());
//
//			printablePacket = true;
//			if (error == 0)
//			{
//				m_pktsCorrect ++;
//				m_pktsReceived ++;
//			}
//			else
//			{
//				m_pktsReceived ++;
//			}
//
//			//Get the MAC and IP Addresses
//			packetInfo.ipv4Hdr.GetSource().Serialize(source);						//Get a string from Ipv4Address
//			packetInfo.ipv4Hdr.GetDestination().Serialize(destination);
//			sprintf(sourceChar, "%d.%d.%d.%d", source[0], source[1], source[2], source[3]);
//			sprintf(destChar, "%d.%d.%d.%d", destination[0], destination[1], destination[2], destination[3]);
//
//			sprintf (...)

//		}
//		else
//		{
//			printablePacket = false;
//			printf("Non-printable packet %02X\n", packetInfo.tcpHdr.GetFlags());
//		}

		break;
	case UDP_DATA:
		printablePacket = false;

		break;
	default:
		NS_LOG_ERROR("Unknown packet type --> " << packetInfo.type);
		break;
	}

	//Print the corresponding frame info
	if (printablePacket == true)
	{
		TraceToTcpFile(line);
	}
}

void Experiment::TcpTrace(packetInfo_t info, Time timestamp, bool error, double snr)
{
	char line [255];

	//Ip addresses variables needed for Ipv4Address to String conversion
	u_int8_t source [4];
	u_int8_t destination [4];
	char sourceChar [32];
	char destChar [32];

//	if (error == 0)
//	{
//		m_pktsCorrect ++;
//		m_pktsReceived ++;
//	}
//	else
//	{
//		m_pktsReceived ++;
//	}

	//Get the MAC and IP Addresses
	info.ipv4Hdr.GetSource().Serialize(source);						//Get a string from Ipv4Address
	info.ipv4Hdr.GetDestination().Serialize(destination);
	sprintf(sourceChar, "%d.%d.%d.%d", source [0], source [1], source [2], source [3]);
	sprintf(destChar, "%d.%d.%d.%d", destination [0], destination [1], destination [2], destination [3]);

	sprintf (line, "%16f %8d %18s %18s %10d %10d %10d %10d %10d %10x %16f",			\
			Simulator::Now().GetSeconds (), !error,									\
			sourceChar, 															\
			destChar, 																\
			info.wifiHdr.IsRetry (),												\
			info.payloadLength,		 												\
			info.wifiHdr.GetSequenceNumber (),										\
			info.tcpHdr.GetSequenceNumber ().GetValue (),							\
			info.tcpHdr.GetAckNumber ().GetValue (),  								\
			info.tcpHdr.GetFlags (),												\
			10 * log10 (snr));

	TraceToTcpFile (line);
}

void Experiment::TraceTest (std::string context, Ptr <const Packet> packet)
{
	NS_LOG_UNCOND("MAC Packet captured : " << packet);
//	printf("A\n");
}

void Experiment::IpTraceTest(std::string context, Ptr<const Packet> packet, Ptr<Ipv4> ip , uint32_t interface)
{
	Ipv4Header ipHdr;
	packet->PeekHeader(ipHdr);
	NS_LOG_UNCOND ("IP packet captured : " << packet << " Is Destination--> " << ip->IsDestinationAddress(ipHdr.GetDestination(),0));


}

void Experiment::HmmRxTrace(Ptr<Packet> packet, Time timestamp, bool error, u_int16_t state)
{
	NS_LOG_FUNCTION_NOARGS();
	WifiMacHeader hdr;
	packet->PeekHeader (hdr);
	char line[255];
	bool dataOrAck;      //False = Data / True = ACK

	if (hdr.IsData())
	{
		dataOrAck = false;
		if (error == 0)
		{
			m_pktsCorrect ++;
			m_pktsReceived ++;
		}
		else
		{
			m_pktsReceived ++;
		}
	}
	if (hdr.IsAck())
	{
		dataOrAck = true;
		if (error == 0)
		{
			m_pktsCorrect ++;
			m_pktsReceived ++;
		}
		else
		{
			m_pktsReceived ++;
		}
	}

	sprintf(line, "%10f %10d %20s %20s %10s %8d %8d %8d ",      	      \
			timestamp.GetSeconds(), 						      	  \
			!error,												      \
			ConvertMacToString(hdr.GetAddr2()).c_str(), 		      \
			ConvertMacToString(hdr.GetAddr1()).c_str(), 		      \
			dataOrAck ? "ACK" : "DATA",							      \
					packet->GetSize(),							      \
					hdr.GetSequenceNumber(),						  \
					state
	);
	TraceToFile (line);
}


void Experiment::OpenTraceFile(string fileName, u_int8_t mode = BURSTY_ERROR_AUTO_REGRESSIVE_MODEL)
{
	string path = getcwd() + "/traces/" + fileName;
	char title [255];
	NS_LOG_DEBUG(path);
	m_file.open(path.c_str(), fstream::out);

	switch (mode)
	{
	case BURSTY_ERROR_AUTO_REGRESSIVE_MODEL:
		sprintf(title, "%10s %10s %20s %20s %10s %8s %8s %12s %12s %12s %12s %12s", 						\
				"Time", "CRC", "SRC", "DST", "DATA/ACK", "Length", "SeqNum",								\
				"Propagation","Slow Fading", "Fast Fading", "TCP SeqNum", "TCP AckNum");
		break;
	case HIDDEN_MARKOV_ERROR_MODEL:
		sprintf(title, "%10s %10s %20s %20s %10s %8s %8s %8s %12s %12s", 									\
				"Time", "CRC", "SRC", "DST", "DATA/ACK", "Length", "SeqNum",								\
				"State", "TCP SeqNum", "TCP AckNum");
		break;
	case NIST_ERROR_RATE_MODEL:
		sprintf(title, "%10s %10s %20s %20s %10s %8s %8s %10s %12s %12s", 								   \
				"Time", "CRC", "SRC", "DST", "DATA/ACK", "Length", "SeqNum", "SNR (dB)", "TCP SeqNum",     \
				"Tcp AckNum");
		break;
	}
	m_file << title << endl;
}

void Experiment::OpenTcpTraceFile (string fileName,  ChannelMode_t channelModel)
{
	string path = getcwd() + "/traces/" + fileName;
	char title [255];
	string lastField;					//Channel Model Dependent field (trace field)
	NS_LOG_DEBUG(path);
	m_tcpFile.open(path.c_str(), fstream::out);

	if (channelModel == HIDDEN_MARKOV_ERROR_MODEL)
		lastField = "State";
	else
		lastField = "SNR (dB)";

	sprintf (title, "%16s %8s %18s %18s %10s %10s %10s %10s %10s %10s %16s",    						\
			"Time", "CRC", "Source", "Destination", "RETX", 											\
			"Length","SeqNum", "TCP Seq", "TCP AckNum", "TCP flags",									\
			lastField.c_str());
	m_tcpFile << title << endl;
}

void Experiment::CloseTraceFile()
{
	NS_LOG_FUNCTION_NOARGS();
	if (m_file.is_open ())
		m_file.close();
	else
		NS_LOG_ERROR("Open file not found");

	if (m_tcpFile.is_open())
		m_tcpFile.close();
	else
		NS_LOG_ERROR("Open file not found");
}

void Experiment::TraceToFile(string line)
{
	NS_LOG_DEBUG(line);
	if(m_file)
		m_file << line << endl;
	else
		NS_LOG_ERROR ("No trace file opened. Please fix!!\n");
}

void Experiment::TraceToTcpFile(string line)
{
	NS_LOG_DEBUG(line);
	if (m_tcpFile)
		m_tcpFile << line << endl;
	else
		NS_LOG_ERROR("No TCP trace file opened. Please fix!!");
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
////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////     MAIN     ///////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

int main (int argc, char *argv[])
{
	Experiment exp_;
	UniformVariable ranvar;
	string outputTraceFileName = "NetworkCoding_";

	CommandLine cmd;
	int i;

	//Nodes definition
	u_int16_t sourceNumber = 2;
	u_int16_t sinkNumber = 2;
	u_int16_t routerNumber = 1;

	//Simulation parameters
	float distance = 5.0;			//Distance between nodes (in meters)
	u_int32_t numPackets = 10;
	u_int32_t packetLength = 1460;
	uint64_t interPacketTime = 1000;
//	u_int32_t run = 1;
//	u_int32_t runCounter;

	//Command Line: Number of transmitters and receivers setup
	cmd.AddValue ("Sources", "Number of source nodes deployed in the scenario", sourceNumber );
	cmd.AddValue ("Sinks", "Number of source nodes deployed in the scenario", sinkNumber );
	cmd.AddValue ("Routers", "Number of intermediate routers deployed in the scenario", routerNumber );
	cmd.AddValue ("Distance", "Distance (in meters) between two consecutive nodes", distance);
	cmd.AddValue ("NumPackets", "Total number of packets sent in the simulation", numPackets);
	cmd.AddValue ("PacketLength", "Number of bytes in each packet", packetLength);
	cmd.AddValue ("InterPacketTime", "Time (in microseconds) between two consecutive packets (application level)", interPacketTime);

	cmd.Parse(argc,argv);

	EnableLogging();
//	LogComponentEnable("NetworkCodingTestScenario", LOG_DEBUG);

	//Default attributes initialization
	//Wifi attributes
	Config::SetDefault ("ns3::WifiRemoteStationManager::NonUnicastMode",StringValue ("DsssRate2Mbps"));
	// Config::SetDefault ("ns3::WifiRemoteStationManager::RtsCtsThreshold", StringValue ("2200"));    		//Disable RTS/CTS transmission
	Config::SetDefault ("ns3::WifiRemoteStationManager::FragmentationThreshold", StringValue ("2200"));     //Disable fragmentation
	Config::SetDefault ("ns3::ConstantRateWifiManager::DataMode", StringValue ("DsssRate11Mbps"));
	Config::SetDefault ("ns3::ConstantRateWifiManager::ControlMode", StringValue ("DsssRate11Mbps"));	//WiFi Buffer Size
	Config::SetDefault ("ns3::WifiMacQueue::MaxPacketNumber", UintegerValue (100000));
	Config::SetDefault ("ns3::WifiRemoteStationManager::MaxSlrc", UintegerValue (4));

	GlobalValue::Bind ("ChecksumEnabled", BooleanValue (true));

	/////////-----------------------MAIN LOOP-----------------------/////////
	//Node initialization
	NodeContainer sourceNodeContainer, routerNodeContainer, sinkNodeContainer, globalNodeContainer;

	sourceNodeContainer.Create (sourceNumber);
	routerNodeContainer.Create (routerNumber);
	sinkNodeContainer.Create (sinkNumber);

	globalNodeContainer.Add(sourceNodeContainer);
	globalNodeContainer.Add(routerNodeContainer);
	globalNodeContainer.Add(sinkNodeContainer);

	//Prepare the Wifi NetDevices
	YansWifiPhyHelper wifiPhy = YansWifiPhyHelper::Default();			//Don't remove (Necessary at YansWifiPhy::EndReceive)
	YansWifiChannelHelper wifiChannel;

	//Set the propagation delay model
	wifiChannel.SetPropagationDelay("ns3::ConstantSpeedPropagationDelayModel");
	//Set the propagation loss model
//	wifiChannel.AddPropagationLoss("ns3::LogDistancePropagationLossModel");
	wifiChannel.AddPropagationLoss("ns3::RangePropagationLossModel", "MaxRange", DoubleValue (40.0) );

	wifiPhy.SetErrorRateModel("ns3::YansErrorRateModel");


	wifiPhy.SetChannel (wifiChannel.Create());
	WifiHelper wifi = WifiHelper::Default();
	wifi.SetStandard (WIFI_PHY_STANDARD_80211b);
	wifi.SetRemoteStationManager ("ns3::ConstantRateWifiManager");
	NqosWifiMacHelper wifiMac = NqosWifiMacHelper::Default();

	NetDeviceContainer wifiDevices = wifi.Install(wifiPhy, wifiMac, globalNodeContainer);

	//////////MOBILITY SECTION

	MobilityHelper mobility;

	//Source nodes positioning
	mobility.SetPositionAllocator ("ns3::GridPositionAllocator",
			"MinX", DoubleValue (0),
			"MinY", DoubleValue (0),
			"DeltaX", DoubleValue (distance),
			"DeltaY", DoubleValue (distance),
			"GridWidth", UintegerValue (sourceNumber),
			"LayoutType", StringValue ("ColumnFirst"));
	mobility.SetMobilityModel ("ns3::ConstantPositionMobilityModel");
	mobility.Install (sourceNodeContainer);

	//Routers positioning
	mobility.SetPositionAllocator ("ns3::GridPositionAllocator",
			"MinX", DoubleValue (distance),
			"MinY", DoubleValue (distance * (sourceNumber -1 ) / 2.0),
			"DeltaX", DoubleValue (distance),
			"DeltaY", DoubleValue (distance),
			"GridWidth", UintegerValue (routerNumber),
			"LayoutType", StringValue ("RowFirst"));
	mobility.SetMobilityModel ("ns3::ConstantPositionMobilityModel");
	mobility.Install (routerNodeContainer);

	//Sinks positioning
	mobility.SetPositionAllocator ("ns3::GridPositionAllocator",
			"MinX", DoubleValue (2.0 * distance),
			"MinY", DoubleValue (0),
			"DeltaX", DoubleValue (distance),
			"DeltaY", DoubleValue (distance),
			"GridWidth", UintegerValue (sinkNumber),
			"LayoutType", StringValue ("ColumnFirst"));
	mobility.SetMobilityModel ("ns3::ConstantPositionMobilityModel");
	mobility.Install (sinkNodeContainer);

	// Iterate our nodes and print their position.
	for (NodeContainer::Iterator j = globalNodeContainer.Begin ();
			j != globalNodeContainer.End (); ++j)
	{
		Ptr<Node> object = *j;
		Ptr<MobilityModel> position = object->GetObject<MobilityModel> ();
		NS_ASSERT (position != 0);
		Vector pos = position->GetPosition ();
		NS_LOG_UNCOND ("Node " << object->GetId() << " --> Position (" << pos.x << ", " << pos.y << ", " << pos.z << ")");
	}

	//////////END MOBILITY SECTION

	// Enable OLSR
	  OlsrHelper olsr;
	  Ipv4StaticRoutingHelper staticRouting;

	  Ipv4ListRoutingHelper list;
	  list.Add (staticRouting, 0);
	  list.Add (olsr, 10);

	//Upper layers initialization
	//Set the upper layers (default configuration)
	InternetStackHelper internet;
	internet.SetRoutingHelper(list);
	internet.Install (globalNodeContainer);

	//Define IP level
	Ipv4AddressHelper ipv4;
	NS_LOG_INFO("Assign IP Addresses.");
	ipv4.SetBase("10.0.0.0", "255.0.0.0");
	Ipv4InterfaceContainer ipInterfaceContainer = ipv4.Assign(wifiDevices);

	//TCP parameter set
	Config::SetDefault("ns3::TcpL4Protocol::SocketType", StringValue("ns3::TcpNewReno"));
	Config::SetDefault ("ns3::TcpSocket::SegmentSize", UintegerValue (1460));
	Config::SetDefault ("ns3::TcpSocket::RcvBufSize", UintegerValue (90000000));
	Config::SetDefault ("ns3::TcpSocket::SndBufSize", UintegerValue (90000000));
	uint16_t port = 50000;   									// Server Port

	TypeId tid = TypeId::LookupByName ("ns3::TcpSocketFactory");

	//////////SOCKET SECTION
	Ptr<Socket> sourceSocket [sourceNumber];			//Socket array that contains every source node socket
	Ptr<Socket> sinkSocket [sinkNumber];				//Socket array that contains every sink  node socket

    InetSocketAddress local = InetSocketAddress (Ipv4Address::GetAny (), port);			//Listen to any IP address
    std::vector <InetSocketAddress> dstAddressVector;

	for (i = 0; i < sinkNumber; i++)
	{
		sinkSocket [i] = Socket::CreateSocket (sinkNodeContainer.Get (i), tid);
		sinkSocket [i] ->  Bind (local);
		sinkSocket [i] -> Listen();

		InetSocketAddress temp = InetSocketAddress (ipInterfaceContainer.GetAddress(i + sourceNumber + routerNumber, 0), port);
		dstAddressVector.push_back(temp);
	}


	//Source Node creation and connection with their respective remotes
	for (i = 0; i < sourceNumber; i++)
	{
		sourceSocket [i] = Socket::CreateSocket (sourceNodeContainer.Get (i), tid);

		if (sourceNumber <= sinkNumber)
		{
			NS_ASSERT (!sourceSocket [i] -> Connect(dstAddressVector[i]));
		}
		else
			NS_ASSERT (!sourceSocket [i] -> Connect(dstAddressVector[ranvar.GetInteger(0, sinkNumber - 1)]));
	}


	////////END SOCKET SECTION

//	/////////////////////////////// CODING TEST ZONE //////////////////////////////////
//	Ptr<Packet> pkt1;
//	Ptr<Packet> pkt2;
//	Ptr<Packet> codedPkt;
//	Ptr<Packet> decodedPkt;
//	SimpleNetworkCoding simpleNetworkCoding;
//
//	pkt1 = simpleNetworkCoding.CreateRandomPayload(8);
//	pkt2 = simpleNetworkCoding.CreateRandomPayload(24);
//	codedPkt = simpleNetworkCoding.Encode(pkt1, pkt2);
//
//	decodedPkt = simpleNetworkCoding.Decode(codedPkt, pkt2);
//	/////////////////////////////// END CODING TEST ZONE ///////////////////////////////

	UniformVariable timeStart = UniformVariable (1.0, 10.0);
	exp_.SetPacketCounter(numPackets);

	for (i = 0; i < sourceNumber; i ++)
//	for (i = 0; i < 1; i ++)
	{
		Simulator::Schedule(Seconds(30 + timeStart.GetValue()), &Experiment::GenerateTraffic, &exp_, sourceSocket[i], packetLength, numPackets, MicroSeconds(interPacketTime));
	}

	Config::Connect ("/NodeList/*/DeviceList/*/Phy/State/RxOk", MakeCallback (&Experiment::PhyRxOkTrace, &exp_));
	Config::Connect ("/NodeList/*/DeviceList/*/Phy/State/RxError", MakeCallback (&Experiment::PhyRxErrorTrace, &exp_));

//	Config::Connect ("/NodeList/*/DeviceList/*/Mac/MacRx", MakeCallback(&Experiment::TraceTest, &exp_));
//	Config::Connect("/NodeList/*/$ns3::Ipv4L3Protocol/Rx",  MakeCallback(&Experiment::IpTraceTest, &exp_));


	//TCP trace file
	char temp[128];
	sprintf(temp,"%sTEST.tr", outputTraceFileName.c_str());

	if (tid.GetName() == "ns3::TcpSocketFactory")
		exp_.OpenTcpTraceFile(temp, BURSTY_ERROR_AUTO_REGRESSIVE_MODEL);
	else
		exp_.OpenTraceFile(temp, BURSTY_ERROR_AUTO_REGRESSIVE_MODEL);


	Simulator::Stop(Seconds(50));
	Simulator::Run();
	Simulator::Destroy();

	wifiPhy.EnablePcap ("NC_traces", sinkNodeContainer, true);

	//Print statistics
	NS_LOG_UNCOND("FER = " << exp_.GetPktsReceived() - exp_.GetPktsCorrect() << "/"  									\
			<< exp_.GetPktsReceived() << " = " << 																		\
			((double) exp_.GetPktsReceived() - (double) exp_.GetPktsCorrect())/(double)exp_.GetPktsReceived());

	for (i = 0; i < sourceNumber; i++)
	{
		sourceSocket[i] -> Close ();
	}

	for (i = 0; i < sinkNumber; i++)
	{
		sinkSocket[i] -> Close ();
	}

	return 0;
}

