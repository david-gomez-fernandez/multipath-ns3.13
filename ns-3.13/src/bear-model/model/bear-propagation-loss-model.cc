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
#include <stdio.h>

#include <ns3/node.h>
#include <ns3/node-list.h>
#include "ns3/simulator.h"
#include "ns3/packet.h"
#include "ns3/assert.h"
#include "ns3/log.h"
#include "ns3/boolean.h"
#include "ns3/enum.h"
#include "ns3/double.h"
#include "ns3/integer.h"
#include "ns3/string.h"
#include "ns3/wifi-mac-header.h"

#include "bear-propagation-loss-model.h"
#include "bear-model-entry.h"

const bool g_debug = false;  							//Temporal solution (only for debugging)

using namespace std;
using namespace ns3;

NS_LOG_COMPONENT_DEFINE ("BearPropagationLossModel");
NS_OBJECT_ENSURE_REGISTERED (BearPropagationLossModel);

TypeId
BearPropagationLossModel::GetTypeId(void) {
	static TypeId tid = TypeId ("ns3::BearPropagationLossModel")
	.SetParent<PropagationLossModel> ()
	.AddConstructor<BearPropagationLossModel> ()
	.AddAttribute ("RanVar",
			"Random variable which determine a packet to be successfully received or not",
			RandomVariableValue (UniformVariable (0.0, 1.0)),
			MakeRandomVariableAccessor (&BearPropagationLossModel::m_ranvar),
			MakeRandomVariableChecker ())
	.AddAttribute("ArFilterOrder",
			"Order of the Auto Regressive Filter",
			IntegerValue(4),
			MakeIntegerAccessor (&BearPropagationLossModel::m_order),
			MakeIntegerChecker<int> ())
	.AddAttribute("NoiseLevel",
			"Total noise power level (W)",
			DoubleValue(4.412248864e-10),
			MakeDoubleAccessor(&BearPropagationLossModel::m_noise),
			MakeDoubleChecker<double> ())
	.AddAttribute("ArFilterVariance",
			"AR model variance",
			DoubleValue(0.005),
			MakeDoubleAccessor(&BearPropagationLossModel::m_variance),
			MakeDoubleChecker <double> ())
	.AddAttribute("StandardDeviation",
			"AR model standard deviation (dB)",
			DoubleValue(2.6),
			MakeDoubleAccessor(&BearPropagationLossModel::m_stdDevDb),
			MakeDoubleChecker<double> ())
	.AddAttribute("FastFadingVariance",
			"Variance that model the Gaussian model inherent to Fast Fading",
			DoubleValue(2.8),
			MakeDoubleAccessor(&BearPropagationLossModel::m_ffVariance),
			MakeDoubleChecker<double> ())
	.AddAttribute("CoherenceTime",
			"Channel propagation coherence time (in milliseconds)",
			DoubleValue(5000.0),
			MakeDoubleAccessor(&BearPropagationLossModel::m_coherenceTime),
			MakeDoubleChecker<double> ())
	.AddAttribute("CoefficientsFile",
			"Name of the file that contains the AR model coefficients",
			StringValue("coefsAR.cfg"),
			MakeStringAccessor (&BearPropagationLossModel::m_coefficientsFile),
			MakeStringChecker ())
	       ;
  return tid;
}

BearPropagationLossModel::BearPropagationLossModel() : m_order (3),
		m_variance(0.005),
		m_ffVariance (2.8),
