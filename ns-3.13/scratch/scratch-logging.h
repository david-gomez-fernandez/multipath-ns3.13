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

#ifndef SCRATCH_LOGGING_H_
#define SCRATCH_LOGGING_H_

#include "ns3/core-module.h"

namespace ns3 {

void EnableLogging () {

//	LOGGING   --> Uncomment desired files to show log messages
//	-- Physical layer
//	LogComponentEnable("WifiPhy", LOG_ALL);
//	LogComponentEnable("YansWifiPhy",LOG_ALL);
//	LogComponentEnable("YansWifiChannel", LOG_ALL);
//	LogComponentEnable("YansWifiHelper", LOG_ALL);
//	LogComponentEnable("PropagationLossModel", LOG_ALL);
//	LogComponentEnable("WifiPhyStateHelper", LOG_LEVEL);
//	LogComponentEnable("HiddenMarkovPropagationLossModel", LOG_ALL);
//	LogComponentEnable("HiddenMarkovErrorModel", LOG_ALL);
//	LogComponentEnable("YansErrorRateModel", LOG_ALL);

//	-- Link Level
//	LogComponentEnable ("MacLow", LOG_ALL);
//	LogComponentEnable ("MacRxMiddle", LOG_ALL);
//	LogComponentEnable ("WifiMacQueue", LOG_FUNCTION);
//	LogComponentEnable ("WifiMacQueue", LOG_ALL);
//	LogComponentEnable ("DcaTxop", LOG_FUNCTION);
//	LogComponentEnable ("DcfManager", LOG_FUNCTION);
//	LogComponentEnable ("RegularWifiMac",LOG_FUNCTION);
//	LogComponentEnable ("RegularWifiMac",LOG_ALL);
//	LogComponentEnable ("StaWifiMac",LOG_FUNCTION);
//	LogComponentEnable ("AdhocWifiMac",LOG_ALL);
//	LogComponentEnable ("WifiNetDevice", LOG_ALL);

//	--ARP
//	LogComponentEnable ("ArpL3Protocol", LOG_ALL);

//	-- Network layer
//	LogComponentEnable ("Ipv4L3Protocol", LOG_ALL);
//	LogComponentEnable ("Ipv4Interface", LOG_ALL);
//	LogComponentEnable ("InternetStackHelper", LOG_ALL);
	LogComponentEnable ("Ipv4EndPointDemux", LOG_ALL);

//	--Network Coding layer
//	LogComponentEnable ("NetworkCodingHeader", LOG_DEBUG);
//	LogComponentEnable ("NetworkCodingBuffer", LOG_DEBUG);
//	LogComponentEnable ("NetworkCodingNetDevice", LOG_FUNCTION);
//	LogComponentEnable ("NetworkCodingL4Protocol", LOG_ALL);
//	LogComponentEnable ("SimpleNetworkCoding", LOG_DEBUG);
//	LogComponentEnable ("MoreNetworkCodingProtocol", LOG_DEBUG);

//	-- Transport layer
	LogComponentEnable("TcpL4Protocol", LOG_ALL);
//	LogComponentEnable("NscTcpL4Protocol", LOG_FUNCTION);
//	LogComponentEnable("UdpSocket", LOG_ALL);
//	LogComponentEnable("UdpSocketImpl", LOG_ALL);

//	-- Propagation Loss Models
//	LogComponentEnable("PropagationLossModel", LOG_ALL);

//	-- Error Models
//	LogComponentEnable("ErrorModel", LOG_ALL);
//	LogComponentEnable("HiddenMarkovErrorModel", LOG_INFO);
//	LogComponentEnable("ArModel", LOG_LOGIC);
//	LogComponentEnable("ArModel", LOG_ALL);

//	-- Test unit
//	LogComponentEnable("Experiment", LOG_DEBUG);

//	--	Other levels
//	LogComponentEnable("Socket", LOG_ALL);
//	LogComponentEnable("PacketSocket", LOG_ALL);
//	LogComponentEnable("UdpSocketImpl", LOG_ALL);
//	LogComponentEnable("TcpSocketBase", LOG_ALL);
//	LogComponentEnable("TcpReno", LOG_ALL);
//	LogComponentEnable("TcpNewReno", LOG_ALL);
//	LogComponentEnable("UdpSocketImpl", LOG_LOGIC);

//	-- Routing
//	LogComponentEnable("Ipv4StaticRouting", LOG_ALL);

//  -- Application
//	LogComponentEnable ("TcpSocket", LOG_ALL);
//	LogComponentEnable ("OnOffApplication", LOG_ALL);
//	LogComponentEnable ("PacketSink", LOG_ALL);
//	LogComponentEnable ("TcpL4Protocol", LOG_ALL);
//	LogComponentEnable ("UdpL4Protocol", LOG_ALL);
//	LogComponentEnable ("Ipv4L3Protocol", LOG_ALL);

//	--Abstract information
//	LogComponentEnable ("Node", LOG_ALL);

//	-- Configure Scenario
	LogComponentEnable ("ConfigureScenario", LOG_ALL);
//	LogComponentEnable ("ProprietaryTracing", LOG_DEBUG);
//	LogComponentEnable ("ConfigurationFile", LOG_ALL);

}


} //namespace ns3
#endif /* SCRATCH_LOGGING_H_ */
