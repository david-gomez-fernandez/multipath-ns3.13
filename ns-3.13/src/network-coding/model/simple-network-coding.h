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
 *  	   Mario Puente <mario.puente@alumnos.unican.es>
 *		   Ramón Agüero Calvo <ramon@tlmat.unican.es>
 */

#ifndef SIMPLE_NETWORK_CODING_H_
#define SIMPLE_NETWORK_CODING_H_

#include "ns3/core-module.h"
#include "ns3/internet-module.h"
#include "ns3/configuration-file.h"

#include <stdio.h>
#include <math.h>
#include <set>

//#include "network-coding-l4-protocol.h"
#include "network-coding-header.h"
#include "network-coding-buffer.h"
#include "network-coding-l4-protocol.h"

//const bool g_debug = false;

namespace ns3 {

	//Map that store all the EndPoints that involve the node (that is to say, the destination IP corresponds to the node's IP), hence we can retrieve the source IP address from the packet
	struct NetworkCodingEndPoint{
		NetworkCodingEndPoint (Ipv4Address source, Ipv4Address destination, u_int16_t sourcePort, u_int16_t destinationPort);
		Ipv4Address source;
		Ipv4Address destination;
		u_int16_t sourcePort;
		u_int16_t destinationPort;
	};

/**
 * Classed used for defining the Network Coding layer which will be in charge of handling the encoding/decoding decisions. The current implementation carries out a XOR coding mechanism for combining
 * the content of the corresponding native packets
 */
class SimpleNetworkCoding: public NetworkCodingL4Protocol {
public:
	//Callbacks
	typedef Callback<enum Ipv4L4Protocol::RxStatus, Ptr<Packet>, Ipv4Header const &, Ptr<Ipv4Interface> > UpTargetCallback;

	/**
	 * arg1: Packet (
	 * arg2: 0 reception (RX node), 1 reception (overhearing), 2 transmission (TX node), 3 transmission (coding node), 4 (Encapsulated ACK transmission), 5 (Encapsulated ACK correct reception)
	 * arg3: Node ID
	 * arg4: Source IP Address
	 * arg5: Destination IP Address
	 * arg6: Number of coded packets (1 means that the packet sent/received is native)
	 * arg7: This parameter only makes sense in reception: a false value means that the decoding process failed; true the opposite case
	 */
	typedef Callback<void, Ptr<Packet>, u_int8_t, u_int32_t, Ipv4Address, Ipv4Address, u_int8_t, u_int8_t, bool> SimpleNetworkCodingCallback;


	struct NetworkCodingEntry;

	/**
	 * Attribute handler
	 */
	static TypeId GetTypeId (void);
	static const u_int8_t PROT_NUMBER;
	static const u_int16_t MIN_CODING_LENGTH;
	static const u_int16_t NETWORK_CODING_LAYER_MSS;
	/**
	 * Default constructor
	 */
	SimpleNetworkCoding();

	/**
	 * Default destructor
	 */
	virtual ~SimpleNetworkCoding();

	/**
	 *	Locate in which node the SimpleNetworkCodingObject is stored
	 *	\param node Node that contains the object
	 */
    void SetNode (Ptr<Node> node);

    /**
     * \return The node which contains the Network Coding protocol stack
     */
    Ptr<Node> GetNode ();

	/**
	 * \brief Carry out the XOR operation between the two packet (NOTE: In order not to get segmentation faults because the packets size
	 * were different, this function uses zero padding to get the same lengths
	 * \param pkt1 Native packet to code together with (only the data zone)
	 * \param pkt2 Packet (native or already encoded) to code with pkt1
	 * \returns codedPacket	XORed packet resultant
	 */
	Ptr<Packet> Encode (Ptr<Packet> pkt1, Ptr<Packet> pkt2);				//Future version --> Compose the Network Coding Header

