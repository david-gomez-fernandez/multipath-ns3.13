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

#ifndef NETWORK_CODING_L4_PROTOCOL_H_
#define NETWORK_CODING_L4_PROTOCOL_H_


#include "ns3/core-module.h"
#include "ns3/internet-module.h"
#include "ns3/configuration-file.h"

#include <stdio.h>
#include <math.h>

#include "network-coding-header.h"
#include "network-coding-buffer.h"

const bool g_debug = false;

/**
 * \brief Dumps a memory block in hexadecimal
 *
 * This prints a chunk of memory in hexadecimal format, this may be appropriate
 * e.g. for debugging transmitted/received packets, as well as addresses (MAC), etc
 *
 * \param label Reference of what it is being dumped
 * \param data Pointer to the first memory position
 * \param len Lenght of the data to be dumped
 */
#define PRINT   	printf
#define DBG_DUMP(label, data, len) \
		{if(g_debug) \
	{ int i; \
	PRINT("%-4s [%2d] ", label, len) ; \
	for (i=0;i<len;i++) { \
		if(i%8 == 0 && i!=0) { \
			PRINT("\n") ; PRINT("          ") ; } \
			PRINT("%02X ", ((unsigned char*) data)[i]) ; } \
			PRINT("\n") ; \
	}}

namespace ns3 {


typedef struct  {

	u_int32_t codedPacketTx;
	u_int32_t uncodedPacketTx;
	u_int32_t decodeSuccess;
	u_int32_t decodeFailure;

	u_int32_t transmissionNumber;

	u_int32_t networkCodingLayerTotalBytes;
	double startingTime;
	double lastReception;

	bool transmissionStarted;

} NetworkCodingStatistics_t;

/**
 * Classed used for defining the Network Coding layer which will be in charge of handling the encoding/decoding decisions. The current implementation carries on a XOR coding mechanism (we envisage to substitute with a
 * more complex one, i.e. Random Linear Coding
 */
class NetworkCodingL4Protocol: public Ipv4L4Protocol {
public:
	//Callbacks definition
	typedef Callback<enum Ipv4L4Protocol::RxStatus, Ptr<Packet>, Ipv4Header const &, Ptr<Ipv4Interface> > UpTargetCallback;

	/**
	 * Attribute handler
	 */
	static TypeId GetTypeId (void);
//	static const uint8_t PROT_NUMBER;
	/**
	 * Default constructor
	 */
	NetworkCodingL4Protocol();

	/**
	 * Default destructor
	 */
	virtual ~NetworkCodingL4Protocol();

	/**
	 *	Locate in which node the NetworkCodingL4ProtocolObject is stored
	 *	\param node Node that contains the object
	 */
    virtual  void SetNode (Ptr<Node> node) = 0;

	//Inherited pure virtual functions (Ipv4L4Protocol) we have to define
	/**
	 * \returns the protocol number of this protocol.
	 */
	virtual int GetProtocolNumber (void) const = 0;

	/**
	 * \param packet packet to send
	 * \param source source address of packet
	 * \param destination address of packet
	 * \param protocol number of packet
	 * \param route route entry
	 *
	 * Higher-level layers call this method to send a packet
	 * down the stack to the IP level
	 */
	virtual void Send (Ptr<Packet> packet, Ipv4Address source, Ipv4Address destination, uint8_t protocol, Ptr<Ipv4Route> route) = 0;
	/**
	   * \param p packet to forward up
	   * \param header IPv4 Header information
	   * \param incomingInterface the Ipv4Interface on which the packet arrived
	   * Called from lower-level layers to send the packet up
	   * in the stack.
	   */
	virtual enum Ipv4L4Protocol::RxStatus Receive (Ptr<Packet> packet, Ipv4Header const &header, Ptr<Ipv4Interface> incomingInterface) = 0;  	//Old version, inherited form base clase Ipv4L4Protocol
	/**
	 * As we need to overhear all the packets incoming from the node's surrounding area, we must configure promiscuous nodes. For that purpose, we need to hook a method through the method
	 * WifiNetDevice::SetPromiscReceiveCallback, which will invoke this method (since we have linked them). Therefore, a "promiscuous" packet will be bypassed directly from the Link Layer
	 * the Network Coding level, thus passing through the network layer. Therefore, we must discard the IP header in order to get execution exceptions.
	 * NOTE: It is worth highlighting that the callback method will deliver every received frame (including if the node is the expected receiver), hence he have to be careful of parsing
	 * duplicated packets
	 * \param device The NetDevice object from which we will receive the packet
	 * \param packet The overheard packet
	 * \param protocol LLC Header's protocol type
	 * \param from Source address (class Address)
	 * \param to Destination address (class Address)
	 * \param packetType NetDevice::PacketType enumerate
	 * \returns True if success; false otherwise
	 */
	virtual bool ReceivePromiscuous (Ptr<NetDevice> device, Ptr<const Packet> packet, uint16_t protocol, const Address &from, const Address &to, NetDevice::PacketType packetType) = 0;

	/**
	 * Configure the main parameters of the buffers belonging to the Network Coding Layer
	 */
	virtual void SetNetworkCodingBufferParameters (Time bufferTimeout, u_int32_t bufferSize, u_int8_t maxCodedPackets ) = 0;

	/**
	 * Open trace file (heir class handled)
	 */
	virtual void OpenTraceFile (string name) = 0;

	/**
	 * This method allows a caller to set the current down target callback set for this L4 protocol
	 * \param cb current Callback for the L4 protocol
	 */
	virtual inline void SetDownTarget (Ipv4L4Protocol::DownTargetCallback cb) {m_downTarget = cb;}
	/**
	 * This method allows a caller to get the current down target callback set for this L4 protocol
	 * \return current Callback for the L4 protocol
	 */
	virtual inline Ipv4L4Protocol::DownTargetCallback GetDownTarget (void) const {return m_downTarget;}

	/**
	 * Share the most relevant information relative to the main parameters that characterize the Network Coding behavior (i.e. coding rate, decoding rate, throughput...)
	 * \returns The structs that holds the information perceived by the corresponding NC layer
	 */
	virtual inline NetworkCodingStatistics_t *GetNetworkCodingStatistics () {return &m_ncStatistics;}

	typedef enum
	{
	     RECEIVE_OK,
	     NC_FORWARD_UP,
	     NC_SEND_DOWN_NATIVE,
	     NC_SEND_DOWN_CODED
	} NetworkCodingRxState_t;

protected:
	Ipv4L4Protocol::DownTargetCallback m_downTarget;

	NetworkCodingStatistics_t m_ncStatistics;

};


}	//End namespace ns3
#endif /* NETWORK_CODING_L4_PROTOCOL_H_ */
