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

#include "configure-scenario.h"
#include <sstream>
#include <algorithm>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <assert.h>

using namespace ns3;
using namespace std;

//const bool g_debug = true;  							//Temporal solution (only for debugging)

NS_LOG_COMPONENT_DEFINE ("ConfigureScenario");
NS_OBJECT_ENSURE_REGISTERED (ConfigureScenario);

ScenarioObjectContainer::ScenarioObjectContainer ()
{
	NS_LOG_FUNCTION(this);
}

ScenarioObjectContainer::~ScenarioObjectContainer ()
{
	NS_LOG_FUNCTION(this);
}

ConfigureScenario::ConfigureScenario () : m_portBase (50000)
{
	NS_LOG_FUNCTION(this);
	if (m_nodesVector.size ())
		m_nodesVector.clear ();
	if (m_channelFer.size ())
		m_channelFer.clear ();

	m_scenarioObjectContainer = CreateObject<ScenarioObjectContainer> ();
	m_configurationFile = CreateObject<ConfigurationFile> ();
	m_deployment = FILE_BASED;
	m_simulationChannel = SIM_RATE_ERROR;
	m_routingProtocol = RT_OLSR_PROTOCOL;
	m_transportProtocol = TCP_PROTOCOL;
	m_numPackets = 1000;
	m_packetLength = 512;
	m_networkCoding = false;
	m_fer = 0;
	m_propTracing = CreateObject<ProprietaryTracing> ();
    //	m_propTracing = SimulationSingleton <ProprietaryTracing>::Get ();

    m_scriptedBufferConfiguration = false;
    m_scriptedAckBufferConfiguration = false;
}

ConfigureScenario::~ConfigureScenario ()
{
	NS_LOG_FUNCTION(this);
	if (m_nodesVector.size ())
		m_nodesVector.clear ();
	if (m_channelFer.size ())
		m_channelFer.clear ();
}

TypeId
ConfigureScenario::GetTypeId (void) {
	static TypeId tid = TypeId ("ns3::ConfigureScenario")
	.SetParent<Object> ()
	.AddConstructor<ConfigureScenario> ()
	.AddAttribute ("DeploymentMode",
			"Define the mode to deploy the nodes over the scenario (file, code or random)",
			EnumValue(FILE_BASED),
			MakeEnumAccessor (&ConfigureScenario::m_deployment),
			MakeEnumChecker (NO_ERROR_MODEL, "NO_ERROR_MODEL",
					BEAR_MODEL, "BEAR_MODEL",
					SHADOWING_MODEL, "SHADOWING_MODEL"))
//	.AddAttribute ("SimulationChannel",
//			"Type of simulation carried out (RateErrorModel, NIST/YANS, HMM or BEAR)",
//			EnumValue (SIM_BEAR_MODEL),
//			MakeEnumAccessor (&ConfigureScenario::m_simulationChannel),
//			MakeEnumChecker (SIM_RATE_ERROR, "SIM_RATE_MODEL",
//					SIM_DEFAULT_MODEL, "SIM_DEFAULT_MODEL",
//					SIM_HMM_MODEL, "SIM_HMM_MODEL",
//					SIM_BEAR_MODEL, "SIM_BEAR_MODEL"))
	.AddAttribute ("RoutingProtocol",
			"Routing protocol used over the scenario",
			EnumValue (RT_OLSR_PROTOCOL),
			MakeEnumAccessor (&ConfigureScenario::m_routingProtocol),
			MakeEnumChecker (RT_POPULATE_ROUTING_TABLES, "RT_POPULATE_ROUTING_TABLES",
					RT_STATIC_ROUTING_PROTOCOL, "RT_STATIC_ROUTING_PROTOCOL",
					RT_AODV_PROTOCOL, "RT_AODV_PROTOCOL",
					RT_OLSR_PROTOCOL, "RT_OLSR_PROTOCOL"))
//	.AddAttribute ("TransportProtocol",
//			"Define the transport protocol to deploy at the transport layer (TCP or UDP)",
//			EnumValue (TCP_PROTOCOL),
//			MakeEnumAccessor (&ConfigureScenario::m_transportProtocol),
//			MakeEnumChecker (TCP_PROTOCOL, "TCP_PROTOCOL",
//					UDP_PROTOCOL, "UDP_PROTOCOL"))
	.AddAttribute ("FER",
			"FER value for those links which are prone to errors",
			DoubleValue (0.0),
			MakeDoubleAccessor (&ConfigureScenario::m_fer),
			MakeDoubleChecker <double> ())
	.AddAttribute ("NumPackets",
			"Number of packets sent by the transmitter node",
			UintegerValue (10000),
			MakeUintegerAccessor (&ConfigureScenario::m_numPackets),
			MakeUintegerChecker<u_int32_t> ())
	.AddAttribute ("PacketLength",
			"Packet length (at application layer)",
			UintegerValue (512),
			MakeUintegerAccessor (&ConfigureScenario::m_packetLength),
			MakeUintegerChecker<u_int16_t> ())
	       ;
  return tid;
}

bool ConfigureScenario::ParseConfigurationFile (string confFile)
{
	NS_LOG_FUNCTION_NOARGS();
	string value;

	assert (m_configurationFile->LoadConfig (m_configurationFile->SetConfigFileName("/src/scenario-creator/config/", confFile)) != -1);

	//Get the scenario configuration from the file
	assert (m_configurationFile->GetKeyValue("SCENARIO", "RUN", value) >= 0);
	m_runs = atoi (value.c_str());
	assert (m_configurationFile->GetKeyValue("SCENARIO", "RUN_OFFSET", value) >= 0);
	m_runOffset = atoi (value.c_str());
	assert (m_configurationFile->GetKeyValue("SCENARIO", "NUM_PACKETS", value) >= 0);
	m_numPackets = atoi (value.c_str());

	assert (m_configurationFile->GetKeyValue("SCENARIO", "PACKET_LENGTH", value) >= 0);
	m_packetLength = atoi (value.c_str());
	assert (m_configurationFile->GetKeyValue("SCENARIO", "FER", value) >= 0);
	m_configurationFile->GetKeyValue("SCENARIO", "FER", value);
	m_fer = atof (value.c_str());

	//Get the stack configuration from the file
	assert (m_configurationFile->GetKeyValue("STACK", "TRANSPORT_PROTOCOL", value ) >= 0);
	if (!value.compare ("TCP"))
		m_transportProtocol = TCP_PROTOCOL;
	else if (!value.compare ("UDP"))
		m_transportProtocol = UDP_PROTOCOL;
	else if (!value.compare ("MPTCP"))
		m_transportProtocol = MPTCP_PROTOCOL;
    else if (!value.compare("NSC"))
        m_transportProtocol = NSC_TCP_PROTOCOL;
    else {
           NS_ABORT_MSG("Incorrect transport protocol. Please fix the configuration file");
       }

	assert(m_configurationFile->GetKeyValue("STACK", "ROUTING_PROTOCOL", value) >= 0);
	if (!value.compare("POPULATE"))
		m_routingProtocol = RT_POPULATE_ROUTING_TABLES;
	else if (!value.compare("STATIC"))
	{
		m_routingProtocol = RT_STATIC_ROUTING_PROTOCOL;
		//Grab the name of the static routing table file
		assert(m_configurationFile->GetKeyValue("STACK", "STATIC_ROUTING_TABLE", value) >= 0);
		m_staticRoutingFileName = value;
	}
	else if (!value.compare("STATIC_GRAPH"))
	{
		m_routingProtocol = RT_STATIC_GRAPH_ROUTING_PROTOCOL;
		assert(m_configurationFile->GetKeyValue("STACK", "STATIC_ROUTING_TABLE", value) >= 0);
		m_staticRoutingFileName = value;
	}

	else if (!value.compare("OLSR"))
		m_routingProtocol = RT_OLSR_PROTOCOL;
	else if (!value.compare("AODV"))
		m_routingProtocol = RT_AODV_PROTOCOL;
	else {
		NS_ABORT_MSG("Incorrect routing protocol. Please fix the configuration file");
	}

    assert(m_configurationFile->GetKeyValue("STACK", "PROPAGATION_LOSS_MODEL", value) >= 0);
    if (!value.compare("RATE"))
        m_simulationChannel = SIM_RATE_ERROR;
    else if (!value.compare("DEFAULT"))
        m_simulationChannel = SIM_DEFAULT_MODEL;
    else if (!value.compare("HMM"))
        m_simulationChannel = SIM_HMM_MODEL;
    else if (!value.compare("BEAR"))
        m_simulationChannel = SIM_BEAR_MODEL;
    else if (!value.compare("MANUAL"))
    	m_simulationChannel = SIM_MANUAL_MODEL;
    else {
        NS_ABORT_MSG("Incorrect channel model. Please fix the configuration file");
    }

	assert (m_configurationFile->GetKeyValue("STACK", "NODE_DEPLOYMENT", value) >= 0);
	if (!value.compare ("CODE"))		//Nodes deployed though the code... To be implemented
		m_deployment = CODE_BASED;
	else if (!value.compare ("FILE"))	//Nodes deployed by means of an extern file. In this case, we will read the needed files and call the method which will create the corresponding scenario.
	{
		string scenarioConfig, channelConfig;
		m_deployment = FILE_BASED;
		assert (m_configurationFile->GetKeyValue("STACK", "SCENARIO_DESCRIPTION", scenarioConfig) >= 0);
		assert (m_configurationFile->GetKeyValue("STACK", "CHANNEL_CONFIGURATION", channelConfig) >= 0);
		m_outputTraceFileName = channelConfig;			//Needed to compose the trace file name
		m_scenarioConfig = scenarioConfig;
//		ParseScenarioDescriptionFile (scenarioConfig, channelConfig);
	}
	else if (!value.compare ("RANDOM"))
	{
		int16_t nodesNumber, dataFlows;
		double maxX, maxY;
		m_deployment = RANDOM_DEPLOYMENT;
		assert (m_configurationFile->GetKeyValue("STACK", "NODES_NUMBER", value) >= 0);
		nodesNumber = atoi (value.c_str());
		assert (m_configurationFile->GetKeyValue("STACK", "MAX_X", value) >= 0);
		maxX = atof (value.c_str());
		assert (m_configurationFile->GetKeyValue("STACK", "MAX_Y", value) >= 0);
		maxY = atof (value.c_str());
		assert (m_configurationFile->GetKeyValue("STACK", "DATA_FLOWS", value) >= 0);
		dataFlows = atoi (value.c_str());

		GenerateRandomScenario (nodesNumber, maxX, maxY, dataFlows);

	}

	//Network Coding Stack
	assert (m_configurationFile->GetKeyValue("NETWORK_CODING", "ENABLED", value ) >= 0);
	m_networkCoding = atoi (value.c_str());

	//Multipath

	assert (m_configurationFile->GetKeyValue("MULTIPATH", "ENABLED", value ) >= 0);
	m_multipath = atoi (value.c_str());
	if (m_multipath)
	{
		assert (m_configurationFile->GetKeyValue("MULTIPATH", "SUBFLOW", value ) >= 0);
		m_subflowNumber = atoi (value.c_str());
		assert (m_configurationFile->GetKeyValue("MULTIPATH", "DIFFERENT_CHANNEL", value ) >= 0);
		m_diffChannel = atoi (value.c_str());
		assert (m_configurationFile->GetKeyValue("MULTIPATH", "REORDERING_PROTOCOL", value ) >= 0);
		m_reorderingProtocol = atoi (value.c_str());
		assert (m_configurationFile->GetKeyValue("MULTIPATH", "CONGESTION_CONTROL", value ) >= 0);
		m_congestionControl = atoi (value.c_str());
	}

    //At last, get the output generation options (i.e. tracing and/or verbose)
    assert(m_configurationFile->GetKeyValue("OUTPUT", "NETWORK_CODING_TRACING", value) >= 0);
    m_networkCodingTracing = atoi(value.c_str());

    assert(m_configurationFile->GetKeyValue("OUTPUT", "NETWORK_CODING_SHORT_TRACING", value) >= 0);
    m_networkCodingShortTracing = atoi(value.c_str());

    assert(m_configurationFile->GetKeyValue("OUTPUT", "TRACING", value) >= 0);
    m_tracing = atoi(value.c_str());

    assert (m_configurationFile->GetKeyValue("OUTPUT", "TRANSPORT_TRACING", value ) >= 0);
    m_transTracing = atoi (value.c_str());

    assert (m_configurationFile->GetKeyValue("OUTPUT", "TRANSPORT_SHORT_TRACING", value ) >= 0);
    m_transportShortTracing = atoi (value.c_str());

    assert (m_configurationFile->GetKeyValue("OUTPUT", "WINDOW_RTT_TRACING", value ) >= 0);
    m_windowTracing = atoi (value.c_str());

    assert(m_configurationFile->GetKeyValue("OUTPUT", "PCAP_TRACING", value) >= 0);
    m_pcapTracing = atoi(value.c_str());

    assert(m_configurationFile->GetKeyValue("OUTPUT", "ASCII_TRACING", value) >= 0);
    m_asciiTracing = atoi(value.c_str());

    assert(m_configurationFile->GetKeyValue("OUTPUT", "ROUTING_TABLES", value) >= 0);
    m_printRoutingTables = atoi(value.c_str());

    assert(m_configurationFile->GetKeyValue("OUTPUT", "VERBOSE", value) >= 0);
    m_verbose = atoi(value.c_str());


	return true;
}