	/**
	 * \param codedPkt The coded packet that we want to decode (only data)
	 * \param nativePkt Native packet to XOR with the coded one
	 * \returns
	 */
	Ptr<Packet> Decode (Ptr<Packet> codedPkt, Ptr<Packet> nativePkt);

	//Inherited pure virtual functions (Ipv4L4Protocol) we have to define
	/**
	 * \returns the protocol number of this protocol.
	 */
	int GetProtocolNumber (void) const;

	/**
	 * Legacy TCP/IP stack reception (i.e. from the IP layer). Through this method we will only receive native packets
	 * \param p Packet received from the lower layer
	 * \param header IPv4 Header information
	 * \param incomingInterface the Ipv4Interface on which the packet arrived
	 * Called from lower-level layers to send the packet upwards the stack.
	 * NOTE: This method will only be called through Network Coding packets, hence we do not need to i.e. unwrap headers
	 */
	enum Ipv4L4Protocol::RxStatus Receive (Ptr<Packet> packet, Ipv4Header const &header, Ptr<Ipv4Interface> incomingInterface);  	//Old version, inherited form base clase Ipv4L4Protocol
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
	bool ReceivePromiscuous (Ptr<NetDevice> device, Ptr<const Packet> packet, uint16_t protocol, const Address &from, const Address &to, NetDevice::PacketType packetType);

	/**
	 * Receive from the upper layer. Higher-level layers call this method to send a packet down the stack to the IP level
	 * \param packet packet to send
	 * \param source source address of packet
	 * \param destination address of packet
	 * \param protocol number of packet
	 * \param route route entry
	 */
	void Send (Ptr<Packet> packet, Ipv4Address source, Ipv4Address destination, uint8_t protocol, Ptr<Ipv4Route> route);

	/**
	 *  Send a packet (coded or not) downwards.
	 *  NOTE: This method will be invoked at the NetworkCodingBuffer class.
	 */
	void SendDown ();

	/**
	 * When the TCP ACK encapsulation is enabled, there will be situations in which an acknowledgement should be delivered in its legacy form
	 * (i.e. the ACK buffer is full and the node received a new ACK segment). In this case, we have to trigger this event, taking the oldest
	 * segment from the ACK buffer and forwarding it.
	 * NOTE: This method will only run on coding nodes.
	 */
	void SendDownTcpAck ();

	/**
	 *  Upper layer packet delivery
	 *  \param packet Received packet
	 *  \param header Packet's IP header
	 *  \param incomingInterface The IP interface which overheard the packet
	 */
	void ForwardUp (Ptr<Packet> packet, const Ipv4Header &header, Ptr<Ipv4Interface> incomingInterface = 0);

	/**
	 * Manage a packet reception from the IP forwarding scheme. Search for encoding opportunities and forward down the packets
	 * \param rtentry Route entry
	 * \param p Received packet
	 * \param header IP header
	 */
	void ParseForwardingReception (Ptr<Ipv4Route> rtentry, Ptr<const Packet> p, const Ipv4Header &header);

	/**
	 * \brief Once a timeout is triggered, we need to extract the corresponding packet from the input packet pool and send it downwards
	 * \param The hash-key to locate the oldest packet
	 */
	void HandleInputPacketPoolTimeout (u_int32_t key);

	/**
	 * \returns True if the packet actually correspond to the node that has received the packet
	 */
	bool AmIDestination (const Ipv4Address &destination);

	/**
	 * Try to decode a received coded packet
	 * \param packet The coded packet
	 * \param header The packet's Network Coding Header
	 * \returns True after a decoded success; false otherwise
	 */
	Ptr<Packet> DecodeAttempt (Ptr <Packet> packet, NetworkCodingHeader header, Ipv4Header &ipHeader);

	/**
	 * Store all the node-dependent streams (used to further decoding issues)
	 * \param entry The endpoint of the received native Packet
	 */
	void UpdateEndPointTable (struct NetworkCodingEndPoint entry);

