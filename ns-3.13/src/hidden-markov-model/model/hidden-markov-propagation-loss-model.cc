/* -*-  Mode: C++; c-file-style: "gnu"; indent-tabs-mode:nil; -*- */
/*
 * Copyright (c) 2013 Universidad de Cantabria
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

#include <math.h>
#include <fstream>

#include "ns3/core-module.h"
#include "ns3/node.h"
#include "ns3/node-list.h"

#include "hidden-markov-propagation-loss-model.h"

NS_LOG_COMPONENT_DEFINE("HiddenMarkovPropagationLossModel");
NS_OBJECT_ENSURE_REGISTERED (HiddenMarkovPropagationLossModel);

//////////////////////////HiddenMarkovPropagationLossModel

HiddenMarkovPropagationLossModel::HiddenMarkovPropagationLossModel()
{
	NS_LOG_FUNCTION (this);

	//Create the error model and share the map
	m_error = CreateObject<HiddenMarkovErrorModel> ();
	m_error->SetChannelMap (&m_hmmNetworkMap);

}

HiddenMarkovPropagationLossModel::~HiddenMarkovPropagationLossModel()
{
	NS_LOG_FUNCTION (this);

	m_hmmNetworkMap.clear();
}

TypeId
HiddenMarkovPropagationLossModel::GetTypeId(void) {
	static TypeId tid = TypeId ("ns3::HiddenMarkovPropagationLossModel")
	.SetParent <PropagationLossModel> ()
	.AddConstructor<HiddenMarkovPropagationLossModel> ()
//	.AddAttribute ("RanVar",
//			"Random variable which determine a packet to be successfully received or not",
//			RandomVariableValue (UniformVariable (0.0, 1.0)),
//			MakeRandomVariableAccessor (&HiddenMarkovErrorModel::m_ranvar),
//			MakeRandomVariableChecker ())
	.AddAttribute ("FER",
			"Manual FER value",
			DoubleValue (0.0),
			MakeDoubleAccessor (&HiddenMarkovPropagationLossModel::m_fer),
			MakeDoubleChecker<double> ())
	.AddAttribute ("Mode",
		   "Type of simulation (frames or time)",
	       EnumValue (HMM_TIME_BASED_SIMULATION),
	       MakeEnumAccessor (&HiddenMarkovPropagationLossModel::m_mode),
	       MakeEnumChecker (HMM_TIME_BASED_SIMULATION, "HMM_TIME_BASED_SIMULATION",
	                        HMM_FRAME_BASED_SIMULATION, "HMM_FRAME_BASED_SIMULATION"))
//	.AddAttribute("DynamicTimeBasedAnalysis",
//			"Use (or not) of the inter frame space model for each state",
//			BooleanValue (true),
//			MakeBooleanAccessor(&HiddenMarkovErrorModel::m_dynamicTimeBasedAnalysis),
//			MakeBooleanChecker())
//
//	.AddTraceSource ("HiddenMarkovErrorModelRxTrace",
//			"Packet tracing",
//			MakeTraceSourceAccessor (&HiddenMarkovErrorModel::m_rxTrace))
	       ;
  return tid;
}

void HiddenMarkovPropagationLossModel::InitFromFile (string transitionMatrixFileName, string emissionMatrixFileName)
{
	NS_LOG_FUNCTION (transitionMatrixFileName << emissionMatrixFileName);

	u_int16_t i,j;
	UniformVariable ranvar (0.0, (double) transitionMatrixFileName.size() - 1 );

	// Instance the links from NodeList call --> There will be considered as the same link between nodes, although there might be from different interfaces
	for (i = 0; i < (int) NodeList().GetNNodes(); i++) {
		for (j = 0; j < (int) NodeList().GetNNodes(); j++) {
			if (i != j) {
				NS_LOG_DEBUG ("Node " << (int) i << " -> Node " << (int) j);
				ChannelMeshPropagationKey key ((NodeList().GetNode(i))->GetObject<MobilityModel>(), (NodeList().GetNode(j))->GetObject<MobilityModel>(), i, j) ;
				Ptr<HiddenMarkovModelEntry> entry = CreateObject <HiddenMarkovModelEntry> ();

				entry->GetCoefficients (transitionMatrixFileName, emissionMatrixFileName);
				entry->m_mode = m_mode;

				//Randomly choose the initial state
				UniformVariable ranvar (0.0, (double) entry->m_transitionMatrix.size() - 1 );
				entry->m_currentState = ranvar.GetInteger(0, entry->m_transitionMatrix.size() - 1 );


				//Insert the element into the map
				m_hmmNetworkMap.insert (pair<ChannelMeshPropagationKey, Ptr<HiddenMarkovModelEntry> > (key, entry));
			}
		}
	}
}

void HiddenMarkovPropagationLossModel::InitFromFer (std::map<int, vector <u_int8_t> > &ferMap)
{
	NS_LOG_FUNCTION_NOARGS();
	u_int16_t i,j;

	// Instance the links from NodeList call --> There will be considered as the same link between nodes, although there might be from different interfaces
	for (i = 0; i < (int) NodeList().GetNNodes(); i++)
	{
		for (j = 0; j < (int) NodeList().GetNNodes(); j++)
		{
			if (i != j)
			{
				NS_LOG_DEBUG ("Node " << (int) i << " -> Node " << (int) j);
				ChannelMeshPropagationKey key ((NodeList().GetNode(i))->GetObject<MobilityModel>(), (NodeList().GetNode(j))->GetObject<MobilityModel>(), i, j) ;
				Ptr<HiddenMarkovModelEntry> entry = CreateObject <HiddenMarkovModelEntry> ();
				entry->m_mode = m_mode;

				//Read the FER values from the FER map
				switch (ferMap.find(i)->second[j])
				{
				case 0: //No FER
					entry->MapFerValue (0.0);
					break;
				case 1: //All frames will be discarded
					entry->MapFerValue (1.0);
					break;
				case 5: //Configurable FER (through m_fer variable) --> Need to find a way to instance the desired propagation loss models

					entry->MapFerValue (m_fer);
					break;
				default:
					break;
				}

				//Randomly choose the initial state
				UniformVariable ranvar (0.0, (double) entry->m_transitionMatrix.size() - 1 );
				entry->m_currentState = ranvar.GetInteger(0, entry->m_transitionMatrix.size() - 1 );

				//Insert the element into the map
				m_hmmNetworkMap.insert (pair<ChannelMeshPropagationKey, Ptr<HiddenMarkovModelEntry> > (key, entry));
			}
		}
	}
}

void HiddenMarkovPropagationLossModel::InitFromDistance ()
{
	NS_LOG_FUNCTION_NOARGS ();
	u_int16_t i,j;

	// Instance the links from NodeList call --> There will be considered as the same link between nodes, although there might be from different interfaces
	for (i = 0; i < (int) NodeList().GetNNodes(); i++) {
		for (j = 0; j < (int) NodeList().GetNNodes(); j++) {
			if (i != j) {
				Ptr <MobilityModel> tx = (NodeList().GetNode(i))->GetObject<MobilityModel>();
				Ptr <MobilityModel> rx = (NodeList().GetNode(j))->GetObject<MobilityModel>();
				NS_LOG_DEBUG ("Node " << (int) i << " -> Node " << (int) j);
				ChannelMeshPropagationKey key (tx, rx, i, j);

				Ptr<HiddenMarkovModelEntry> entry = CreateObject <HiddenMarkovModelEntry> ();
				entry->MapDistanceValue (tx->GetDistanceFrom(rx));
				entry->m_mode = m_mode;

				//Randomly choose the initial state
				UniformVariable ranvar (0.0, (double) entry->m_transitionMatrix.size() - 1 );
				entry->m_currentState = ranvar.GetInteger(0, entry->m_transitionMatrix.size() - 1 );

				//Insert the element into the map
				m_hmmNetworkMap.insert (pair<ChannelMeshPropagationKey, Ptr <HiddenMarkovModelEntry> > (key, entry));
			}
		}
	}
}

double HiddenMarkovPropagationLossModel::DoCalcRxPower (double txPowerDbm, Ptr<MobilityModel> a, Ptr<MobilityModel> b) const
{
	NS_LOG_FUNCTION (a << b << Simulator::Now().GetSeconds());

	//1 - Search the corresponding link into the map
	channelSetIter_t iter = m_hmmNetworkMap.find (ChannelMeshPropagationKey (a,b));

	if (iter != m_hmmNetworkMap.end())
	{
		NS_LOG_DEBUG (Simulator::Now().GetSeconds() << ": Channel found " << iter->first.m_tx << " -> " << iter->first.m_rx << " State: " <<
				(int) iter->second->m_currentState << " (" << iter->first.m_link.first << " -> " << iter->first.m_link.second << ")" );

		//2 - If the simulation is based on the time characterization, we will trigger the state-change timing operation
		if (!(iter->second->m_eventStarted) && (m_mode == HMM_TIME_BASED_SIMULATION))
		{
			NS_LOG_DEBUG (Simulator::Now().GetSeconds() <<  " - Timer initialized " << iter->second);
			iter->second->m_eventStarted = true;
			iter->second->InitializeTimer();

			//Initialize the coherence timeout
			iter->second->m_coherenceTimeout = Simulator::Schedule (iter->second->m_coherenceTime, &HiddenMarkovModelEntry::CoherenceTimeoutHandler, iter->second);
		}

		//3- Start over the coherence timeout
		if (iter->second->m_coherenceTimeout.IsRunning())
		{
			iter->second->m_coherenceTimeout.Cancel();
			iter->second->m_coherenceTimeout = Simulator::Schedule (iter->second->m_coherenceTime, &HiddenMarkovModelEntry::CoherenceTimeoutHandler, iter->second);
		}

		//We need to connect the results calculated herein to the error model, hence it must be present an instance of the HiddenMarkovErrorModel
		NS_ASSERT_MSG (m_error, "HiddenMarkovErrorModel not instanced, cannot continue");

		//Update the ErrorModel current state and the decision value
//		m_error->SetDecisionValue ((iter->second->m_emissionMatrix[iter->second->m_currentState])[0]);
//		m_error->SetCurrentState (iter->second->m_currentState);

		//If the simulation is time-based, the chain is prone to change its current state after the reception of each frame
		if (m_mode == HMM_FRAME_BASED_SIMULATION)
		{
			iter->second->ChangeState ();
		}
	}
	else
	{
		NS_LOG_LOGIC ("Link not found");
	}

	return txPowerDbm;
}