//		m_ffVariance (1.67),
		m_stdDevDb (2.6),
		m_ranvar (UniformVariable (0.0, 1.0))
{
	NS_LOG_FUNCTION(this);
	GetCoefficientsFromConfigurationFile("coefsAR.cfg");

	u_int16_t totalNodes;
	u_int16_t i, j;

	Ptr<BearModelEntry> channel;

	channelSetIter_t iter;

	//Private variable initialization
	m_symmetry = true;
	m_coherenceTime = 10000.0;
	m_receivedSnr = make_pair(false, 0.0);

	//// Input noise value
	m_noise = 4.412248864e-10;					//Noise floor, calibrated from the LogPropagationLossModel

	//We will use the FriisPropagationLossModel as the default one
	Ptr<FriisPropagationLossModel> aux = CreateObject <FriisPropagationLossModel> ();
	m_propagationLoss = aux;

	//Create the map which contains the nodes' location (ConstantMobilityModel only)
	totalNodes = NodeList().GetNNodes();

	for (i = 0; i < (int) NodeList().GetNNodes(); i++) {
		for (j = 0; j < (int) NodeList().GetNNodes(); j++) {
			if (i != j) {
				NS_LOG_DEBUG ("Node " << (int) i << " -> Node " << (int) j);
				ChannelMeshPropagationKey key ((NodeList().GetNode(i))->GetObject<MobilityModel>(), (NodeList().GetNode(j))->GetObject<MobilityModel>(), i, j) ;
				Ptr<BearModelEntry> entry = CreateObject <BearModelEntry> (m_order, m_coherenceTime);

				//Insert the element into the map
				m_channelSetMap.insert (pair<ChannelMeshPropagationKey, Ptr<BearModelEntry> > (key, entry));
			}
		}
	}

	//Create the error model
	m_errorModel = CreateObject <BearErrorModel> ();
	m_errorModel->SetChannelMap (&m_channelSetMap);

}

BearPropagationLossModel::~BearPropagationLossModel ()
{
	NS_LOG_FUNCTION(this);
	if (m_arFilterCoefficientsMap.size() > 0)
		m_arFilterCoefficientsMap.clear();
	if (m_channelSetMap.size() > 0)
		m_channelSetMap.clear();
}

void BearPropagationLossModel::SetPropagationLoss (std::string type,
        std::string n0, const AttributeValue &v0,
        std::string n1, const AttributeValue &v1,
        std::string n2, const AttributeValue &v2,
        std::string n3, const AttributeValue &v3,
        std::string n4, const AttributeValue &v4,
        std::string n5, const AttributeValue &v5,
        std::string n6, const AttributeValue &v6,
        std::string n7, const AttributeValue &v7)
{
	NS_LOG_FUNCTION(this);
	ObjectFactory factory;
	factory.SetTypeId (type);
	factory.Set (n0, v0);
	factory.Set (n1, v1);
	factory.Set (n2, v2);
	factory.Set (n3, v3);
	factory.Set (n4, v4);
	factory.Set (n5, v5);
	factory.Set (n6, v6);
	factory.Set (n7, v7);
	m_propagationLoss = factory.Create<PropagationLossModel> ();
}

void BearPropagationLossModel::SetPropagationLoss (Ptr<PropagationLossModel> loss)
{
	NS_LOG_FUNCTION(this);
	m_propagationLoss = loss;
}

void BearPropagationLossModel::SetErrorModel(Ptr<BearErrorModel> error)
{
	NS_LOG_FUNCTION(this);
	m_errorModel= error;
}

Ptr<BearErrorModel> BearPropagationLossModel::GetErrorModel()
{
	NS_LOG_FUNCTION(this);
	return m_errorModel;
}

bool BearPropagationLossModel::GetCoefficientsFromConfigurationFile (string fileName)
{
	NS_LOG_FUNCTION (fileName);

	fstream arCoefficientsFile;
	int currentCoefficientNumber, i, j;
	char line[256];
	double arCurrentCoefficient;
	string arCoefficientFilePath;
	vector<double> arCoefficientsVector;

	coefSetIter_t iter; 							//Only for debugging

	//File handling
	arCoefficientFilePath = GetCwd() + "/src/bear-model/configs/" + fileName;

	arCoefficientsFile.open((const char *) arCoefficientFilePath.c_str(), ios::in);
	NS_ASSERT_MSG (arCoefficientsFile, "File " << arCoefficientFilePath << " not found");

	while(arCoefficientsFile.getline(line, 256)) {
		currentCoefficientNumber = atoi(line);  				// This is the current number of coeficients
		j = 0;
		for( i=0 ; i <= currentCoefficientNumber ; i++) {
			// We need to go to the next coefficient
			while(line[j] != ' ' && line[j] != '\t') {
				j++;
			}
			while(line[j] == ' ' || line[j] == '\t') {
				j++;
			}
			arCurrentCoefficient = atof(line + j);
			arCoefficientsVector.push_back(arCurrentCoefficient);
		}

		m_arFilterCoefficientsMap.insert(pair<int,vector<double> > (currentCoefficientNumber,arCoefficientsVector));
		arCoefficientsVector.clear();
	}


	//DEBUGGING
	#ifdef NS3_LOG_ENABLE
		if (g_debug)
		{
			//Print the m_transitionMatrix map
			printf ("---AR Coefficients Vector---\n");
			for (iter = m_arFilterCoefficientsMap.begin(); iter != m_arFilterCoefficientsMap.end(); iter ++ )
			{
				printf ("KEY %2d  - ", iter->first);
				for (i = 0; i < (int) (iter->second).size(); i++)
				{
					printf ("%1.8f  ", (iter->second)[i]);
				}
				printf ("\n");
			}
		}

	#endif   //NS3_LOG_ENABLE

	arCoefficientsFile.close();

	return true;
}