bool ConfigureScenario::ParseScenarioDescriptionFile (string confFile, string channelFile)
{
	NS_LOG_FUNCTION_NOARGS();
	string pathFile = "/src/scenario-creator/scenarios/";
	string lineString;
	fstream scenarioConfFile, scenarioChannelFile;
	//File handle variables
	int i;
	char cwdBuf [FILENAME_MAX];
	char line[256];
	u_int8_t lineNumber = 0;
	u_int8_t ferValue;
	vector<u_int8_t> ferVector;
	NodeDescription_t *nodeDescriptor;

	confFile = std::string (getcwd (cwdBuf, FILENAME_MAX)) + pathFile + confFile;
	channelFile = std::string (getcwd (cwdBuf, FILENAME_MAX)) +  pathFile + channelFile;

	NS_LOG_DEBUG("Node description file: " << confFile << "\nChannel description file: " << channelFile );

	scenarioConfFile.open ((const char *) confFile.c_str(), ios::in);
	scenarioChannelFile.open ((const char *) channelFile.c_str(), ios::in);

	//Parsing the scenario description (deployment of the nodes) from the configuration file
	//File format
	//#No.	X	Y	Z	TX	RX	RT	CN
	//  1	0	0	0	 6	 0 	 0	 1

	 NS_ASSERT_MSG(scenarioConfFile, "File (Channel FER file) " << channelFile << " not found: Please fix");

	while(scenarioConfFile.getline (line, 256))
	{
		lineString = string (line);
		if ((lineString.find ('#') == string::npos) || (lineString.find ('#') != 0))     //Ignore those lines which begins with the '#' character at its beginning
		{
			nodeDescriptor = new NodeDescription_t;
			//Temporal variables (For sscanf compatibilities)
            int nodeId, destNodeId, receiver, codingRouter, forwarder;
            float xCoord, yCoord, zCoord;

            sscanf(lineString.c_str(), "%d %f %f %f %d %d %d %d", &nodeId, &xCoord, &yCoord, &zCoord, &destNodeId, &receiver, &codingRouter, &forwarder);
            //Search for the node ID into the vector; if it is not found, create the element; otherwise, just add the new flow
            if (m_nodesVector.size()) //No elements --> Create add the first one
            {
                bool found = false;
                //Check if the node is already located into the vector; if so, just add the new flow destination

                for (i = 0; i < (int) m_nodesVector.size(); i++) {
                    if (nodeId - 1 == (int) m_nodesVector[i].nodeId) //If the node is repeated, we only update the destination container
                    {
                        found = true;
                        m_nodesVector[i].destinations.insert(destNodeId - 1);
                        continue;
                    }
                }

                if (found) {
                    continue;
                } else {
                    goto insert_element;
                }

            } else {
                goto insert_element;
            }

insert_element:
            //If the node ID is brand new information, we will create a NodeDescription_t object to store the corresponding information

            nodeDescriptor = new NodeDescription_t;
            nodeDescriptor->nodeId = (u_int8_t) nodeId - 1;

            nodeDescriptor->coordinates.x = xCoord;
            nodeDescriptor->coordinates.y = yCoord;
            nodeDescriptor->coordinates.z = zCoord;
            if (destNodeId) {
                nodeDescriptor->transmitter = true;
                nodeDescriptor->destNodeId = destNodeId - 1;
                nodeDescriptor->destinations.insert(destNodeId - 1);
            } else {
                nodeDescriptor->transmitter = false;
                nodeDescriptor->destNodeId = 0;
            }
            nodeDescriptor->receiver = receiver;
            nodeDescriptor->codingRouter = codingRouter;
            nodeDescriptor->forwarder = forwarder;
            m_nodesVector.push_back(*nodeDescriptor);

            delete nodeDescriptor;
		}
	}


	//Parsing the channel FER configuration from the file for every channel link
	//
	 NS_ASSERT_MSG(scenarioChannelFile, "File (Channel FER file) " << channelFile << " not found: Please fix");

	while(scenarioChannelFile.getline (line, 256))
	{
		lineString = string (line);
		if ((lineString.find('#') == string::npos) || (lineString.find('#') != 0))     //Ignore those lines which begins with the '#' character at its beginning
		{
			for(i = 0; i < (int) lineString.size(); i++)
			{
				if (line [i] != ' ' && line [i] != '\t')
				{
					ferValue = atoi (line + i);
					// The FER value must be within the interval [0,10]
					 NS_ASSERT_MSG(ferValue <= 10.0, "All the FER values must be within [0,1]");
					ferVector.push_back (ferValue);
				}
			}
			m_channelFer.insert (pair<int, vector <u_int8_t> > (lineNumber, ferVector));
			lineNumber++;
			ferVector.clear ();
		}
	}

	m_nodesNumber = m_nodesVector.size();

	//DEBUGGING
	#ifdef NS3_LOG_ENABLE
    if (g_debug) {
        char message[255];
        printf("---Deployment of nodes over the scenario---\n");
        //Show nodes deployment and functionalities
        for (i = 0; i < (int) m_nodesVector.size(); i++) {
            sprintf(message, "Node %2d: [%3.1f, %3.1f, %3.1f]  TX:%2d  RX:%1d  RT:%1d  CN:%1d",   						\
					m_nodesVector[i].nodeId, m_nodesVector[i].coordinates.x, m_nodesVector[i].coordinates.y,            \
					m_nodesVector[i].coordinates.z, m_nodesVector[i].destNodeId, m_nodesVector[i].receiver,      		\
					m_nodesVector[i].codingRouter, m_nodesVector[i].forwarder);
            printf("%s\n", message);
        }

        //Show channel FER matrix
        channelFerIter_t iter;
        //Print the m_transitionMatrix map
        printf("---Channel FER configuration---\n");
        for (iter = m_channelFer.begin(); iter != m_channelFer.end(); iter++) {
            printf("Node %2d  -  ", iter->first);
            for (i = 0; i < (int) (iter->second).size(); i++) {
                printf("%2d   ", (iter->second)[i]);
            }
            printf("\n");
        }
    }

#endif   //NS3_LOG_ENABLE
    scenarioConfFile.close();
    scenarioChannelFile.close();

    assert (m_nodesNumber == m_nodesVector.size());

    return true;
}

