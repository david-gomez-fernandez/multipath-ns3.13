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

#ifndef BEAR_PROPAGATION_LOSS_MODEL_H_
#define BEAR_PROPAGATION_LOSS_MODEL_H_

#include <string>
#include <vector>
#include <map>
#include <unistd.h>

#include "ns3/object.h"
#include "ns3/random-variable.h"

//AR model will play the role as the derived classes of both Error and Propagation Loss models
#include "ns3/mobility-model.h"
#include "ns3/propagation-loss-model.h"

#include "ns3/event-id.h"
#include "ns3/channel-mesh-propagation-handler.h"

//Configuration file
#include "ns3/configuration-file.h"

//BEAR error model
#include "bear-error-model.h"
#include "bear-model-entry.h"


using namespace std;
namespace ns3 {

class Packet;
class BearErrorModel;

/**
 * \ingroup propagation
 * \brief Propagation Loss Model based on splitting the received signal into three main components: deterministic, slow fading (by means of an Auto-Regressive filter) and fast fading contributions
 */
class BearPropagationLossModel: public PropagationLossModel
{
public:
	/**
	 * Attribute handler
	 */
	static TypeId GetTypeId (void);
	/**
	 * Default constructor
	 */
	BearPropagationLossModel ();

	/**
	 * Default destructor
	 */
	virtual ~BearPropagationLossModel ();

	/**
	 * \param name the name of the model to set
	 * \param n0 the name of the attribute to set
	 * \param v0 the value of the attribute to set
	 * \param n1 the name of the attribute to set
	 * \param v1 the value of the attribute to set
	 * \param n2 the name of the attribute to set
	 * \param v2 the value of the attribute to set
	 * \param n3 the name of the attribute to set
	 * \param v3 the value of the attribute to set
	 * \param n4 the name of the attribute to set
	 * \param v4 the value of the attribute to set
	 * \param n5 the name of the attribute to set
	 * \param v5 the value of the attribute to set
	 * \param n6 the name of the attribute to set
	 * \param v6 the value of the attribute to set
	 * \param n7 the name of the attribute to set
	 * \param v7 the value of the attribute to set
	 *
	 * Configure a propagation delay for this channel.
	 */
	void SetPropagationLoss (std::string name,
			std::string n0 = "", const AttributeValue &v0 = EmptyAttributeValue (),
			std::string n1 = "", const AttributeValue &v1 = EmptyAttributeValue (),
			std::string n2 = "", const AttributeValue &v2 = EmptyAttributeValue (),
			std::string n3 = "", const AttributeValue &v3 = EmptyAttributeValue (),
			std::string n4 = "", const AttributeValue &v4 = EmptyAttributeValue (),
			std::string n5 = "", const AttributeValue &v5 = EmptyAttributeValue (),
			std::string n6 = "", const AttributeValue &v6 = EmptyAttributeValue (),
			std::string n7 = "", const AttributeValue &v7 = EmptyAttributeValue ());

	/**
	 *  Read the node-entry list and create the corresponding links-map. The links will be configured from the scenario channel description file (*-channel.conf)
	 */
	void InitFromFer (std::map<int, vector <u_int8_t> > &ferMap);

	/**
	 * \brief Set the propagation loss model
	 * \param loss Pointer to the propagation loss model to set
	 */
	void SetPropagationLoss (Ptr<PropagationLossModel> loss);

	/**
	 * \brief Set the error model
	 * \param error Pointer to the error model to set
	 */
	void SetErrorModel (Ptr<BearErrorModel> error);
	/**
	 * \returns The Bursty error model linked to this class
	 */
	Ptr<BearErrorModel> GetErrorModel ();
	/**
	 * \param fileName Name of the file which holds the AR filter coefficient
	 */
	bool GetCoefficientsFromConfigurationFile (string fileName);

	/**
	 * \param key AR coefficient set map key value
	 * \param vectorPosition The position in which stays the desired coefficient
	 * \returns AR coefficient
	 */
	double GetArFilterCoefficient (int key, int vectorPosition) const;
	/**
	 * \brief
	 * \param tx Transmitter index
	 * \param rx Reveiver index
	 * \returns Auto Regressive filter obtained value (dB)
	 */
	double GetCurrentArValue (Ptr<MobilityModel> sender, Ptr<MobilityModel> receiver) const;
	/**
	 * \returns the pair which define whether the channel has a fixed FER or not
	 */
	inline pair <bool, double> GetReceivedSnr () {return m_receivedSnr;}
	/**
	 * \param receivedSnr With this parameter set as true, the second value will define the received SNR for the nodes
	 */
	void SetReceivedSnr (pair <bool, double> receivedSnr);
	/**
	 * As its name explicitly defines, this function will disable the possibility of setting a fixed SNR value for every link over the scenario
	 */
	void DisableFixedSnr ();

private:

	/**
	 * PropagationLossModel virtual (abstract) method --> Equivalent to ns-2 arModel::Pr (PacketStamp *t_, PacketStamp *r_, WirelessPhy *ifp_)
	 * Important: The returned value will be worthless -> The operation will be held in a different procedure
	 */

	virtual double DoCalcRxPower (double txPowerDbm,
			Ptr<MobilityModel> a,
			Ptr<MobilityModel> b) const;

	/* AR mode parameters */
	int m_order;               /* Order of the AR filter  */
	double m_variance;         /* Input noise variance    */
	double m_ffVariance;       /* Fast Fading variance    */
	double m_coherenceTime;    /* Coherence time          */
	bool m_symmetry;            /* Am I using symmetry?    */

	/* Other parameters of the channel */
	double m_stdDevDb;         /* standard deviation (dB) */

	std::pair<bool, double> m_receivedSnr;  /*Enable an option to set a fixed received SNR value*/
	double m_noise;				/* Noise Power used to model the SNR */

	RandomVariable m_ranvar;

	//Map which will contain
	typedef std::map <ChannelMeshPropagationKey, Ptr<BearModelEntry> > channelSet_t;
	typedef std::map <ChannelMeshPropagationKey, Ptr<BearModelEntry> >::const_iterator channelSetIter_t;
	channelSet_t m_channelSetMap;

	/* The coeficients of the AR model */
	typedef map<int, vector<double> > coefSet_t;
	typedef coefSet_t::const_iterator coefSetIter_t;
	coefSet_t m_arFilterCoefficientsMap;

	/*Propagation Loss Model*/
	Ptr<PropagationLossModel> m_propagationLoss;

	/* BEAR model --> The propagation and the error models must be linked somehow; hence, we have opted for including this latter one within the propagation loss model,
	 since the error decision engine will be based on the results provided by the propagation module */
	Ptr<BearErrorModel> m_errorModel;

	/* Coefficient file name */
	string m_coefficientsFile;

protected:
	/**
	 * \return The current path (in string format)
	 */
	static std::string GetCwd ();

};

}  //namespace ns3
#endif /* BEAR_PROPAGATION_LOSS_MODEL_H_ */
