/* -*-  Mode: C++; c-file-style: "gnu"; indent-tabs-mode:nil; -*- */
/*
 * Copyright (c) 2012 Universidad de Cantabria
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

#ifndef NETWORK_CODING_HELPER_H_
#define NETWORK_CODING_HELPER_H_

#include "ns3/core-module.h"
#include "ns3/network-module.h"
#include "ns3/wifi-net-device.h"
#include "ns3/simple-network-coding.h"

#include <string>
#include <vector>

namespace ns3 {

class NetworkCodingHelper
{
public:
	//Default constructor
	NetworkCodingHelper ();
	//Default destructor
	~NetworkCodingHelper ();

	/**
	 * Create and aggregate the Network Coding stack into the nodes stored at the specified NodeContainer. Besides, hook a promiscuous reception which connect the method WifiNetDevice::ForwardUp
	 * with our promiscuous handler, SimpleNetworkCoding::ReceivePromiscuous
	 * \param c Node Container to which we are going to install the stack
	 * \param tid Network Coding protocol typeid string
	 */
	void Install (NodeContainer c, std::string typeId);

	/**
	 * \brief Set the Network Coding stack which will not need any other parameter.
	 *
	 * This function sets up the network coding stack according to a given TypeId.
	 * \param tid the type id, namely "ns3::SimpleNetworkCoding"
	 */
	void SetNetworkCodingBuffer (Time bufferTimeout, u_int32_t bufferSize, u_int8_t maxCodedPackets);

	/**
	 *  \brief Configure the parameters associated to the SimpleNetworkCoding TCP ACK encapsulation feature
	 *  \param bufferTimeout Sojourn time into this ACK buffer
	 *  \param bufferSize Maximum number of acknowledgements allowed within this buffer
	 */
	void SetAckBufferParameters (Time bufferTimeout, u_int8_t bufferSize);

	/**
	 * \return The vector that contains all the NetworkCodingL4Protocol stacks installed at the nodes (one per each one)
	 */
	inline std::vector <Ptr <NetworkCodingL4Protocol> > GetNetworkCodingList () {return m_networkCodingList;}

	/**
	 * \brief Create (by means of the ObjectFactory construction mechanisms) an object belonging to the Typeif
	 * \param node Pointer to the node in which we want to aggregate the object
	 * \param typeId String that defines the Network Coding Protocol we want to install at the nodes
	 * \returns A "neutral" point to the object. Is correspond to the calling method to "dynamically" cast this pointer to the desired class
	 */
	Ptr<NetworkCodingL4Protocol> CreateAndAggregateObjectFromTypeId (Ptr<Node> node, const std::string typeId);

	/*
	 * Enable/disable the TCP Ack encapsulation scheme
	 */
	void SetEmbeddedAckScheme (bool flag);

	/**
	 * Enable the system to trace the most relevant statistics
	 * \param name Trace file name
	 */
	void EnableTracing (string name, u_int32_t run, double fer);

	/**
	 * Print out to a trace file the information relative to the whole set of Network Coding nodes
	 */
	void PrintStatistics ();

private:

	std::vector <Ptr <NetworkCodingL4Protocol> > m_networkCodingList;

	Time m_bufferTimeout;
	u_int32_t m_bufferSize;
	u_int8_t m_maxCodedPackets;

	Time m_ackBufferTimeout;
	u_int8_t m_ackBufferSize;

	//Parameters needed for the output tracing
	double m_fer;
	u_int32_t m_run;

	bool m_printStatistics;
	fstream m_traceFile;

};

}  //End namespace ns3
#endif /* NETWORK_CODING_HELPER_H_ */
