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

#ifndef BEAR_ERROR_MODEL_H_
#define BEAR_ERROR_MODEL_H_


#include <string>
#include <vector>
#include <map>
#include <unistd.h>

#include "ns3/object.h"
#include "ns3/random-variable.h"


#include "ns3/core-module.h"
#include "ns3/error-model.h"

//Needed to parse the packet content (BearErrorModel::ParsePacket)
#include "ns3/wifi-mac-header.h"
#include "ns3/llc-snap-header.h"
#include "ns3/ipv4-header.h"
#include "ns3/tcp-header.h"
#include "ns3/udp-header.h"
#include "ns3/network-coding-header.h"

#include "bear-model-entry.h"
#include "ns3/channel-mesh-propagation-handler.h"


using namespace std;

namespace ns3
{

//Error model selection
typedef enum {
	NO_ERROR_MODEL,
	BEAR_MODEL,
	SHADOWING_MODEL
} errorModelOption_t;


//Different types of information handled by the Bear Model
enum PacketType {
	TCP_DATA,
	UDP_DATA,
	IEEE_80211_ACK,
	IEEE_80211_NODATA,
	ARP_PACKET,
	NETWORK_CODING_DATA
};

//Struct which will hold all the parsed protocol headers, as well as an enumerate defining its particular type (see PacketType enum above)
typedef struct {
	WifiMacHeader wifiHdr;
	LlcSnapHeader llcHdr;
	Ipv4Header ipv4Hdr;
	TcpHeader tcpHdr;
	UdpHeader udpHdr;
	NetworkCodingHeader ncHeader;
	u_int16_t payloadLength;
	PacketType type;
} packetInfo_t;

//Struct containing all the SNR estimation contribution (i.e. atenuation, slow fading, fast fading and the overall one)
typedef struct {
	double propagationSnr;
	double slowFading;
	double fastFading;
	double totalSnr;
} snrContributions_t;


class BearModelEntry;

//Parameter to carry out the error decision
	struct BearLogisticFunction {
		BearLogisticFunction ();
		BearLogisticFunction (const double a, const double b,
				const double c, const int lowThreshold, const int highThreshold);
		double a;
		double b;
		double c;
		int lowThreshold;
		int highThreshold;
	};

/**
 * \ingroup errormodel
 * \brief Error model tighly linked to the BearPropagationLossModel propagation class, since decided whether a frame is correct or not according to the estimated received SNR
 */
class BearErrorModel: public ErrorModel
{
public:

	//Parameter definitions
	typedef std::map <ChannelMeshPropagationKey, Ptr<BearModelEntry> > channelSet_t;
	typedef std::map <ChannelMeshPropagationKey, Ptr<BearModelEntry> >::const_iterator channelSetIter_t;

	/**
	 * arg1: packet received successfully
	 * arg3: ID of the node which has captured the frame
	 * arg4: Boolean that represents whether a packet has been succesfully received or not
	 * arg5: snr (global) of packet
	 * arg6: snr due to the AR model (Slow fading)
	 * arg7: Fast Fading related SNR
	 */
	typedef Callback<void,Ptr<Packet>, int, bool, double, double, double> BearRxCallback_t;

	/**
	 * Attribute handler
	 */
	static TypeId GetTypeId (void);
	/**
	 * Default constructor
	 */
	BearErrorModel ();

	/**
	 * Default destructor
	 */
	virtual ~BearErrorModel ();
	/**
	 * \brief Apply a logistic function to decide whether a data frame is correct or not
	 * \param packet The packet received
	 * \returns True if the packet is corrupted
	 */
	bool CorruptDataFrame (Ptr<Packet> packet);
	/**
	 * \brief Apply a logistic function to decide whether an ack (TCP) frame is correct or not
	 * \param packet The packet received
	 * \returns True if the packet is corrupted
	 */
	bool CorruptAckFrame (Ptr<Packet> packet);
	/**
	 * \brief Apply a logistic function to decide whether a broadcast/control/management frame is correct or not
	 * \param packet The packet received
	 * \returns True if the packet is corrupted
	 */
	bool CorruptBcastCtrlFrame (Ptr<Packet> packet);

	/**
	 * \brief Use the logistic function to obtain the FER
	 * \param params Struct that holds the logistic function parameters
	 * \returns The FER value
	 */
	double GetBearFer (BearLogisticFunction *params);

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

	/**
	 * Get the decomposed received contributions
	 * \returns The SNR split into three contributions: propagation-due, slow fading (by means of the AR-filter), and fast fading (through a random value)
	 */
	double GetSnr () const;

	/**
	 * \param packet Packet received by the node
	 * \returns Struct which contains the info relative to the packet
	 */
	packetInfo_t ParsePacket (Ptr<Packet> packet);

	/**
	 * Information handled by the propagation loss model; which will be used to decide a frame reception error
	 */
	inline void SetChannelMap (channelSet_t *map) {m_channelSetMap = map;}

	//Callback invoked when a packet is received by the error model object
	void SetRxCallback (BearRxCallback_t callback);

private:
	/**
	 * This error model will decide whether a frame is corrupt or not depending on the SNR value gathered from its
	 * linked propagation loss model, BearPropagationLossModel . After it has provided this value, this model will calculate, through
	 * the following logistic function:
	 *
	 * \fFER =
  	 * \begin{cases}
     * 1, & \text{  } SNR < LT \\
     * \frac{a}{1 + e^{b \cdot (SNR - c)}} ,  & \text{ } SNR~\epsilon~[LT, HT] \\
     * 0,       & \text{  } SNR > HT
     * \end{cases} \f
	 */
	virtual bool DoCorrupt (Ptr<Packet>);
	/**
	 * Reset the model
	 */
	virtual void DoReset (void);

	RandomVariable m_ranvar;

	//Logistic function configuration parameters
	BearLogisticFunction m_dataLogParams;
	BearLogisticFunction m_ackLogParams;
	BearLogisticFunction m_bcastCtrlLogParams;

	//Choose among the different options (0- No model, 1- BEAR model, 2- Shadowing model)
	errorModelOption_t m_errorModelType;

	//
	snrContributions_t m_unwrappedSnr;

	//We have to know the identity of both the transmitter and the receiver to select the correct SNR value
	u_int16_t m_txIndex;
	u_int16_t m_rxIndex;

	//Configure the last SNR sample (must be synced to the BearPropagationLossModel)
	double m_snr;

	const channelSet_t *m_channelSetMap;

	// Tracing [deprecated] --> Commonly handled by a proprietary tracing scheme (take a look at /src/scenario-creator/model/proprietary-tracing.*)
	/**
	 * The trace source fired when a packet ends the reception process from
	 * the medium.
	 *
	 * \see class CallBackTraceSource
	 */
	TracedCallback<Ptr<const Packet>, int, bool, double, double, double> m_rxTrace;
	BearRxCallback_t m_rxCallback;

};


 }    //End namespace ns3

#endif /* BEAR_ERROR_MODEL_H_ */
