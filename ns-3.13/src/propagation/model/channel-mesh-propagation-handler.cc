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



#include "ns3/node.h"
#include "ns3/node-list.h"
#include "channel-mesh-propagation-handler.h"

using namespace std;
using namespace ns3;


ChannelMeshPropagationKey::ChannelMeshPropagationKey (Ptr<MobilityModel> tx, Ptr<MobilityModel> rx)
{
	m_link = make_pair(tx, rx);
}


ChannelMeshPropagationKey::ChannelMeshPropagationKey (Ptr<MobilityModel> tx, Ptr<MobilityModel> rx, u_int32_t txId, u_int32_t rxId)
{
	m_link = make_pair(tx, rx);
	m_tx = txId;
	m_rx = rxId;
}