void ConfigureScenario::GenerateRandomScenario(u_int16_t nNodes, double maxX, double maxY, u_int16_t dataFlows)
{
    NS_LOG_FUNCTION(nNodes << maxX << maxY);

    UniformVariable randomLocationX(0.0, maxX); //Randomly locate the nodes
    UniformVariable randomLocationY(0.0, maxY); //Randomly locate the nodes
    UniformVariable randomFlow(0, nNodes - 1); //Choose sources/sinks
    u_int16_t i, j, tx, rx;
    NodeDescription_t *nodeDescriptor;
    vector<u_int8_t> temp;

    std::multiset <std::pair <u_int16_t, u_int16_t> > flows;
    std::multiset <std::pair <u_int16_t, u_int16_t> >::iterator flowsIter;

    for (i = 0; i < nNodes; i++) {
        nodeDescriptor = new NodeDescription_t;
        nodeDescriptor->nodeId = i;
        nodeDescriptor->coordinates.x = randomLocationX.GetValue();
        nodeDescriptor->coordinates.y = randomLocationY.GetValue();
        nodeDescriptor->coordinates.z = 0.0; //2-D scenario
        nodeDescriptor->codingRouter = true; //By default, every network element can carry out coding/decoding decisions
        nodeDescriptor->forwarder = true;
        nodeDescriptor->transmitter = false;
        nodeDescriptor->receiver = false;
        NS_LOG_DEBUG("Node " << i << ": (" << nodeDescriptor->coordinates.x << "," << nodeDescriptor->coordinates.y << "," << nodeDescriptor->coordinates.z << ")");

        m_nodesVector.push_back(*nodeDescriptor);
        delete nodeDescriptor;
    }
    m_nodesNumber = m_nodesVector.size();

    //Configure the transmitters and receivers, according to the node-ID
    // Important- A flow cannot start and end on the same node
    i = 0;
    while (flows.size() < dataFlows) {
        tx = randomFlow.GetInteger(0, nNodes - 1);
        rx = randomFlow.GetInteger(0, nNodes - 1);

        if (tx != rx) {
            flowsIter = flows.insert(pair <u_int16_t, u_int16_t > (tx, rx));
            NS_LOG_DEBUG("Data flow: (" << (int) flowsIter->first << "," << "" << (int) flowsIter->second << ")");
            i++;
            if (!m_nodesVector[tx].transmitter)
                m_nodesVector[tx].transmitter = true;
            if (!m_nodesVector[rx].receiver)
                m_nodesVector[rx].receiver = true;
            m_nodesVector[tx].destinations.insert(rx);
            m_nodesVector[tx].destNodeId = rx;
        }
    }

    //Configure the channel --> Every link will be prone to errors (this is equivalent to set a '5' in each element of the NxN matrix
    for (i = 0; i < m_nodesNumber; i++) {
        for (j = 0; j < m_nodesNumber; j++) {
            temp.push_back(5);
        }
        m_channelFer.insert(pair<int, vector<u_int8_t> > (j, temp));
        temp.clear();
    }

    //Test
    for (i = 0; i < (u_int16_t) m_nodesVector.size(); i++) {
        NS_LOG_DEBUG("Node " << i << ": (" << m_nodesVector[i].coordinates.x << "," << m_nodesVector[i].coordinates.y << "," << m_nodesVector[i].coordinates.z << ") TX: "   \
				<< (int) m_nodesVector[i].transmitter << " RX: " << (int) m_nodesVector[i].receiver);
    }
}

