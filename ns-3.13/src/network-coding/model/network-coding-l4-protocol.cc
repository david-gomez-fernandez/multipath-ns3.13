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

#include "network-coding-l4-protocol.h"

using namespace ns3;
using namespace std;

NS_LOG_COMPONENT_DEFINE ("NetworkCodingL4Protocol");
NS_OBJECT_ENSURE_REGISTERED (NetworkCodingL4Protocol);

NetworkCodingL4Protocol::NetworkCodingL4Protocol ()
{
	NS_LOG_FUNCTION_NOARGS ();

	//Initialize statistics
	m_ncStatistics.codedPacketTx = 0;
	m_ncStatistics.uncodedPacketTx = 0;
	m_ncStatistics.decodeSuccess = 0;
	m_ncStatistics.decodeFailure = 0;

	m_ncStatistics.networkCodingLayerTotalBytes = 0;
	m_ncStatistics.startingTime = 0;
	m_ncStatistics.lastReception = 0;

	m_ncStatistics.transmissionStarted = false;
	m_ncStatistics.transmissionNumber = 0;

}

NetworkCodingL4Protocol::~NetworkCodingL4Protocol ()
{
//	NS_LOG_FUNCTION_NO_ARGS ();
}

TypeId NetworkCodingL4Protocol::GetTypeId(void) {
	static TypeId tid = TypeId ("ns3::NetworkCodingL4Protocol")
		.SetParent<Ipv4L4Protocol> ()
		       ;
  return tid;
}