	/**
	 * This method allows a caller to set the current down target callback set for this L4 protocol
	 * \param cb current Callback for the L4 protocol
	 */
	inline void SetUpNscTarget (UpTargetCallback cb) {m_upNscTcpTarget = cb;}
	inline void SetUpTcpTarget (UpTargetCallback cb) {m_upTcpTarget = cb;}
	inline void SetUpUdpTarget (UpTargetCallback cb) {m_upUdpTarget = cb;}
	inline void SetSimpleNetworkCodingCallback (SimpleNetworkCodingCallback cb) {m_simpleNcCallback = cb;}

	//Functionalities setters
	inline void SetTransmitterNode (bool flag) {m_transmitterNode = flag;}
	inline void SetReceiverNode (bool flag) {m_receiverNode = flag;}
	inline void SetCodingNode (bool flag) {m_codingNode = flag;}
    inline void SetForwardingNode (bool flag) {m_forwarderNode = flag;}
    inline void SetEmbeddedAcks (bool flag) {m_embeddedAcks = flag;}

    /**
     * Configure the buffers
     * \param bufferTimeout Time during which the input packet pool will hold the packets
     * \param bufferSize Number of packets that can be stored at the input packet pool
     * \param maxCodedPackets Maximum number of packets that can be coded together with
     */
    virtual void SetNetworkCodingBufferParameters (Time bufferTimeout, u_int32_t bufferSize, u_int8_t maxCodedPackets);

    /**
     * If the ACKnowledgement encapsulation scheme is enabled, set the corresponding
     */
    virtual void SetEncapsulationAckBufferParameters (Time bufferTimeout, u_int32_t bufferSize);

    /**
     * Get the Network Coding buffer
     * \returns The NetworkCodingBuffer object
     */
    inline NetworkCodingBuffer GetNetworkCodingBuffer () {return m_ncBuffer;}

    /**
     * Open a trace file which will contain the most highlighting information relative to the statistics gathered during the simulation.
     * \param name File name
     */
    void OpenTraceFile (string name);

private:
	Ptr<Node> m_node;
	NetworkCodingBuffer m_ncBuffer;						//NetworkCodingBuffer associated to the NetworkCodingL4Protocol layer

	//Functionality (a node can act as a transmitter, receiver or coding node (not exclusive)
	bool m_transmitterNode;
	bool m_receiverNode;
	bool m_codingNode;
    bool m_forwarderNode;

    //Enable/disable ACK encapsulation
    bool m_embeddedAcks;

	//Callback hooks
	UpTargetCallback m_upNscTcpTarget;					//Forward up to the Network Simulator Cradle TCP stack (NscTcpL4Protocol::Receive)
	UpTargetCallback m_upTcpTarget;						//Forward up to the TCP stack (TcpL4Protocol::Receive)
	UpTargetCallback m_upUdpTarget;						//Forward up to the UDP stack (UdpL4Protocol::Receive)
	SimpleNetworkCodingCallback m_simpleNcCallback;		//Callback used to trace the main results achieved

	//We need to store all the Network Coding Interfaces for further use (in a future version, we might have more than one Network Coding interface per node)
	std::set<Ptr <Ipv4Route> > m_routes;
	typedef std::set<Ptr <Ipv4Route> >::iterator RoutesIterator;

	//Hash table that stores all the overheard endpoints
	std::map <u_int16_t, NetworkCodingEndPoint> m_endPointTable;
	typedef std::map <u_int16_t, NetworkCodingEndPoint>::iterator EndPointIterator;

	//File to trace the statistics to
	fstream m_traceFile;

protected:
	virtual void DoDispose (void);

	/*
	 * This function will notify other components connected to the node that a new stack member is now connected
	 * This will be used to notify Layer 3 and layer 4 protocols the presence of a brand new NC stack.
	 */
	virtual void NotifyNewAggregate ();

};

}   // namespace ns3
#endif /* SIMPLE_NETWORK_CODING_H_ */
