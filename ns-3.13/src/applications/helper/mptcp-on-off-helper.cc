
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
 *         Pablo Garrido Ortiz <pgo85@alumnos.unican.es>
 */// Adapted from ApplicationOnOff in GTNetS.

#include "ns3/inet-socket-address.h"
#include "ns3/packet-socket-address.h"
#include "ns3/string.h"
#include "ns3/names.h"
#include "ns3/uinteger.h"
#include "mptcp-on-off-helper.h"
#include "ns3/log.h"

namespace ns3 {


MpTcpOnOffHelper::MpTcpOnOffHelper (std::string protocol, Address address,uint32_t cControl)
{
  m_factory.SetTypeId ("ns3::MpTcpOnOffApplication");
  m_factory.Set ("Protocol", StringValue (protocol));
  m_factory.Set ("Remote", AddressValue (address));
  m_factory.Set ("ControlCongestion", UintegerValue(cControl));
}

void 
MpTcpOnOffHelper::SetAttribute (std::string name, const AttributeValue &value)
{
  m_factory.Set (name, value);
}

ApplicationContainer
MpTcpOnOffHelper::Install (Ptr<Node> node) const
{
  return ApplicationContainer (InstallPriv (node));
}

ApplicationContainer
MpTcpOnOffHelper::Install (std::string nodeName) const
{
  Ptr<Node> node = Names::Find<Node> (nodeName);;
  return ApplicationContainer (InstallPriv (node));
}

ApplicationContainer
MpTcpOnOffHelper::Install (NodeContainer c) const
{
  ApplicationContainer apps;
  for (NodeContainer::Iterator i = c.Begin (); i != c.End (); ++i)
    {
      apps.Add (InstallPriv (*i));
    }
  return apps;
}

Ptr<Application>
MpTcpOnOffHelper::InstallPriv (Ptr<Node> node) const
{
  Ptr<Application> app = m_factory.Create<Application> ();
  node->AddApplication (app);
  return app;
}

} // namespace ns3