double BearPropagationLossModel::DoCalcRxPower (double txPowerDbm, Ptr<MobilityModel> a, Ptr<MobilityModel> b) const
{
	NS_LOG_FUNCTION(Simulator::Now().GetSeconds() << txPowerDbm << a << b);
	double rxPowerDbm;
	double arOutput;
	double fastFadingRandomValue;
	NormalVariable fastFading (0.0, m_ffVariance);
	double snr;

	//The estimation of the received SNR will be composed by three different stages

	//1- The first contribution will rely on a previously defined propagation loss model that
	//will calculate the atenuation factor as a function of the distance between the two involved nodes
	// (we should apply a deterministic propagation loss model).
	rxPowerDbm = m_propagationLoss->CalcRxPower(txPowerDbm, a, b);

	if (m_receivedSnr.first)  //If true, force the channel to return a fixed SNR value. Since it is already a relative value, we don't need to calculate the final SNR
	{
		rxPowerDbm = m_receivedSnr.second;
		snr = m_receivedSnr.second;
	}
	else
	{
		rxPowerDbm = m_propagationLoss->CalcRxPower(txPowerDbm, a, b);
		snr = rxPowerDbm - 10 * log10(m_noise);
	}

	//2 - Calculate the SF contribution; we have to look into the sliding windows searching the previous samples
	arOutput = GetCurrentArValue (a, b);

	//3 - The FF contribution will be a raw random value
	if(m_order)
	{
		fastFadingRandomValue = fastFading.GetValue();
	}
	else
	{
		fastFadingRandomValue = 0;
	}

	NS_LOG_INFO ("Prop.= " << rxPowerDbm << " AR filter = " << arOutput << " Fast Fading " << fastFadingRandomValue);

	//Only for debugging
	channelSetIter_t iter = m_channelSetMap.find (ChannelMeshPropagationKey (a,b));
	if (iter != m_channelSetMap.end())
	{
		//Store the values
		iter->second->SetCurrentRxPower (snr);
		iter->second->SetCurrentSlowFading (arOutput);
		iter->second->SetCurrentFastFading (fastFadingRandomValue);
		iter->second->SetCurrentSnr (snr + arOutput + fastFadingRandomValue);

		NS_LOG_DEBUG (Simulator::Now().GetSeconds() << ": Channel found " << iter->first.m_tx << " -> " << iter->first.m_rx << " SNR: " <<
				rxPowerDbm + arOutput + fastFadingRandomValue << "dB (" << iter->first.m_link.first << " -> " << iter->first.m_link.second << ")" );

	}

	return  rxPowerDbm + arOutput + fastFadingRandomValue;
}

double BearPropagationLossModel::GetArFilterCoefficient(int key, int vectorPosition) const
{
	NS_LOG_FUNCTION_NOARGS();

	double arCoefficient = 0.0;
	coefSetIter_t iter = m_arFilterCoefficientsMap.find(key);
	if(iter != m_arFilterCoefficientsMap.end())
	{
		if (vectorPosition < (signed) iter->second.size())
			arCoefficient = (iter->second) [vectorPosition];
	}
	else {
		NS_LOG_ERROR ("AR coefficient not found");
		arCoefficient = 0.0;
	}

	NS_LOG_FUNCTION (key << vectorPosition << arCoefficient);

	return arCoefficient;
}