void ConfigureScenario::Init ()
{
	NS_LOG_FUNCTION_NOARGS();
	int i, j;
	// Mobility-related variables
	MobilityHelper mobilityHelper;
	Ptr <ListPositionAllocator> listPositionAllocator = CreateObject<ListPositionAllocator> ();

	ParseScenarioDescriptionFile (m_scenarioConfig, m_outputTraceFileName);


    Config::SetDefault ("ns3::WifiRemoteStationManager::NonUnicastMode", StringValue("DsssRate2Mbps"));
    //	Config::SetDefault ("ns3::YansWifiPhy::TxPowerStart", DoubleValue(0.0));
    //	Config::SetDefault ("ns3::YansWifiPhy::TxPowerEnd", DoubleValue(0.0));
    Config::SetDefault ("ns3::YansWifiPhy::CcaMode1Threshold", DoubleValue(-150.0)); //CS power level

    //We are making the arp cache not to be refreshed
    Config::SetDefault ("ns3::ArpCache::AliveTimeout", TimeValue(Seconds(10000)));
    Config::SetDefault ("ns3::ArpCache::DeadTimeout", TimeValue(Seconds(10000)));

    // Config::SetDefault ("ns3::WifiRemoteStationManager::RtsCtsThreshold", StringValue ("2200"));    		//Disable RTS/CTS transmission
    Config::SetDefault ("ns3::WifiRemoteStationManager::FragmentationThreshold", StringValue("2200")); 		//Disable fragmentation
    Config::SetDefault ("ns3::ConstantRateWifiManager::DataMode", StringValue("DsssRate11Mbps")); //
    Config::SetDefault ("ns3::ConstantRateWifiManager::ControlMode", StringValue("DsssRate11Mbps")); //
    Config::SetDefault ("ns3::WifiMacQueue::MaxPacketNumber", UintegerValue(100000)); 						//Maximum number of packets supported by the Wifi MAC buffer
    Config::SetDefault ("ns3::WifiRemoteStationManager::MaxSlrc", UintegerValue(4)); 						//Maximum number of transmission attempts
    Config::SetDefault ("ns3::WifiNetDevice::Mtu", UintegerValue(1512)); //


    //IP layer default options
//    Config::SetDefault ("ns3::Ipv4L3Protocol::DefaultTtl", UintegerValue (4));

	// TCP Attributes
	if (m_transportProtocol == TCP_PROTOCOL)
	{
        //Enable/disable NSC (Kernel's TCP handling)
    	Config::SetDefault ("ns3::TcpSocket::TcpNoDelay", BooleanValue(true));   				//Does not seem it's working
    	//  Config::SetDefault ("ns3::TcpSocket::SegmentSize", UintegerValue (1460));
    	u_int16_t length=std::min (m_packetLength,(u_int16_t) 1460);
        Config::SetDefault("ns3::TcpSocket::SegmentSize", UintegerValue(length));
        Config::SetDefault("ns3::TcpSocket::RcvBufSize", UintegerValue(90000000));
        Config::SetDefault("ns3::TcpSocket::SndBufSize", UintegerValue(90000000));

	}//NSC
	else if (m_transportProtocol == NSC_TCP_PROTOCOL) {
		m_scenarioObjectContainer->m_internetStackHelper.SetTcp("ns3::NscTcpL4Protocol", "Library", StringValue("liblinux2.6.26.so"));
		Config::Set("/NodeList/*/$ns3::Ns3NscStack<linux2.6.26>/net.inet.tcp.mssdflt", UintegerValue(m_packetLength));
		Config::Set("/NodeList/*/$ns3::Ns3NscStack<linux2.6.26>/net.inet.tcp.delayed_ack", UintegerValue(0)); //Disable Nagle's algorithm
		Config::SetDefault("ns3::TcpSocket::RcvBufSize", UintegerValue(90000000));
		Config::SetDefault("ns3::TcpSocket::SndBufSize", UintegerValue(90000000));
	}
	else if (m_transportProtocol == MPTCP_PROTOCOL)
	{
//		Config::SetDefault ("ns3::MpTcpSocket::SegmentSize", UintegerValue (1000));
		Config::Set("/NodeList/[i]/DeviceList/[i]/$ns3::AlohaNoackNetDevice/Phy/$ns3::TcpSocket/SegmentSize", UintegerValue(m_packetLength));
	    Config::SetDefault ("ns3::TcpSocket::RcvBufSize", UintegerValue (90000000));
		Config::SetDefault ("ns3::TcpSocket::SndBufSize", UintegerValue (90000000));
	} // UDP Attributes
	else
		Config::SetDefault ("ns3::UdpSocket::RcvBufSize", UintegerValue (90000000));

//	GlobalValue::Bind ("ChecksumEnabled", BooleanValue (true));

	// Create the nodes
	m_scenarioObjectContainer->m_nodeContainer.Create(m_nodesNumber);

	// Create the nodes, update the m_nodesVector information and instance the node's mobility objects
	for( i = 0 ; i < (int) NodeList().GetNNodes() ; i ++ ) {
		m_nodesVector[i].node = NodeList().GetNode(i);
		listPositionAllocator->Add(m_nodesVector[i].coordinates);
	}


    // Install the mobility-related issues
    mobilityHelper.SetPositionAllocator(listPositionAllocator);
    mobilityHelper.SetMobilityModel("ns3::ConstantPositionMobilityModel");
    mobilityHelper.Install(m_scenarioObjectContainer->m_nodeContainer);

    // Wifi configuration --> The following propagation and loss models will be held in every channel configuration
    m_scenarioObjectContainer->m_yansWifiPhyHelper = YansWifiPhyHelper::Default();
    m_scenarioObjectContainer->m_yanswifiChannelHelper.SetPropagationDelay("ns3::ConstantSpeedPropagationDelayModel");

    SetChannel();

    //// End MatrixPropagationLossModel setup

    //WiFi configuration
    m_scenarioObjectContainer->m_yansWifiPhyHelper.SetChannel(m_scenarioObjectContainer->m_yanswifiChannelHelper.Create());
    m_scenarioObjectContainer->m_wifiHelper.Default();
    m_scenarioObjectContainer->m_wifiHelper.SetStandard(WIFI_PHY_STANDARD_80211b);
    m_scenarioObjectContainer->m_wifiHelper.SetRemoteStationManager("ns3::ConstantRateWifiManager");
    m_scenarioObjectContainer->m_nQosWifiMacHelper = m_scenarioObjectContainer->m_nQosWifiMacHelper.Default(); //By default, configure the nodes in AdHoc mode

    m_scenarioObjectContainer->m_netDeviceContainer = m_scenarioObjectContainer->m_wifiHelper.Install(m_scenarioObjectContainer->m_yansWifiPhyHelper,
            m_scenarioObjectContainer->m_nQosWifiMacHelper, m_scenarioObjectContainer->m_nodeContainer);


	//Set the upper layer (default configuration)
	//Install the IP stack

    if (m_multipath){
    	m_scenarioObjectContainer->m_internetStackHelper.SetTcp ("ns3::MpTcpL4Protocol");
    }

	m_scenarioObjectContainer->m_internetStackHelper.Install (m_scenarioObjectContainer->m_nodeContainer);

	//Network Coding class implementation
	////////////////Network Coding setup
	if (m_networkCoding)
	{
		string typeId;
		assert(m_configurationFile->GetKeyValue("NETWORK_CODING", "PROTOCOL", typeId) >= 0);

		//Set default parameters for the NetworkCodingBuffer, inherent to the SimpleNetworkCoding class
		if (typeId == "SimpleNetworkCoding") {
			string aux;
			bool embeddedAcks;

			if (!m_scriptedBufferConfiguration)
			{
				assert(m_configurationFile->GetKeyValue("NETWORK_CODING", "BUFFER_SIZE", aux) >= 0);
				m_ncBufferSize = (u_int32_t) atoi(aux.c_str());
				assert(m_configurationFile->GetKeyValue("NETWORK_CODING", "BUFFER_TIMEOUT", aux) >= 0);
				m_ncBufferTimeout = MilliSeconds(atoi(aux.c_str()));
				assert(m_configurationFile->GetKeyValue("NETWORK_CODING", "MAX_CODED_PACKETS", aux) >= 0);
				m_ncMaxCodedPackets = (u_int8_t) atoi(aux.c_str());
			}

			m_scenarioObjectContainer->m_networkCodingHelper.SetNetworkCodingBuffer(m_ncBufferTimeout, m_ncBufferSize, m_ncMaxCodedPackets);
			m_scenarioObjectContainer->m_networkCodingHelper.Install(m_scenarioObjectContainer->m_nodeContainer, typeId);

			//NC ACK encapsulation scheme
			assert(m_configurationFile->GetKeyValue ("NETWORK_CODING", "EMBEDDED_ACKS", aux) >= 0);
			embeddedAcks = (u_int8_t) atoi (aux.c_str ());
			m_scenarioObjectContainer->m_networkCodingHelper.SetEmbeddedAckScheme (embeddedAcks);

			if (embeddedAcks)
			{
				if (!m_scriptedAckBufferConfiguration)
				{
					assert(m_configurationFile->GetKeyValue("NETWORK_CODING", "ACK_BUFFER_SIZE", aux) >= 0);
					m_ackBufferSize = (u_int32_t) atoi(aux.c_str());

					assert(m_configurationFile->GetKeyValue("NETWORK_CODING", "ACK_STORAGE_TIME", aux) >= 0);
					m_ackBufferTimeout = MilliSeconds(atoi(aux.c_str()));

				}
			}
			else
			{
				m_ackBufferSize = 0;
				m_ackBufferTimeout = MilliSeconds (0);
			}
			//Update tracing parameters
			m_scenarioObjectContainer->m_networkCodingHelper.SetAckBufferParameters (m_ackBufferTimeout, m_ackBufferSize);

			// End of NC ACK encapsulation scheme setup

			//Connect to callbacks and initialize the buffers (they have different tasks according to their functionality: transmitter, receiver or coding node)
			for (i = 0; i < (int) m_scenarioObjectContainer->m_networkCodingHelper.GetNetworkCodingList().size(); i++) {
				Ptr <SimpleNetworkCoding> aux = DynamicCast<SimpleNetworkCoding > (m_scenarioObjectContainer->m_networkCodingHelper.GetNetworkCodingList()[i]);
				NetworkCodingBuffer buffer= aux->GetNetworkCodingBuffer ();

				//Make sure we are handling the correct node
				assert(aux->GetNode() == m_nodesVector[i].node);

				//Tune the input packet pool buffer parameters according to the node operation
				if (m_nodesVector[i].transmitter) {
					aux->SetNetworkCodingBufferParameters(m_ncBufferTimeout, 0, m_ncMaxCodedPackets);
					aux->SetTransmitterNode(true);
				}
				if (m_nodesVector[i].receiver) {
					aux->SetNetworkCodingBufferParameters(m_ncBufferTimeout, 0, m_ncMaxCodedPackets);
					aux->SetReceiverNode(true);
				}
				if (m_nodesVector[i].codingRouter) //The coding router will be the only network element that implements the input packet pool
				{
					aux->SetNetworkCodingBufferParameters(m_ncBufferTimeout, m_ncBufferSize, m_ncMaxCodedPackets);
					aux->SetCodingNode(true);
				}
				if (m_nodesVector[i].forwarder) {
					aux->SetForwardingNode (true);
				}

				//Configuring the ACK buffer parameters (no matter the node's role)
				aux->SetEncapsulationAckBufferParameters (m_ackBufferTimeout, m_ackBufferSize);

				//Connect to the Network Coding Trace System
//				if (m_networkCodingTracing)
//					aux->SetSimpleNetworkCodingCallback (MakeCallback (&ProprietaryTracing::NetworkCodingTrace, m_propTracing));
			}
		}
	}

	 ////////End of Network Coding layer configuration

    //Network layer configuration--> 2 possibilities: If Network Coding enabled, set an IP address for each NetworkCodingNetDevice; otherwise, assign the addresses to the default WifiNetDevices
	//Note: This concrete scenario will only create a unique network for all the nodes.

	//	 TCP Attributes
		if (m_multipath && m_transportProtocol == MPTCP_PROTOCOL)
		{
				for(int i=1; i <= (int) m_subflowNumber; i++)
				{
				   m_scenarioObjectContainer->m_netDeviceContainer = m_scenarioObjectContainer->m_wifiHelper.Install (m_scenarioObjectContainer->m_yansWifiPhyHelper,
							m_scenarioObjectContainer->m_nQosWifiMacHelper, m_scenarioObjectContainer->m_nodeContainer);
			       std::stringstream netAddr;
			       netAddr << "10.1." << (i) << ".0";
			       string str = netAddr.str();
				   m_scenarioObjectContainer->m_ipv4AddressHelper.SetBase(str.c_str(), "255.255.255.0");
				   Ipv4InterfaceContainer interface= m_scenarioObjectContainer->m_ipv4AddressHelper.Assign(m_scenarioObjectContainer->m_netDeviceContainer);
				   m_scenarioObjectContainer->m_ipv4InterfaceContainer.insert(m_scenarioObjectContainer->m_ipv4InterfaceContainer.end(),interface);

				   char buf[90];
				   sprintf(buf,"/NodeList/*/DeviceList/%d/$ns3::WifiNetDevice/Phy/$ns3::YansWifiPhy/ChannelNumber", i);

				   int k; //Establecer el mismo canal para los subflujos o diferente
				   if (m_diffChannel)
					   k = (i+6) % 14;
				   else
					   k=1;

				   Config::Set (buf, UintegerValue (k));
				}
		}
		else
		{
			m_scenarioObjectContainer->m_netDeviceContainer = m_scenarioObjectContainer->m_wifiHelper.Install (m_scenarioObjectContainer->m_yansWifiPhyHelper,
													m_scenarioObjectContainer->m_nQosWifiMacHelper, m_scenarioObjectContainer->m_nodeContainer);
			m_scenarioObjectContainer->m_ipv4AddressHelper.SetBase("10.0.0.0", "255.255.0.0");
			Ipv4InterfaceContainer interface= m_scenarioObjectContainer->m_ipv4AddressHelper.Assign(m_scenarioObjectContainer->m_netDeviceContainer);
			m_scenarioObjectContainer->m_ipv4InterfaceContainer.insert(m_scenarioObjectContainer->m_ipv4InterfaceContainer.end(),interface);
		}

		//	//---------------Configure Routing---------------
		ConfigureRoutingProtocol();


	//Check interfaces (delete after test)
	for (i = 0; i < (int) m_scenarioObjectContainer->m_nodeContainer.GetN() ; i++)
	{
		Ptr<Ipv4> ipv4 = m_scenarioObjectContainer->m_nodeContainer.Get(i)->GetObject<Ipv4> ();
		Ptr<ConstantPositionMobilityModel> position = m_scenarioObjectContainer->m_nodeContainer.Get(i)->GetObject <ConstantPositionMobilityModel> ();
		NS_LOG_DEBUG ("Node " << i << " Position --> " << position->GetPosition() );
		for (u_int32_t k = 0; k < m_scenarioObjectContainer->m_nodeContainer.Get(i)->GetNDevices(); k++)
		{
			NS_LOG_DEBUG (" - Device " << k << " " << m_scenarioObjectContainer->m_nodeContainer.Get(i)->GetDevice(k)->GetInstanceTypeId() << " "
					<< m_scenarioObjectContainer->m_nodeContainer.Get(i)->GetDevice(k)->GetAddress());
		}
		if (ipv4)
		{
			for (j = 0; j < (int) ipv4->GetNInterfaces(); j++)
			{
				NS_LOG_DEBUG ("   - Interface " << j << " " << ipv4->GetAddress(j,0) << " " << ipv4->GetNetDevice(j)->GetInstanceTypeId());
			}
		}
	}



	//Configure the applications
	SetUpperLayer();

	if (m_verbose)
		m_scenarioObjectContainer->m_wifiHelper.EnableLogComponents();

	if (m_tracing)
	{
		m_propTracing->SetWriteToFile (true);
	}
	else
	{
		m_propTracing->SetWriteToFile (false);
	}

    if ((m_networkCodingTracing) && (m_networkCoding))
        m_propTracing->SetNetworkCodingWriteToFile(true);
    else {
        m_propTracing->SetNetworkCodingWriteToFile(false);
        m_networkCodingTracing = false;
    }


	//If the scenario is based on a Default channel model, we have to connect our output tracing methods to the legacy environment

    m_propTracing->SetTransportProtocol(m_transportProtocol);

	if (m_transportProtocol==TCP_PROTOCOL || m_transportProtocol==UDP_PROTOCOL || m_transportProtocol==MPTCP_PROTOCOL)
	{
		for (i = 0; i < (int) m_scenarioObjectContainer->m_yansWifiPhyHelper.GetChannel()->GetPhyList().size() ; i ++)
		{
			m_scenarioObjectContainer->m_yansWifiPhyHelper.GetChannel()->GetPhyList()[i]->SetPhyReceiveCallback(MakeCallback(&ProprietaryTracing::DefaultPhyRxTrace, GetProprietaryTracing()));
		}
	}

	if( m_transTracing == 1 || m_transportShortTracing == 1)
	{
		for (int i=0; i < (int) NodeList::GetNNodes(); i++)
		{
			if(m_transportProtocol==TCP_PROTOCOL)
			{
				Ptr<TcpL4Protocol> tcp=NodeList::GetNode(i)->GetObject<TcpL4Protocol> ();
				if(tcp)
				{
					if(m_transTracing == 1)
						tcp->SetTcpTraceCallback (MakeCallback (&ProprietaryTracing::DefaultMpTcpRxTrace, GetProprietaryTracing()));
					else if(m_transportShortTracing == 1)
						tcp->SetTcpTraceCallback (MakeCallback (&ProprietaryTracing::DefaultTransportShortRxTrace, GetProprietaryTracing()));
				}
			}
			else if (m_transportProtocol==MPTCP_PROTOCOL)
			{
				Ptr<MpTcpL4Protocol> mp=NodeList::GetNode(i)->GetObject<MpTcpL4Protocol> ();
				if(mp)
				{
					if(m_transTracing == 1)
						mp->SetMpTraceCallback (MakeCallback (&ProprietaryTracing::DefaultMpTcpRxTrace, GetProprietaryTracing()));
					else if(m_transportShortTracing == 1)
						mp->SetMpTraceCallback (MakeCallback (&ProprietaryTracing::DefaultTransportShortRxTrace, GetProprietaryTracing()));
				}
			}

		}
	}

}


