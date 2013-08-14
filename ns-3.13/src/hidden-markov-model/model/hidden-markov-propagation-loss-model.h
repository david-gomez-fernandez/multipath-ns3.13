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

#ifndef HIDDEN_MARKOV_PROPAGATION_LOSS_MODEL_H_
#define HIDDEN_MARKOV_PROPAGATION_LOSS_MODEL_H_


#include <string>
#include <vector>
#include <map>
#include <unistd.h>

#include "ns3/object.h"
#include "ns3/propagation-loss-model.h"

#include "hidden-markov-model-entry.h"
#include "hidden-markov-error-model.h"
#include "ns3/channel-mesh-propagation-handler.h"

using namespace ns3;
using namespace std;


/**
 * \ingroup propagation
 */
class HiddenMarkovPropagationLossModel: public PropagationLossModel
{
public:
	HiddenMarkovPropagationLossModel ();
	virtual ~HiddenMarkovPropagationLossModel ();

	/**
	 * Attribute handler
	 */
	static TypeId GetTypeId (void);

	//Getters/setters

	inline void SetFer (double fer) {m_fer = fer;}
	inline double GetFer () {return m_fer;}

	inline void SetMode (HiddenMarkovSimulationMode mode) {m_mode = mode;}
	inline HiddenMarkovSimulationMode GetMode () {return m_mode;}

	inline void SetErrorModel (Ptr<HiddenMarkovErrorModel> error) {m_error = error;}
	inline Ptr<HiddenMarkovErrorModel> GetErrorModel () {return m_error;}

	/**
	 * Read the node-entry list and create the corresponding links-map. The links will be grabbed from the same configuration matrices
	 */
	void InitFromFile (string transitionMatrixFileName, string emissionMatrixFileName);

	/**
	 *  Read the node-entry list and create the corresponding links-map. The links will be configured from the scenario channel description file (*-channel.conf)
	 */
	void InitFromFer (std::map<int, vector <u_int8_t> > &ferMap);

	/**
	 *  Read the node-entry list and create the corresponding links-map. The matrices will be fixed according to the distance between the nodes
	 */
	void InitFromDistance ();

	/**
	 * Function inherited from the base class Propagation loss model. It is called at YansWifiPhy::StartReceive.
	 * It is worth highlighting that this model does not aim at the characterization of the propagation loss, it is only a link between a propagation
	 * loss model and an error model. Therefore, the received power will be identical to the transmission power.
	 * \param txPowerDbm Transmission power at the source node
	 * \param a Transmitter node's mobility model
	 * \param b Receiver node's mobility model
	 * \return The received signal power
	 */
	virtual double DoCalcRxPower (double txPowerDbm,
			Ptr<MobilityModel> a,
			Ptr<MobilityModel> b) const;

private:
	//New mesh-compatible HMM model parameters
	typedef std::map<ChannelMeshPropagationKey, Ptr<HiddenMarkovModelEntry> > channelSet_t;
	typedef std::map<ChannelMeshPropagationKey, Ptr<HiddenMarkovModelEntry> >::const_iterator channelSetIter_t;
	channelSet_t m_hmmNetworkMap;

	//FER value to "map" the transition and emission files (this is configured and called from the ConfigureScenario class)
	double m_fer;

	//Type of simulation
	HiddenMarkovSimulationMode m_mode;

	//Important: Due to the architecture defined by default, the propagation and the error models are completely independent and invoked. However,
	//we need to set a tightly linked dependency between the two models, since the results provided by the propagation loss model will be the input
	//parameter of the error model
	Ptr<HiddenMarkovErrorModel> m_error;

};



#endif /* HIDDEN_MARKOV_PROPAGATION_LOSS_MODEL_H_ */
