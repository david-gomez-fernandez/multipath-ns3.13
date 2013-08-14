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

#ifndef CHANNEL_MESH_PROPAGATION_HANDLER_H_
#define CHANNEL_MESH_PROPAGATION_HANDLER_H_

#include "ns3/object.h"
#include "ns3/propagation-loss-model.h"
#include "ns3/mobility-model.h"

namespace ns3
{

/**
 * \defgroup ChannelMeshPropagationKey
 * \brief Auxiliar class used to retrieve the channel information relative to the nodes deployment, namely, their mobility model pointers
 * IMPORTANT: Initialize after defining the MobilityModel onto the nodes
 */
class ChannelMeshPropagationKey
{
public:
	ChannelMeshPropagationKey() {}

	ChannelMeshPropagationKey (Ptr<MobilityModel> tx, Ptr<MobilityModel> rx);
	ChannelMeshPropagationKey (Ptr<MobilityModel> tx, Ptr<MobilityModel> rx, u_int32_t txId, u_int32_t rxId);
	~ChannelMeshPropagationKey () {}

	bool operator < (const ChannelMeshPropagationKey& key) const {
		if(m_link.first < key.m_link.first) {
			return true;
		} else if(m_link.first == key.m_link.first) {
			return(m_link.second < key.m_link.second);
		} else {
			return false;
		}
	}

	//Getters/Setters
	void SetTx (u_int32_t tx);
	u_int32_t GetTx ();
	void SetRx (u_int32_t rx);
	u_int32_t GetRx ();


//private:
	u_int32_t m_tx;
	u_int32_t m_rx;

	std::pair<Ptr<MobilityModel>, Ptr<MobilityModel> > m_link;


};


class ChannelMeshPropagationEntry: public Object
{
public:

private:

};

}  /* End namespace ns3 */

#endif /* CHANNEL_MESH_PROPAGATION_HANDLER_H_ */