void ConfigureScenario::SetChannel()
{
    NS_LOG_FUNCTION(this);

    switch (m_simulationChannel) {
        case SIM_RATE_ERROR: //MatrixPropagationLossModel + RateErrorModel (Simplest configuration)
        {
            Config::SetDefault("ns3::RangePropagationLossModel::MaxRange", DoubleValue(25.0));
            Config::SetDefault("ns3::RangePropagationLossModel::FirstRangeDistance", DoubleValue(25.0));
            Config::SetDefault("ns3::RangePropagationLossModel::SecondRangeDistance", DoubleValue(40.0));
            Ptr<RangePropagationLossModel> prop = CreateObject<RangePropagationLossModel > ();
            m_scenarioObjectContainer->m_yanswifiChannelHelper.AddPropagationLoss(prop);

            Ptr<RateErrorModel> error = CreateObject<RateErrorModel > ();
            error->SetUnit(EU_PKT);
            error->SetRate(m_fer);
            m_scenarioObjectContainer->m_yansWifiPhyHelper.SetErrorModel(error);
            break;
        }
        case SIM_DEFAULT_MODEL: //MatrixPropagationLossModel + YansErrorRateModel/NistErrorRateModel
        {
            string temp;
            //Set the propagation loss model
            Ptr<LogDistancePropagationLossModel> prop = CreateObject<LogDistancePropagationLossModel > ();
            m_scenarioObjectContainer->m_yanswifiChannelHelper.AddPropagationLoss(prop);

            //Configure the shadowing value
            assert(m_configurationFile->GetKeyValue("DEFAULT", "FF_VARIANCE", temp) > -80.0);
            Ptr<RandomPropagationLossModel> prop2 = CreateObject <RandomPropagationLossModel > ();
            prop2->SetAttribute("Variable", RandomVariableValue(NormalVariable(0.0, atof(temp.c_str()))));
            m_scenarioObjectContainer->m_yanswifiChannelHelper.AddPropagationLoss(prop2);
            m_scenarioObjectContainer->m_yansWifiPhyHelper.SetErrorRateModel("ns3::YansErrorRateModel");
            break;
        }
        case SIM_HMM_MODEL: //MatrixPropagationLossModel + HiddenMarkovErrorModel
        {

        	string temp;

        	//We will implement a maximum range in order to limit the coverage area of the nodes
        	Config::SetDefault("ns3::RangePropagationLossModel::MaxRange", DoubleValue(20.0));
        	Ptr<RangePropagationLossModel> prop = CreateObject<RangePropagationLossModel > ();
        	m_scenarioObjectContainer->m_yanswifiChannelHelper.AddPropagationLoss(prop);

        	//Create and prepare the loss propagation loss model
        	Ptr<HiddenMarkovPropagationLossModel> hmmModel = CreateObject<HiddenMarkovPropagationLossModel> ();

        	//Get the simulation mode (time or frame-based)
        	assert (m_configurationFile->GetKeyValue ("HMM", "ERROR_UNIT", temp) >= 0);
        	if (temp == "TIME")
        		hmmModel->SetAttribute ("Mode", EnumValue(HMM_TIME_BASED_SIMULATION));
        	else if (temp == "FRAMES")
        		hmmModel->SetAttribute ("Mode", EnumValue(HMM_FRAME_BASED_SIMULATION));
        	else
        		NS_ABORT_MSG ("Incorrect Hidden Markov model mode. Valid options: TIME or FRAMES. Please fix");

        	//Check the operation mode
        	assert (m_configurationFile->GetKeyValue ("HMM", "OPERATION", temp) >= 0);

            //Check if the attribute is correctly created
            if (temp == "FILE")   //Set the same matrix transition and emission for
            {
            	string transition, emission;
            	assert (m_configurationFile->GetKeyValue ("HMM", "TRANSITION_MATRIX_FILE", transition) >= 0);
            	assert (m_configurationFile->GetKeyValue ("HMM", "EMISSION_MATRIX_FILE", emission) >= 0);
            	hmmModel->InitFromFile (transition, emission);
            }
            else if (temp == "FER")
            {
//            	hmmModel->SetAttribute ("FER", DoubleValue(m_fer));

            	hmmModel->SetFer (m_fer);
            	hmmModel->InitFromFer (m_channelFer);
            }
            else if (temp == "DISTANCE")   			//Option not finished yet --> Need to improve
            {
            	NS_ABORT_MSG ("Distance mode not developed yet");
            	//Implement a mode linked to the distance between nodes
            	hmmModel->InitFromDistance ();
            }
            else
            {
            	NS_ABORT_MSG ("HMM operation " << temp << " not valid.Please fix");
            }

            //Add both propagation and error models to the Wifi instance helpers
             m_scenarioObjectContainer->m_yanswifiChannelHelper.AddPropagationLoss (hmmModel);
             m_scenarioObjectContainer->m_yansWifiPhyHelper.SetErrorModel (hmmModel->GetErrorModel());
            break;
        }
        case SIM_BEAR_MODEL: //MatrixPropagationLossModel + ArModel (which instances a FriisPropagationLossModel object at the same time) + BurstyErrorModel
        {
            string temp;

            //We can limit the transmission to a particular coverage area by means of the declaration of a range propagation loss model
            Config::SetDefault("ns3::RangePropagationLossModel::FirstRangeDistance", DoubleValue(30.0));
            Config::SetDefault("ns3::RangePropagationLossModel::SecondRangeDistance", DoubleValue(30.0));
            Ptr<RangePropagationLossModel> prop = CreateObject<RangePropagationLossModel > ();
            m_scenarioObjectContainer->m_yanswifiChannelHelper.AddPropagationLoss(prop);

            //Instance the BEAR propagation loss model (the error model is implicitly created)
            Ptr<BearPropagationLossModel> bearModel = CreateObject<BearPropagationLossModel > ();
            bearModel->SetPropagationLoss ("ns3::LogDistancePropagationLossModel");

            //Set a fixed SNR for all the links (Version to be enhanced with a fixed FER for each link)
//            bearModel->SetReceivedSnr (make_pair (true, 13));

            //AR model attribute initialization
            assert (m_configurationFile->GetKeyValue ("BEAR", "COEF_FILE", temp) >= 0);
            bearModel->SetAttribute ("CoefficientsFile", StringValue(temp));
            assert (m_configurationFile->GetKeyValue("BEAR", "FILTER_ORDER", temp) >= 0);
            bearModel->SetAttribute ("ArFilterOrder", IntegerValue(atoi(temp.c_str())));
            assert (m_configurationFile->GetKeyValue("BEAR", "COHERENCE_TIME", temp) >= 0);
            bearModel->SetAttribute ("CoherenceTime", DoubleValue(atof(temp.c_str())));
            assert (m_configurationFile->GetKeyValue("BEAR", "AR_FILTER_ENTRY_NOISE_POWER", temp) >= 0);
            bearModel->SetAttribute ("ArFilterVariance", DoubleValue(atof(temp.c_str())));
            assert (m_configurationFile->GetKeyValue("BEAR", "AR_FILTER_VARIANCE", temp) >= 0);
            bearModel->SetAttribute ("StandardDeviation", DoubleValue(atof(temp.c_str())));
            assert (m_configurationFile->GetKeyValue("BEAR", "FF_VARIANCE", temp) >= 0);
            bearModel->SetAttribute ("FastFadingVariance", DoubleValue(atof(temp.c_str())));

            //Add both propagation and error models to the Wifi instance helpers
            m_scenarioObjectContainer->m_yanswifiChannelHelper.AddPropagationLoss (bearModel);
            m_scenarioObjectContainer->m_yansWifiPhyHelper.SetErrorModel (bearModel->GetErrorModel());
            break;
        }
        case SIM_MANUAL_MODEL: //Nothing to do here
        {
        	u_int16_t i, j;

        	// First, set the RangePropagationLossModel
            Config::SetDefault("ns3::RangePropagationLossModel::MaxRange", DoubleValue(25.0));
            Config::SetDefault("ns3::RangePropagationLossModel::FirstRangeDistance", DoubleValue(25.0));
            Config::SetDefault("ns3::RangePropagationLossModel::SecondRangeDistance", DoubleValue(25.0));
        	Ptr<RangePropagationLossModel> prop = CreateObject<RangePropagationLossModel > ();
        	m_scenarioObjectContainer->m_yanswifiChannelHelper.AddPropagationLoss(prop);

        	//Second, parse the scenario topology and configure the MatrixPropagationLossErrorModel
        	Ptr<MatrixErrorModel> error = CreateObject<MatrixErrorModel> ();
        	error->SetDefaultFer (0.0);

        	///// MatrixPropagationLossModel Configuration (taken from the channel configuration file)
        	for (i = 0; i < (int) NodeList().GetNNodes(); i++)
        	{
        		for (j = 0; j < (int) NodeList().GetNNodes(); j++)
        		{
        			if (i != j)
        			{
        				if (m_channelFer.find(i) != m_channelFer.end())
        				{
        					//Configure the FER between the nodes. There are three possibilities: 0- The filter leaves the packet to pass through; 1- The filter blocks the packet; 5- The packet go beyond the filter,
        					//but it's up to the next propagation loss model to handle the channel response
        					//printf("Element %d, %d = %d\n", i, j, m_channelFer.find(i)->second[j]);

        					switch (m_channelFer.find(i)->second[j])
        					{
        					case 0: //No FER
        						error->SetFer (NodeList().GetNode(i)->GetId(), NodeList().GetNode(j)->GetId(), 0.0);
        						break;
        					case 1: //All frames will be discarded
        						error->SetFer (NodeList().GetNode(i)->GetId(), NodeList().GetNode(j)->GetId(), 1.0);
        						break;
        					case 5: //Configurable FER (through m_fer variable) --> Need to find a way to instance the desired propagation loss models
        						error->SetFer (NodeList().GetNode(i)->GetId(), NodeList().GetNode(j)->GetId(), m_fer);
        						break;

        					default:
        						NS_LOG_ERROR("Non-handled option");
        						break;
        					}
        				} else
        					NS_LOG_ERROR("Key " << i << " not found");
        			}
        		}
        	}

        	m_scenarioObjectContainer->m_yansWifiPhyHelper.SetErrorModel(error);

        	break;
        }
    }
}