double BearPropagationLossModel::GetCurrentArValue (Ptr<MobilityModel> sender, Ptr<MobilityModel> receiver) const
{
	NS_LOG_FUNCTION_NOARGS();

//	bool txFound = false;
//	bool rxFound = false;
//	ChannelKey key;
	channelSetIter_t channelKeyIter;
	Ptr<BearModelEntry> channel;
	u_int32_t i;
	int currentSize;
	double currentSnr = 0.0;
	vector<double> previousSNR;
	NormalVariable randomArNoise (0.0, pow(m_stdDevDb,2));
	NormalVariable randomNoise (0.0, m_variance);

	channelKeyIter = m_channelSetMap.find (ChannelMeshPropagationKey (sender, receiver));

	 if (channelKeyIter != m_channelSetMap.end())
	 {
		 channel = channelKeyIter->second;
	 }
	 else
	 {
		 NS_LOG_ERROR ("Channel not found");
		 channel = 0;
	 }

	 //If there is a channel defined, get the current SNR value
	 if (channel != 0)
	 {
		 currentSize = channel->GetPreviousSnr(previousSNR);
		 //If we have any packet buffered, use the Yule-Walker expression
		 if (currentSize && m_order)
		 {
			 currentSnr = randomNoise.GetValue();
			 #ifdef NS3_LOG_ENABLE
			 if (g_debug)
			 {
				 printf("Slow fading: SV[i] = ");
			 }
			 #endif //NS3_LOG_ENABLE
			 if (currentSize < m_order)
			 {

				 for (i=0; i < (unsigned) currentSize; i++)
				 {
					currentSnr -= previousSNR[i] * GetArFilterCoefficient(currentSize, currentSize -i);
					#ifdef NS3_LOG_ENABLE
					if (g_debug)
					{
						printf("a [%d,%d] (%f) * SV [i-%d] (%f) ", currentSize , currentSize - i, GetArFilterCoefficient(currentSize, currentSize -i),    \
								currentSize - i, previousSNR[i] );
						if ( i != (unsigned) currentSize - 1)
							printf("+ ");
					}
					#endif //NS3_LOG_ENABLE

				 }
				 #ifdef NS3_LOG_ENABLE
				 if (g_debug)
					 printf(" = %f\n", currentSnr);
				#endif //NS3_LOG_ENABLE
			 }
			 else
			 {
				 for (i=0; i < (unsigned) currentSize; i++)
				 {
					 currentSnr -= previousSNR[i] * GetArFilterCoefficient(m_order, currentSize -i);
					 #ifdef NS3_LOG_ENABLE
					 if (g_debug)
					 {
						 printf("a [%d,%d] (%f) * SV [i-%d] (%f) ", m_order , currentSize - i, GetArFilterCoefficient(m_order, currentSize -i),    \
								 currentSize - i, previousSNR[i] );
						 if ( i != (unsigned) currentSize - 1)
							 printf("+ ");
					 }
					 #endif //NS3_LOG_ENABLE

				 }
				 #ifdef NS3_LOG_ENABLE
				 if (g_debug)
					 printf(" = %f\n", currentSnr);
				 #endif //NS3_LOG_ENABLE
			 }
		 }

		 //When we have an empty queue (currentSize == 0) -> We set the Slow Varying value
		 //as a random number (Normal Variable with average centered at 0.0 and a variance
		 //equal to m_stdDevDb
		 else
		 {
			 currentSnr = randomArNoise.GetValue();
			 if (g_debug)
				 printf("Slow fading: SV[i] = %f\n", currentSnr);
		 }

		 if (m_order)
			 channel->UpdateSnr(currentSnr);
	 }
	 else
		 NS_LOG_ERROR("AR propagation loss model does not know the current tx/rx pair" );

	return currentSnr;
}

void BearPropagationLossModel::SetReceivedSnr(pair<bool, double> receivedSnr)
{
	NS_LOG_FUNCTION(this);
	m_receivedSnr = receivedSnr;
}

std::string BearPropagationLossModel::GetCwd () {
	NS_LOG_FUNCTION_NOARGS();
	char buf[FILENAME_MAX];
	char* succ = getcwd(buf, FILENAME_MAX);
	if (succ)
		return std::string(succ);
	return ""; 						// raise a flag, throw an exception, ...
}

