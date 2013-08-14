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

#ifndef CONFIGURE_SCENARIO_H_
#define CONFIGURE_SCENARIO_H_

#include "ns3/node-list.h"

#include "ns3/config-store.h"
#include "ns3/core-module.h"
#include "ns3/mobility-module.h"
#include "ns3/applications-module.h"
#include "ns3/internet-module.h"
#include "ns3/wifi-module.h"
#include "ns3/propagation-loss-model.h"

#include "ns3/mp-tcp-l4-protocol.h"
#include "ns3/mp-tcp-socket-base.h"

#include "ns3/olsr-helper.h"
#include "ns3/aodv-helper.h"
#include "ns3/ipv4-static-routing-helper.h"

#include "ns3/inet-socket-address.h"

//Proprietary error models
#include "ns3/error-model.h"
#include "ns3/bear-propagation-loss-model.h"
#include "ns3/hidden-markov-propagation-loss-model.h"

#include <fstream>
#include <map>
#include <set>
#include <unistd.h>

//Simple Network Coding implementation
#include "ns3/network-coding-module.h"

//Scenario setup related files
#include "ns3/proprietary-tracing.h"
#include "ns3/configuration-file.h"

namespace ns3 {

enum SimulationChannelType_t {
	SIM_RATE_ERROR,			//Error model based on the class RateErrorModel
	SIM_DEFAULT_MODEL,		//LogDistancePropagationLossModel + RandomPropagationLossModel + YansErrorRateModel
	SIM_HMM_MODEL,			//HiddenMarkovErrorModel
	SIM_BEAR_MODEL,			//ArModel + BurstyErrorModel
	SIM_MANUAL_MODEL		//Matrix configuration file + MatrixPropagationLossErrorModel
};

enum RoutingProtocol_t {
	RT_POPULATE_ROUTING_TABLES,
	RT_STATIC_ROUTING_PROTOCOL,
	RT_STATIC_GRAPH_ROUTING_PROTOCOL,
	RT_AODV_PROTOCOL,
	RT_OLSR_PROTOCOL
};

enum DeploymentConfiguration_t {
	CODE_BASED,				//Manually topology description (not implemented)
	FILE_BASED,				//File configuration which describes the scenario
	RANDOM_DEPLOYMENT		//Define the number of nodes, the scenario boundaries and the number of flows, and the simulator will randomly deploy the whole simulation
};

//Struct which contains all the information relative to the nodes (i.e. object, ID, ubication, behaviour)
typedef struct {
	Ptr<Node> node;				//Pointer to the corresponding node
	u_int8_t nodeId;			//Node's identity
	Vector coordinates;			//Node location
	bool transmitter;			//Is the node a transmitter?
	u_int8_t destNodeId;		//If so, specify the destination node's ID. Further version: Multiple flows per source (maybe a map which contains all the possible destinations?)
	std::multiset <u_int16_t> destinations;
	bool receiver;				//Is the node a receiver?
	bool codingRouter;			//Enabled when the node only acts as an intermediate router, without implementing the NC layer within its behaviour
	bool forwarder;    			//Enabled if the node has got the NC architecture
	uint8_t subflows;
} NodeDescription_t;

class ProprietaryTracing;

/**
 * \ingroup configurescenario
 * \brief Help class which holds all the necessary objects to construct a wireless scenario
 */
class ScenarioObjectContainer: public Object
{
	friend class ConfigureScenario;
public:
	//Handle methods
	/**
	 * Default constructor
	 */
	ScenarioObjectContainer ();
	/**
	 * Default destructor
	 */
	~ScenarioObjectContainer ();
	/**
	 * \param nodeNumber Number of nodes which compose the WMN
	 */
	void GenerateWifiLowLevels (u_int8_t nodeNumber);

//private:
	//Set of objects
	NodeContainer m_nodeContainer;
	YansWifiPhyHelper m_yansWifiPhyHelper;
	YansWifiChannelHelper m_yanswifiChannelHelper;
	WifiHelper m_wifiHelper;
	NqosWifiMacHelper m_nQosWifiMacHelper;
	NetDeviceContainer m_netDeviceContainer;
	NetworkCodingHelper m_networkCodingHelper;