void ConfigureScenario::ConfigureRoutingProtocol ()
{
	NS_LOG_FUNCTION (m_routingProtocol);
	string routingProtocol;


	//Add the static routing helper
	Ipv4StaticRoutingHelper staticRouting;
	Ipv4ListRoutingHelper list;
	AodvHelper aodv;
	OlsrHelper olsr;
	list.Add(staticRouting, 0);

	switch (m_routingProtocol)
	{
	case RT_POPULATE_ROUTING_TABLES:
		routingProtocol = "POPULATE";
		Ipv4GlobalRoutingHelper::PopulateRoutingTables ();
		break;
	case RT_STATIC_ROUTING_PROTOCOL:
		//We have to initialize the static routing handling after waiting the Ipv4 stack is successfully installed at the nodes
		Simulator::Schedule(Seconds(2.0), &ConfigureScenario::LoadStaticRouting, this, staticRouting);
		routingProtocol = "STATIC";
		break;
	case RT_STATIC_GRAPH_ROUTING_PROTOCOL:
		//We have to initialize the static routing handling after waiting the Ipv4 stack is successfully installed at the nodes
		Simulator::Schedule(Seconds(2.0), &ConfigureScenario::LoadStaticRoutingFromGraph, this, staticRouting);
		routingProtocol = "STATIC";
		break;
	case RT_AODV_PROTOCOL:
		list.Add (aodv, 10);
		routingProtocol = "AODV";
		break;
	case RT_OLSR_PROTOCOL:
		list.Add (olsr, 10);
		routingProtocol = "OLSR";
		break;
	}

	m_scenarioObjectContainer->m_internetStackHelper.SetRoutingHelper (list);

	// Trace routing tables
	if (m_printRoutingTables)
	{
		string copy;
		copy = m_outputTraceFileName;
		for (std::string::iterator p = copy.begin(); copy.end() != p; ++p)
		{
			*p = std::toupper((unsigned char)*p);
		}
		Ptr<OutputStreamWrapper> routingStream = Create<OutputStreamWrapper> ("traces/routes/" + copy.erase (m_outputTraceFileName.find(".conf")) + "_" + routingProtocol +".routes", std::ios::out);
		//Print according to the class which be in charge of the routing protocol (i.e. AODV, STATIC or OLSR)
		if (routingProtocol == "OLSR")
			olsr.PrintRoutingTableAllEvery (Seconds (5), routingStream);
		else if (routingProtocol == "AODV")
			aodv.PrintRoutingTableAllEvery (Seconds (5), routingStream);
		else
			staticRouting.PrintRoutingTableAllEvery (Seconds (5), routingStream);
	}


}

void ConfigureScenario::LoadStaticRouting(Ipv4StaticRoutingHelper staticRouting) {
    NS_LOG_FUNCTION_NOARGS();
    fstream file;
    char cwdBuf [FILENAME_MAX];
    string fileName;

    //Set the path and the name of the file which contains the static routing table; afterwards, open the file
    fileName = std::string(getcwd(cwdBuf, FILENAME_MAX)) + "/src/scenario-creator/scenarios/" + m_staticRoutingFileName;
    file.open((const char *) fileName.c_str(), ios::in);

    //We read the file through this way because we always know the number of elements per row (5 in this static routing table)
    NS_ASSERT_MSG(file, "File " << fileName << " not found.");
    {
        char line[256];
        file.getline(line, 256);
        //Pass through the title line
        int nodeId, destination, nexthop, interface, metric;
        while (file >> nodeId >> destination >> nexthop >> interface >> metric)
        {

            //By default -> Two interfaces per node: 0- Loopback, 1-Output interface, that is to say, WifiNetDevice when NC layer is disabled; otherwise, will be a NetworkCodingNetDevice.
        	//Ipv4Address srcAddress = m_scenarioObjectContainer->m_nodeContainer.Get((int) nodeId)->GetObject<Ipv4 > ()->GetAddress(1, 0).GetLocal();
            Ipv4Address dstAddress = m_scenarioObjectContainer->m_nodeContainer.Get((int) destination)->GetObject<Ipv4 > ()->GetAddress(interface, 0).GetLocal();
            Ipv4Address nextHopAddress = m_scenarioObjectContainer->m_nodeContainer.Get((int) nexthop)->GetObject<Ipv4 > ()->GetAddress(interface, 0).GetLocal();

            NS_LOG_DEBUG("Node " << (int) nodeId << " IP address " <<
                    m_scenarioObjectContainer->m_nodeContainer.Get((int) nodeId)->GetObject<Ipv4 > ()->GetAddress(interface, 0).GetLocal()
                    << " Dest adress " << dstAddress << " Nexthop adress " << nextHopAddress);
            Ptr<Ipv4StaticRouting> routingEntry = staticRouting.GetStaticRouting(m_scenarioObjectContainer->m_nodeContainer.Get((int) nodeId)->GetObject<Ipv4 > ());


            routingEntry->AddHostRouteTo(dstAddress, nextHopAddress, interface, metric);

            NS_LOG_UNCOND ("SFDAFSADF");

        }
    }

    file.close();
}

