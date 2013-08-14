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

#include "scratch-logging.h"				//Set the LOGGING options
#include "ns3/scenario-creator-module.h"

using namespace ns3;
using namespace std;

u_int32_t GetNumberOfSimulations (string fileName);

/**
 * Simple script to test the scenario-creator handler. User only need the following stuff:
 * 		- Raw file name where we have stored the scenario configuration values. NOTE: it MUST have the ".config" extension, but it MUSTN'T be included in the variable declaration.
 *
 * To run the script, just prompt a command similar to this one: ./waf --run "scratch/test-scenario --Configuration=network-coding-scenario"
 *
 * ENJOY!!
 */

;


int main (int argc, char *argv[])
{
	CommandLine cmd;
	char output [255];
	string traceFile;

//	  LogComponentEnable("MpTcpSocketBase", LOG_LEVEL_ALL);
//	  LogComponentEnable("OnOffApplication", LOG_LEVEL_ALL);
//	  LogComponentEnable("MpTcpOnOffApplication", LOG_LEVEL_ALL);
	  LogComponentEnable("ConfigureScenario", LOG_LEVEL_ALL);
//	  LogComponentEnable("Ipv4L3Protocol", LOG_ALL);
//	  LogComponentEnable("MpTcpTypeDefs", LOG_LEVEL_ALL);
//	  LogComponentEnable("MpTcpL4Protocol", LOG_LEVEL_ALL);
//	  LogComponentEnable("TcpL4Protocol", LOG_LEVEL_ALL);
//	  LogComponentEnable("Packet", LOG_LEVEL_ALL);
//	  LogComponentEnable("Socket", LOG_LEVEL_ALL);
//	  LogComponentEnable ("MpTcpPacketSink", LOG_ALL);
//	  LogComponentEnable ("MpTcpHeader", LOG_ALL);
//	  LogComponentEnable("Simulator",LOG_LEVEL_ALL);
//	  LogComponentEnable("TcpSocketBase", LOG_LEVEL_ALL);
//	  LogComponentEnable("ProprietaryTracing", LOG_LEVEL_ALL);
//	  LogComponentEnable("YansWifiPhy", LOG_LEVEL_ALL);


	//Default variables  --> Available scenarios: two-nodes, x and butterfly (the last two scenarios present as well three different error location policies)
	//Configuration file
	string configuration = "tcp-4nodes-scenario";

	//Scenario setup variables
	Ptr <ConfigureScenario> config;
	Ptr <ProprietaryTracing> propTracing;

	//Random seed related values
	u_int32_t runCounter;

	//Random variable generation (Random seed)
	SeedManager::SetSeed(3);


	//Activate the logging  (from the library scratch-logging.h, just modify there those LOGGERS as wanted)
//	EnableLogging ();

	//Default parameters
	Config::SetDefault ("ns3::RandomPropagationLossModel::Variable", RandomVariableValue (NormalVariable (0.0, 2.8)));

	//Command line options
	//Scenario configuration files
	cmd.AddValue ("Configuration", "Scenario configuration file (located in src/scenario-creator/config)", configuration);
	cmd.Parse(argc,argv);


	for (runCounter = 1; runCounter <= GetNumberOfSimulations(configuration); runCounter ++)
	{
		//Create the scenario (auto-configured by the ConfigureScenario object)
		config = CreateObject <ConfigureScenario> ();
		config->ParseConfigurationFile (configuration);
		config->Init ();
		propTracing = config->GetProprietaryTracing ();

		//Change the seed for each simulation run
		SeedManager::SetRun (runCounter + config->GetRunOffset ());

		//Set the tracing name as a function of the current run iteration
		traceFile = config->ComposeTraceFileName (runCounter);

		//Run the simulation
		Simulator::Stop (Seconds (100));
		Simulator::Run ();
		Simulator::Destroy ();


//		Print final statistics
		sprintf(output, "Run %d - %d/%d (FER = %f)", runCounter + config->GetRunOffset (), config->GetProprietaryTracing () -> GetCorrectPackets (), config->GetProprietaryTracing ()->GetTotalPackets (),
				(double)  ((double) config->GetProprietaryTracing() -> GetTotalPackets() - (double) config->GetProprietaryTracing() -> GetCorrectPackets()) / (double) config->GetProprietaryTracing() -> GetTotalPackets() );
		printf("%s\n", output);


	} // end for

	return 0;
} 	//end main

/**
 * Read the configuration file in order to get the number of simulations to create the main loop
 */
u_int32_t GetNumberOfSimulations (string fileName)
{
//	NS_LOG_FUNCTION_NOARGS();
	ConfigurationFile config;
	string temp;
	config.LoadConfig (config.SetConfigFileName("/src/scenario-creator/config/", fileName));

	NS_ASSERT (config.GetKeyValue("SCENARIO", "RUN", temp) >= 0);
	return (u_int32_t) atoi (temp.c_str());
}