	InternetStackHelper m_internetStackHelper;
	Ipv4AddressHelper m_ipv4AddressHelper;
	vector <Ipv4InterfaceContainer> m_ipv4InterfaceContainer;

	ApplicationContainer m_applicationContainer;
	ApplicationContainer m_sourceAppContainer;
	ApplicationContainer m_sinkAppContainer;
};


/**
 * \defgroup configurescenario Configure Scenario
 * \brief Scenario description helper for a wireless mesh network.
 */

class ConfigureScenario	: public Object
{
public:
	/**
	 * Attribute handler
	 */
	static TypeId GetTypeId (void);
	/**
	 * Default constructor
	 */
	ConfigureScenario();
	/**
	 * Default destructor
	 */
	~ConfigureScenario();
	/**
	 * \brief Method that reads the configuration file and sets the corresponding parameters. NOTE: These config files MUST be stored in
	 * \param confFile Configuration file (Raw name, without the cfg extension)
	 * \return True if successfully read the configuration file; false otherwise
	 */
	bool ParseConfigurationFile (std::string confFile);
	/**
	 * \brief Key method that receives both nodes and links configuration and outlines the corresponding scenario. NOTE: Only when the scenario is defined by an extern file
	 * \param confFile File which contains the description of the deployment of the nodes (i.e. number, location and functionalities)
	 * \param channelFile  File which represent the FER between each two pair of nodes (it has the shape of a m_nodesNumber x m_nodesNumber matrix)
	 * \return True if successfully read the two configuration files; false otherwise
	 */
	bool ParseScenarioDescriptionFile (std::string confFile, std::string channelFile);
	/**
	 * \brief With the given parameters, generate a random wireless scenario where all the nodes are within a rectangle-shaped area
	 * \param nNodes The number of nodes that we want to deploy over the scenario
	 * \param maxX Maximum abscissa axis size (in meters)
	 * \param maxY Maximum coordinate axis size (in meters)
	 * \param dataFlows Number of data flow deployed over the scenario (defines the number of unicast tuples source/sink)
	 */
	void GenerateRandomScenario (u_int16_t nNodes, double maxX, double maxY, u_int16_t dataFlows);
	/**
	 * \brief Initializer method (create containers, Wifi Adhoc Network, IP addresses, applications, etc.)
	 */
	void Init ();
	/**
	 * \brief Configure the links between the nodes according to the type of channel we want to deploy over the scenario (i.e. simple error rate-based model, based FER formulas, Hidden Markov Process or
	 * by means of an auto-regressive filter)
	 */
	void SetChannel ();
	/**
	 * Setup the routing protocol according to the value held by the m_routingProtocol variable
	 */
	void ConfigureRoutingProtocol ();
	/**
	 * Load a file which contains the configuration (table) of a fully-functional static routing scheme
	 */
	void LoadStaticRouting (Ipv4StaticRoutingHelper staticRouting);
	/**
	 * Load and parse a file which contains a graph that defines the routing scheme (static)
	 */
	void LoadStaticRoutingFromGraph (Ipv4StaticRoutingHelper staticRouting);
	/**
	 * \brief Simple function that sets the corresponding parameters according to the transport layer chosen
	 * \return A string which will be used to directly define the application; that is to say
	 */
	std::string CheckTransportLayer();
	/**
	 * \brief Method used to define the upper layer setup (TCP/UDP) and so on
	 */
	void SetUpperLayer ();

	/**
	 * \param channelFileName The name of the file which contains the channel FER configuration
	 * \return The string which will be used to name to the trace file
	 */
	std::string ComposeTraceFileName (u_int32_t runCounter);