void ConfigureScenario::LoadStaticRoutingFromGraph (Ipv4StaticRoutingHelper staticRouting)
{
	NS_LOG_FUNCTION_NOARGS();
	fstream file;
	char cwdBuf [FILENAME_MAX];
	char line[256];
	string lineString;
	string fileName;
	u_int8_t temp;
	u_int8_t lineNumber = 1;

	u_int8_t source = 0;
	u_int8_t destination = 0;

	Ptr<Ipv4StaticRouting> routingEntry;


	//Special container needed to instance the static routing table
	map<u_int8_t, vector<u_int8_t> > graphRoutes;

	//Set the path and the name of the file which contains the static routing table; afterwards, open the file
	fileName = std::string(getcwd(cwdBuf, FILENAME_MAX)) + "/src/scenario-creator/scenarios/" + m_staticRoutingFileName;
	file.open((const char *) fileName.c_str(), ios::in);

	while(file.getline (line, 256))
	{
		vector<u_int8_t> tempVector;

		lineString = string (line);
		if ((lineString.find('#') == string::npos) || (lineString.find('#') != 0))     //Ignore those lines which begins with the '#' character at its beginning
		{
			for(u_int8_t i = 0; i < (int) lineString.size(); i++)
			{
				if ((line [i] != ' ' && line [i] != '\t' && line [i-1] == ' ') || i == 0)   //Grab the first number and the ones which are separated via ' ' or '\t'
				{
					temp = atoi (line + i);
					tempVector.push_back (temp - 1);
				}
			}

			if (m_transportProtocol == TCP_PROTOCOL && graphRoutes.size() < 1)
			{
				graphRoutes.insert (pair<u_int8_t, vector <u_int8_t> > (lineNumber, tempVector));
			}
			else if	(graphRoutes.size() < 2 && m_transportProtocol == MPTCP_PROTOCOL)
			{
				graphRoutes.insert (pair<u_int8_t, vector <u_int8_t> > (lineNumber, tempVector));
			}
			lineNumber++;

			source = tempVector[0];
			destination = tempVector.back();
			tempVector.clear ();
		}
	}


		NS_ABORT_MSG_IF(graphRoutes.size() < 2 && m_transportProtocol == MPTCP_PROTOCOL , "At least two routes for multipath");

	//We are going to fill the static routing table. For that purpose, we need to create an entry for each pair of nodes (remember that there is BIDIRECTIONAL)

	for (map<u_int8_t, vector<u_int8_t> >::iterator iter = graphRoutes.begin(); iter != graphRoutes.end(); iter ++)
	{
		for (u_int8_t j = 0; j < iter->second.size() - 1; j++)
		{
			Ipv4Address srcAddress = m_scenarioObjectContainer->m_nodeContainer.Get((int) source)->GetObject<Ipv4 > ()->GetAddress(iter->first, 0).GetLocal();
			Ipv4Address dstAddress = m_scenarioObjectContainer->m_nodeContainer.Get((int) destination)->GetObject<Ipv4 > ()->GetAddress(iter->first, 0).GetLocal();
			Ipv4Address nextHopAddress = m_scenarioObjectContainer->m_nodeContainer.Get((int) iter->second[j+1])->GetObject<Ipv4 > ()->GetAddress(iter->first, 0).GetLocal();

			NS_LOG_DEBUG("Node " << (int) iter->second[j] + 1 << " IP address " <<
					m_scenarioObjectContainer->m_nodeContainer.Get((int) iter->second[j])->GetObject<Ipv4 > ()->GetAddress(iter->first, 0).GetLocal()
					<< " Dest adress " << dstAddress << " Nexthop adress " << nextHopAddress);

			//Forward route
			 routingEntry = staticRouting.GetStaticRouting(m_scenarioObjectContainer->m_nodeContainer.Get((int) iter->second[j])->GetObject<Ipv4 > ());
			routingEntry->AddHostRouteTo(m_scenarioObjectContainer->m_nodeContainer.Get((int) destination)->GetObject<Ipv4 > ()->GetAddress(iter->first, 0).GetLocal(),   //Destination address
					m_scenarioObjectContainer->m_nodeContainer.Get((int) iter->second[j+1])->GetObject<Ipv4 > ()->GetAddress(iter->first, 0).GetLocal(),				  //Nexthop address
					iter->first,	//Interface
					0);		//Metric

			//Backward route
			routingEntry = staticRouting.GetStaticRouting(m_scenarioObjectContainer->m_nodeContainer.Get((int) iter->second[j+1])->GetObject<Ipv4 > ());
			routingEntry->AddHostRouteTo(m_scenarioObjectContainer->m_nodeContainer.Get((int) source)->GetObject<Ipv4 > ()->GetAddress(iter->first, 0).GetLocal(),   //Destination address
					m_scenarioObjectContainer->m_nodeContainer.Get((int) iter->second[j])->GetObject<Ipv4 > ()->GetAddress(iter->first, 0).GetLocal(),				  //Nexthop address
					iter->first,	//Interface
					0);		//Metric

			NS_LOG_DEBUG("Node " << (int) iter->second[j+1] + 1  << " IP address " <<
								m_scenarioObjectContainer->m_nodeContainer.Get((int) iter->second[j+1])->GetObject<Ipv4 > ()->GetAddress(iter->first, 0).GetLocal()
								<< " Dest adress " << srcAddress << " Nexthop adress " << m_scenarioObjectContainer->m_nodeContainer.Get((int) iter->second[j])->GetObject<Ipv4 > ()->GetAddress(iter->first, 0).GetLocal());

		}
	}

}

std::string ConfigureScenario::CheckTransportLayer ()
{
	NS_LOG_FUNCTION(this);
	if (m_transportProtocol == TCP_PROTOCOL)
		return "ns3::TcpSocketFactory";
	else if (m_transportProtocol == MPTCP_PROTOCOL)
		return "ns3::TcpSocketFactory";
	else if (m_transportProtocol == UDP_PROTOCOL)
		return "ns3::UdpSocketFactory";
	else
		return "ns3::TcpSocketFactory";
}

void ConfigureScenario::SetUpperLayer ()
{
	NS_LOG_FUNCTION(this);
	u_int16_t i, portOffset = 0;
	multiset<u_int16_t>::iterator iter;
	double offset = 0;
	uint32_t contador = 6;

	Time time;

	//Before starting the transmission, send dummy packets in order to fill, by means of UdpEcho applications, the ARP cache
	ApplicationContainer clientApps, serverApps;
	for (i = 0; i < (int) m_nodesVector.size(); i++)
	{

		UdpEchoServerHelper echoServer(9);
		serverApps = echoServer.Install(m_nodesVector[i].node);
		serverApps.Start(Seconds(4.0));
		serverApps.Stop(Seconds(900.0));

		for ( int j = 0; j < (int) m_nodesVector[i].node->GetObject<Ipv4 > ()->GetNInterfaces(); j++)
		{
			for (int k = 0; k < (int) m_nodesVector.size(); k++)
			{
				if (i != k)
				{
					//Go through the interface list and test the route among all of them

					UdpEchoClientHelper echoClient (m_nodesVector[k].node->GetObject<Ipv4 > ()->GetAddress(j, 0).GetLocal(), 9);

					echoClient.SetAttribute("MaxPackets", UintegerValue(1));
					echoClient.SetAttribute("Interval", TimeValue(Seconds(1.0)));
					echoClient.SetAttribute("PacketSize", UintegerValue(200));

					clientApps = echoClient.Install(m_nodesVector[i].node);
					clientApps.Start(Seconds(6.0 + offset));
					clientApps.Stop(Seconds(200.0));

					offset += 0.1;
				    contador += 0.1;
				}
			}
		}
	}
	 //Application definition (for this concrete testbed, we are going to use the OnOffApplication environment to inject the traffic into the scenario)
	 //Transmission nodes --> We have to parse the m_nodesVector looking for the nodes' configuration
	 //Reception nodes --> The same method as for the transmitters


	 offset = 0;

	for (i=0; i < (int) m_nodesVector.size(); i++)
	{
		//Configuring the application layer
		if (m_nodesVector[i].transmitter)
		{
			for (iter = m_nodesVector[i].destinations.begin(); iter != m_nodesVector[i].destinations.end(); iter++, portOffset ++)
			{
				//One pair Application/Sink for each one
				//Application (OnOffApplication)

				if (m_transportProtocol == MPTCP_PROTOCOL)
				{

					MpTcpOnOffHelper onOff (CheckTransportLayer(), Address (InetSocketAddress ((m_nodesVector[*iter].node->GetObject<Ipv4>())->GetAddress(1,0).GetLocal(), m_portBase + portOffset)),m_congestionControl);
//					OnOffHelper onOff (CheckTransportLayer(), Address (InetSocketAddress ((m_nodesVector[*iter].node->GetObject<Ipv4>())->GetAddress(1,0).GetLocal(), m_portBase + portOffset)));
					onOff.SetAttribute ("OnTime", RandomVariableValue (ConstantVariable (1)));
					onOff.SetAttribute ("OffTime", RandomVariableValue (ConstantVariable (0)));
					onOff.SetAttribute ("DataRate", StringValue ("11Mbps"));
					onOff.SetAttribute ("PacketSize", UintegerValue (m_packetLength));
					onOff.SetAttribute ("MaxBytes", UintegerValue (m_packetLength * m_numPackets));

					onOff.SetAttribute ("localAddress",AddressValue (InetSocketAddress ((m_nodesVector[i].node->GetObject<Ipv4>())->GetAddress(1,0).GetLocal())));
					onOff.SetAttribute ("WindowTracing", UintegerValue(m_windowTracing));
					m_scenarioObjectContainer->m_sourceAppContainer = onOff.Install (NodeList().GetNode (i));
					m_scenarioObjectContainer->m_sourceAppContainer.Start (Seconds (contador + 1 + offset));
					m_scenarioObjectContainer->m_sourceAppContainer.Stop (Seconds (contador + 990.0));
					NS_LOG_DEBUG ("OnOff Peers: " << (m_nodesVector[i].node->GetObject<Ipv4> ())->GetAddress (1,0).GetLocal () << " -> "
											<<	(m_nodesVector[*iter].node->GetObject<Ipv4> ())->GetAddress (1,0).GetLocal ()
											<< " Port: " << m_portBase + portOffset);

					//Packet sink
//					MpTcpPacketSinkHelper packetSink (CheckTransportLayer(), Address (InetSocketAddress (Ipv4Address::GetAny (), m_portBase + portOffset)),m_reorderingProtocol);
					MpTcpPacketSinkHelper packetSink (CheckTransportLayer(), Address (InetSocketAddress ((m_nodesVector[*iter].node->GetObject<Ipv4>())->GetAddress(1,0).GetLocal(), m_portBase + portOffset)),m_reorderingProtocol);
					m_scenarioObjectContainer->m_sinkAppContainer = packetSink.Install (NodeList().GetNode (*iter));
					m_scenarioObjectContainer->m_sinkAppContainer.Start (Seconds(1));
					m_scenarioObjectContainer->m_sinkAppContainer.Stop (Seconds(contador + 990.0));
					NS_LOG_DEBUG ("Sink defined at IP " << (m_nodesVector[*iter].node->GetObject<Ipv4>())->GetAddress(1,0).GetLocal() << " , listening at port " << m_portBase + portOffset);
				}
				else
				{
					OnOffHelper onOff (CheckTransportLayer(), Address (InetSocketAddress ((m_nodesVector[*iter].node->GetObject<Ipv4>())->GetAddress(1,0).GetLocal(), m_portBase + portOffset)));
					onOff.SetAttribute ("OnTime", RandomVariableValue (ConstantVariable (1)));
					onOff.SetAttribute ("OffTime", RandomVariableValue (ConstantVariable (0)));
					onOff.SetAttribute ("DataRate", StringValue ("11Mbps"));
					onOff.SetAttribute ("PacketSize", UintegerValue (m_packetLength));
					onOff.SetAttribute ("MaxBytes", UintegerValue (m_packetLength * m_numPackets));
					m_scenarioObjectContainer->m_sourceAppContainer = onOff.Install (NodeList ().GetNode (i));
					m_scenarioObjectContainer->m_sourceAppContainer.Start(Seconds(contador + 1 + offset));
					m_scenarioObjectContainer->m_sourceAppContainer.Stop(Seconds(contador + 990.0));
					NS_LOG_DEBUG ("OnOff Destination: " << (m_nodesVector[*iter].node->GetObject<Ipv4> ())->GetAddress (1,0).GetLocal () << " Port: " << m_portBase + portOffset);

					//Packet sink
					PacketSinkHelper packetSink (CheckTransportLayer(), Address (InetSocketAddress (Ipv4Address::GetAny (), m_portBase + portOffset)));
					m_scenarioObjectContainer->m_sinkAppContainer = packetSink.Install (NodeList().GetNode (*iter));
					m_scenarioObjectContainer->m_sinkAppContainer.Start (Seconds(1.0));
					m_scenarioObjectContainer->m_sinkAppContainer.Stop (Seconds(contador + 990.0));
					NS_LOG_DEBUG ("Sink defined at IP " << (m_nodesVector[*iter].node->GetObject<Ipv4>())->GetAddress(1,0).GetLocal() << " , listening at port " << m_portBase + portOffset);
				}
			}
		}
	}
}

