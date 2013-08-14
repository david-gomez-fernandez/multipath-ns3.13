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

#ifndef HIDDEN_MARKOV_ERROR_MODEL_H_
#define HIDDEN_MARKOV_ERROR_MODEL_H_

#include <map>
#include <unistd.h>

#include "ns3/object.h"
#include "ns3/random-variable.h"
#include "ns3/error-model.h"

//Parse the headers involved on the error decision
#include "ns3/wifi-mac-header.h"
#include "ns3/llc-snap-header.h"
#include "ns3/ipv4-header.h"
#include "ns3/tcp-header.h"
#include "ns3/udp-header.h"

#include "hidden-markov-model-entry.h"
#include "ns3/channel-mesh-propagation-handler.h"

using namespace std;
namespace ns3 {

class Packet;
//class HiddenMarkovModelEntry;

/**
 * \ingroup errormodel
 * \brief Error model based on a Hidden Markov Chain, with N states and M observables. This model can work in either frame
 * or time simulations
 *
 */

class HiddenMarkovErrorModel: public ErrorModel {
public:

	typedef std::map<ChannelMeshPropagationKey, Ptr<HiddenMarkovModelEntry> > channelSet_t;
	typedef std::map<ChannelMeshPropagationKey, Ptr<HiddenMarkovModelEntry> >::const_iterator channelSetIter_t;
	/**
	 * Attribute handler
	 */
	static TypeId GetTypeId (void);
	/**
	 * Default constructor
	 */
	HiddenMarkovErrorModel ();
	/**
	 * Default destructor
	 */
	virtual ~HiddenMarkovErrorModel ();

	/**
	 * \returns The current state at the Markov chain
	 */
	u_int8_t GetCurrentState () const;
	/**
	 * \params state Desired state to set up into the model
	 */
	void SetCurrentState (u_int8_t state);

	/**
	 * \returns Whether a frame is received correctly or not
	 */
	bool Decide();

	/**
	 *  After the PropagationLoss models extracts the decision value from the corresponding emission matrix, it will use this "pipe"
	 *  to share the information with this ErrorModel
	 */
	void SetDecisionValue (double value);

	/**
	 * Information handled by the propagation loss model; which will be used to decide a frame reception error
	 */
	inline void SetChannelMap (channelSet_t *map) {m_hmmNetworkMap = map;}

	/**
	 * To obtain the SNR of a particular link, we need to know the identity of both source and sink nodes, in order to later look them into
	 * the map and select the corresponding SNR value
	 * \param tx The Node ID of the transmitter entity
	 */
	void SetTxIndex (u_int16_t tx);
	/**
	 * To obtain the SNR of a particular link, we need to know the identity of both source and sink nodes, in order to later look them into
	 * the map and select the corresponding SNR value
	 * \param rx The Node ID of the receiver entity
	 */
	void SetRxIndex (u_int16_t rx);

private:

	virtual bool DoCorrupt (Ptr<Packet>);
	virtual void DoReset (void);

	//Variable member needed to decide whether a frame is correct or not
	RandomVariable m_ranvar;						//Random value used to decide whether a frame is correct or not
	double m_decisionValue;							//Value extracted from the propagation loss model, which contains the information belonging to the transition and decision matrices
	u_int8_t m_currentState;								//Current position into the chain model

	//New mesh-compatible HMM model parameters
	const channelSet_t *m_hmmNetworkMap;

	//We have to know the identity of both the transmitter and the receiver to select the correct SNR value
	u_int16_t m_txIndex;
	u_int16_t m_rxIndex;

protected:
	/**
	 * \return The current path (in string format)
	 */
	static std::string GetCwd ();

};

}    ////namespace ns3
#endif /* HIDDEN_MARKOV_ERROR_MODEL_H_ */