	// ---------------------------Getters / Setters--------------------------- //
	/**
	 * \returns A pointer to the ScenarioObjectContainer object instanced in this class
	 */
	inline Ptr<ScenarioObjectContainer> GetScenarioObjectContainer (void) {return m_scenarioObjectContainer;}
	/**
	 * \return The number of packets sent by the application
	 */
	inline u_int32_t GetNumPackets (void) {return m_numPackets;}
	/**
	 * \param numPackets The number of packets sent by the application
	 */
	inline void SetNumPackets(u_int32_t numPackets) {m_numPackets = numPackets;}
	/**
	 * \return How the nodes will be deployed (enum DeploymentConfiguration_t)
	 */
	inline DeploymentConfiguration_t GetDeploymentConfiguration () {return m_deployment;}
	/**
	 * \param deployment The mode to deply the nodes (File, by code or random)
	 */
	inline void SetDeploymentConfiguration (DeploymentConfiguration_t deployment) {m_deployment = deployment;}
	/**
	 * \return The type of channel (propagation and error models). Four possibilities
	 */
	inline SimulationChannelType_t GetSimulationChannelType() {return m_simulationChannel;}
	/**
	 * \param simulationChannel The type of channel (propagation and error models). Four possibilities.
	 */
	inline void SetSimulationChannelType (SimulationChannelType_t simulationChannel) {m_simulationChannel = simulationChannel;}
	/**
	 * \return The routing protocol (EnumValue  RoutingProtocol_t)
	 */
	inline RoutingProtocol_t GetRoutingProtocol() {return m_routingProtocol;}
	/**
	 * \param routingProtocol The routing protocol (EnumValue  RoutingProtocol_t)
	 */
	inline void SetRoutingProtocol (RoutingProtocol_t routingProtocol) {m_routingProtocol = routingProtocol;}
	/**
	 * \return The transport protocol (EnumValue  TransportProtocol_t)
	 */
	inline TransportProtocol_t GetTransportProtocol() {return m_transportProtocol;}
	/**
	 * \param transportProtocol The transport protocol (EnumValue  TransportProtocol_t)
	 */
	inline void SetTransportProtocol (TransportProtocol_t transportProtocol) {m_transportProtocol = transportProtocol;}
	/**
	 * \
	 */
	inline string GetStaticRoutingFileName () {return m_staticRoutingFileName;}
	/**
	 * \
	*/
	inline void SetStaticRoutingFileName (string staticRoutingFileName) {m_staticRoutingFileName = staticRoutingFileName;}
	/**
	* \return A pointer to the ProprietaryTracing object
    */
	inline string GetScenarioFileConfig () {return m_scenarioConfig;}
	/**
	 * \
	*/
	inline void SetScenarioFileConfig (string scenarioConfig) {m_scenarioConfig = scenarioConfig;}
	/**
	* \return A pointer to the ProprietaryTracing object
    */
	inline Ptr<ProprietaryTracing> GetProprietaryTracing () {return m_propTracing;}
	/**
    * \return A pointer to the ProprietaryTracing object
	*/
	void SetProprietaryTracing (Ptr<ProprietaryTracing> propTracing);
	/**
	 * \return The number of simulations
	 */
	inline u_int32_t GetRun () {return m_runs;}
	/**
	 * \param runs Number of simulations
	 */
	inline void SetRuns (u_int32_t runs) {m_runs = runs;}
	/**
	 * \return The first run offset --> We will use this parameter to name the trace file (i.e. to avoid repeating the same random seeds)
	 */
	inline u_int32_t GetRunOffset () {return m_runOffset;}
	/**
	 * \param runOffset Offset used for the run counter
	 */
	inline void SetRunOffset (u_int32_t runOffset) {m_runOffset = runOffset;}
	/**
	 *
	 */
	inline bool GetTracing () {return m_tracing;}
	/**
	 *
	 */
	inline bool GetTransportTracing () {return m_transTracing;}
	/**
	 *
	 */
	inline bool GetWindowTracing () {return m_windowTracing;}
	/**
	 *
	 */
	inline bool GetTransportShortTracing () {return m_transportShortTracing;}
	/**
	 *
	 */
	inline void SetTracing (bool tracing) {m_tracing = tracing;}