std::string ConfigureScenario::ComposeTraceFileName (u_int32_t runCounter)
{
	NS_LOG_FUNCTION (this);
	string fileName;
	string channelFileName;
	char  temp[128];

	// 1 - Routing mechanism
	fileName = m_networkCoding ? "NC_" : "SF_";
	// 2 - Transport layer
	switch (m_transportProtocol) {
		case UDP_PROTOCOL:
			fileName += "UDP_";
			break;
		case TCP_PROTOCOL:
			fileName += "TCP_";
			break;
		case NSC_TCP_PROTOCOL:
			fileName += "NSC_";
			break;
		case MPTCP_PROTOCOL:
			fileName += "MPTCP_";
			break;
		default:
			NS_ABORT_MSG("Transport protocol not found");
			break;
	}
    // 3 - Channel configuration
	switch (m_simulationChannel) {
		case SIM_RATE_ERROR:
			fileName += "RATE_";
			break;
		case SIM_DEFAULT_MODEL:
			fileName += "NIST_";
			break;
		case SIM_HMM_MODEL:
			fileName += "HMM_";
			break;
		case SIM_BEAR_MODEL:
			fileName += "BEAR_";
			break;
		case SIM_MANUAL_MODEL:
			fileName += "MANUAL_";
			break;
	}

	// 4 - Scenario topology and error configuration
	if (m_deployment == FILE_BASED)
	{
		//In this case we will slightly change the output trace file format
		if (m_routingProtocol == RT_STATIC_GRAPH_ROUTING_PROTOCOL)
		{


		}
		else
		{
			if (m_outputTraceFileName.find (".conf") != string::npos)
			{
				m_outputTraceFileName = m_outputTraceFileName.erase (m_outputTraceFileName.find(".conf")) + '_';
			}
			for (std::string::iterator p = m_outputTraceFileName.begin(); m_outputTraceFileName.end() != p; ++p)
			{
				*p = std::toupper((unsigned char)*p);
			}
			fileName += m_outputTraceFileName;
		}
	}
	else if (m_deployment == RANDOM_DEPLOYMENT)
	{
		fileName += "RANDOM_DEPLOYMENT_";
	}

	// 5 -Multipath configuration

	if (m_transportProtocol == MPTCP_PROTOCOL)
	{
		string mpFileName;

		mpFileName="TRACING_MULTIPATH";
		switch (m_congestionControl)
		{
		case 0:
			mpFileName+="_UNCOUPLED_TCP";
			fileName+="_UNCOUPLED_TCP";
			break;
		case 1:
			mpFileName+="_LINKED_INCREASE";
			fileName+="_LINKED_INCREASE";
			break;
		case 2:
			mpFileName+="_RTT_COMPENSATOR";
			fileName+="_RTT_COMPENSATOR";
			break;
		case 3:
			mpFileName+="_Fully_Coupled";
			fileName+="_Fully_Coupled";
			break;
		}

		if (m_transTracing == 1)
		{
			sprintf (temp, "%1.2f_RUN_%d", m_fer, runCounter + m_runOffset);
			mpFileName += "_FER_" + string (temp) + ".tr";
			m_propTracing->OpenMpTcpTraceFile(mpFileName);
		}
		if (m_transportShortTracing == 1)
		{
			m_scenario = m_staticRoutingFileName.substr(0,3);
			NS_LOG_DEBUG("Escenario: " << m_scenario);
			m_algorithm = m_staticRoutingFileName.substr(4,1);
			NS_LOG_DEBUG("Algoritmo: " << m_algorithm);

			sprintf (temp, "%1.2f", m_fer);
			mpFileName += "_SHORT_FER_" + string (temp) + ".tr";
			m_propTracing->OpenTransportShortTraceFile(m_scenario, runCounter + m_runOffset,m_algorithm,m_congestionControl,mpFileName);
		}
	}
	else if (m_transportProtocol == TCP_PROTOCOL)
	{
		string tcpFileName;
		tcpFileName="TRACING_TCP";

		m_scenario = 1;
		if (m_transTracing == 1)
		{
			sprintf (temp, "%1.2f_RUN_%d", m_fer, runCounter  + m_runOffset);
			tcpFileName += "_FER_" + string (temp) + ".tr";
			m_propTracing->OpenMpTcpTraceFile(tcpFileName);
		}
		if (m_transportShortTracing == 1)
		{
			m_scenario = m_staticRoutingFileName.substr(0,3);
			NS_LOG_DEBUG("Escenario: " << m_scenario);
			m_algorithm = m_staticRoutingFileName.substr(4,1);
			NS_LOG_DEBUG("Algoritmo: " << m_algorithm);

			sprintf (temp, "%1.2f", m_fer);
			tcpFileName += "_SHORT_FER_" + string (temp) + ".tr";
			m_propTracing->OpenTransportShortTraceFile(m_scenario, runCounter + m_runOffset,m_algorithm, 0 ,tcpFileName);
		}

	}

	// 6 - FER value for the error-prone links (i.e. middle, side, every link, etc.)
	sprintf (temp, "%1.2f_RUN_%d", m_fer, runCounter + m_runOffset);
	fileName += "_FER_" + string (temp) + ".tr";

	//Replace the hyphen by the underscore in the file name
	std::replace (fileName.begin(), fileName.end(), '-', '_');

	if (m_pcapTracing)
	{
		string copy;
		copy = fileName;
		m_scenarioObjectContainer->m_yansWifiPhyHelper.EnablePcap ("traces/pcap/" + copy.erase (copy.find(".tr")), m_scenarioObjectContainer->m_nodeContainer, true);
	}

	if (m_asciiTracing)
	{
		string copy;
		copy = fileName;
		m_scenarioObjectContainer->m_yansWifiPhyHelper.EnableAscii ("traces/ascii/" + copy.erase (fileName.find(".tr")) + "_ASCII", m_scenarioObjectContainer->m_nodeContainer);
	}



	if (m_tracing)
	{
	  m_propTracing->OpenTraceFile(fileName);
	}
	//Compose the Network Coding-layer trace file name
	sprintf(temp, "NCL4_%sBufferSize_%02d_BufferTimeout_%03d_MaxCoded_%02d_FER_%1.2f_RUN_%03d.tr", m_outputTraceFileName.c_str(),
			m_ncBufferSize, (int) m_ncBufferTimeout.GetMilliSeconds(), m_ncMaxCodedPackets, m_fer, runCounter + m_runOffset);

//	if (m_networkCodingTracing) {
//		if (m_networkCoding)
//			m_propTracing->OpenNetworkCodingTraceFile((string) temp);
//		else
//			NS_ABORT_MSG("Cannot trace a Network Coding scheme if it is disabled");
//	}

	//Short Network Coding Trace file system
	if (m_networkCodingShortTracing)
	{
		NS_ASSERT_MSG (m_networkCoding, "Can't trace the network coding layer if it is not instanced");
		m_scenarioObjectContainer->m_networkCodingHelper.EnableTracing(m_outputTraceFileName, runCounter + m_runOffset, m_fer);
	}

	return fileName;
}

void ConfigureScenario::SetProprietaryTracing(Ptr<ProprietaryTracing> propTracing)
{
	NS_LOG_FUNCTION (this << propTracing);
	m_propTracing = propTracing;
	m_propTracing->SetTransportProtocol(m_transportProtocol);

}


void ConfigureScenario::CreateAndAggregateObjectFromTypeId (Ptr<Node> node, const std::string typeId)
{
	ObjectFactory factory;
	factory.SetTypeId (typeId);
	Ptr<Object> protocol = factory.Create <Object> ();
	node->AggregateObject (protocol);
}