	/**
	 *
	 */
	inline bool GetPcapTracing () {return m_pcapTracing;}
	/**
	 *
	 */
	inline void SetPcapTracing (bool pcapTracing) {m_pcapTracing = pcapTracing;}
	/**
	 *
	 */
	inline bool GetAsciiTracing () {return m_asciiTracing;}
	/**
	 *
	 */
	inline void SetAsciiTracing (bool asciiTracing) {m_asciiTracing = asciiTracing;}
	/**
	 *
	 */
	inline bool GetPrintRoutingTables () {return m_printRoutingTables;}
	/**
	 *
	 */
	inline void SetPrintRoutingTables (bool printRoutingTables) {m_printRoutingTables = printRoutingTables;}
	/**
	 *
	 */
	inline bool GetVerbose () {return m_verbose;}
	/**
	 *
	 */
	inline void SetVerbose (bool verbose) {m_verbose = verbose;}

	static void CWD (double oldValue ,double newValue);

//private:
	u_int8_t m_nodesNumber;									  //Number of nodes deployed over the scenario
	double m_fer;											  //FER value for those channel which will be prone to errors (in addition to the MatrixPropagationLossModel filter)
	Ptr <ProprietaryTracing> m_propTracing;					  //Object to handle the proprietary tracing environment
	Ptr <ConfigurationFile> m_configurationFile;			  //Read the file that contains the values of the parameters that define the scenario behavior (i.e. number of packets, FER...)

	//Vector which will hold the information relative to every node
	vector <NodeDescription_t> m_nodesVector;

	//Container of the link FER matrix (read from the channel FER configuration file)
	typedef map <int, vector<u_int8_t> > channelFer_t;
	typedef map <int, vector<u_int8_t> >::const_iterator channelFerIter_t;
	channelFer_t m_channelFer;

	Ptr<ScenarioObjectContainer> m_scenarioObjectContainer;

	//Scenario configuration variables
	u_int32_t m_numPackets;
	u_int16_t m_packetLength;
	u_int16_t m_portBase;
	u_int32_t m_runs;
	u_int32_t m_runOffset;

	string m_scenario;
	string m_algorithm;

	uint8_t m_diffChannel;
	uint8_t m_subflowNumber;
	uint8_t m_congestionControl;
	uint8_t m_reorderingProtocol;

	//Network coding specific variables
	bool m_scriptedBufferConfiguration;
	u_int32_t m_ncBufferSize;
	Time m_ncBufferTimeout;
	u_int8_t m_ncMaxCodedPackets;
	bool m_scriptedAckBufferConfiguration;
	Time m_ackBufferTimeout;
	u_int32_t m_ackBufferSize;

	//Tracing attributes
	bool m_networkCodingTracing;
	bool m_networkCodingShortTracing;
	bool m_tracing;
	bool m_pcapTracing;
	bool m_asciiTracing;
	bool m_printRoutingTables;
	bool m_verbose;

	bool m_multipath;                                         // Bool that defines if the scenario uses multipath
	bool m_transTracing;
	bool m_windowTracing;
	bool m_transportShortTracing;

	string m_outputTraceFileName; 							  //Name of the trace file (if enabled)
	string m_staticRoutingFileName;							  //File which contains the static routing table
	string m_scenarioConfig;								  //File which contains the nodes configuration

	//Enumerates definition
	DeploymentConfiguration_t m_deployment;					  //Configure how to deploy the nodes (file, code or random)
	SimulationChannelType_t m_simulationChannel;			  //Set the type of channel to carry out the simulations (four possibilities)
	RoutingProtocol_t m_routingProtocol;
	TransportProtocol_t m_transportProtocol;				  //TCP_PROTOCOL or UDP_PROTOCOL

	bool m_networkCoding;									  //Bool that defines whether a network coding mechanism is carried out or not (File naming issues)

	//Extracted from InternetStackHelper (see documentation therein)
	void CreateAndAggregateObjectFromTypeId (Ptr<Node> node, const std::string typeId);
};



} //End namespace ns3
#endif /* CONFIGURE_SCENARIO_H_ */
