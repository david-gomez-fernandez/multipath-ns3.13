from pybindgen import Module, FileCodeSink, param, retval, cppclass, typehandlers


import pybindgen.settings
import warnings

class ErrorHandler(pybindgen.settings.ErrorHandler):
    def handle_error(self, wrapper, exception, traceback_):
        warnings.warn("exception %r in wrapper %s" % (exception, wrapper))
        return True
pybindgen.settings.error_handler = ErrorHandler()


import sys

def module_init():
    root_module = Module('ns.mptcp', cpp_namespace='::ns3')
    return root_module

def register_types(module):
    root_module = module.get_root()
    
    ## tcp-typedefs.h (module 'internet'): ns3::TCPMaxFlags_t [enumeration]
    module.add_enum('TCPMaxFlags_t', ['MAX_FLAGS'], import_from_module='ns.internet')
    ## tcp-typedefs.h (module 'internet'): ns3::Events_t [enumeration]
    module.add_enum('Events_t', ['APP_LISTEN', 'APP_CONNECT', 'APP_SEND', 'SEQ_RECV', 'APP_CLOSE', 'TIMEOUT', 'ACK_RX', 'SYN_RX', 'SYN_ACK_RX', 'FIN_RX', 'FIN_ACK_RX', 'RST_RX', 'BAD_FLAGS', 'LAST_EVENT'], import_from_module='ns.internet')
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::CongestionCtrl_t [enumeration]
    module.add_enum('CongestionCtrl_t', ['Uncoupled_TCPs', 'Linked_Increases', 'RTT_Compensator', 'Fully_Coupled'])
    ## tcp-socket.h (module 'internet'): ns3::TcpStates_t [enumeration]
    module.add_enum('TcpStates_t', ['CLOSED', 'LISTEN', 'SYN_SENT', 'SYN_RCVD', 'ESTABLISHED', 'CLOSE_WAIT', 'LAST_ACK', 'FIN_WAIT_1', 'FIN_WAIT_2', 'CLOSING', 'TIME_WAIT', 'LAST_STATE'], import_from_module='ns.internet')
    ## mp-tcp-header.h (module 'mptcp'): ns3::TcpOption_t [enumeration]
    module.add_enum('TcpOption_t', ['OPT_NONE', 'OPT_DSACK', 'OPT_TT', 'OPT_MPC', 'OPT_JOIN', 'OPT_ADDR', 'OPT_REMADR', 'OPT_DSN'])
    ## tcp-typedefs.h (module 'internet'): ns3::Actions_t [enumeration]
    module.add_enum('Actions_t', ['NO_ACT', 'ACK_TX', 'ACK_TX_1', 'RST_TX', 'SYN_TX', 'SYN_ACK_TX', 'FIN_TX', 'FIN_ACK_TX', 'NEW_ACK', 'NEW_SEQ_RX', 'RETX', 'TX_DATA', 'PEER_CLOSE', 'APP_CLOSED', 'CANCEL_TM', 'APP_NOTIFY', 'SERV_NOTIFY', 'LAST_ACTION'], import_from_module='ns.internet')
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpStates_t [enumeration]
    module.add_enum('MpStates_t', ['MP_NONE', 'MP_MPC', 'MP_ADDR', 'MP_JOIN'])
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::Phase_t [enumeration]
    module.add_enum('Phase_t', ['Slow_Start', 'Congestion_Avoidance', 'DSACK_SS', 'RTO_Recovery'])
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::DataDistribAlgo_t [enumeration]
    module.add_enum('DataDistribAlgo_t', ['Round_Robin'])
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::PacketReorder_t [enumeration]
    module.add_enum('PacketReorder_t', ['NoPR_Algo', 'Eifel', 'TCP_DOOR', 'D_SACK', 'F_RTO'])
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::FRtoStep_t [enumeration]
    module.add_enum('FRtoStep_t', ['Step_1', 'Step_2', 'Step_3', 'Step_4'])
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpActions_t [enumeration]
    module.add_enum('MpActions_t', ['NO_ACTION', 'ADDR_TX', 'INIT_SUBFLOWS'])
    ## address.h (module 'network'): ns3::Address [class]
    module.add_class('Address', import_from_module='ns.network')
    ## address.h (module 'network'): ns3::Address::MaxSize_e [enumeration]
    module.add_enum('MaxSize_e', ['MAX_SIZE'], outer_class=root_module['ns3::Address'], import_from_module='ns.network')
    ## attribute-construction-list.h (module 'core'): ns3::AttributeConstructionList [class]
    module.add_class('AttributeConstructionList', import_from_module='ns.core')
    ## attribute-construction-list.h (module 'core'): ns3::AttributeConstructionList::Item [struct]
    module.add_class('Item', import_from_module='ns.core', outer_class=root_module['ns3::AttributeConstructionList'])
    ## buffer.h (module 'network'): ns3::Buffer [class]
    module.add_class('Buffer', import_from_module='ns.network')
    ## buffer.h (module 'network'): ns3::Buffer::Iterator [class]
    module.add_class('Iterator', import_from_module='ns.network', outer_class=root_module['ns3::Buffer'])
    ## packet.h (module 'network'): ns3::ByteTagIterator [class]
    module.add_class('ByteTagIterator', import_from_module='ns.network')
    ## packet.h (module 'network'): ns3::ByteTagIterator::Item [class]
    module.add_class('Item', import_from_module='ns.network', outer_class=root_module['ns3::ByteTagIterator'])
    ## byte-tag-list.h (module 'network'): ns3::ByteTagList [class]
    module.add_class('ByteTagList', import_from_module='ns.network')
    ## byte-tag-list.h (module 'network'): ns3::ByteTagList::Iterator [class]
    module.add_class('Iterator', import_from_module='ns.network', outer_class=root_module['ns3::ByteTagList'])
    ## byte-tag-list.h (module 'network'): ns3::ByteTagList::Iterator::Item [struct]
    module.add_class('Item', import_from_module='ns.network', outer_class=root_module['ns3::ByteTagList::Iterator'])
    ## callback.h (module 'core'): ns3::CallbackBase [class]
    module.add_class('CallbackBase', import_from_module='ns.core')
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::DSNMapping [class]
    module.add_class('DSNMapping')
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::DataBuffer [class]
    module.add_class('DataBuffer')
    ## event-id.h (module 'core'): ns3::EventId [class]
    module.add_class('EventId', import_from_module='ns.core')
    ## ipv4-address.h (module 'network'): ns3::Ipv4Address [class]
    module.add_class('Ipv4Address', import_from_module='ns.network')
    ## ipv4-address.h (module 'network'): ns3::Ipv4Address [class]
    root_module['ns3::Ipv4Address'].implicitly_converts_to(root_module['ns3::Address'])
    ## ipv4-end-point-demux.h (module 'internet'): ns3::Ipv4EndPointDemux [class]
    module.add_class('Ipv4EndPointDemux', import_from_module='ns.internet')
    ## ipv4-interface-address.h (module 'internet'): ns3::Ipv4InterfaceAddress [class]
    module.add_class('Ipv4InterfaceAddress', import_from_module='ns.internet')
    ## ipv4-interface-address.h (module 'internet'): ns3::Ipv4InterfaceAddress::InterfaceAddressScope_e [enumeration]
    module.add_enum('InterfaceAddressScope_e', ['HOST', 'LINK', 'GLOBAL'], outer_class=root_module['ns3::Ipv4InterfaceAddress'], import_from_module='ns.internet')
    ## ipv4-address.h (module 'network'): ns3::Ipv4Mask [class]
    module.add_class('Ipv4Mask', import_from_module='ns.network')
    ## ipv6-address.h (module 'network'): ns3::Ipv6Address [class]
    module.add_class('Ipv6Address', import_from_module='ns.network')
    ## ipv6-address.h (module 'network'): ns3::Ipv6Address [class]
    root_module['ns3::Ipv6Address'].implicitly_converts_to(root_module['ns3::Address'])
    ## ipv6-interface-address.h (module 'internet'): ns3::Ipv6InterfaceAddress [class]
    module.add_class('Ipv6InterfaceAddress', import_from_module='ns.internet')
    ## ipv6-interface-address.h (module 'internet'): ns3::Ipv6InterfaceAddress::State_e [enumeration]
    module.add_enum('State_e', ['TENTATIVE', 'DEPRECATED', 'PREFERRED', 'PERMANENT', 'HOMEADDRESS', 'TENTATIVE_OPTIMISTIC', 'INVALID'], outer_class=root_module['ns3::Ipv6InterfaceAddress'], import_from_module='ns.internet')
    ## ipv6-interface-address.h (module 'internet'): ns3::Ipv6InterfaceAddress::Scope_e [enumeration]
    module.add_enum('Scope_e', ['HOST', 'LINKLOCAL', 'GLOBAL'], outer_class=root_module['ns3::Ipv6InterfaceAddress'], import_from_module='ns.internet')
    ## ipv6-address.h (module 'network'): ns3::Ipv6Prefix [class]
    module.add_class('Ipv6Prefix', import_from_module='ns.network')
    ## mac48-address.h (module 'network'): ns3::Mac48Address [class]
    module.add_class('Mac48Address', import_from_module='ns.network')
    ## mac48-address.h (module 'network'): ns3::Mac48Address [class]
    root_module['ns3::Mac48Address'].implicitly_converts_to(root_module['ns3::Address'])
    ## mp-internet-stack-helper.h (module 'mptcp'): ns3::MpInternetStackHelper [class]
    module.add_class('MpInternetStackHelper')
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpAddressInfo [class]
    module.add_class('MpTcpAddressInfo')
    ## net-device-container.h (module 'network'): ns3::NetDeviceContainer [class]
    module.add_class('NetDeviceContainer', import_from_module='ns.network')
    ## node-container.h (module 'network'): ns3::NodeContainer [class]
    module.add_class('NodeContainer', import_from_module='ns.network')
    ## object-base.h (module 'core'): ns3::ObjectBase [class]
    module.add_class('ObjectBase', allow_subclassing=True, import_from_module='ns.core')
    ## object.h (module 'core'): ns3::ObjectDeleter [struct]
    module.add_class('ObjectDeleter', import_from_module='ns.core')
    ## object-factory.h (module 'core'): ns3::ObjectFactory [class]
    module.add_class('ObjectFactory', import_from_module='ns.core')
    ## packet-metadata.h (module 'network'): ns3::PacketMetadata [class]
    module.add_class('PacketMetadata', import_from_module='ns.network')
    ## packet-metadata.h (module 'network'): ns3::PacketMetadata::Item [struct]
    module.add_class('Item', import_from_module='ns.network', outer_class=root_module['ns3::PacketMetadata'])
    ## packet-metadata.h (module 'network'): ns3::PacketMetadata::Item [enumeration]
    module.add_enum('', ['PAYLOAD', 'HEADER', 'TRAILER'], outer_class=root_module['ns3::PacketMetadata::Item'], import_from_module='ns.network')
    ## packet-metadata.h (module 'network'): ns3::PacketMetadata::ItemIterator [class]
    module.add_class('ItemIterator', import_from_module='ns.network', outer_class=root_module['ns3::PacketMetadata'])
    ## packet.h (module 'network'): ns3::PacketTagIterator [class]
    module.add_class('PacketTagIterator', import_from_module='ns.network')
    ## packet.h (module 'network'): ns3::PacketTagIterator::Item [class]
    module.add_class('Item', import_from_module='ns.network', outer_class=root_module['ns3::PacketTagIterator'])
    ## packet-tag-list.h (module 'network'): ns3::PacketTagList [class]
    module.add_class('PacketTagList', import_from_module='ns.network')
    ## packet-tag-list.h (module 'network'): ns3::PacketTagList::TagData [struct]
    module.add_class('TagData', import_from_module='ns.network', outer_class=root_module['ns3::PacketTagList'])
    ## pending-data.h (module 'internet'): ns3::PendingData [class]
    module.add_class('PendingData', allow_subclassing=True, import_from_module='ns.internet')
    ## rtt-estimator.h (module 'internet'): ns3::RttHistory [class]
    module.add_class('RttHistory', import_from_module='ns.internet')
    ## tcp-typedefs.h (module 'internet'): ns3::SA [class]
    module.add_class('SA', import_from_module='ns.internet')
    ## sequence-number.h (module 'network'): ns3::SequenceNumber<unsigned int, int> [class]
    module.add_class('SequenceNumber32', import_from_module='ns.network')
    ## simple-ref-count.h (module 'core'): ns3::SimpleRefCount<ns3::Object, ns3::ObjectBase, ns3::ObjectDeleter> [class]
    module.add_class('SimpleRefCount', automatic_type_narrowing=True, import_from_module='ns.core', template_parameters=['ns3::Object', 'ns3::ObjectBase', 'ns3::ObjectDeleter'], parent=root_module['ns3::ObjectBase'], memory_policy=cppclass.ReferenceCountingMethodsPolicy(incref_method='Ref', decref_method='Unref', peekref_method='GetReferenceCount'))
    ## simulator.h (module 'core'): ns3::Simulator [class]
    module.add_class('Simulator', destructor_visibility='private', import_from_module='ns.core')
    ## tag.h (module 'network'): ns3::Tag [class]
    module.add_class('Tag', import_from_module='ns.network', parent=root_module['ns3::ObjectBase'])
    ## tag-buffer.h (module 'network'): ns3::TagBuffer [class]
    module.add_class('TagBuffer', import_from_module='ns.network')
    ## mp-tcp-header.h (module 'mptcp'): ns3::TcpOptions [class]
    module.add_class('TcpOptions')
    ## tcp-typedefs.h (module 'internet'): ns3::TcpStateMachine [class]
    module.add_class('TcpStateMachine', import_from_module='ns.internet')
    ## traced-value.h (module 'core'): ns3::TracedValue<double> [class]
    module.add_class('TracedValue', import_from_module='ns.core', template_parameters=['double'])
    ## traced-value.h (module 'core'): ns3::TracedValue<ns3::SequenceNumber<unsigned int, int> > [class]
    module.add_class('TracedValue', import_from_module='ns.core', template_parameters=['ns3::SequenceNumber<unsigned int, int>'])
    ## traced-value.h (module 'core'): ns3::TracedValue<ns3::SequenceNumber<unsigned int, int> > [class]
    root_module['ns3::TracedValue< ns3::SequenceNumber<unsigned int, int> >'].implicitly_converts_to(root_module['ns3::SequenceNumber32'])
    ## traced-value.h (module 'core'): ns3::TracedValue<ns3::TcpStates_t> [class]
    module.add_class('TracedValue', import_from_module='ns.core', template_parameters=['ns3::TcpStates_t'])
    ## traced-value.h (module 'core'): ns3::TracedValue<unsigned int> [class]
    module.add_class('TracedValue', import_from_module='ns.core', template_parameters=['unsigned int'])
    ## type-id.h (module 'core'): ns3::TypeId [class]
    module.add_class('TypeId', import_from_module='ns.core')
    ## type-id.h (module 'core'): ns3::TypeId::AttributeFlag [enumeration]
    module.add_enum('AttributeFlag', ['ATTR_GET', 'ATTR_SET', 'ATTR_CONSTRUCT', 'ATTR_SGC'], outer_class=root_module['ns3::TypeId'], import_from_module='ns.core')
    ## type-id.h (module 'core'): ns3::TypeId::AttributeInformation [struct]
    module.add_class('AttributeInformation', import_from_module='ns.core', outer_class=root_module['ns3::TypeId'])
    ## type-id.h (module 'core'): ns3::TypeId::TraceSourceInformation [struct]
    module.add_class('TraceSourceInformation', import_from_module='ns.core', outer_class=root_module['ns3::TypeId'])
    ## empty.h (module 'core'): ns3::empty [class]
    module.add_class('empty', import_from_module='ns.core')
    ## int64x64-double.h (module 'core'): ns3::int64x64_t [class]
    module.add_class('int64x64_t', import_from_module='ns.core')
    ## chunk.h (module 'network'): ns3::Chunk [class]
    module.add_class('Chunk', import_from_module='ns.network', parent=root_module['ns3::ObjectBase'])
    ## header.h (module 'network'): ns3::Header [class]
    module.add_class('Header', import_from_module='ns.network', parent=root_module['ns3::Chunk'])
    ## ipv4-header.h (module 'internet'): ns3::Ipv4Header [class]
    module.add_class('Ipv4Header', import_from_module='ns.internet', parent=root_module['ns3::Header'])
    ## ipv4-header.h (module 'internet'): ns3::Ipv4Header::DscpType [enumeration]
    module.add_enum('DscpType', ['DscpDefault', 'CS1', 'AF11', 'AF12', 'AF13', 'CS2', 'AF21', 'AF22', 'AF23', 'CS3', 'AF31', 'AF32', 'AF33', 'CS4', 'AF41', 'AF42', 'AF43', 'CS5', 'EF', 'CS6', 'CS7'], outer_class=root_module['ns3::Ipv4Header'], import_from_module='ns.internet')
    ## ipv4-header.h (module 'internet'): ns3::Ipv4Header::EcnType [enumeration]
    module.add_enum('EcnType', ['NotECT', 'ECT1', 'ECT0', 'CE'], outer_class=root_module['ns3::Ipv4Header'], import_from_module='ns.internet')
    ## ipv6-header.h (module 'internet'): ns3::Ipv6Header [class]
    module.add_class('Ipv6Header', import_from_module='ns.internet', parent=root_module['ns3::Header'])
    ## ipv6-header.h (module 'internet'): ns3::Ipv6Header::NextHeader_e [enumeration]
    module.add_enum('NextHeader_e', ['IPV6_EXT_HOP_BY_HOP', 'IPV6_IPV4', 'IPV6_TCP', 'IPV6_UDP', 'IPV6_IPV6', 'IPV6_EXT_ROUTING', 'IPV6_EXT_FRAGMENTATION', 'IPV6_EXT_CONFIDENTIALITY', 'IPV6_EXT_AUTHENTIFICATION', 'IPV6_ICMPV6', 'IPV6_EXT_END', 'IPV6_EXT_DESTINATION', 'IPV6_SCTP', 'IPV6_EXT_MOBILITY', 'IPV6_UDP_LITE'], outer_class=root_module['ns3::Ipv6Header'], import_from_module='ns.internet')
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpStateMachine [class]
    module.add_class('MpTcpStateMachine', parent=root_module['ns3::TcpStateMachine'])
    ## object.h (module 'core'): ns3::Object [class]
    module.add_class('Object', import_from_module='ns.core', parent=root_module['ns3::SimpleRefCount< ns3::Object, ns3::ObjectBase, ns3::ObjectDeleter >'])
    ## object.h (module 'core'): ns3::Object::AggregateIterator [class]
    module.add_class('AggregateIterator', import_from_module='ns.core', outer_class=root_module['ns3::Object'])
    ## mp-tcp-header.h (module 'mptcp'): ns3::OptAddAddress [class]
    module.add_class('OptAddAddress', parent=root_module['ns3::TcpOptions'])
    ## mp-tcp-header.h (module 'mptcp'): ns3::OptDSACK [class]
    module.add_class('OptDSACK', parent=root_module['ns3::TcpOptions'])
    ## mp-tcp-header.h (module 'mptcp'): ns3::OptDataSeqMapping [class]
    module.add_class('OptDataSeqMapping', parent=root_module['ns3::TcpOptions'])
    ## mp-tcp-header.h (module 'mptcp'): ns3::OptJoinConnection [class]
    module.add_class('OptJoinConnection', parent=root_module['ns3::TcpOptions'])
    ## mp-tcp-header.h (module 'mptcp'): ns3::OptMultipathCapable [class]
    module.add_class('OptMultipathCapable', parent=root_module['ns3::TcpOptions'])
    ## mp-tcp-header.h (module 'mptcp'): ns3::OptRemoveAddress [class]
    module.add_class('OptRemoveAddress', parent=root_module['ns3::TcpOptions'])
    ## mp-tcp-header.h (module 'mptcp'): ns3::OptTimesTamp [class]
    module.add_class('OptTimesTamp', parent=root_module['ns3::TcpOptions'])
    ## rtt-estimator.h (module 'internet'): ns3::RttEstimator [class]
    module.add_class('RttEstimator', import_from_module='ns.internet', parent=root_module['ns3::Object'])
    ## rtt-estimator.h (module 'internet'): ns3::RttMeanDeviation [class]
    module.add_class('RttMeanDeviation', import_from_module='ns.internet', parent=root_module['ns3::RttEstimator'])
    ## simple-ref-count.h (module 'core'): ns3::SimpleRefCount<ns3::AttributeAccessor, ns3::empty, ns3::DefaultDeleter<ns3::AttributeAccessor> > [class]
    module.add_class('SimpleRefCount', automatic_type_narrowing=True, import_from_module='ns.core', template_parameters=['ns3::AttributeAccessor', 'ns3::empty', 'ns3::DefaultDeleter<ns3::AttributeAccessor>'], parent=root_module['ns3::empty'], memory_policy=cppclass.ReferenceCountingMethodsPolicy(incref_method='Ref', decref_method='Unref', peekref_method='GetReferenceCount'))
    ## simple-ref-count.h (module 'core'): ns3::SimpleRefCount<ns3::AttributeChecker, ns3::empty, ns3::DefaultDeleter<ns3::AttributeChecker> > [class]
    module.add_class('SimpleRefCount', automatic_type_narrowing=True, import_from_module='ns.core', template_parameters=['ns3::AttributeChecker', 'ns3::empty', 'ns3::DefaultDeleter<ns3::AttributeChecker>'], parent=root_module['ns3::empty'], memory_policy=cppclass.ReferenceCountingMethodsPolicy(incref_method='Ref', decref_method='Unref', peekref_method='GetReferenceCount'))
    ## simple-ref-count.h (module 'core'): ns3::SimpleRefCount<ns3::AttributeValue, ns3::empty, ns3::DefaultDeleter<ns3::AttributeValue> > [class]
    module.add_class('SimpleRefCount', automatic_type_narrowing=True, import_from_module='ns.core', template_parameters=['ns3::AttributeValue', 'ns3::empty', 'ns3::DefaultDeleter<ns3::AttributeValue>'], parent=root_module['ns3::empty'], memory_policy=cppclass.ReferenceCountingMethodsPolicy(incref_method='Ref', decref_method='Unref', peekref_method='GetReferenceCount'))
    ## simple-ref-count.h (module 'core'): ns3::SimpleRefCount<ns3::CallbackImplBase, ns3::empty, ns3::DefaultDeleter<ns3::CallbackImplBase> > [class]
    module.add_class('SimpleRefCount', automatic_type_narrowing=True, import_from_module='ns.core', template_parameters=['ns3::CallbackImplBase', 'ns3::empty', 'ns3::DefaultDeleter<ns3::CallbackImplBase>'], parent=root_module['ns3::empty'], memory_policy=cppclass.ReferenceCountingMethodsPolicy(incref_method='Ref', decref_method='Unref', peekref_method='GetReferenceCount'))
    ## simple-ref-count.h (module 'core'): ns3::SimpleRefCount<ns3::EventImpl, ns3::empty, ns3::DefaultDeleter<ns3::EventImpl> > [class]
    module.add_class('SimpleRefCount', automatic_type_narrowing=True, import_from_module='ns.core', template_parameters=['ns3::EventImpl', 'ns3::empty', 'ns3::DefaultDeleter<ns3::EventImpl>'], parent=root_module['ns3::empty'], memory_policy=cppclass.ReferenceCountingMethodsPolicy(incref_method='Ref', decref_method='Unref', peekref_method='GetReferenceCount'))
    ## simple-ref-count.h (module 'core'): ns3::SimpleRefCount<ns3::Ipv4MulticastRoute, ns3::empty, ns3::DefaultDeleter<ns3::Ipv4MulticastRoute> > [class]
    module.add_class('SimpleRefCount', automatic_type_narrowing=True, import_from_module='ns.core', template_parameters=['ns3::Ipv4MulticastRoute', 'ns3::empty', 'ns3::DefaultDeleter<ns3::Ipv4MulticastRoute>'], parent=root_module['ns3::empty'], memory_policy=cppclass.ReferenceCountingMethodsPolicy(incref_method='Ref', decref_method='Unref', peekref_method='GetReferenceCount'))
    ## simple-ref-count.h (module 'core'): ns3::SimpleRefCount<ns3::Ipv4Route, ns3::empty, ns3::DefaultDeleter<ns3::Ipv4Route> > [class]
    module.add_class('SimpleRefCount', automatic_type_narrowing=True, import_from_module='ns.core', template_parameters=['ns3::Ipv4Route', 'ns3::empty', 'ns3::DefaultDeleter<ns3::Ipv4Route>'], parent=root_module['ns3::empty'], memory_policy=cppclass.ReferenceCountingMethodsPolicy(incref_method='Ref', decref_method='Unref', peekref_method='GetReferenceCount'))
    ## simple-ref-count.h (module 'core'): ns3::SimpleRefCount<ns3::NixVector, ns3::empty, ns3::DefaultDeleter<ns3::NixVector> > [class]
    module.add_class('SimpleRefCount', automatic_type_narrowing=True, import_from_module='ns.core', template_parameters=['ns3::NixVector', 'ns3::empty', 'ns3::DefaultDeleter<ns3::NixVector>'], parent=root_module['ns3::empty'], memory_policy=cppclass.ReferenceCountingMethodsPolicy(incref_method='Ref', decref_method='Unref', peekref_method='GetReferenceCount'))
    ## simple-ref-count.h (module 'core'): ns3::SimpleRefCount<ns3::OutputStreamWrapper, ns3::empty, ns3::DefaultDeleter<ns3::OutputStreamWrapper> > [class]
    module.add_class('SimpleRefCount', automatic_type_narrowing=True, import_from_module='ns.core', template_parameters=['ns3::OutputStreamWrapper', 'ns3::empty', 'ns3::DefaultDeleter<ns3::OutputStreamWrapper>'], parent=root_module['ns3::empty'], memory_policy=cppclass.ReferenceCountingMethodsPolicy(incref_method='Ref', decref_method='Unref', peekref_method='GetReferenceCount'))
    ## simple-ref-count.h (module 'core'): ns3::SimpleRefCount<ns3::Packet, ns3::empty, ns3::DefaultDeleter<ns3::Packet> > [class]
    module.add_class('SimpleRefCount', automatic_type_narrowing=True, import_from_module='ns.core', template_parameters=['ns3::Packet', 'ns3::empty', 'ns3::DefaultDeleter<ns3::Packet>'], parent=root_module['ns3::empty'], memory_policy=cppclass.ReferenceCountingMethodsPolicy(incref_method='Ref', decref_method='Unref', peekref_method='GetReferenceCount'))
    ## simple-ref-count.h (module 'core'): ns3::SimpleRefCount<ns3::TraceSourceAccessor, ns3::empty, ns3::DefaultDeleter<ns3::TraceSourceAccessor> > [class]
    module.add_class('SimpleRefCount', automatic_type_narrowing=True, import_from_module='ns.core', template_parameters=['ns3::TraceSourceAccessor', 'ns3::empty', 'ns3::DefaultDeleter<ns3::TraceSourceAccessor>'], parent=root_module['ns3::empty'], memory_policy=cppclass.ReferenceCountingMethodsPolicy(incref_method='Ref', decref_method='Unref', peekref_method='GetReferenceCount'))
    ## socket.h (module 'network'): ns3::Socket [class]
    module.add_class('Socket', import_from_module='ns.network', parent=root_module['ns3::Object'])
    ## socket.h (module 'network'): ns3::Socket::SocketErrno [enumeration]
    module.add_enum('SocketErrno', ['ERROR_NOTERROR', 'ERROR_ISCONN', 'ERROR_NOTCONN', 'ERROR_MSGSIZE', 'ERROR_AGAIN', 'ERROR_SHUTDOWN', 'ERROR_OPNOTSUPP', 'ERROR_AFNOSUPPORT', 'ERROR_INVAL', 'ERROR_BADF', 'ERROR_NOROUTETOHOST', 'ERROR_NODEV', 'ERROR_ADDRNOTAVAIL', 'ERROR_ADDRINUSE', 'SOCKET_ERRNO_LAST'], outer_class=root_module['ns3::Socket'], import_from_module='ns.network')
    ## socket.h (module 'network'): ns3::Socket::SocketType [enumeration]
    module.add_enum('SocketType', ['NS3_SOCK_STREAM', 'NS3_SOCK_SEQPACKET', 'NS3_SOCK_DGRAM', 'NS3_SOCK_RAW'], outer_class=root_module['ns3::Socket'], import_from_module='ns.network')
    ## socket.h (module 'network'): ns3::SocketAddressTag [class]
    module.add_class('SocketAddressTag', import_from_module='ns.network', parent=root_module['ns3::Tag'])
    ## socket-factory.h (module 'network'): ns3::SocketFactory [class]
    module.add_class('SocketFactory', import_from_module='ns.network', parent=root_module['ns3::Object'])
    ## socket.h (module 'network'): ns3::SocketIpTtlTag [class]
    module.add_class('SocketIpTtlTag', import_from_module='ns.network', parent=root_module['ns3::Tag'])
    ## socket.h (module 'network'): ns3::SocketSetDontFragmentTag [class]
    module.add_class('SocketSetDontFragmentTag', import_from_module='ns.network', parent=root_module['ns3::Tag'])
    ## tcp-header.h (module 'internet'): ns3::TcpHeader [class]
    module.add_class('TcpHeader', import_from_module='ns.internet', parent=root_module['ns3::Header'])
    ## tcp-header.h (module 'internet'): ns3::TcpHeader::Flags_t [enumeration]
    module.add_enum('Flags_t', ['NONE', 'FIN', 'SYN', 'RST', 'PSH', 'ACK', 'URG', 'ECE', 'CWR'], outer_class=root_module['ns3::TcpHeader'], import_from_module='ns.internet')
    ## tcp-rx-buffer.h (module 'internet'): ns3::TcpRxBuffer [class]
    module.add_class('TcpRxBuffer', import_from_module='ns.internet', parent=root_module['ns3::Object'])
    ## tcp-socket.h (module 'internet'): ns3::TcpSocket [class]
    module.add_class('TcpSocket', import_from_module='ns.internet', parent=root_module['ns3::Socket'])
    ## tcp-socket-base.h (module 'internet'): ns3::TcpSocketBase [class]
    module.add_class('TcpSocketBase', import_from_module='ns.internet', parent=root_module['ns3::TcpSocket'])
    ## tcp-socket-factory.h (module 'internet'): ns3::TcpSocketFactory [class]
    module.add_class('TcpSocketFactory', import_from_module='ns.internet', parent=root_module['ns3::SocketFactory'])
    ## tcp-tx-buffer.h (module 'internet'): ns3::TcpTxBuffer [class]
    module.add_class('TcpTxBuffer', import_from_module='ns.internet', parent=root_module['ns3::Object'])
    ## nstime.h (module 'core'): ns3::Time [class]
    module.add_class('Time', import_from_module='ns.core')
    ## nstime.h (module 'core'): ns3::Time::Unit [enumeration]
    module.add_enum('Unit', ['S', 'MS', 'US', 'NS', 'PS', 'FS', 'LAST'], outer_class=root_module['ns3::Time'], import_from_module='ns.core')
    ## nstime.h (module 'core'): ns3::Time [class]
    root_module['ns3::Time'].implicitly_converts_to(root_module['ns3::int64x64_t'])
    ## trace-source-accessor.h (module 'core'): ns3::TraceSourceAccessor [class]
    module.add_class('TraceSourceAccessor', import_from_module='ns.core', parent=root_module['ns3::SimpleRefCount< ns3::TraceSourceAccessor, ns3::empty, ns3::DefaultDeleter<ns3::TraceSourceAccessor> >'])
    ## traced-value.h (module 'core'): ns3::TracedValue<ns3::Time> [class]
    module.add_class('TracedValue', import_from_module='ns.core', template_parameters=['ns3::Time'])
    ## traced-value.h (module 'core'): ns3::TracedValue<ns3::Time> [class]
    root_module['ns3::TracedValue< ns3::Time >'].implicitly_converts_to(root_module['ns3::Time'])
    ## trailer.h (module 'network'): ns3::Trailer [class]
    module.add_class('Trailer', import_from_module='ns.network', parent=root_module['ns3::Chunk'])
    ## attribute.h (module 'core'): ns3::AttributeAccessor [class]
    module.add_class('AttributeAccessor', import_from_module='ns.core', parent=root_module['ns3::SimpleRefCount< ns3::AttributeAccessor, ns3::empty, ns3::DefaultDeleter<ns3::AttributeAccessor> >'])
    ## attribute.h (module 'core'): ns3::AttributeChecker [class]
    module.add_class('AttributeChecker', allow_subclassing=False, automatic_type_narrowing=True, import_from_module='ns.core', parent=root_module['ns3::SimpleRefCount< ns3::AttributeChecker, ns3::empty, ns3::DefaultDeleter<ns3::AttributeChecker> >'])
    ## attribute.h (module 'core'): ns3::AttributeValue [class]
    module.add_class('AttributeValue', allow_subclassing=False, automatic_type_narrowing=True, import_from_module='ns.core', parent=root_module['ns3::SimpleRefCount< ns3::AttributeValue, ns3::empty, ns3::DefaultDeleter<ns3::AttributeValue> >'])
    ## boolean.h (module 'core'): ns3::BooleanChecker [class]
    module.add_class('BooleanChecker', import_from_module='ns.core', parent=root_module['ns3::AttributeChecker'])
    ## boolean.h (module 'core'): ns3::BooleanValue [class]
    module.add_class('BooleanValue', import_from_module='ns.core', parent=root_module['ns3::AttributeValue'])
    ## callback.h (module 'core'): ns3::CallbackChecker [class]
    module.add_class('CallbackChecker', import_from_module='ns.core', parent=root_module['ns3::AttributeChecker'])
    ## callback.h (module 'core'): ns3::CallbackImplBase [class]
    module.add_class('CallbackImplBase', import_from_module='ns.core', parent=root_module['ns3::SimpleRefCount< ns3::CallbackImplBase, ns3::empty, ns3::DefaultDeleter<ns3::CallbackImplBase> >'])
    ## callback.h (module 'core'): ns3::CallbackValue [class]
    module.add_class('CallbackValue', import_from_module='ns.core', parent=root_module['ns3::AttributeValue'])
    ## double.h (module 'core'): ns3::DoubleValue [class]
    module.add_class('DoubleValue', import_from_module='ns.core', parent=root_module['ns3::AttributeValue'])
    ## attribute.h (module 'core'): ns3::EmptyAttributeValue [class]
    module.add_class('EmptyAttributeValue', import_from_module='ns.core', parent=root_module['ns3::AttributeValue'])
    ## enum.h (module 'core'): ns3::EnumChecker [class]
    module.add_class('EnumChecker', import_from_module='ns.core', parent=root_module['ns3::AttributeChecker'])
    ## enum.h (module 'core'): ns3::EnumValue [class]
    module.add_class('EnumValue', import_from_module='ns.core', parent=root_module['ns3::AttributeValue'])
    ## event-impl.h (module 'core'): ns3::EventImpl [class]
    module.add_class('EventImpl', import_from_module='ns.core', parent=root_module['ns3::SimpleRefCount< ns3::EventImpl, ns3::empty, ns3::DefaultDeleter<ns3::EventImpl> >'])
    ## integer.h (module 'core'): ns3::IntegerValue [class]
    module.add_class('IntegerValue', import_from_module='ns.core', parent=root_module['ns3::AttributeValue'])
    ## ipv4.h (module 'internet'): ns3::Ipv4 [class]
    module.add_class('Ipv4', import_from_module='ns.internet', parent=root_module['ns3::Object'])
    ## ipv4-address.h (module 'network'): ns3::Ipv4AddressChecker [class]
    module.add_class('Ipv4AddressChecker', import_from_module='ns.network', parent=root_module['ns3::AttributeChecker'])
    ## ipv4-address.h (module 'network'): ns3::Ipv4AddressValue [class]
    module.add_class('Ipv4AddressValue', import_from_module='ns.network', parent=root_module['ns3::AttributeValue'])
    ## ipv4-interface.h (module 'internet'): ns3::Ipv4Interface [class]
    module.add_class('Ipv4Interface', import_from_module='ns.internet', parent=root_module['ns3::Object'])
    ## ipv4-l3-protocol.h (module 'internet'): ns3::Ipv4L3Protocol [class]
    module.add_class('Ipv4L3Protocol', import_from_module='ns.internet', parent=root_module['ns3::Ipv4'])
    ## ipv4-l3-protocol.h (module 'internet'): ns3::Ipv4L3Protocol::DropReason [enumeration]
    module.add_enum('DropReason', ['DROP_TTL_EXPIRED', 'DROP_NO_ROUTE', 'DROP_BAD_CHECKSUM', 'DROP_INTERFACE_DOWN', 'DROP_ROUTE_ERROR', 'DROP_FRAGMENT_TIMEOUT'], outer_class=root_module['ns3::Ipv4L3Protocol'], import_from_module='ns.internet')
    ## ipv4-l4-protocol.h (module 'internet'): ns3::Ipv4L4Protocol [class]
    module.add_class('Ipv4L4Protocol', import_from_module='ns.internet', parent=root_module['ns3::Object'])
    ## ipv4-l4-protocol.h (module 'internet'): ns3::Ipv4L4Protocol::RxStatus [enumeration]
    module.add_enum('RxStatus', ['RX_OK', 'RX_CSUM_FAILED', 'RX_ENDPOINT_CLOSED', 'RX_ENDPOINT_UNREACH'], outer_class=root_module['ns3::Ipv4L4Protocol'], import_from_module='ns.internet')
    ## ipv4-address.h (module 'network'): ns3::Ipv4MaskChecker [class]
    module.add_class('Ipv4MaskChecker', import_from_module='ns.network', parent=root_module['ns3::AttributeChecker'])
    ## ipv4-address.h (module 'network'): ns3::Ipv4MaskValue [class]
    module.add_class('Ipv4MaskValue', import_from_module='ns.network', parent=root_module['ns3::AttributeValue'])
    ## ipv4-route.h (module 'internet'): ns3::Ipv4MulticastRoute [class]
    module.add_class('Ipv4MulticastRoute', import_from_module='ns.internet', parent=root_module['ns3::SimpleRefCount< ns3::Ipv4MulticastRoute, ns3::empty, ns3::DefaultDeleter<ns3::Ipv4MulticastRoute> >'])
    ## ipv4-route.h (module 'internet'): ns3::Ipv4Route [class]
    module.add_class('Ipv4Route', import_from_module='ns.internet', parent=root_module['ns3::SimpleRefCount< ns3::Ipv4Route, ns3::empty, ns3::DefaultDeleter<ns3::Ipv4Route> >'])
    ## ipv4-routing-protocol.h (module 'internet'): ns3::Ipv4RoutingProtocol [class]
    module.add_class('Ipv4RoutingProtocol', import_from_module='ns.internet', parent=root_module['ns3::Object'])
    ## ipv6.h (module 'internet'): ns3::Ipv6 [class]
    module.add_class('Ipv6', import_from_module='ns.internet', parent=root_module['ns3::Object'])
    ## ipv6-address.h (module 'network'): ns3::Ipv6AddressChecker [class]
    module.add_class('Ipv6AddressChecker', import_from_module='ns.network', parent=root_module['ns3::AttributeChecker'])
    ## ipv6-address.h (module 'network'): ns3::Ipv6AddressValue [class]
    module.add_class('Ipv6AddressValue', import_from_module='ns.network', parent=root_module['ns3::AttributeValue'])
    ## ipv6-l3-protocol.h (module 'internet'): ns3::Ipv6L3Protocol [class]
    module.add_class('Ipv6L3Protocol', import_from_module='ns.internet', parent=root_module['ns3::Ipv6'])
    ## ipv6-l3-protocol.h (module 'internet'): ns3::Ipv6L3Protocol::DropReason [enumeration]
    module.add_enum('DropReason', ['DROP_TTL_EXPIRED', 'DROP_NO_ROUTE', 'DROP_INTERFACE_DOWN', 'DROP_ROUTE_ERROR', 'DROP_UNKNOWN_PROTOCOL'], outer_class=root_module['ns3::Ipv6L3Protocol'], import_from_module='ns.internet')
    ## ipv6-address.h (module 'network'): ns3::Ipv6PrefixChecker [class]
    module.add_class('Ipv6PrefixChecker', import_from_module='ns.network', parent=root_module['ns3::AttributeChecker'])
    ## ipv6-address.h (module 'network'): ns3::Ipv6PrefixValue [class]
    module.add_class('Ipv6PrefixValue', import_from_module='ns.network', parent=root_module['ns3::AttributeValue'])
    ## mac48-address.h (module 'network'): ns3::Mac48AddressChecker [class]
    module.add_class('Mac48AddressChecker', import_from_module='ns.network', parent=root_module['ns3::AttributeChecker'])
    ## mac48-address.h (module 'network'): ns3::Mac48AddressValue [class]
    module.add_class('Mac48AddressValue', import_from_module='ns.network', parent=root_module['ns3::AttributeValue'])
    ## mp-tcp-header.h (module 'mptcp'): ns3::MpTcpHeader [class]
    module.add_class('MpTcpHeader', parent=root_module['ns3::TcpHeader'])
    ## mp-tcp-socket-base.h (module 'mptcp'): ns3::MpTcpSocketBase [class]
    module.add_class('MpTcpSocketBase', parent=root_module['ns3::TcpSocketBase'])
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpSubFlow [class]
    module.add_class('MpTcpSubFlow', parent=root_module['ns3::Object'])
    ## net-device.h (module 'network'): ns3::NetDevice [class]
    module.add_class('NetDevice', import_from_module='ns.network', parent=root_module['ns3::Object'])
    ## net-device.h (module 'network'): ns3::NetDevice::PacketType [enumeration]
    module.add_enum('PacketType', ['PACKET_HOST', 'NS3_PACKET_HOST', 'PACKET_BROADCAST', 'NS3_PACKET_BROADCAST', 'PACKET_MULTICAST', 'NS3_PACKET_MULTICAST', 'PACKET_OTHERHOST', 'NS3_PACKET_OTHERHOST'], outer_class=root_module['ns3::NetDevice'], import_from_module='ns.network')
    ## nix-vector.h (module 'network'): ns3::NixVector [class]
    module.add_class('NixVector', import_from_module='ns.network', parent=root_module['ns3::SimpleRefCount< ns3::NixVector, ns3::empty, ns3::DefaultDeleter<ns3::NixVector> >'])
    ## node.h (module 'network'): ns3::Node [class]
    module.add_class('Node', import_from_module='ns.network', parent=root_module['ns3::Object'])
    ## object-factory.h (module 'core'): ns3::ObjectFactoryChecker [class]
    module.add_class('ObjectFactoryChecker', import_from_module='ns.core', parent=root_module['ns3::AttributeChecker'])
    ## object-factory.h (module 'core'): ns3::ObjectFactoryValue [class]
    module.add_class('ObjectFactoryValue', import_from_module='ns.core', parent=root_module['ns3::AttributeValue'])
    ## output-stream-wrapper.h (module 'network'): ns3::OutputStreamWrapper [class]
    module.add_class('OutputStreamWrapper', import_from_module='ns.network', parent=root_module['ns3::SimpleRefCount< ns3::OutputStreamWrapper, ns3::empty, ns3::DefaultDeleter<ns3::OutputStreamWrapper> >'])
    ## packet.h (module 'network'): ns3::Packet [class]
    module.add_class('Packet', import_from_module='ns.network', parent=root_module['ns3::SimpleRefCount< ns3::Packet, ns3::empty, ns3::DefaultDeleter<ns3::Packet> >'])
    ## tcp-l4-protocol.h (module 'internet'): ns3::TcpL4Protocol [class]
    module.add_class('TcpL4Protocol', import_from_module='ns.internet', parent=root_module['ns3::Ipv4L4Protocol'])
    ## nstime.h (module 'core'): ns3::TimeChecker [class]
    module.add_class('TimeChecker', import_from_module='ns.core', parent=root_module['ns3::AttributeChecker'])
    ## nstime.h (module 'core'): ns3::TimeValue [class]
    module.add_class('TimeValue', import_from_module='ns.core', parent=root_module['ns3::AttributeValue'])
    ## type-id.h (module 'core'): ns3::TypeIdChecker [class]
    module.add_class('TypeIdChecker', import_from_module='ns.core', parent=root_module['ns3::AttributeChecker'])
    ## type-id.h (module 'core'): ns3::TypeIdValue [class]
    module.add_class('TypeIdValue', import_from_module='ns.core', parent=root_module['ns3::AttributeValue'])
    ## uinteger.h (module 'core'): ns3::UintegerValue [class]
    module.add_class('UintegerValue', import_from_module='ns.core', parent=root_module['ns3::AttributeValue'])
    ## address.h (module 'network'): ns3::AddressChecker [class]
    module.add_class('AddressChecker', import_from_module='ns.network', parent=root_module['ns3::AttributeChecker'])
    ## address.h (module 'network'): ns3::AddressValue [class]
    module.add_class('AddressValue', import_from_module='ns.network', parent=root_module['ns3::AttributeValue'])
    ## mp-tcp-l4-protocol.h (module 'mptcp'): ns3::MpTcpL4Protocol [class]
    module.add_class('MpTcpL4Protocol', parent=root_module['ns3::TcpL4Protocol'])
    module.add_container('std::queue< unsigned char >', 'unsigned char', container_type='queue')
    module.add_container('std::list< ns3::Ipv4EndPoint * >', 'ns3::Ipv4EndPoint *', container_type='list')
    module.add_container('std::vector< ns3::Ptr< ns3::Packet > >', 'ns3::Ptr< ns3::Packet >', container_type='vector')
    module.add_container('ns3::StateActions_t', 'std::vector< ns3::SA >', container_type='vector')
    module.add_container('ns3::EventVec_t', 'ns3::Events_t', container_type='vector')
    module.add_container('std::vector< unsigned long >', 'long unsigned int', container_type='vector')
    module.add_container('std::map< ns3::SequenceNumber< unsigned int, int >, ns3::Ptr< ns3::Packet > >', ('ns3::SequenceNumber< unsigned int, int >', 'ns3::Ptr< ns3::Packet >'), container_type='map')
    module.add_container('std::map< unsigned int, unsigned int >', ('unsigned int', 'unsigned int'), container_type='map')
    module.add_container('std::vector< ns3::TcpOptions * >', 'ns3::TcpOptions *', container_type='vector')
    module.add_container('std::list< ns3::DSNMapping * >', 'ns3::DSNMapping *', container_type='list')
    module.add_container('std::multiset< double >', 'double', container_type='multiset')
    typehandlers.add_type_alias('ns3::SequenceNumber< short unsigned int, short int >', 'ns3::SequenceNumber16')
    typehandlers.add_type_alias('ns3::SequenceNumber< short unsigned int, short int >*', 'ns3::SequenceNumber16*')
    typehandlers.add_type_alias('ns3::SequenceNumber< short unsigned int, short int >&', 'ns3::SequenceNumber16&')
    typehandlers.add_type_alias('ns3::SequenceNumber< unsigned int, int >', 'ns3::SequenceNumber32')
    typehandlers.add_type_alias('ns3::SequenceNumber< unsigned int, int >*', 'ns3::SequenceNumber32*')
    typehandlers.add_type_alias('ns3::SequenceNumber< unsigned int, int >&', 'ns3::SequenceNumber32&')
    typehandlers.add_type_alias('std::vector< ns3::SA, std::allocator< ns3::SA > >', 'ns3::StateActionVec_t')
    typehandlers.add_type_alias('std::vector< ns3::SA, std::allocator< ns3::SA > >*', 'ns3::StateActionVec_t*')
    typehandlers.add_type_alias('std::vector< ns3::SA, std::allocator< ns3::SA > >&', 'ns3::StateActionVec_t&')
    typehandlers.add_type_alias('std::vector< std::vector< ns3::SA, std::allocator< ns3::SA > >, std::allocator< std::vector< ns3::SA, std::allocator< ns3::SA > > > >', 'ns3::StateActions_t')
    typehandlers.add_type_alias('std::vector< std::vector< ns3::SA, std::allocator< ns3::SA > >, std::allocator< std::vector< ns3::SA, std::allocator< ns3::SA > > > >*', 'ns3::StateActions_t*')
    typehandlers.add_type_alias('std::vector< std::vector< ns3::SA, std::allocator< ns3::SA > >, std::allocator< std::vector< ns3::SA, std::allocator< ns3::SA > > > >&', 'ns3::StateActions_t&')
    typehandlers.add_type_alias('std::map< ns3::SequenceNumber< unsigned int, int >, ns3::Ptr< ns3::Packet >, std::less< ns3::SequenceNumber< unsigned int, int > >, std::allocator< std::pair< ns3::SequenceNumber< unsigned int, int > const, ns3::Ptr< ns3::Packet > > > >', 'ns3::UnAckData_t')
    typehandlers.add_type_alias('std::map< ns3::SequenceNumber< unsigned int, int >, ns3::Ptr< ns3::Packet >, std::less< ns3::SequenceNumber< unsigned int, int > >, std::allocator< std::pair< ns3::SequenceNumber< unsigned int, int > const, ns3::Ptr< ns3::Packet > > > >*', 'ns3::UnAckData_t*')
    typehandlers.add_type_alias('std::map< ns3::SequenceNumber< unsigned int, int >, ns3::Ptr< ns3::Packet >, std::less< ns3::SequenceNumber< unsigned int, int > >, std::allocator< std::pair< ns3::SequenceNumber< unsigned int, int > const, ns3::Ptr< ns3::Packet > > > >&', 'ns3::UnAckData_t&')
    typehandlers.add_type_alias('std::deque< ns3::RttHistory, std::allocator< ns3::RttHistory > >', 'ns3::RttHistory_t')
    typehandlers.add_type_alias('std::deque< ns3::RttHistory, std::allocator< ns3::RttHistory > >*', 'ns3::RttHistory_t*')
    typehandlers.add_type_alias('std::deque< ns3::RttHistory, std::allocator< ns3::RttHistory > >&', 'ns3::RttHistory_t&')
    typehandlers.add_type_alias('std::vector< ns3::Events_t, std::allocator< ns3::Events_t > >', 'ns3::EventVec_t')
    typehandlers.add_type_alias('std::vector< ns3::Events_t, std::allocator< ns3::Events_t > >*', 'ns3::EventVec_t*')
    typehandlers.add_type_alias('std::vector< ns3::Events_t, std::allocator< ns3::Events_t > >&', 'ns3::EventVec_t&')
    
    ## Register a nested module for the namespace FatalImpl
    
    nested_module = module.add_cpp_namespace('FatalImpl')
    register_types_ns3_FatalImpl(nested_module)
    
    
    ## Register a nested module for the namespace addressUtils
    
    nested_module = module.add_cpp_namespace('addressUtils')
    register_types_ns3_addressUtils(nested_module)
    
    
    ## Register a nested module for the namespace internal
    
    nested_module = module.add_cpp_namespace('internal')
    register_types_ns3_internal(nested_module)
    

def register_types_ns3_FatalImpl(module):
    root_module = module.get_root()
    

def register_types_ns3_addressUtils(module):
    root_module = module.get_root()
    

def register_types_ns3_internal(module):
    root_module = module.get_root()
    

def register_methods(root_module):
    register_Ns3Address_methods(root_module, root_module['ns3::Address'])
    register_Ns3AttributeConstructionList_methods(root_module, root_module['ns3::AttributeConstructionList'])
    register_Ns3AttributeConstructionListItem_methods(root_module, root_module['ns3::AttributeConstructionList::Item'])
    register_Ns3Buffer_methods(root_module, root_module['ns3::Buffer'])
    register_Ns3BufferIterator_methods(root_module, root_module['ns3::Buffer::Iterator'])
    register_Ns3ByteTagIterator_methods(root_module, root_module['ns3::ByteTagIterator'])
    register_Ns3ByteTagIteratorItem_methods(root_module, root_module['ns3::ByteTagIterator::Item'])
    register_Ns3ByteTagList_methods(root_module, root_module['ns3::ByteTagList'])
    register_Ns3ByteTagListIterator_methods(root_module, root_module['ns3::ByteTagList::Iterator'])
    register_Ns3ByteTagListIteratorItem_methods(root_module, root_module['ns3::ByteTagList::Iterator::Item'])
    register_Ns3CallbackBase_methods(root_module, root_module['ns3::CallbackBase'])
    register_Ns3DSNMapping_methods(root_module, root_module['ns3::DSNMapping'])
    register_Ns3DataBuffer_methods(root_module, root_module['ns3::DataBuffer'])
    register_Ns3EventId_methods(root_module, root_module['ns3::EventId'])
    register_Ns3Ipv4Address_methods(root_module, root_module['ns3::Ipv4Address'])
    register_Ns3Ipv4EndPointDemux_methods(root_module, root_module['ns3::Ipv4EndPointDemux'])
    register_Ns3Ipv4InterfaceAddress_methods(root_module, root_module['ns3::Ipv4InterfaceAddress'])
    register_Ns3Ipv4Mask_methods(root_module, root_module['ns3::Ipv4Mask'])
    register_Ns3Ipv6Address_methods(root_module, root_module['ns3::Ipv6Address'])
    register_Ns3Ipv6InterfaceAddress_methods(root_module, root_module['ns3::Ipv6InterfaceAddress'])
    register_Ns3Ipv6Prefix_methods(root_module, root_module['ns3::Ipv6Prefix'])
    register_Ns3Mac48Address_methods(root_module, root_module['ns3::Mac48Address'])
    register_Ns3MpInternetStackHelper_methods(root_module, root_module['ns3::MpInternetStackHelper'])
    register_Ns3MpTcpAddressInfo_methods(root_module, root_module['ns3::MpTcpAddressInfo'])
    register_Ns3NetDeviceContainer_methods(root_module, root_module['ns3::NetDeviceContainer'])
    register_Ns3NodeContainer_methods(root_module, root_module['ns3::NodeContainer'])
    register_Ns3ObjectBase_methods(root_module, root_module['ns3::ObjectBase'])
    register_Ns3ObjectDeleter_methods(root_module, root_module['ns3::ObjectDeleter'])
    register_Ns3ObjectFactory_methods(root_module, root_module['ns3::ObjectFactory'])
    register_Ns3PacketMetadata_methods(root_module, root_module['ns3::PacketMetadata'])
    register_Ns3PacketMetadataItem_methods(root_module, root_module['ns3::PacketMetadata::Item'])
    register_Ns3PacketMetadataItemIterator_methods(root_module, root_module['ns3::PacketMetadata::ItemIterator'])
    register_Ns3PacketTagIterator_methods(root_module, root_module['ns3::PacketTagIterator'])
    register_Ns3PacketTagIteratorItem_methods(root_module, root_module['ns3::PacketTagIterator::Item'])
    register_Ns3PacketTagList_methods(root_module, root_module['ns3::PacketTagList'])
    register_Ns3PacketTagListTagData_methods(root_module, root_module['ns3::PacketTagList::TagData'])
    register_Ns3PendingData_methods(root_module, root_module['ns3::PendingData'])
    register_Ns3RttHistory_methods(root_module, root_module['ns3::RttHistory'])
    register_Ns3SA_methods(root_module, root_module['ns3::SA'])
    register_Ns3SequenceNumber32_methods(root_module, root_module['ns3::SequenceNumber32'])
    register_Ns3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter_methods(root_module, root_module['ns3::SimpleRefCount< ns3::Object, ns3::ObjectBase, ns3::ObjectDeleter >'])
    register_Ns3Simulator_methods(root_module, root_module['ns3::Simulator'])
    register_Ns3Tag_methods(root_module, root_module['ns3::Tag'])
    register_Ns3TagBuffer_methods(root_module, root_module['ns3::TagBuffer'])
    register_Ns3TcpOptions_methods(root_module, root_module['ns3::TcpOptions'])
    register_Ns3TcpStateMachine_methods(root_module, root_module['ns3::TcpStateMachine'])
    register_Ns3TracedValue__Double_methods(root_module, root_module['ns3::TracedValue< double >'])
    register_Ns3TracedValue__Ns3SequenceNumber__lt__unsigned_int__int__gt___methods(root_module, root_module['ns3::TracedValue< ns3::SequenceNumber<unsigned int, int> >'])
    register_Ns3TracedValue__Ns3TcpStates_t_methods(root_module, root_module['ns3::TracedValue< ns3::TcpStates_t >'])
    register_Ns3TracedValue__Unsigned_int_methods(root_module, root_module['ns3::TracedValue< unsigned int >'])
    register_Ns3TypeId_methods(root_module, root_module['ns3::TypeId'])
    register_Ns3TypeIdAttributeInformation_methods(root_module, root_module['ns3::TypeId::AttributeInformation'])
    register_Ns3TypeIdTraceSourceInformation_methods(root_module, root_module['ns3::TypeId::TraceSourceInformation'])
    register_Ns3Empty_methods(root_module, root_module['ns3::empty'])
    register_Ns3Int64x64_t_methods(root_module, root_module['ns3::int64x64_t'])
    register_Ns3Chunk_methods(root_module, root_module['ns3::Chunk'])
    register_Ns3Header_methods(root_module, root_module['ns3::Header'])
    register_Ns3Ipv4Header_methods(root_module, root_module['ns3::Ipv4Header'])
    register_Ns3Ipv6Header_methods(root_module, root_module['ns3::Ipv6Header'])
    register_Ns3MpTcpStateMachine_methods(root_module, root_module['ns3::MpTcpStateMachine'])
    register_Ns3Object_methods(root_module, root_module['ns3::Object'])
    register_Ns3ObjectAggregateIterator_methods(root_module, root_module['ns3::Object::AggregateIterator'])
    register_Ns3OptAddAddress_methods(root_module, root_module['ns3::OptAddAddress'])
    register_Ns3OptDSACK_methods(root_module, root_module['ns3::OptDSACK'])
    register_Ns3OptDataSeqMapping_methods(root_module, root_module['ns3::OptDataSeqMapping'])
    register_Ns3OptJoinConnection_methods(root_module, root_module['ns3::OptJoinConnection'])
    register_Ns3OptMultipathCapable_methods(root_module, root_module['ns3::OptMultipathCapable'])
    register_Ns3OptRemoveAddress_methods(root_module, root_module['ns3::OptRemoveAddress'])
    register_Ns3OptTimesTamp_methods(root_module, root_module['ns3::OptTimesTamp'])
    register_Ns3RttEstimator_methods(root_module, root_module['ns3::RttEstimator'])
    register_Ns3RttMeanDeviation_methods(root_module, root_module['ns3::RttMeanDeviation'])
    register_Ns3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt___methods(root_module, root_module['ns3::SimpleRefCount< ns3::AttributeAccessor, ns3::empty, ns3::DefaultDeleter<ns3::AttributeAccessor> >'])
    register_Ns3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt___methods(root_module, root_module['ns3::SimpleRefCount< ns3::AttributeChecker, ns3::empty, ns3::DefaultDeleter<ns3::AttributeChecker> >'])
    register_Ns3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt___methods(root_module, root_module['ns3::SimpleRefCount< ns3::AttributeValue, ns3::empty, ns3::DefaultDeleter<ns3::AttributeValue> >'])
    register_Ns3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt___methods(root_module, root_module['ns3::SimpleRefCount< ns3::CallbackImplBase, ns3::empty, ns3::DefaultDeleter<ns3::CallbackImplBase> >'])
    register_Ns3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt___methods(root_module, root_module['ns3::SimpleRefCount< ns3::EventImpl, ns3::empty, ns3::DefaultDeleter<ns3::EventImpl> >'])
    register_Ns3SimpleRefCount__Ns3Ipv4MulticastRoute_Ns3Empty_Ns3DefaultDeleter__lt__ns3Ipv4MulticastRoute__gt___methods(root_module, root_module['ns3::SimpleRefCount< ns3::Ipv4MulticastRoute, ns3::empty, ns3::DefaultDeleter<ns3::Ipv4MulticastRoute> >'])
    register_Ns3SimpleRefCount__Ns3Ipv4Route_Ns3Empty_Ns3DefaultDeleter__lt__ns3Ipv4Route__gt___methods(root_module, root_module['ns3::SimpleRefCount< ns3::Ipv4Route, ns3::empty, ns3::DefaultDeleter<ns3::Ipv4Route> >'])
    register_Ns3SimpleRefCount__Ns3NixVector_Ns3Empty_Ns3DefaultDeleter__lt__ns3NixVector__gt___methods(root_module, root_module['ns3::SimpleRefCount< ns3::NixVector, ns3::empty, ns3::DefaultDeleter<ns3::NixVector> >'])
    register_Ns3SimpleRefCount__Ns3OutputStreamWrapper_Ns3Empty_Ns3DefaultDeleter__lt__ns3OutputStreamWrapper__gt___methods(root_module, root_module['ns3::SimpleRefCount< ns3::OutputStreamWrapper, ns3::empty, ns3::DefaultDeleter<ns3::OutputStreamWrapper> >'])
    register_Ns3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt___methods(root_module, root_module['ns3::SimpleRefCount< ns3::Packet, ns3::empty, ns3::DefaultDeleter<ns3::Packet> >'])
    register_Ns3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt___methods(root_module, root_module['ns3::SimpleRefCount< ns3::TraceSourceAccessor, ns3::empty, ns3::DefaultDeleter<ns3::TraceSourceAccessor> >'])
    register_Ns3Socket_methods(root_module, root_module['ns3::Socket'])
    register_Ns3SocketAddressTag_methods(root_module, root_module['ns3::SocketAddressTag'])
    register_Ns3SocketFactory_methods(root_module, root_module['ns3::SocketFactory'])
    register_Ns3SocketIpTtlTag_methods(root_module, root_module['ns3::SocketIpTtlTag'])
    register_Ns3SocketSetDontFragmentTag_methods(root_module, root_module['ns3::SocketSetDontFragmentTag'])
    register_Ns3TcpHeader_methods(root_module, root_module['ns3::TcpHeader'])
    register_Ns3TcpRxBuffer_methods(root_module, root_module['ns3::TcpRxBuffer'])
    register_Ns3TcpSocket_methods(root_module, root_module['ns3::TcpSocket'])
    register_Ns3TcpSocketBase_methods(root_module, root_module['ns3::TcpSocketBase'])
    register_Ns3TcpSocketFactory_methods(root_module, root_module['ns3::TcpSocketFactory'])
    register_Ns3TcpTxBuffer_methods(root_module, root_module['ns3::TcpTxBuffer'])
    register_Ns3Time_methods(root_module, root_module['ns3::Time'])
    register_Ns3TraceSourceAccessor_methods(root_module, root_module['ns3::TraceSourceAccessor'])
    register_Ns3TracedValue__Ns3Time_methods(root_module, root_module['ns3::TracedValue< ns3::Time >'])
    register_Ns3Trailer_methods(root_module, root_module['ns3::Trailer'])
    register_Ns3AttributeAccessor_methods(root_module, root_module['ns3::AttributeAccessor'])
    register_Ns3AttributeChecker_methods(root_module, root_module['ns3::AttributeChecker'])
    register_Ns3AttributeValue_methods(root_module, root_module['ns3::AttributeValue'])
    register_Ns3BooleanChecker_methods(root_module, root_module['ns3::BooleanChecker'])
    register_Ns3BooleanValue_methods(root_module, root_module['ns3::BooleanValue'])
    register_Ns3CallbackChecker_methods(root_module, root_module['ns3::CallbackChecker'])
    register_Ns3CallbackImplBase_methods(root_module, root_module['ns3::CallbackImplBase'])
    register_Ns3CallbackValue_methods(root_module, root_module['ns3::CallbackValue'])
    register_Ns3DoubleValue_methods(root_module, root_module['ns3::DoubleValue'])
    register_Ns3EmptyAttributeValue_methods(root_module, root_module['ns3::EmptyAttributeValue'])
    register_Ns3EnumChecker_methods(root_module, root_module['ns3::EnumChecker'])
    register_Ns3EnumValue_methods(root_module, root_module['ns3::EnumValue'])
    register_Ns3EventImpl_methods(root_module, root_module['ns3::EventImpl'])
    register_Ns3IntegerValue_methods(root_module, root_module['ns3::IntegerValue'])
    register_Ns3Ipv4_methods(root_module, root_module['ns3::Ipv4'])
    register_Ns3Ipv4AddressChecker_methods(root_module, root_module['ns3::Ipv4AddressChecker'])
    register_Ns3Ipv4AddressValue_methods(root_module, root_module['ns3::Ipv4AddressValue'])
    register_Ns3Ipv4Interface_methods(root_module, root_module['ns3::Ipv4Interface'])
    register_Ns3Ipv4L3Protocol_methods(root_module, root_module['ns3::Ipv4L3Protocol'])
    register_Ns3Ipv4L4Protocol_methods(root_module, root_module['ns3::Ipv4L4Protocol'])
    register_Ns3Ipv4MaskChecker_methods(root_module, root_module['ns3::Ipv4MaskChecker'])
    register_Ns3Ipv4MaskValue_methods(root_module, root_module['ns3::Ipv4MaskValue'])
    register_Ns3Ipv4MulticastRoute_methods(root_module, root_module['ns3::Ipv4MulticastRoute'])
    register_Ns3Ipv4Route_methods(root_module, root_module['ns3::Ipv4Route'])
    register_Ns3Ipv4RoutingProtocol_methods(root_module, root_module['ns3::Ipv4RoutingProtocol'])
    register_Ns3Ipv6_methods(root_module, root_module['ns3::Ipv6'])
    register_Ns3Ipv6AddressChecker_methods(root_module, root_module['ns3::Ipv6AddressChecker'])
    register_Ns3Ipv6AddressValue_methods(root_module, root_module['ns3::Ipv6AddressValue'])
    register_Ns3Ipv6L3Protocol_methods(root_module, root_module['ns3::Ipv6L3Protocol'])
    register_Ns3Ipv6PrefixChecker_methods(root_module, root_module['ns3::Ipv6PrefixChecker'])
    register_Ns3Ipv6PrefixValue_methods(root_module, root_module['ns3::Ipv6PrefixValue'])
    register_Ns3Mac48AddressChecker_methods(root_module, root_module['ns3::Mac48AddressChecker'])
    register_Ns3Mac48AddressValue_methods(root_module, root_module['ns3::Mac48AddressValue'])
    register_Ns3MpTcpHeader_methods(root_module, root_module['ns3::MpTcpHeader'])
    register_Ns3MpTcpSocketBase_methods(root_module, root_module['ns3::MpTcpSocketBase'])
    register_Ns3MpTcpSubFlow_methods(root_module, root_module['ns3::MpTcpSubFlow'])
    register_Ns3NetDevice_methods(root_module, root_module['ns3::NetDevice'])
    register_Ns3NixVector_methods(root_module, root_module['ns3::NixVector'])
    register_Ns3Node_methods(root_module, root_module['ns3::Node'])
    register_Ns3ObjectFactoryChecker_methods(root_module, root_module['ns3::ObjectFactoryChecker'])
    register_Ns3ObjectFactoryValue_methods(root_module, root_module['ns3::ObjectFactoryValue'])
    register_Ns3OutputStreamWrapper_methods(root_module, root_module['ns3::OutputStreamWrapper'])
    register_Ns3Packet_methods(root_module, root_module['ns3::Packet'])
    register_Ns3TcpL4Protocol_methods(root_module, root_module['ns3::TcpL4Protocol'])
    register_Ns3TimeChecker_methods(root_module, root_module['ns3::TimeChecker'])
    register_Ns3TimeValue_methods(root_module, root_module['ns3::TimeValue'])
    register_Ns3TypeIdChecker_methods(root_module, root_module['ns3::TypeIdChecker'])
    register_Ns3TypeIdValue_methods(root_module, root_module['ns3::TypeIdValue'])
    register_Ns3UintegerValue_methods(root_module, root_module['ns3::UintegerValue'])
    register_Ns3AddressChecker_methods(root_module, root_module['ns3::AddressChecker'])
    register_Ns3AddressValue_methods(root_module, root_module['ns3::AddressValue'])
    register_Ns3MpTcpL4Protocol_methods(root_module, root_module['ns3::MpTcpL4Protocol'])
    return

def register_Ns3Address_methods(root_module, cls):
    cls.add_binary_comparison_operator('!=')
    cls.add_binary_comparison_operator('<')
    cls.add_output_stream_operator()
    cls.add_binary_comparison_operator('==')
    ## address.h (module 'network'): ns3::Address::Address() [constructor]
    cls.add_constructor([])
    ## address.h (module 'network'): ns3::Address::Address(uint8_t type, uint8_t const * buffer, uint8_t len) [constructor]
    cls.add_constructor([param('uint8_t', 'type'), param('uint8_t const *', 'buffer'), param('uint8_t', 'len')])
    ## address.h (module 'network'): ns3::Address::Address(ns3::Address const & address) [copy constructor]
    cls.add_constructor([param('ns3::Address const &', 'address')])
    ## address.h (module 'network'): bool ns3::Address::CheckCompatible(uint8_t type, uint8_t len) const [member function]
    cls.add_method('CheckCompatible', 
                   'bool', 
                   [param('uint8_t', 'type'), param('uint8_t', 'len')], 
                   is_const=True)
    ## address.h (module 'network'): uint32_t ns3::Address::CopyAllFrom(uint8_t const * buffer, uint8_t len) [member function]
    cls.add_method('CopyAllFrom', 
                   'uint32_t', 
                   [param('uint8_t const *', 'buffer'), param('uint8_t', 'len')])
    ## address.h (module 'network'): uint32_t ns3::Address::CopyAllTo(uint8_t * buffer, uint8_t len) const [member function]
    cls.add_method('CopyAllTo', 
                   'uint32_t', 
                   [param('uint8_t *', 'buffer'), param('uint8_t', 'len')], 
                   is_const=True)
    ## address.h (module 'network'): uint32_t ns3::Address::CopyFrom(uint8_t const * buffer, uint8_t len) [member function]
    cls.add_method('CopyFrom', 
                   'uint32_t', 
                   [param('uint8_t const *', 'buffer'), param('uint8_t', 'len')])
    ## address.h (module 'network'): uint32_t ns3::Address::CopyTo(uint8_t * buffer) const [member function]
    cls.add_method('CopyTo', 
                   'uint32_t', 
                   [param('uint8_t *', 'buffer')], 
                   is_const=True)
    ## address.h (module 'network'): void ns3::Address::Deserialize(ns3::TagBuffer buffer) [member function]
    cls.add_method('Deserialize', 
                   'void', 
                   [param('ns3::TagBuffer', 'buffer')])
    ## address.h (module 'network'): uint8_t ns3::Address::GetLength() const [member function]
    cls.add_method('GetLength', 
                   'uint8_t', 
                   [], 
                   is_const=True)
    ## address.h (module 'network'): uint32_t ns3::Address::GetSerializedSize() const [member function]
    cls.add_method('GetSerializedSize', 
                   'uint32_t', 
                   [], 
                   is_const=True)
    ## address.h (module 'network'): bool ns3::Address::IsInvalid() const [member function]
    cls.add_method('IsInvalid', 
                   'bool', 
                   [], 
                   is_const=True)
    ## address.h (module 'network'): bool ns3::Address::IsMatchingType(uint8_t type) const [member function]
    cls.add_method('IsMatchingType', 
                   'bool', 
                   [param('uint8_t', 'type')], 
                   is_const=True)
    ## address.h (module 'network'): static uint8_t ns3::Address::Register() [member function]
    cls.add_method('Register', 
                   'uint8_t', 
                   [], 
                   is_static=True)
    ## address.h (module 'network'): void ns3::Address::Serialize(ns3::TagBuffer buffer) const [member function]
    cls.add_method('Serialize', 
                   'void', 
                   [param('ns3::TagBuffer', 'buffer')], 
                   is_const=True)
    return

def register_Ns3AttributeConstructionList_methods(root_module, cls):
    ## attribute-construction-list.h (module 'core'): ns3::AttributeConstructionList::AttributeConstructionList(ns3::AttributeConstructionList const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::AttributeConstructionList const &', 'arg0')])
    ## attribute-construction-list.h (module 'core'): ns3::AttributeConstructionList::AttributeConstructionList() [constructor]
    cls.add_constructor([])
    ## attribute-construction-list.h (module 'core'): void ns3::AttributeConstructionList::Add(std::string name, ns3::Ptr<ns3::AttributeChecker const> checker, ns3::Ptr<ns3::AttributeValue> value) [member function]
    cls.add_method('Add', 
                   'void', 
                   [param('std::string', 'name'), param('ns3::Ptr< ns3::AttributeChecker const >', 'checker'), param('ns3::Ptr< ns3::AttributeValue >', 'value')])
    ## attribute-construction-list.h (module 'core'): std::_List_const_iterator<ns3::AttributeConstructionList::Item> ns3::AttributeConstructionList::Begin() const [member function]
    cls.add_method('Begin', 
                   'std::_List_const_iterator< ns3::AttributeConstructionList::Item >', 
                   [], 
                   is_const=True)
    ## attribute-construction-list.h (module 'core'): std::_List_const_iterator<ns3::AttributeConstructionList::Item> ns3::AttributeConstructionList::End() const [member function]
    cls.add_method('End', 
                   'std::_List_const_iterator< ns3::AttributeConstructionList::Item >', 
                   [], 
                   is_const=True)
    ## attribute-construction-list.h (module 'core'): ns3::Ptr<ns3::AttributeValue> ns3::AttributeConstructionList::Find(ns3::Ptr<ns3::AttributeChecker const> checker) const [member function]
    cls.add_method('Find', 
                   'ns3::Ptr< ns3::AttributeValue >', 
                   [param('ns3::Ptr< ns3::AttributeChecker const >', 'checker')], 
                   is_const=True)
    return

def register_Ns3AttributeConstructionListItem_methods(root_module, cls):
    ## attribute-construction-list.h (module 'core'): ns3::AttributeConstructionList::Item::Item() [constructor]
    cls.add_constructor([])
    ## attribute-construction-list.h (module 'core'): ns3::AttributeConstructionList::Item::Item(ns3::AttributeConstructionList::Item const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::AttributeConstructionList::Item const &', 'arg0')])
    ## attribute-construction-list.h (module 'core'): ns3::AttributeConstructionList::Item::checker [variable]
    cls.add_instance_attribute('checker', 'ns3::Ptr< ns3::AttributeChecker const >', is_const=False)
    ## attribute-construction-list.h (module 'core'): ns3::AttributeConstructionList::Item::name [variable]
    cls.add_instance_attribute('name', 'std::string', is_const=False)
    ## attribute-construction-list.h (module 'core'): ns3::AttributeConstructionList::Item::value [variable]
    cls.add_instance_attribute('value', 'ns3::Ptr< ns3::AttributeValue >', is_const=False)
    return

def register_Ns3Buffer_methods(root_module, cls):
    ## buffer.h (module 'network'): ns3::Buffer::Buffer() [constructor]
    cls.add_constructor([])
    ## buffer.h (module 'network'): ns3::Buffer::Buffer(uint32_t dataSize) [constructor]
    cls.add_constructor([param('uint32_t', 'dataSize')])
    ## buffer.h (module 'network'): ns3::Buffer::Buffer(uint32_t dataSize, bool initialize) [constructor]
    cls.add_constructor([param('uint32_t', 'dataSize'), param('bool', 'initialize')])
    ## buffer.h (module 'network'): ns3::Buffer::Buffer(ns3::Buffer const & o) [copy constructor]
    cls.add_constructor([param('ns3::Buffer const &', 'o')])
    ## buffer.h (module 'network'): bool ns3::Buffer::AddAtEnd(uint32_t end) [member function]
    cls.add_method('AddAtEnd', 
                   'bool', 
                   [param('uint32_t', 'end')])
    ## buffer.h (module 'network'): void ns3::Buffer::AddAtEnd(ns3::Buffer const & o) [member function]
    cls.add_method('AddAtEnd', 
                   'void', 
                   [param('ns3::Buffer const &', 'o')])
    ## buffer.h (module 'network'): bool ns3::Buffer::AddAtStart(uint32_t start) [member function]
    cls.add_method('AddAtStart', 
                   'bool', 
                   [param('uint32_t', 'start')])
    ## buffer.h (module 'network'): ns3::Buffer::Iterator ns3::Buffer::Begin() const [member function]
    cls.add_method('Begin', 
                   'ns3::Buffer::Iterator', 
                   [], 
                   is_const=True)
    ## buffer.h (module 'network'): void ns3::Buffer::CopyData(std::ostream * os, uint32_t size) const [member function]
    cls.add_method('CopyData', 
                   'void', 
                   [param('std::ostream *', 'os'), param('uint32_t', 'size')], 
                   is_const=True)
    ## buffer.h (module 'network'): uint32_t ns3::Buffer::CopyData(uint8_t * buffer, uint32_t size) const [member function]
    cls.add_method('CopyData', 
                   'uint32_t', 
                   [param('uint8_t *', 'buffer'), param('uint32_t', 'size')], 
                   is_const=True)
    ## buffer.h (module 'network'): ns3::Buffer ns3::Buffer::CreateFragment(uint32_t start, uint32_t length) const [member function]
    cls.add_method('CreateFragment', 
                   'ns3::Buffer', 
                   [param('uint32_t', 'start'), param('uint32_t', 'length')], 
                   is_const=True)
    ## buffer.h (module 'network'): ns3::Buffer ns3::Buffer::CreateFullCopy() const [member function]
    cls.add_method('CreateFullCopy', 
                   'ns3::Buffer', 
                   [], 
                   is_const=True)
    ## buffer.h (module 'network'): uint32_t ns3::Buffer::Deserialize(uint8_t const * buffer, uint32_t size) [member function]
    cls.add_method('Deserialize', 
                   'uint32_t', 
                   [param('uint8_t const *', 'buffer'), param('uint32_t', 'size')])
    ## buffer.h (module 'network'): ns3::Buffer::Iterator ns3::Buffer::End() const [member function]
    cls.add_method('End', 
                   'ns3::Buffer::Iterator', 
                   [], 
                   is_const=True)
    ## buffer.h (module 'network'): int32_t ns3::Buffer::GetCurrentEndOffset() const [member function]
    cls.add_method('GetCurrentEndOffset', 
                   'int32_t', 
                   [], 
                   is_const=True)
    ## buffer.h (module 'network'): int32_t ns3::Buffer::GetCurrentStartOffset() const [member function]
    cls.add_method('GetCurrentStartOffset', 
                   'int32_t', 
                   [], 
                   is_const=True)
    ## buffer.h (module 'network'): uint32_t ns3::Buffer::GetSerializedSize() const [member function]
    cls.add_method('GetSerializedSize', 
                   'uint32_t', 
                   [], 
                   is_const=True)
    ## buffer.h (module 'network'): uint32_t ns3::Buffer::GetSize() const [member function]
    cls.add_method('GetSize', 
                   'uint32_t', 
                   [], 
                   is_const=True)
    ## buffer.h (module 'network'): uint8_t const * ns3::Buffer::PeekData() const [member function]
    cls.add_method('PeekData', 
                   'uint8_t const *', 
                   [], 
                   is_const=True)
    ## buffer.h (module 'network'): void ns3::Buffer::RemoveAtEnd(uint32_t end) [member function]
    cls.add_method('RemoveAtEnd', 
                   'void', 
                   [param('uint32_t', 'end')])
    ## buffer.h (module 'network'): void ns3::Buffer::RemoveAtStart(uint32_t start) [member function]
    cls.add_method('RemoveAtStart', 
                   'void', 
                   [param('uint32_t', 'start')])
    ## buffer.h (module 'network'): uint32_t ns3::Buffer::Serialize(uint8_t * buffer, uint32_t maxSize) const [member function]
    cls.add_method('Serialize', 
                   'uint32_t', 
                   [param('uint8_t *', 'buffer'), param('uint32_t', 'maxSize')], 
                   is_const=True)
    return

def register_Ns3BufferIterator_methods(root_module, cls):
    ## buffer.h (module 'network'): ns3::Buffer::Iterator::Iterator(ns3::Buffer::Iterator const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::Buffer::Iterator const &', 'arg0')])
    ## buffer.h (module 'network'): ns3::Buffer::Iterator::Iterator() [constructor]
    cls.add_constructor([])
    ## buffer.h (module 'network'): uint16_t ns3::Buffer::Iterator::CalculateIpChecksum(uint16_t size) [member function]
    cls.add_method('CalculateIpChecksum', 
                   'uint16_t', 
                   [param('uint16_t', 'size')])
    ## buffer.h (module 'network'): uint16_t ns3::Buffer::Iterator::CalculateIpChecksum(uint16_t size, uint32_t initialChecksum) [member function]
    cls.add_method('CalculateIpChecksum', 
                   'uint16_t', 
                   [param('uint16_t', 'size'), param('uint32_t', 'initialChecksum')])
    ## buffer.h (module 'network'): uint32_t ns3::Buffer::Iterator::GetDistanceFrom(ns3::Buffer::Iterator const & o) const [member function]
    cls.add_method('GetDistanceFrom', 
                   'uint32_t', 
                   [param('ns3::Buffer::Iterator const &', 'o')], 
                   is_const=True)
    ## buffer.h (module 'network'): uint32_t ns3::Buffer::Iterator::GetSize() const [member function]
    cls.add_method('GetSize', 
                   'uint32_t', 
                   [], 
                   is_const=True)
    ## buffer.h (module 'network'): bool ns3::Buffer::Iterator::IsEnd() const [member function]
    cls.add_method('IsEnd', 
                   'bool', 
                   [], 
                   is_const=True)
    ## buffer.h (module 'network'): bool ns3::Buffer::Iterator::IsStart() const [member function]
    cls.add_method('IsStart', 
                   'bool', 
                   [], 
                   is_const=True)
    ## buffer.h (module 'network'): void ns3::Buffer::Iterator::Next() [member function]
    cls.add_method('Next', 
                   'void', 
                   [])
    ## buffer.h (module 'network'): void ns3::Buffer::Iterator::Next(uint32_t delta) [member function]
    cls.add_method('Next', 
                   'void', 
                   [param('uint32_t', 'delta')])
    ## buffer.h (module 'network'): void ns3::Buffer::Iterator::Prev() [member function]
    cls.add_method('Prev', 
                   'void', 
                   [])
    ## buffer.h (module 'network'): void ns3::Buffer::Iterator::Prev(uint32_t delta) [member function]
    cls.add_method('Prev', 
                   'void', 
                   [param('uint32_t', 'delta')])
    ## buffer.h (module 'network'): void ns3::Buffer::Iterator::Read(uint8_t * buffer, uint32_t size) [member function]
    cls.add_method('Read', 
                   'void', 
                   [param('uint8_t *', 'buffer'), param('uint32_t', 'size')])
    ## buffer.h (module 'network'): uint16_t ns3::Buffer::Iterator::ReadLsbtohU16() [member function]
    cls.add_method('ReadLsbtohU16', 
                   'uint16_t', 
                   [])
    ## buffer.h (module 'network'): uint32_t ns3::Buffer::Iterator::ReadLsbtohU32() [member function]
    cls.add_method('ReadLsbtohU32', 
                   'uint32_t', 
                   [])
    ## buffer.h (module 'network'): uint64_t ns3::Buffer::Iterator::ReadLsbtohU64() [member function]
    cls.add_method('ReadLsbtohU64', 
                   'uint64_t', 
                   [])
    ## buffer.h (module 'network'): uint16_t ns3::Buffer::Iterator::ReadNtohU16() [member function]
    cls.add_method('ReadNtohU16', 
                   'uint16_t', 
                   [])
    ## buffer.h (module 'network'): uint32_t ns3::Buffer::Iterator::ReadNtohU32() [member function]
    cls.add_method('ReadNtohU32', 
                   'uint32_t', 
                   [])
    ## buffer.h (module 'network'): uint64_t ns3::Buffer::Iterator::ReadNtohU64() [member function]
    cls.add_method('ReadNtohU64', 
                   'uint64_t', 
                   [])
    ## buffer.h (module 'network'): uint16_t ns3::Buffer::Iterator::ReadU16() [member function]
    cls.add_method('ReadU16', 
                   'uint16_t', 
                   [])
    ## buffer.h (module 'network'): uint32_t ns3::Buffer::Iterator::ReadU32() [member function]
    cls.add_method('ReadU32', 
                   'uint32_t', 
                   [])
    ## buffer.h (module 'network'): uint64_t ns3::Buffer::Iterator::ReadU64() [member function]
    cls.add_method('ReadU64', 
                   'uint64_t', 
                   [])
    ## buffer.h (module 'network'): uint8_t ns3::Buffer::Iterator::ReadU8() [member function]
    cls.add_method('ReadU8', 
                   'uint8_t', 
                   [])
    ## buffer.h (module 'network'): void ns3::Buffer::Iterator::Write(uint8_t const * buffer, uint32_t size) [member function]
    cls.add_method('Write', 
                   'void', 
                   [param('uint8_t const *', 'buffer'), param('uint32_t', 'size')])
    ## buffer.h (module 'network'): void ns3::Buffer::Iterator::Write(ns3::Buffer::Iterator start, ns3::Buffer::Iterator end) [member function]
    cls.add_method('Write', 
                   'void', 
                   [param('ns3::Buffer::Iterator', 'start'), param('ns3::Buffer::Iterator', 'end')])
    ## buffer.h (module 'network'): void ns3::Buffer::Iterator::WriteHtolsbU16(uint16_t data) [member function]
    cls.add_method('WriteHtolsbU16', 
                   'void', 
                   [param('uint16_t', 'data')])
    ## buffer.h (module 'network'): void ns3::Buffer::Iterator::WriteHtolsbU32(uint32_t data) [member function]
    cls.add_method('WriteHtolsbU32', 
                   'void', 
                   [param('uint32_t', 'data')])
    ## buffer.h (module 'network'): void ns3::Buffer::Iterator::WriteHtolsbU64(uint64_t data) [member function]
    cls.add_method('WriteHtolsbU64', 
                   'void', 
                   [param('uint64_t', 'data')])
    ## buffer.h (module 'network'): void ns3::Buffer::Iterator::WriteHtonU16(uint16_t data) [member function]
    cls.add_method('WriteHtonU16', 
                   'void', 
                   [param('uint16_t', 'data')])
    ## buffer.h (module 'network'): void ns3::Buffer::Iterator::WriteHtonU32(uint32_t data) [member function]
    cls.add_method('WriteHtonU32', 
                   'void', 
                   [param('uint32_t', 'data')])
    ## buffer.h (module 'network'): void ns3::Buffer::Iterator::WriteHtonU64(uint64_t data) [member function]
    cls.add_method('WriteHtonU64', 
                   'void', 
                   [param('uint64_t', 'data')])
    ## buffer.h (module 'network'): void ns3::Buffer::Iterator::WriteU16(uint16_t data) [member function]
    cls.add_method('WriteU16', 
                   'void', 
                   [param('uint16_t', 'data')])
    ## buffer.h (module 'network'): void ns3::Buffer::Iterator::WriteU32(uint32_t data) [member function]
    cls.add_method('WriteU32', 
                   'void', 
                   [param('uint32_t', 'data')])
    ## buffer.h (module 'network'): void ns3::Buffer::Iterator::WriteU64(uint64_t data) [member function]
    cls.add_method('WriteU64', 
                   'void', 
                   [param('uint64_t', 'data')])
    ## buffer.h (module 'network'): void ns3::Buffer::Iterator::WriteU8(uint8_t data) [member function]
    cls.add_method('WriteU8', 
                   'void', 
                   [param('uint8_t', 'data')])
    ## buffer.h (module 'network'): void ns3::Buffer::Iterator::WriteU8(uint8_t data, uint32_t len) [member function]
    cls.add_method('WriteU8', 
                   'void', 
                   [param('uint8_t', 'data'), param('uint32_t', 'len')])
    return

def register_Ns3ByteTagIterator_methods(root_module, cls):
    ## packet.h (module 'network'): ns3::ByteTagIterator::ByteTagIterator(ns3::ByteTagIterator const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::ByteTagIterator const &', 'arg0')])
    ## packet.h (module 'network'): bool ns3::ByteTagIterator::HasNext() const [member function]
    cls.add_method('HasNext', 
                   'bool', 
                   [], 
                   is_const=True)
    ## packet.h (module 'network'): ns3::ByteTagIterator::Item ns3::ByteTagIterator::Next() [member function]
    cls.add_method('Next', 
                   'ns3::ByteTagIterator::Item', 
                   [])
    return

def register_Ns3ByteTagIteratorItem_methods(root_module, cls):
    ## packet.h (module 'network'): ns3::ByteTagIterator::Item::Item(ns3::ByteTagIterator::Item const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::ByteTagIterator::Item const &', 'arg0')])
    ## packet.h (module 'network'): uint32_t ns3::ByteTagIterator::Item::GetEnd() const [member function]
    cls.add_method('GetEnd', 
                   'uint32_t', 
                   [], 
                   is_const=True)
    ## packet.h (module 'network'): uint32_t ns3::ByteTagIterator::Item::GetStart() const [member function]
    cls.add_method('GetStart', 
                   'uint32_t', 
                   [], 
                   is_const=True)
    ## packet.h (module 'network'): void ns3::ByteTagIterator::Item::GetTag(ns3::Tag & tag) const [member function]
    cls.add_method('GetTag', 
                   'void', 
                   [param('ns3::Tag &', 'tag')], 
                   is_const=True)
    ## packet.h (module 'network'): ns3::TypeId ns3::ByteTagIterator::Item::GetTypeId() const [member function]
    cls.add_method('GetTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_const=True)
    return

def register_Ns3ByteTagList_methods(root_module, cls):
    ## byte-tag-list.h (module 'network'): ns3::ByteTagList::ByteTagList() [constructor]
    cls.add_constructor([])
    ## byte-tag-list.h (module 'network'): ns3::ByteTagList::ByteTagList(ns3::ByteTagList const & o) [copy constructor]
    cls.add_constructor([param('ns3::ByteTagList const &', 'o')])
    ## byte-tag-list.h (module 'network'): ns3::TagBuffer ns3::ByteTagList::Add(ns3::TypeId tid, uint32_t bufferSize, int32_t start, int32_t end) [member function]
    cls.add_method('Add', 
                   'ns3::TagBuffer', 
                   [param('ns3::TypeId', 'tid'), param('uint32_t', 'bufferSize'), param('int32_t', 'start'), param('int32_t', 'end')])
    ## byte-tag-list.h (module 'network'): void ns3::ByteTagList::Add(ns3::ByteTagList const & o) [member function]
    cls.add_method('Add', 
                   'void', 
                   [param('ns3::ByteTagList const &', 'o')])
    ## byte-tag-list.h (module 'network'): void ns3::ByteTagList::AddAtEnd(int32_t adjustment, int32_t appendOffset) [member function]
    cls.add_method('AddAtEnd', 
                   'void', 
                   [param('int32_t', 'adjustment'), param('int32_t', 'appendOffset')])
    ## byte-tag-list.h (module 'network'): void ns3::ByteTagList::AddAtStart(int32_t adjustment, int32_t prependOffset) [member function]
    cls.add_method('AddAtStart', 
                   'void', 
                   [param('int32_t', 'adjustment'), param('int32_t', 'prependOffset')])
    ## byte-tag-list.h (module 'network'): ns3::ByteTagList::Iterator ns3::ByteTagList::Begin(int32_t offsetStart, int32_t offsetEnd) const [member function]
    cls.add_method('Begin', 
                   'ns3::ByteTagList::Iterator', 
                   [param('int32_t', 'offsetStart'), param('int32_t', 'offsetEnd')], 
                   is_const=True)
    ## byte-tag-list.h (module 'network'): void ns3::ByteTagList::RemoveAll() [member function]
    cls.add_method('RemoveAll', 
                   'void', 
                   [])
    return

def register_Ns3ByteTagListIterator_methods(root_module, cls):
    ## byte-tag-list.h (module 'network'): ns3::ByteTagList::Iterator::Iterator(ns3::ByteTagList::Iterator const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::ByteTagList::Iterator const &', 'arg0')])
    ## byte-tag-list.h (module 'network'): uint32_t ns3::ByteTagList::Iterator::GetOffsetStart() const [member function]
    cls.add_method('GetOffsetStart', 
                   'uint32_t', 
                   [], 
                   is_const=True)
    ## byte-tag-list.h (module 'network'): bool ns3::ByteTagList::Iterator::HasNext() const [member function]
    cls.add_method('HasNext', 
                   'bool', 
                   [], 
                   is_const=True)
    ## byte-tag-list.h (module 'network'): ns3::ByteTagList::Iterator::Item ns3::ByteTagList::Iterator::Next() [member function]
    cls.add_method('Next', 
                   'ns3::ByteTagList::Iterator::Item', 
                   [])
    return

def register_Ns3ByteTagListIteratorItem_methods(root_module, cls):
    ## byte-tag-list.h (module 'network'): ns3::ByteTagList::Iterator::Item::Item(ns3::ByteTagList::Iterator::Item const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::ByteTagList::Iterator::Item const &', 'arg0')])
    ## byte-tag-list.h (module 'network'): ns3::ByteTagList::Iterator::Item::Item(ns3::TagBuffer buf) [constructor]
    cls.add_constructor([param('ns3::TagBuffer', 'buf')])
    ## byte-tag-list.h (module 'network'): ns3::ByteTagList::Iterator::Item::buf [variable]
    cls.add_instance_attribute('buf', 'ns3::TagBuffer', is_const=False)
    ## byte-tag-list.h (module 'network'): ns3::ByteTagList::Iterator::Item::end [variable]
    cls.add_instance_attribute('end', 'int32_t', is_const=False)
    ## byte-tag-list.h (module 'network'): ns3::ByteTagList::Iterator::Item::size [variable]
    cls.add_instance_attribute('size', 'uint32_t', is_const=False)
    ## byte-tag-list.h (module 'network'): ns3::ByteTagList::Iterator::Item::start [variable]
    cls.add_instance_attribute('start', 'int32_t', is_const=False)
    ## byte-tag-list.h (module 'network'): ns3::ByteTagList::Iterator::Item::tid [variable]
    cls.add_instance_attribute('tid', 'ns3::TypeId', is_const=False)
    return

def register_Ns3CallbackBase_methods(root_module, cls):
    ## callback.h (module 'core'): ns3::CallbackBase::CallbackBase(ns3::CallbackBase const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::CallbackBase const &', 'arg0')])
    ## callback.h (module 'core'): ns3::CallbackBase::CallbackBase() [constructor]
    cls.add_constructor([])
    ## callback.h (module 'core'): ns3::Ptr<ns3::CallbackImplBase> ns3::CallbackBase::GetImpl() const [member function]
    cls.add_method('GetImpl', 
                   'ns3::Ptr< ns3::CallbackImplBase >', 
                   [], 
                   is_const=True)
    ## callback.h (module 'core'): ns3::CallbackBase::CallbackBase(ns3::Ptr<ns3::CallbackImplBase> impl) [constructor]
    cls.add_constructor([param('ns3::Ptr< ns3::CallbackImplBase >', 'impl')], 
                        visibility='protected')
    ## callback.h (module 'core'): static std::string ns3::CallbackBase::Demangle(std::string const & mangled) [member function]
    cls.add_method('Demangle', 
                   'std::string', 
                   [param('std::string const &', 'mangled')], 
                   is_static=True, visibility='protected')
    return

def register_Ns3DSNMapping_methods(root_module, cls):
    cls.add_binary_comparison_operator('<')
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::DSNMapping::DSNMapping(ns3::DSNMapping const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::DSNMapping const &', 'arg0')])
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::DSNMapping::DSNMapping() [constructor]
    cls.add_constructor([])
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::DSNMapping::DSNMapping(uint8_t sFlowIdx, uint64_t dSeqNum, uint16_t dLvlLen, uint32_t sflowSeqNum, uint32_t ack, ns3::Ptr<ns3::Packet> pkt) [constructor]
    cls.add_constructor([param('uint8_t', 'sFlowIdx'), param('uint64_t', 'dSeqNum'), param('uint16_t', 'dLvlLen'), param('uint32_t', 'sflowSeqNum'), param('uint32_t', 'ack'), param('ns3::Ptr< ns3::Packet >', 'pkt')])
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::DSNMapping::acknowledgement [variable]
    cls.add_instance_attribute('acknowledgement', 'uint32_t', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::DSNMapping::dataLevelLength [variable]
    cls.add_instance_attribute('dataLevelLength', 'uint16_t', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::DSNMapping::dataSeqNumber [variable]
    cls.add_instance_attribute('dataSeqNumber', 'uint64_t', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::DSNMapping::dupAckCount [variable]
    cls.add_instance_attribute('dupAckCount', 'uint32_t', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::DSNMapping::packet [variable]
    cls.add_instance_attribute('packet', 'uint8_t *', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::DSNMapping::retransmited [variable]
    cls.add_instance_attribute('retransmited', 'bool', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::DSNMapping::subflowIndex [variable]
    cls.add_instance_attribute('subflowIndex', 'uint8_t', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::DSNMapping::subflowSeqNumber [variable]
    cls.add_instance_attribute('subflowSeqNumber', 'uint32_t', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::DSNMapping::tsval [variable]
    cls.add_instance_attribute('tsval', 'uint64_t', is_const=False)
    return

def register_Ns3DataBuffer_methods(root_module, cls):
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::DataBuffer::DataBuffer(ns3::DataBuffer const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::DataBuffer const &', 'arg0')])
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::DataBuffer::DataBuffer() [constructor]
    cls.add_constructor([])
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::DataBuffer::DataBuffer(uint32_t size) [constructor]
    cls.add_constructor([param('uint32_t', 'size')])
    ## mp-tcp-typedefs.h (module 'mptcp'): uint32_t ns3::DataBuffer::Add(uint8_t * buf, uint32_t size) [member function]
    cls.add_method('Add', 
                   'uint32_t', 
                   [param('uint8_t *', 'buf'), param('uint32_t', 'size')])
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::Ptr<ns3::Packet> ns3::DataBuffer::CreatePacket(uint32_t size) [member function]
    cls.add_method('CreatePacket', 
                   'ns3::Ptr< ns3::Packet >', 
                   [param('uint32_t', 'size')])
    ## mp-tcp-typedefs.h (module 'mptcp'): bool ns3::DataBuffer::Empty() [member function]
    cls.add_method('Empty', 
                   'bool', 
                   [])
    ## mp-tcp-typedefs.h (module 'mptcp'): uint32_t ns3::DataBuffer::FreeSpaceSize() [member function]
    cls.add_method('FreeSpaceSize', 
                   'uint32_t', 
                   [])
    ## mp-tcp-typedefs.h (module 'mptcp'): bool ns3::DataBuffer::Full() [member function]
    cls.add_method('Full', 
                   'bool', 
                   [])
    ## mp-tcp-typedefs.h (module 'mptcp'): uint32_t ns3::DataBuffer::PendingData() [member function]
    cls.add_method('PendingData', 
                   'uint32_t', 
                   [])
    ## mp-tcp-typedefs.h (module 'mptcp'): uint32_t ns3::DataBuffer::ReadPacket(ns3::Ptr<ns3::Packet> pkt, uint32_t dataLen) [member function]
    cls.add_method('ReadPacket', 
                   'uint32_t', 
                   [param('ns3::Ptr< ns3::Packet >', 'pkt'), param('uint32_t', 'dataLen')])
    ## mp-tcp-typedefs.h (module 'mptcp'): uint32_t ns3::DataBuffer::Retrieve(uint8_t * buf, uint32_t size) [member function]
    cls.add_method('Retrieve', 
                   'uint32_t', 
                   [param('uint8_t *', 'buf'), param('uint32_t', 'size')])
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::DataBuffer::bufMaxSize [variable]
    cls.add_instance_attribute('bufMaxSize', 'uint32_t', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::DataBuffer::buffer [variable]
    cls.add_instance_attribute('buffer', 'std::queue< unsigned char >', is_const=False)
    return

def register_Ns3EventId_methods(root_module, cls):
    cls.add_binary_comparison_operator('!=')
    cls.add_binary_comparison_operator('==')
    ## event-id.h (module 'core'): ns3::EventId::EventId(ns3::EventId const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::EventId const &', 'arg0')])
    ## event-id.h (module 'core'): ns3::EventId::EventId() [constructor]
    cls.add_constructor([])
    ## event-id.h (module 'core'): ns3::EventId::EventId(ns3::Ptr<ns3::EventImpl> const & impl, uint64_t ts, uint32_t context, uint32_t uid) [constructor]
    cls.add_constructor([param('ns3::Ptr< ns3::EventImpl > const &', 'impl'), param('uint64_t', 'ts'), param('uint32_t', 'context'), param('uint32_t', 'uid')])
    ## event-id.h (module 'core'): void ns3::EventId::Cancel() [member function]
    cls.add_method('Cancel', 
                   'void', 
                   [])
    ## event-id.h (module 'core'): uint32_t ns3::EventId::GetContext() const [member function]
    cls.add_method('GetContext', 
                   'uint32_t', 
                   [], 
                   is_const=True)
    ## event-id.h (module 'core'): uint64_t ns3::EventId::GetTs() const [member function]
    cls.add_method('GetTs', 
                   'uint64_t', 
                   [], 
                   is_const=True)
    ## event-id.h (module 'core'): uint32_t ns3::EventId::GetUid() const [member function]
    cls.add_method('GetUid', 
                   'uint32_t', 
                   [], 
                   is_const=True)
    ## event-id.h (module 'core'): bool ns3::EventId::IsExpired() const [member function]
    cls.add_method('IsExpired', 
                   'bool', 
                   [], 
                   is_const=True)
    ## event-id.h (module 'core'): bool ns3::EventId::IsRunning() const [member function]
    cls.add_method('IsRunning', 
                   'bool', 
                   [], 
                   is_const=True)
    ## event-id.h (module 'core'): ns3::EventImpl * ns3::EventId::PeekEventImpl() const [member function]
    cls.add_method('PeekEventImpl', 
                   'ns3::EventImpl *', 
                   [], 
                   is_const=True)
    return

def register_Ns3Ipv4Address_methods(root_module, cls):
    cls.add_binary_comparison_operator('!=')
    cls.add_binary_comparison_operator('<')
    cls.add_output_stream_operator()
    cls.add_binary_comparison_operator('==')
    ## ipv4-address.h (module 'network'): ns3::Ipv4Address::Ipv4Address(ns3::Ipv4Address const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::Ipv4Address const &', 'arg0')])
    ## ipv4-address.h (module 'network'): ns3::Ipv4Address::Ipv4Address() [constructor]
    cls.add_constructor([])
    ## ipv4-address.h (module 'network'): ns3::Ipv4Address::Ipv4Address(uint32_t address) [constructor]
    cls.add_constructor([param('uint32_t', 'address')])
    ## ipv4-address.h (module 'network'): ns3::Ipv4Address::Ipv4Address(char const * address) [constructor]
    cls.add_constructor([param('char const *', 'address')])
    ## ipv4-address.h (module 'network'): ns3::Ipv4Address ns3::Ipv4Address::CombineMask(ns3::Ipv4Mask const & mask) const [member function]
    cls.add_method('CombineMask', 
                   'ns3::Ipv4Address', 
                   [param('ns3::Ipv4Mask const &', 'mask')], 
                   is_const=True)
    ## ipv4-address.h (module 'network'): static ns3::Ipv4Address ns3::Ipv4Address::ConvertFrom(ns3::Address const & address) [member function]
    cls.add_method('ConvertFrom', 
                   'ns3::Ipv4Address', 
                   [param('ns3::Address const &', 'address')], 
                   is_static=True)
    ## ipv4-address.h (module 'network'): static ns3::Ipv4Address ns3::Ipv4Address::Deserialize(uint8_t const * buf) [member function]
    cls.add_method('Deserialize', 
                   'ns3::Ipv4Address', 
                   [param('uint8_t const *', 'buf')], 
                   is_static=True)
    ## ipv4-address.h (module 'network'): uint32_t ns3::Ipv4Address::Get() const [member function]
    cls.add_method('Get', 
                   'uint32_t', 
                   [], 
                   is_const=True)
    ## ipv4-address.h (module 'network'): static ns3::Ipv4Address ns3::Ipv4Address::GetAny() [member function]
    cls.add_method('GetAny', 
                   'ns3::Ipv4Address', 
                   [], 
                   is_static=True)
    ## ipv4-address.h (module 'network'): static ns3::Ipv4Address ns3::Ipv4Address::GetBroadcast() [member function]
    cls.add_method('GetBroadcast', 
                   'ns3::Ipv4Address', 
                   [], 
                   is_static=True)
    ## ipv4-address.h (module 'network'): static ns3::Ipv4Address ns3::Ipv4Address::GetLoopback() [member function]
    cls.add_method('GetLoopback', 
                   'ns3::Ipv4Address', 
                   [], 
                   is_static=True)
    ## ipv4-address.h (module 'network'): ns3::Ipv4Address ns3::Ipv4Address::GetSubnetDirectedBroadcast(ns3::Ipv4Mask const & mask) const [member function]
    cls.add_method('GetSubnetDirectedBroadcast', 
                   'ns3::Ipv4Address', 
                   [param('ns3::Ipv4Mask const &', 'mask')], 
                   is_const=True)
    ## ipv4-address.h (module 'network'): static ns3::Ipv4Address ns3::Ipv4Address::GetZero() [member function]
    cls.add_method('GetZero', 
                   'ns3::Ipv4Address', 
                   [], 
                   is_static=True)
    ## ipv4-address.h (module 'network'): bool ns3::Ipv4Address::IsBroadcast() const [member function]
    cls.add_method('IsBroadcast', 
                   'bool', 
                   [], 
                   is_const=True)
    ## ipv4-address.h (module 'network'): bool ns3::Ipv4Address::IsEqual(ns3::Ipv4Address const & other) const [member function]
    cls.add_method('IsEqual', 
                   'bool', 
                   [param('ns3::Ipv4Address const &', 'other')], 
                   is_const=True)
    ## ipv4-address.h (module 'network'): bool ns3::Ipv4Address::IsLocalMulticast() const [member function]
    cls.add_method('IsLocalMulticast', 
                   'bool', 
                   [], 
                   is_const=True)
    ## ipv4-address.h (module 'network'): static bool ns3::Ipv4Address::IsMatchingType(ns3::Address const & address) [member function]
    cls.add_method('IsMatchingType', 
                   'bool', 
                   [param('ns3::Address const &', 'address')], 
                   is_static=True)
    ## ipv4-address.h (module 'network'): bool ns3::Ipv4Address::IsMulticast() const [member function]
    cls.add_method('IsMulticast', 
                   'bool', 
                   [], 
                   is_const=True)
    ## ipv4-address.h (module 'network'): bool ns3::Ipv4Address::IsSubnetDirectedBroadcast(ns3::Ipv4Mask const & mask) const [member function]
    cls.add_method('IsSubnetDirectedBroadcast', 
                   'bool', 
                   [param('ns3::Ipv4Mask const &', 'mask')], 
                   is_const=True)
    ## ipv4-address.h (module 'network'): void ns3::Ipv4Address::Print(std::ostream & os) const [member function]
    cls.add_method('Print', 
                   'void', 
                   [param('std::ostream &', 'os')], 
                   is_const=True)
    ## ipv4-address.h (module 'network'): void ns3::Ipv4Address::Serialize(uint8_t * buf) const [member function]
    cls.add_method('Serialize', 
                   'void', 
                   [param('uint8_t *', 'buf')], 
                   is_const=True)
    ## ipv4-address.h (module 'network'): void ns3::Ipv4Address::Set(uint32_t address) [member function]
    cls.add_method('Set', 
                   'void', 
                   [param('uint32_t', 'address')])
    ## ipv4-address.h (module 'network'): void ns3::Ipv4Address::Set(char const * address) [member function]
    cls.add_method('Set', 
                   'void', 
                   [param('char const *', 'address')])
    return

def register_Ns3Ipv4EndPointDemux_methods(root_module, cls):
    ## ipv4-end-point-demux.h (module 'internet'): ns3::Ipv4EndPointDemux::Ipv4EndPointDemux(ns3::Ipv4EndPointDemux const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::Ipv4EndPointDemux const &', 'arg0')])
    ## ipv4-end-point-demux.h (module 'internet'): ns3::Ipv4EndPointDemux::Ipv4EndPointDemux() [constructor]
    cls.add_constructor([])
    ## ipv4-end-point-demux.h (module 'internet'): ns3::Ipv4EndPoint * ns3::Ipv4EndPointDemux::Allocate() [member function]
    cls.add_method('Allocate', 
                   'ns3::Ipv4EndPoint *', 
                   [])
    ## ipv4-end-point-demux.h (module 'internet'): ns3::Ipv4EndPoint * ns3::Ipv4EndPointDemux::Allocate(ns3::Ipv4Address address) [member function]
    cls.add_method('Allocate', 
                   'ns3::Ipv4EndPoint *', 
                   [param('ns3::Ipv4Address', 'address')])
    ## ipv4-end-point-demux.h (module 'internet'): ns3::Ipv4EndPoint * ns3::Ipv4EndPointDemux::Allocate(uint16_t port) [member function]
    cls.add_method('Allocate', 
                   'ns3::Ipv4EndPoint *', 
                   [param('uint16_t', 'port')])
    ## ipv4-end-point-demux.h (module 'internet'): ns3::Ipv4EndPoint * ns3::Ipv4EndPointDemux::Allocate(ns3::Ipv4Address address, uint16_t port) [member function]
    cls.add_method('Allocate', 
                   'ns3::Ipv4EndPoint *', 
                   [param('ns3::Ipv4Address', 'address'), param('uint16_t', 'port')])
    ## ipv4-end-point-demux.h (module 'internet'): ns3::Ipv4EndPoint * ns3::Ipv4EndPointDemux::Allocate(ns3::Ipv4Address localAddress, uint16_t localPort, ns3::Ipv4Address peerAddress, uint16_t peerPort) [member function]
    cls.add_method('Allocate', 
                   'ns3::Ipv4EndPoint *', 
                   [param('ns3::Ipv4Address', 'localAddress'), param('uint16_t', 'localPort'), param('ns3::Ipv4Address', 'peerAddress'), param('uint16_t', 'peerPort')])
    ## ipv4-end-point-demux.h (module 'internet'): void ns3::Ipv4EndPointDemux::DeAllocate(ns3::Ipv4EndPoint * endPoint) [member function]
    cls.add_method('DeAllocate', 
                   'void', 
                   [param('ns3::Ipv4EndPoint *', 'endPoint')])
    ## ipv4-end-point-demux.h (module 'internet'): std::list<ns3::Ipv4EndPoint*, std::allocator<ns3::Ipv4EndPoint*> > ns3::Ipv4EndPointDemux::GetAllEndPoints() [member function]
    cls.add_method('GetAllEndPoints', 
                   'std::list< ns3::Ipv4EndPoint * >', 
                   [])
    ## ipv4-end-point-demux.h (module 'internet'): std::list<ns3::Ipv4EndPoint*, std::allocator<ns3::Ipv4EndPoint*> > ns3::Ipv4EndPointDemux::Lookup(ns3::Ipv4Address daddr, uint16_t dport, ns3::Ipv4Address saddr, uint16_t sport, ns3::Ptr<ns3::Ipv4Interface> incomingInterface) [member function]
    cls.add_method('Lookup', 
                   'std::list< ns3::Ipv4EndPoint * >', 
                   [param('ns3::Ipv4Address', 'daddr'), param('uint16_t', 'dport'), param('ns3::Ipv4Address', 'saddr'), param('uint16_t', 'sport'), param('ns3::Ptr< ns3::Ipv4Interface >', 'incomingInterface')])
    ## ipv4-end-point-demux.h (module 'internet'): bool ns3::Ipv4EndPointDemux::LookupLocal(ns3::Ipv4Address addr, uint16_t port) [member function]
    cls.add_method('LookupLocal', 
                   'bool', 
                   [param('ns3::Ipv4Address', 'addr'), param('uint16_t', 'port')])
    ## ipv4-end-point-demux.h (module 'internet'): bool ns3::Ipv4EndPointDemux::LookupPortLocal(uint16_t port) [member function]
    cls.add_method('LookupPortLocal', 
                   'bool', 
                   [param('uint16_t', 'port')])
    ## ipv4-end-point-demux.h (module 'internet'): ns3::Ipv4EndPoint * ns3::Ipv4EndPointDemux::SimpleLookup(ns3::Ipv4Address daddr, uint16_t dport, ns3::Ipv4Address saddr, uint16_t sport) [member function]
    cls.add_method('SimpleLookup', 
                   'ns3::Ipv4EndPoint *', 
                   [param('ns3::Ipv4Address', 'daddr'), param('uint16_t', 'dport'), param('ns3::Ipv4Address', 'saddr'), param('uint16_t', 'sport')])
    return

def register_Ns3Ipv4InterfaceAddress_methods(root_module, cls):
    cls.add_binary_comparison_operator('!=')
    cls.add_output_stream_operator()
    cls.add_binary_comparison_operator('==')
    ## ipv4-interface-address.h (module 'internet'): ns3::Ipv4InterfaceAddress::Ipv4InterfaceAddress() [constructor]
    cls.add_constructor([])
    ## ipv4-interface-address.h (module 'internet'): ns3::Ipv4InterfaceAddress::Ipv4InterfaceAddress(ns3::Ipv4Address local, ns3::Ipv4Mask mask) [constructor]
    cls.add_constructor([param('ns3::Ipv4Address', 'local'), param('ns3::Ipv4Mask', 'mask')])
    ## ipv4-interface-address.h (module 'internet'): ns3::Ipv4InterfaceAddress::Ipv4InterfaceAddress(ns3::Ipv4InterfaceAddress const & o) [copy constructor]
    cls.add_constructor([param('ns3::Ipv4InterfaceAddress const &', 'o')])
    ## ipv4-interface-address.h (module 'internet'): ns3::Ipv4Address ns3::Ipv4InterfaceAddress::GetBroadcast() const [member function]
    cls.add_method('GetBroadcast', 
                   'ns3::Ipv4Address', 
                   [], 
                   is_const=True)
    ## ipv4-interface-address.h (module 'internet'): ns3::Ipv4Address ns3::Ipv4InterfaceAddress::GetLocal() const [member function]
    cls.add_method('GetLocal', 
                   'ns3::Ipv4Address', 
                   [], 
                   is_const=True)
    ## ipv4-interface-address.h (module 'internet'): ns3::Ipv4Mask ns3::Ipv4InterfaceAddress::GetMask() const [member function]
    cls.add_method('GetMask', 
                   'ns3::Ipv4Mask', 
                   [], 
                   is_const=True)
    ## ipv4-interface-address.h (module 'internet'): ns3::Ipv4InterfaceAddress::InterfaceAddressScope_e ns3::Ipv4InterfaceAddress::GetScope() const [member function]
    cls.add_method('GetScope', 
                   'ns3::Ipv4InterfaceAddress::InterfaceAddressScope_e', 
                   [], 
                   is_const=True)
    ## ipv4-interface-address.h (module 'internet'): bool ns3::Ipv4InterfaceAddress::IsSecondary() const [member function]
    cls.add_method('IsSecondary', 
                   'bool', 
                   [], 
                   is_const=True)
    ## ipv4-interface-address.h (module 'internet'): void ns3::Ipv4InterfaceAddress::SetBroadcast(ns3::Ipv4Address broadcast) [member function]
    cls.add_method('SetBroadcast', 
                   'void', 
                   [param('ns3::Ipv4Address', 'broadcast')])
    ## ipv4-interface-address.h (module 'internet'): void ns3::Ipv4InterfaceAddress::SetLocal(ns3::Ipv4Address local) [member function]
    cls.add_method('SetLocal', 
                   'void', 
                   [param('ns3::Ipv4Address', 'local')])
    ## ipv4-interface-address.h (module 'internet'): void ns3::Ipv4InterfaceAddress::SetMask(ns3::Ipv4Mask mask) [member function]
    cls.add_method('SetMask', 
                   'void', 
                   [param('ns3::Ipv4Mask', 'mask')])
    ## ipv4-interface-address.h (module 'internet'): void ns3::Ipv4InterfaceAddress::SetPrimary() [member function]
    cls.add_method('SetPrimary', 
                   'void', 
                   [])
    ## ipv4-interface-address.h (module 'internet'): void ns3::Ipv4InterfaceAddress::SetScope(ns3::Ipv4InterfaceAddress::InterfaceAddressScope_e scope) [member function]
    cls.add_method('SetScope', 
                   'void', 
                   [param('ns3::Ipv4InterfaceAddress::InterfaceAddressScope_e', 'scope')])
    ## ipv4-interface-address.h (module 'internet'): void ns3::Ipv4InterfaceAddress::SetSecondary() [member function]
    cls.add_method('SetSecondary', 
                   'void', 
                   [])
    return

def register_Ns3Ipv4Mask_methods(root_module, cls):
    cls.add_binary_comparison_operator('!=')
    cls.add_output_stream_operator()
    cls.add_binary_comparison_operator('==')
    ## ipv4-address.h (module 'network'): ns3::Ipv4Mask::Ipv4Mask(ns3::Ipv4Mask const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::Ipv4Mask const &', 'arg0')])
    ## ipv4-address.h (module 'network'): ns3::Ipv4Mask::Ipv4Mask() [constructor]
    cls.add_constructor([])
    ## ipv4-address.h (module 'network'): ns3::Ipv4Mask::Ipv4Mask(uint32_t mask) [constructor]
    cls.add_constructor([param('uint32_t', 'mask')])
    ## ipv4-address.h (module 'network'): ns3::Ipv4Mask::Ipv4Mask(char const * mask) [constructor]
    cls.add_constructor([param('char const *', 'mask')])
    ## ipv4-address.h (module 'network'): uint32_t ns3::Ipv4Mask::Get() const [member function]
    cls.add_method('Get', 
                   'uint32_t', 
                   [], 
                   is_const=True)
    ## ipv4-address.h (module 'network'): uint32_t ns3::Ipv4Mask::GetInverse() const [member function]
    cls.add_method('GetInverse', 
                   'uint32_t', 
                   [], 
                   is_const=True)
    ## ipv4-address.h (module 'network'): static ns3::Ipv4Mask ns3::Ipv4Mask::GetLoopback() [member function]
    cls.add_method('GetLoopback', 
                   'ns3::Ipv4Mask', 
                   [], 
                   is_static=True)
    ## ipv4-address.h (module 'network'): static ns3::Ipv4Mask ns3::Ipv4Mask::GetOnes() [member function]
    cls.add_method('GetOnes', 
                   'ns3::Ipv4Mask', 
                   [], 
                   is_static=True)
    ## ipv4-address.h (module 'network'): uint16_t ns3::Ipv4Mask::GetPrefixLength() const [member function]
    cls.add_method('GetPrefixLength', 
                   'uint16_t', 
                   [], 
                   is_const=True)
    ## ipv4-address.h (module 'network'): static ns3::Ipv4Mask ns3::Ipv4Mask::GetZero() [member function]
    cls.add_method('GetZero', 
                   'ns3::Ipv4Mask', 
                   [], 
                   is_static=True)
    ## ipv4-address.h (module 'network'): bool ns3::Ipv4Mask::IsEqual(ns3::Ipv4Mask other) const [member function]
    cls.add_method('IsEqual', 
                   'bool', 
                   [param('ns3::Ipv4Mask', 'other')], 
                   is_const=True)
    ## ipv4-address.h (module 'network'): bool ns3::Ipv4Mask::IsMatch(ns3::Ipv4Address a, ns3::Ipv4Address b) const [member function]
    cls.add_method('IsMatch', 
                   'bool', 
                   [param('ns3::Ipv4Address', 'a'), param('ns3::Ipv4Address', 'b')], 
                   is_const=True)
    ## ipv4-address.h (module 'network'): void ns3::Ipv4Mask::Print(std::ostream & os) const [member function]
    cls.add_method('Print', 
                   'void', 
                   [param('std::ostream &', 'os')], 
                   is_const=True)
    ## ipv4-address.h (module 'network'): void ns3::Ipv4Mask::Set(uint32_t mask) [member function]
    cls.add_method('Set', 
                   'void', 
                   [param('uint32_t', 'mask')])
    return

def register_Ns3Ipv6Address_methods(root_module, cls):
    cls.add_binary_comparison_operator('!=')
    cls.add_binary_comparison_operator('<')
    cls.add_output_stream_operator()
    cls.add_binary_comparison_operator('==')
    ## ipv6-address.h (module 'network'): ns3::Ipv6Address::Ipv6Address() [constructor]
    cls.add_constructor([])
    ## ipv6-address.h (module 'network'): ns3::Ipv6Address::Ipv6Address(char const * address) [constructor]
    cls.add_constructor([param('char const *', 'address')])
    ## ipv6-address.h (module 'network'): ns3::Ipv6Address::Ipv6Address(uint8_t * address) [constructor]
    cls.add_constructor([param('uint8_t *', 'address')])
    ## ipv6-address.h (module 'network'): ns3::Ipv6Address::Ipv6Address(ns3::Ipv6Address const & addr) [copy constructor]
    cls.add_constructor([param('ns3::Ipv6Address const &', 'addr')])
    ## ipv6-address.h (module 'network'): ns3::Ipv6Address::Ipv6Address(ns3::Ipv6Address const * addr) [constructor]
    cls.add_constructor([param('ns3::Ipv6Address const *', 'addr')])
    ## ipv6-address.h (module 'network'): ns3::Ipv6Address ns3::Ipv6Address::CombinePrefix(ns3::Ipv6Prefix const & prefix) [member function]
    cls.add_method('CombinePrefix', 
                   'ns3::Ipv6Address', 
                   [param('ns3::Ipv6Prefix const &', 'prefix')])
    ## ipv6-address.h (module 'network'): static ns3::Ipv6Address ns3::Ipv6Address::ConvertFrom(ns3::Address const & address) [member function]
    cls.add_method('ConvertFrom', 
                   'ns3::Ipv6Address', 
                   [param('ns3::Address const &', 'address')], 
                   is_static=True)
    ## ipv6-address.h (module 'network'): static ns3::Ipv6Address ns3::Ipv6Address::Deserialize(uint8_t const * buf) [member function]
    cls.add_method('Deserialize', 
                   'ns3::Ipv6Address', 
                   [param('uint8_t const *', 'buf')], 
                   is_static=True)
    ## ipv6-address.h (module 'network'): static ns3::Ipv6Address ns3::Ipv6Address::GetAllHostsMulticast() [member function]
    cls.add_method('GetAllHostsMulticast', 
                   'ns3::Ipv6Address', 
                   [], 
                   is_static=True)
    ## ipv6-address.h (module 'network'): static ns3::Ipv6Address ns3::Ipv6Address::GetAllNodesMulticast() [member function]
    cls.add_method('GetAllNodesMulticast', 
                   'ns3::Ipv6Address', 
                   [], 
                   is_static=True)
    ## ipv6-address.h (module 'network'): static ns3::Ipv6Address ns3::Ipv6Address::GetAllRoutersMulticast() [member function]
    cls.add_method('GetAllRoutersMulticast', 
                   'ns3::Ipv6Address', 
                   [], 
                   is_static=True)
    ## ipv6-address.h (module 'network'): static ns3::Ipv6Address ns3::Ipv6Address::GetAny() [member function]
    cls.add_method('GetAny', 
                   'ns3::Ipv6Address', 
                   [], 
                   is_static=True)
    ## ipv6-address.h (module 'network'): void ns3::Ipv6Address::GetBytes(uint8_t * buf) const [member function]
    cls.add_method('GetBytes', 
                   'void', 
                   [param('uint8_t *', 'buf')], 
                   is_const=True)
    ## ipv6-address.h (module 'network'): static ns3::Ipv6Address ns3::Ipv6Address::GetLoopback() [member function]
    cls.add_method('GetLoopback', 
                   'ns3::Ipv6Address', 
                   [], 
                   is_static=True)
    ## ipv6-address.h (module 'network'): static ns3::Ipv6Address ns3::Ipv6Address::GetOnes() [member function]
    cls.add_method('GetOnes', 
                   'ns3::Ipv6Address', 
                   [], 
                   is_static=True)
    ## ipv6-address.h (module 'network'): static ns3::Ipv6Address ns3::Ipv6Address::GetZero() [member function]
    cls.add_method('GetZero', 
                   'ns3::Ipv6Address', 
                   [], 
                   is_static=True)
    ## ipv6-address.h (module 'network'): bool ns3::Ipv6Address::IsAllHostsMulticast() const [member function]
    cls.add_method('IsAllHostsMulticast', 
                   'bool', 
                   [], 
                   is_const=True)
    ## ipv6-address.h (module 'network'): bool ns3::Ipv6Address::IsAllNodesMulticast() const [member function]
    cls.add_method('IsAllNodesMulticast', 
                   'bool', 
                   [], 
                   is_const=True)
    ## ipv6-address.h (module 'network'): bool ns3::Ipv6Address::IsAllRoutersMulticast() const [member function]
    cls.add_method('IsAllRoutersMulticast', 
                   'bool', 
                   [], 
                   is_const=True)
    ## ipv6-address.h (module 'network'): bool ns3::Ipv6Address::IsAny() const [member function]
    cls.add_method('IsAny', 
                   'bool', 
                   [], 
                   is_const=True)
    ## ipv6-address.h (module 'network'): bool ns3::Ipv6Address::IsEqual(ns3::Ipv6Address const & other) const [member function]
    cls.add_method('IsEqual', 
                   'bool', 
                   [param('ns3::Ipv6Address const &', 'other')], 
                   is_const=True)
    ## ipv6-address.h (module 'network'): bool ns3::Ipv6Address::IsLinkLocal() const [member function]
    cls.add_method('IsLinkLocal', 
                   'bool', 
                   [], 
                   is_const=True)
    ## ipv6-address.h (module 'network'): bool ns3::Ipv6Address::IsLocalhost() const [member function]
    cls.add_method('IsLocalhost', 
                   'bool', 
                   [], 
                   is_const=True)
    ## ipv6-address.h (module 'network'): static bool ns3::Ipv6Address::IsMatchingType(ns3::Address const & address) [member function]
    cls.add_method('IsMatchingType', 
                   'bool', 
                   [param('ns3::Address const &', 'address')], 
                   is_static=True)
    ## ipv6-address.h (module 'network'): bool ns3::Ipv6Address::IsMulticast() const [member function]
    cls.add_method('IsMulticast', 
                   'bool', 
                   [], 
                   is_const=True)
    ## ipv6-address.h (module 'network'): bool ns3::Ipv6Address::IsSolicitedMulticast() const [member function]
    cls.add_method('IsSolicitedMulticast', 
                   'bool', 
                   [], 
                   is_const=True)
    ## ipv6-address.h (module 'network'): static ns3::Ipv6Address ns3::Ipv6Address::MakeAutoconfiguredAddress(ns3::Mac48Address addr, ns3::Ipv6Address prefix) [member function]
    cls.add_method('MakeAutoconfiguredAddress', 
                   'ns3::Ipv6Address', 
                   [param('ns3::Mac48Address', 'addr'), param('ns3::Ipv6Address', 'prefix')], 
                   is_static=True)
    ## ipv6-address.h (module 'network'): static ns3::Ipv6Address ns3::Ipv6Address::MakeAutoconfiguredLinkLocalAddress(ns3::Mac48Address mac) [member function]
    cls.add_method('MakeAutoconfiguredLinkLocalAddress', 
                   'ns3::Ipv6Address', 
                   [param('ns3::Mac48Address', 'mac')], 
                   is_static=True)
    ## ipv6-address.h (module 'network'): static ns3::Ipv6Address ns3::Ipv6Address::MakeSolicitedAddress(ns3::Ipv6Address addr) [member function]
    cls.add_method('MakeSolicitedAddress', 
                   'ns3::Ipv6Address', 
                   [param('ns3::Ipv6Address', 'addr')], 
                   is_static=True)
    ## ipv6-address.h (module 'network'): void ns3::Ipv6Address::Print(std::ostream & os) const [member function]
    cls.add_method('Print', 
                   'void', 
                   [param('std::ostream &', 'os')], 
                   is_const=True)
    ## ipv6-address.h (module 'network'): void ns3::Ipv6Address::Serialize(uint8_t * buf) const [member function]
    cls.add_method('Serialize', 
                   'void', 
                   [param('uint8_t *', 'buf')], 
                   is_const=True)
    ## ipv6-address.h (module 'network'): void ns3::Ipv6Address::Set(char const * address) [member function]
    cls.add_method('Set', 
                   'void', 
                   [param('char const *', 'address')])
    ## ipv6-address.h (module 'network'): void ns3::Ipv6Address::Set(uint8_t * address) [member function]
    cls.add_method('Set', 
                   'void', 
                   [param('uint8_t *', 'address')])
    return

def register_Ns3Ipv6InterfaceAddress_methods(root_module, cls):
    cls.add_binary_comparison_operator('!=')
    cls.add_output_stream_operator()
    cls.add_binary_comparison_operator('==')
    ## ipv6-interface-address.h (module 'internet'): ns3::Ipv6InterfaceAddress::Ipv6InterfaceAddress() [constructor]
    cls.add_constructor([])
    ## ipv6-interface-address.h (module 'internet'): ns3::Ipv6InterfaceAddress::Ipv6InterfaceAddress(ns3::Ipv6Address address) [constructor]
    cls.add_constructor([param('ns3::Ipv6Address', 'address')])
    ## ipv6-interface-address.h (module 'internet'): ns3::Ipv6InterfaceAddress::Ipv6InterfaceAddress(ns3::Ipv6Address address, ns3::Ipv6Prefix prefix) [constructor]
    cls.add_constructor([param('ns3::Ipv6Address', 'address'), param('ns3::Ipv6Prefix', 'prefix')])
    ## ipv6-interface-address.h (module 'internet'): ns3::Ipv6InterfaceAddress::Ipv6InterfaceAddress(ns3::Ipv6InterfaceAddress const & o) [copy constructor]
    cls.add_constructor([param('ns3::Ipv6InterfaceAddress const &', 'o')])
    ## ipv6-interface-address.h (module 'internet'): ns3::Ipv6Address ns3::Ipv6InterfaceAddress::GetAddress() const [member function]
    cls.add_method('GetAddress', 
                   'ns3::Ipv6Address', 
                   [], 
                   is_const=True)
    ## ipv6-interface-address.h (module 'internet'): uint32_t ns3::Ipv6InterfaceAddress::GetNsDadUid() const [member function]
    cls.add_method('GetNsDadUid', 
                   'uint32_t', 
                   [], 
                   is_const=True)
    ## ipv6-interface-address.h (module 'internet'): ns3::Ipv6Prefix ns3::Ipv6InterfaceAddress::GetPrefix() const [member function]
    cls.add_method('GetPrefix', 
                   'ns3::Ipv6Prefix', 
                   [], 
                   is_const=True)
    ## ipv6-interface-address.h (module 'internet'): ns3::Ipv6InterfaceAddress::Scope_e ns3::Ipv6InterfaceAddress::GetScope() const [member function]
    cls.add_method('GetScope', 
                   'ns3::Ipv6InterfaceAddress::Scope_e', 
                   [], 
                   is_const=True)
    ## ipv6-interface-address.h (module 'internet'): ns3::Ipv6InterfaceAddress::State_e ns3::Ipv6InterfaceAddress::GetState() const [member function]
    cls.add_method('GetState', 
                   'ns3::Ipv6InterfaceAddress::State_e', 
                   [], 
                   is_const=True)
    ## ipv6-interface-address.h (module 'internet'): void ns3::Ipv6InterfaceAddress::SetAddress(ns3::Ipv6Address address) [member function]
    cls.add_method('SetAddress', 
                   'void', 
                   [param('ns3::Ipv6Address', 'address')])
    ## ipv6-interface-address.h (module 'internet'): void ns3::Ipv6InterfaceAddress::SetNsDadUid(uint32_t uid) [member function]
    cls.add_method('SetNsDadUid', 
                   'void', 
                   [param('uint32_t', 'uid')])
    ## ipv6-interface-address.h (module 'internet'): void ns3::Ipv6InterfaceAddress::SetScope(ns3::Ipv6InterfaceAddress::Scope_e scope) [member function]
    cls.add_method('SetScope', 
                   'void', 
                   [param('ns3::Ipv6InterfaceAddress::Scope_e', 'scope')])
    ## ipv6-interface-address.h (module 'internet'): void ns3::Ipv6InterfaceAddress::SetState(ns3::Ipv6InterfaceAddress::State_e state) [member function]
    cls.add_method('SetState', 
                   'void', 
                   [param('ns3::Ipv6InterfaceAddress::State_e', 'state')])
    return

def register_Ns3Ipv6Prefix_methods(root_module, cls):
    cls.add_binary_comparison_operator('!=')
    cls.add_output_stream_operator()
    cls.add_binary_comparison_operator('==')
    ## ipv6-address.h (module 'network'): ns3::Ipv6Prefix::Ipv6Prefix() [constructor]
    cls.add_constructor([])
    ## ipv6-address.h (module 'network'): ns3::Ipv6Prefix::Ipv6Prefix(uint8_t * prefix) [constructor]
    cls.add_constructor([param('uint8_t *', 'prefix')])
    ## ipv6-address.h (module 'network'): ns3::Ipv6Prefix::Ipv6Prefix(char const * prefix) [constructor]
    cls.add_constructor([param('char const *', 'prefix')])
    ## ipv6-address.h (module 'network'): ns3::Ipv6Prefix::Ipv6Prefix(uint8_t prefix) [constructor]
    cls.add_constructor([param('uint8_t', 'prefix')])
    ## ipv6-address.h (module 'network'): ns3::Ipv6Prefix::Ipv6Prefix(ns3::Ipv6Prefix const & prefix) [copy constructor]
    cls.add_constructor([param('ns3::Ipv6Prefix const &', 'prefix')])
    ## ipv6-address.h (module 'network'): ns3::Ipv6Prefix::Ipv6Prefix(ns3::Ipv6Prefix const * prefix) [constructor]
    cls.add_constructor([param('ns3::Ipv6Prefix const *', 'prefix')])
    ## ipv6-address.h (module 'network'): void ns3::Ipv6Prefix::GetBytes(uint8_t * buf) const [member function]
    cls.add_method('GetBytes', 
                   'void', 
                   [param('uint8_t *', 'buf')], 
                   is_const=True)
    ## ipv6-address.h (module 'network'): static ns3::Ipv6Prefix ns3::Ipv6Prefix::GetLoopback() [member function]
    cls.add_method('GetLoopback', 
                   'ns3::Ipv6Prefix', 
                   [], 
                   is_static=True)
    ## ipv6-address.h (module 'network'): static ns3::Ipv6Prefix ns3::Ipv6Prefix::GetOnes() [member function]
    cls.add_method('GetOnes', 
                   'ns3::Ipv6Prefix', 
                   [], 
                   is_static=True)
    ## ipv6-address.h (module 'network'): uint8_t ns3::Ipv6Prefix::GetPrefixLength() const [member function]
    cls.add_method('GetPrefixLength', 
                   'uint8_t', 
                   [], 
                   is_const=True)
    ## ipv6-address.h (module 'network'): static ns3::Ipv6Prefix ns3::Ipv6Prefix::GetZero() [member function]
    cls.add_method('GetZero', 
                   'ns3::Ipv6Prefix', 
                   [], 
                   is_static=True)
    ## ipv6-address.h (module 'network'): bool ns3::Ipv6Prefix::IsEqual(ns3::Ipv6Prefix const & other) const [member function]
    cls.add_method('IsEqual', 
                   'bool', 
                   [param('ns3::Ipv6Prefix const &', 'other')], 
                   is_const=True)
    ## ipv6-address.h (module 'network'): bool ns3::Ipv6Prefix::IsMatch(ns3::Ipv6Address a, ns3::Ipv6Address b) const [member function]
    cls.add_method('IsMatch', 
                   'bool', 
                   [param('ns3::Ipv6Address', 'a'), param('ns3::Ipv6Address', 'b')], 
                   is_const=True)
    ## ipv6-address.h (module 'network'): void ns3::Ipv6Prefix::Print(std::ostream & os) const [member function]
    cls.add_method('Print', 
                   'void', 
                   [param('std::ostream &', 'os')], 
                   is_const=True)
    return

def register_Ns3Mac48Address_methods(root_module, cls):
    cls.add_binary_comparison_operator('!=')
    cls.add_binary_comparison_operator('<')
    cls.add_output_stream_operator()
    cls.add_binary_comparison_operator('==')
    ## mac48-address.h (module 'network'): ns3::Mac48Address::Mac48Address(ns3::Mac48Address const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::Mac48Address const &', 'arg0')])
    ## mac48-address.h (module 'network'): ns3::Mac48Address::Mac48Address() [constructor]
    cls.add_constructor([])
    ## mac48-address.h (module 'network'): ns3::Mac48Address::Mac48Address(char const * str) [constructor]
    cls.add_constructor([param('char const *', 'str')])
    ## mac48-address.h (module 'network'): static ns3::Mac48Address ns3::Mac48Address::Allocate() [member function]
    cls.add_method('Allocate', 
                   'ns3::Mac48Address', 
                   [], 
                   is_static=True)
    ## mac48-address.h (module 'network'): static ns3::Mac48Address ns3::Mac48Address::ConvertFrom(ns3::Address const & address) [member function]
    cls.add_method('ConvertFrom', 
                   'ns3::Mac48Address', 
                   [param('ns3::Address const &', 'address')], 
                   is_static=True)
    ## mac48-address.h (module 'network'): void ns3::Mac48Address::CopyFrom(uint8_t const * buffer) [member function]
    cls.add_method('CopyFrom', 
                   'void', 
                   [param('uint8_t const *', 'buffer')])
    ## mac48-address.h (module 'network'): void ns3::Mac48Address::CopyTo(uint8_t * buffer) const [member function]
    cls.add_method('CopyTo', 
                   'void', 
                   [param('uint8_t *', 'buffer')], 
                   is_const=True)
    ## mac48-address.h (module 'network'): static ns3::Mac48Address ns3::Mac48Address::GetBroadcast() [member function]
    cls.add_method('GetBroadcast', 
                   'ns3::Mac48Address', 
                   [], 
                   is_static=True)
    ## mac48-address.h (module 'network'): static ns3::Mac48Address ns3::Mac48Address::GetMulticast(ns3::Ipv4Address address) [member function]
    cls.add_method('GetMulticast', 
                   'ns3::Mac48Address', 
                   [param('ns3::Ipv4Address', 'address')], 
                   is_static=True)
    ## mac48-address.h (module 'network'): static ns3::Mac48Address ns3::Mac48Address::GetMulticast(ns3::Ipv6Address address) [member function]
    cls.add_method('GetMulticast', 
                   'ns3::Mac48Address', 
                   [param('ns3::Ipv6Address', 'address')], 
                   is_static=True)
    ## mac48-address.h (module 'network'): static ns3::Mac48Address ns3::Mac48Address::GetMulticast6Prefix() [member function]
    cls.add_method('GetMulticast6Prefix', 
                   'ns3::Mac48Address', 
                   [], 
                   is_static=True)
    ## mac48-address.h (module 'network'): static ns3::Mac48Address ns3::Mac48Address::GetMulticastPrefix() [member function]
    cls.add_method('GetMulticastPrefix', 
                   'ns3::Mac48Address', 
                   [], 
                   is_static=True)
    ## mac48-address.h (module 'network'): bool ns3::Mac48Address::IsBroadcast() const [member function]
    cls.add_method('IsBroadcast', 
                   'bool', 
                   [], 
                   is_const=True)
    ## mac48-address.h (module 'network'): bool ns3::Mac48Address::IsGroup() const [member function]
    cls.add_method('IsGroup', 
                   'bool', 
                   [], 
                   is_const=True)
    ## mac48-address.h (module 'network'): static bool ns3::Mac48Address::IsMatchingType(ns3::Address const & address) [member function]
    cls.add_method('IsMatchingType', 
                   'bool', 
                   [param('ns3::Address const &', 'address')], 
                   is_static=True)
    return

def register_Ns3MpInternetStackHelper_methods(root_module, cls):
    ## mp-internet-stack-helper.h (module 'mptcp'): ns3::MpInternetStackHelper::MpInternetStackHelper(ns3::MpInternetStackHelper const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::MpInternetStackHelper const &', 'arg0')])
    ## mp-internet-stack-helper.h (module 'mptcp'): ns3::MpInternetStackHelper::MpInternetStackHelper() [constructor]
    cls.add_constructor([])
    ## mp-internet-stack-helper.h (module 'mptcp'): void ns3::MpInternetStackHelper::CreateAndAggregateObjectFromTypeId(ns3::Ptr<ns3::Node> node, std::string const typeId) [member function]
    cls.add_method('CreateAndAggregateObjectFromTypeId', 
                   'void', 
                   [param('ns3::Ptr< ns3::Node >', 'node'), param('std::string const', 'typeId')])
    ## mp-internet-stack-helper.h (module 'mptcp'): void ns3::MpInternetStackHelper::Install(ns3::NodeContainer nodes) [member function]
    cls.add_method('Install', 
                   'void', 
                   [param('ns3::NodeContainer', 'nodes')])
    return

def register_Ns3MpTcpAddressInfo_methods(root_module, cls):
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpAddressInfo::MpTcpAddressInfo(ns3::MpTcpAddressInfo const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::MpTcpAddressInfo const &', 'arg0')])
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpAddressInfo::MpTcpAddressInfo() [constructor]
    cls.add_constructor([])
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpAddressInfo::addrID [variable]
    cls.add_instance_attribute('addrID', 'uint8_t', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpAddressInfo::ipv4Addr [variable]
    cls.add_instance_attribute('ipv4Addr', 'ns3::Ipv4Address', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpAddressInfo::mask [variable]
    cls.add_instance_attribute('mask', 'ns3::Ipv4Mask', is_const=False)
    return

def register_Ns3NetDeviceContainer_methods(root_module, cls):
    ## net-device-container.h (module 'network'): ns3::NetDeviceContainer::NetDeviceContainer(ns3::NetDeviceContainer const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::NetDeviceContainer const &', 'arg0')])
    ## net-device-container.h (module 'network'): ns3::NetDeviceContainer::NetDeviceContainer() [constructor]
    cls.add_constructor([])
    ## net-device-container.h (module 'network'): ns3::NetDeviceContainer::NetDeviceContainer(ns3::Ptr<ns3::NetDevice> dev) [constructor]
    cls.add_constructor([param('ns3::Ptr< ns3::NetDevice >', 'dev')])
    ## net-device-container.h (module 'network'): ns3::NetDeviceContainer::NetDeviceContainer(std::string devName) [constructor]
    cls.add_constructor([param('std::string', 'devName')])
    ## net-device-container.h (module 'network'): ns3::NetDeviceContainer::NetDeviceContainer(ns3::NetDeviceContainer const & a, ns3::NetDeviceContainer const & b) [constructor]
    cls.add_constructor([param('ns3::NetDeviceContainer const &', 'a'), param('ns3::NetDeviceContainer const &', 'b')])
    ## net-device-container.h (module 'network'): void ns3::NetDeviceContainer::Add(ns3::NetDeviceContainer other) [member function]
    cls.add_method('Add', 
                   'void', 
                   [param('ns3::NetDeviceContainer', 'other')])
    ## net-device-container.h (module 'network'): void ns3::NetDeviceContainer::Add(ns3::Ptr<ns3::NetDevice> device) [member function]
    cls.add_method('Add', 
                   'void', 
                   [param('ns3::Ptr< ns3::NetDevice >', 'device')])
    ## net-device-container.h (module 'network'): void ns3::NetDeviceContainer::Add(std::string deviceName) [member function]
    cls.add_method('Add', 
                   'void', 
                   [param('std::string', 'deviceName')])
    ## net-device-container.h (module 'network'): __gnu_cxx::__normal_iterator<const ns3::Ptr<ns3::NetDevice>*,std::vector<ns3::Ptr<ns3::NetDevice>, std::allocator<ns3::Ptr<ns3::NetDevice> > > > ns3::NetDeviceContainer::Begin() const [member function]
    cls.add_method('Begin', 
                   '__gnu_cxx::__normal_iterator< ns3::Ptr< ns3::NetDevice > const, std::vector< ns3::Ptr< ns3::NetDevice > > >', 
                   [], 
                   is_const=True)
    ## net-device-container.h (module 'network'): __gnu_cxx::__normal_iterator<const ns3::Ptr<ns3::NetDevice>*,std::vector<ns3::Ptr<ns3::NetDevice>, std::allocator<ns3::Ptr<ns3::NetDevice> > > > ns3::NetDeviceContainer::End() const [member function]
    cls.add_method('End', 
                   '__gnu_cxx::__normal_iterator< ns3::Ptr< ns3::NetDevice > const, std::vector< ns3::Ptr< ns3::NetDevice > > >', 
                   [], 
                   is_const=True)
    ## net-device-container.h (module 'network'): ns3::Ptr<ns3::NetDevice> ns3::NetDeviceContainer::Get(uint32_t i) const [member function]
    cls.add_method('Get', 
                   'ns3::Ptr< ns3::NetDevice >', 
                   [param('uint32_t', 'i')], 
                   is_const=True)
    ## net-device-container.h (module 'network'): uint32_t ns3::NetDeviceContainer::GetN() const [member function]
    cls.add_method('GetN', 
                   'uint32_t', 
                   [], 
                   is_const=True)
    return

def register_Ns3NodeContainer_methods(root_module, cls):
    ## node-container.h (module 'network'): ns3::NodeContainer::NodeContainer(ns3::NodeContainer const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::NodeContainer const &', 'arg0')])
    ## node-container.h (module 'network'): ns3::NodeContainer::NodeContainer() [constructor]
    cls.add_constructor([])
    ## node-container.h (module 'network'): ns3::NodeContainer::NodeContainer(ns3::Ptr<ns3::Node> node) [constructor]
    cls.add_constructor([param('ns3::Ptr< ns3::Node >', 'node')])
    ## node-container.h (module 'network'): ns3::NodeContainer::NodeContainer(std::string nodeName) [constructor]
    cls.add_constructor([param('std::string', 'nodeName')])
    ## node-container.h (module 'network'): ns3::NodeContainer::NodeContainer(ns3::NodeContainer const & a, ns3::NodeContainer const & b) [constructor]
    cls.add_constructor([param('ns3::NodeContainer const &', 'a'), param('ns3::NodeContainer const &', 'b')])
    ## node-container.h (module 'network'): ns3::NodeContainer::NodeContainer(ns3::NodeContainer const & a, ns3::NodeContainer const & b, ns3::NodeContainer const & c) [constructor]
    cls.add_constructor([param('ns3::NodeContainer const &', 'a'), param('ns3::NodeContainer const &', 'b'), param('ns3::NodeContainer const &', 'c')])
    ## node-container.h (module 'network'): ns3::NodeContainer::NodeContainer(ns3::NodeContainer const & a, ns3::NodeContainer const & b, ns3::NodeContainer const & c, ns3::NodeContainer const & d) [constructor]
    cls.add_constructor([param('ns3::NodeContainer const &', 'a'), param('ns3::NodeContainer const &', 'b'), param('ns3::NodeContainer const &', 'c'), param('ns3::NodeContainer const &', 'd')])
    ## node-container.h (module 'network'): ns3::NodeContainer::NodeContainer(ns3::NodeContainer const & a, ns3::NodeContainer const & b, ns3::NodeContainer const & c, ns3::NodeContainer const & d, ns3::NodeContainer const & e) [constructor]
    cls.add_constructor([param('ns3::NodeContainer const &', 'a'), param('ns3::NodeContainer const &', 'b'), param('ns3::NodeContainer const &', 'c'), param('ns3::NodeContainer const &', 'd'), param('ns3::NodeContainer const &', 'e')])
    ## node-container.h (module 'network'): void ns3::NodeContainer::Add(ns3::NodeContainer other) [member function]
    cls.add_method('Add', 
                   'void', 
                   [param('ns3::NodeContainer', 'other')])
    ## node-container.h (module 'network'): void ns3::NodeContainer::Add(ns3::Ptr<ns3::Node> node) [member function]
    cls.add_method('Add', 
                   'void', 
                   [param('ns3::Ptr< ns3::Node >', 'node')])
    ## node-container.h (module 'network'): void ns3::NodeContainer::Add(std::string nodeName) [member function]
    cls.add_method('Add', 
                   'void', 
                   [param('std::string', 'nodeName')])
    ## node-container.h (module 'network'): __gnu_cxx::__normal_iterator<const ns3::Ptr<ns3::Node>*,std::vector<ns3::Ptr<ns3::Node>, std::allocator<ns3::Ptr<ns3::Node> > > > ns3::NodeContainer::Begin() const [member function]
    cls.add_method('Begin', 
                   '__gnu_cxx::__normal_iterator< ns3::Ptr< ns3::Node > const, std::vector< ns3::Ptr< ns3::Node > > >', 
                   [], 
                   is_const=True)
    ## node-container.h (module 'network'): void ns3::NodeContainer::Create(uint32_t n) [member function]
    cls.add_method('Create', 
                   'void', 
                   [param('uint32_t', 'n')])
    ## node-container.h (module 'network'): void ns3::NodeContainer::Create(uint32_t n, uint32_t systemId) [member function]
    cls.add_method('Create', 
                   'void', 
                   [param('uint32_t', 'n'), param('uint32_t', 'systemId')])
    ## node-container.h (module 'network'): __gnu_cxx::__normal_iterator<const ns3::Ptr<ns3::Node>*,std::vector<ns3::Ptr<ns3::Node>, std::allocator<ns3::Ptr<ns3::Node> > > > ns3::NodeContainer::End() const [member function]
    cls.add_method('End', 
                   '__gnu_cxx::__normal_iterator< ns3::Ptr< ns3::Node > const, std::vector< ns3::Ptr< ns3::Node > > >', 
                   [], 
                   is_const=True)
    ## node-container.h (module 'network'): ns3::Ptr<ns3::Node> ns3::NodeContainer::Get(uint32_t i) const [member function]
    cls.add_method('Get', 
                   'ns3::Ptr< ns3::Node >', 
                   [param('uint32_t', 'i')], 
                   is_const=True)
    ## node-container.h (module 'network'): static ns3::NodeContainer ns3::NodeContainer::GetGlobal() [member function]
    cls.add_method('GetGlobal', 
                   'ns3::NodeContainer', 
                   [], 
                   is_static=True)
    ## node-container.h (module 'network'): uint32_t ns3::NodeContainer::GetN() const [member function]
    cls.add_method('GetN', 
                   'uint32_t', 
                   [], 
                   is_const=True)
    return

def register_Ns3ObjectBase_methods(root_module, cls):
    ## object-base.h (module 'core'): ns3::ObjectBase::ObjectBase() [constructor]
    cls.add_constructor([])
    ## object-base.h (module 'core'): ns3::ObjectBase::ObjectBase(ns3::ObjectBase const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::ObjectBase const &', 'arg0')])
    ## object-base.h (module 'core'): void ns3::ObjectBase::GetAttribute(std::string name, ns3::AttributeValue & value) const [member function]
    cls.add_method('GetAttribute', 
                   'void', 
                   [param('std::string', 'name'), param('ns3::AttributeValue &', 'value')], 
                   is_const=True)
    ## object-base.h (module 'core'): bool ns3::ObjectBase::GetAttributeFailSafe(std::string name, ns3::AttributeValue & attribute) const [member function]
    cls.add_method('GetAttributeFailSafe', 
                   'bool', 
                   [param('std::string', 'name'), param('ns3::AttributeValue &', 'attribute')], 
                   is_const=True)
    ## object-base.h (module 'core'): ns3::TypeId ns3::ObjectBase::GetInstanceTypeId() const [member function]
    cls.add_method('GetInstanceTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## object-base.h (module 'core'): static ns3::TypeId ns3::ObjectBase::GetTypeId() [member function]
    cls.add_method('GetTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_static=True)
    ## object-base.h (module 'core'): void ns3::ObjectBase::SetAttribute(std::string name, ns3::AttributeValue const & value) [member function]
    cls.add_method('SetAttribute', 
                   'void', 
                   [param('std::string', 'name'), param('ns3::AttributeValue const &', 'value')])
    ## object-base.h (module 'core'): bool ns3::ObjectBase::SetAttributeFailSafe(std::string name, ns3::AttributeValue const & value) [member function]
    cls.add_method('SetAttributeFailSafe', 
                   'bool', 
                   [param('std::string', 'name'), param('ns3::AttributeValue const &', 'value')])
    ## object-base.h (module 'core'): bool ns3::ObjectBase::TraceConnect(std::string name, std::string context, ns3::CallbackBase const & cb) [member function]
    cls.add_method('TraceConnect', 
                   'bool', 
                   [param('std::string', 'name'), param('std::string', 'context'), param('ns3::CallbackBase const &', 'cb')])
    ## object-base.h (module 'core'): bool ns3::ObjectBase::TraceConnectWithoutContext(std::string name, ns3::CallbackBase const & cb) [member function]
    cls.add_method('TraceConnectWithoutContext', 
                   'bool', 
                   [param('std::string', 'name'), param('ns3::CallbackBase const &', 'cb')])
    ## object-base.h (module 'core'): bool ns3::ObjectBase::TraceDisconnect(std::string name, std::string context, ns3::CallbackBase const & cb) [member function]
    cls.add_method('TraceDisconnect', 
                   'bool', 
                   [param('std::string', 'name'), param('std::string', 'context'), param('ns3::CallbackBase const &', 'cb')])
    ## object-base.h (module 'core'): bool ns3::ObjectBase::TraceDisconnectWithoutContext(std::string name, ns3::CallbackBase const & cb) [member function]
    cls.add_method('TraceDisconnectWithoutContext', 
                   'bool', 
                   [param('std::string', 'name'), param('ns3::CallbackBase const &', 'cb')])
    ## object-base.h (module 'core'): void ns3::ObjectBase::ConstructSelf(ns3::AttributeConstructionList const & attributes) [member function]
    cls.add_method('ConstructSelf', 
                   'void', 
                   [param('ns3::AttributeConstructionList const &', 'attributes')], 
                   visibility='protected')
    ## object-base.h (module 'core'): void ns3::ObjectBase::NotifyConstructionCompleted() [member function]
    cls.add_method('NotifyConstructionCompleted', 
                   'void', 
                   [], 
                   visibility='protected', is_virtual=True)
    return

def register_Ns3ObjectDeleter_methods(root_module, cls):
    ## object.h (module 'core'): ns3::ObjectDeleter::ObjectDeleter() [constructor]
    cls.add_constructor([])
    ## object.h (module 'core'): ns3::ObjectDeleter::ObjectDeleter(ns3::ObjectDeleter const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::ObjectDeleter const &', 'arg0')])
    ## object.h (module 'core'): static void ns3::ObjectDeleter::Delete(ns3::Object * object) [member function]
    cls.add_method('Delete', 
                   'void', 
                   [param('ns3::Object *', 'object')], 
                   is_static=True)
    return

def register_Ns3ObjectFactory_methods(root_module, cls):
    cls.add_output_stream_operator()
    ## object-factory.h (module 'core'): ns3::ObjectFactory::ObjectFactory(ns3::ObjectFactory const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::ObjectFactory const &', 'arg0')])
    ## object-factory.h (module 'core'): ns3::ObjectFactory::ObjectFactory() [constructor]
    cls.add_constructor([])
    ## object-factory.h (module 'core'): ns3::ObjectFactory::ObjectFactory(std::string typeId) [constructor]
    cls.add_constructor([param('std::string', 'typeId')])
    ## object-factory.h (module 'core'): ns3::Ptr<ns3::Object> ns3::ObjectFactory::Create() const [member function]
    cls.add_method('Create', 
                   'ns3::Ptr< ns3::Object >', 
                   [], 
                   is_const=True)
    ## object-factory.h (module 'core'): ns3::TypeId ns3::ObjectFactory::GetTypeId() const [member function]
    cls.add_method('GetTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_const=True)
    ## object-factory.h (module 'core'): void ns3::ObjectFactory::Set(std::string name, ns3::AttributeValue const & value) [member function]
    cls.add_method('Set', 
                   'void', 
                   [param('std::string', 'name'), param('ns3::AttributeValue const &', 'value')])
    ## object-factory.h (module 'core'): void ns3::ObjectFactory::SetTypeId(ns3::TypeId tid) [member function]
    cls.add_method('SetTypeId', 
                   'void', 
                   [param('ns3::TypeId', 'tid')])
    ## object-factory.h (module 'core'): void ns3::ObjectFactory::SetTypeId(char const * tid) [member function]
    cls.add_method('SetTypeId', 
                   'void', 
                   [param('char const *', 'tid')])
    ## object-factory.h (module 'core'): void ns3::ObjectFactory::SetTypeId(std::string tid) [member function]
    cls.add_method('SetTypeId', 
                   'void', 
                   [param('std::string', 'tid')])
    return

def register_Ns3PacketMetadata_methods(root_module, cls):
    ## packet-metadata.h (module 'network'): ns3::PacketMetadata::PacketMetadata(uint64_t uid, uint32_t size) [constructor]
    cls.add_constructor([param('uint64_t', 'uid'), param('uint32_t', 'size')])
    ## packet-metadata.h (module 'network'): ns3::PacketMetadata::PacketMetadata(ns3::PacketMetadata const & o) [copy constructor]
    cls.add_constructor([param('ns3::PacketMetadata const &', 'o')])
    ## packet-metadata.h (module 'network'): void ns3::PacketMetadata::AddAtEnd(ns3::PacketMetadata const & o) [member function]
    cls.add_method('AddAtEnd', 
                   'void', 
                   [param('ns3::PacketMetadata const &', 'o')])
    ## packet-metadata.h (module 'network'): void ns3::PacketMetadata::AddHeader(ns3::Header const & header, uint32_t size) [member function]
    cls.add_method('AddHeader', 
                   'void', 
                   [param('ns3::Header const &', 'header'), param('uint32_t', 'size')])
    ## packet-metadata.h (module 'network'): void ns3::PacketMetadata::AddPaddingAtEnd(uint32_t end) [member function]
    cls.add_method('AddPaddingAtEnd', 
                   'void', 
                   [param('uint32_t', 'end')])
    ## packet-metadata.h (module 'network'): void ns3::PacketMetadata::AddTrailer(ns3::Trailer const & trailer, uint32_t size) [member function]
    cls.add_method('AddTrailer', 
                   'void', 
                   [param('ns3::Trailer const &', 'trailer'), param('uint32_t', 'size')])
    ## packet-metadata.h (module 'network'): ns3::PacketMetadata::ItemIterator ns3::PacketMetadata::BeginItem(ns3::Buffer buffer) const [member function]
    cls.add_method('BeginItem', 
                   'ns3::PacketMetadata::ItemIterator', 
                   [param('ns3::Buffer', 'buffer')], 
                   is_const=True)
    ## packet-metadata.h (module 'network'): ns3::PacketMetadata ns3::PacketMetadata::CreateFragment(uint32_t start, uint32_t end) const [member function]
    cls.add_method('CreateFragment', 
                   'ns3::PacketMetadata', 
                   [param('uint32_t', 'start'), param('uint32_t', 'end')], 
                   is_const=True)
    ## packet-metadata.h (module 'network'): uint32_t ns3::PacketMetadata::Deserialize(uint8_t const * buffer, uint32_t size) [member function]
    cls.add_method('Deserialize', 
                   'uint32_t', 
                   [param('uint8_t const *', 'buffer'), param('uint32_t', 'size')])
    ## packet-metadata.h (module 'network'): static void ns3::PacketMetadata::Enable() [member function]
    cls.add_method('Enable', 
                   'void', 
                   [], 
                   is_static=True)
    ## packet-metadata.h (module 'network'): static void ns3::PacketMetadata::EnableChecking() [member function]
    cls.add_method('EnableChecking', 
                   'void', 
                   [], 
                   is_static=True)
    ## packet-metadata.h (module 'network'): uint32_t ns3::PacketMetadata::GetSerializedSize() const [member function]
    cls.add_method('GetSerializedSize', 
                   'uint32_t', 
                   [], 
                   is_const=True)
    ## packet-metadata.h (module 'network'): uint64_t ns3::PacketMetadata::GetUid() const [member function]
    cls.add_method('GetUid', 
                   'uint64_t', 
                   [], 
                   is_const=True)
    ## packet-metadata.h (module 'network'): void ns3::PacketMetadata::RemoveAtEnd(uint32_t end) [member function]
    cls.add_method('RemoveAtEnd', 
                   'void', 
                   [param('uint32_t', 'end')])
    ## packet-metadata.h (module 'network'): void ns3::PacketMetadata::RemoveAtStart(uint32_t start) [member function]
    cls.add_method('RemoveAtStart', 
                   'void', 
                   [param('uint32_t', 'start')])
    ## packet-metadata.h (module 'network'): void ns3::PacketMetadata::RemoveHeader(ns3::Header const & header, uint32_t size) [member function]
    cls.add_method('RemoveHeader', 
                   'void', 
                   [param('ns3::Header const &', 'header'), param('uint32_t', 'size')])
    ## packet-metadata.h (module 'network'): void ns3::PacketMetadata::RemoveTrailer(ns3::Trailer const & trailer, uint32_t size) [member function]
    cls.add_method('RemoveTrailer', 
                   'void', 
                   [param('ns3::Trailer const &', 'trailer'), param('uint32_t', 'size')])
    ## packet-metadata.h (module 'network'): uint32_t ns3::PacketMetadata::Serialize(uint8_t * buffer, uint32_t maxSize) const [member function]
    cls.add_method('Serialize', 
                   'uint32_t', 
                   [param('uint8_t *', 'buffer'), param('uint32_t', 'maxSize')], 
                   is_const=True)
    return

def register_Ns3PacketMetadataItem_methods(root_module, cls):
    ## packet-metadata.h (module 'network'): ns3::PacketMetadata::Item::Item() [constructor]
    cls.add_constructor([])
    ## packet-metadata.h (module 'network'): ns3::PacketMetadata::Item::Item(ns3::PacketMetadata::Item const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::PacketMetadata::Item const &', 'arg0')])
    ## packet-metadata.h (module 'network'): ns3::PacketMetadata::Item::current [variable]
    cls.add_instance_attribute('current', 'ns3::Buffer::Iterator', is_const=False)
    ## packet-metadata.h (module 'network'): ns3::PacketMetadata::Item::currentSize [variable]
    cls.add_instance_attribute('currentSize', 'uint32_t', is_const=False)
    ## packet-metadata.h (module 'network'): ns3::PacketMetadata::Item::currentTrimedFromEnd [variable]
    cls.add_instance_attribute('currentTrimedFromEnd', 'uint32_t', is_const=False)
    ## packet-metadata.h (module 'network'): ns3::PacketMetadata::Item::currentTrimedFromStart [variable]
    cls.add_instance_attribute('currentTrimedFromStart', 'uint32_t', is_const=False)
    ## packet-metadata.h (module 'network'): ns3::PacketMetadata::Item::isFragment [variable]
    cls.add_instance_attribute('isFragment', 'bool', is_const=False)
    ## packet-metadata.h (module 'network'): ns3::PacketMetadata::Item::tid [variable]
    cls.add_instance_attribute('tid', 'ns3::TypeId', is_const=False)
    return

def register_Ns3PacketMetadataItemIterator_methods(root_module, cls):
    ## packet-metadata.h (module 'network'): ns3::PacketMetadata::ItemIterator::ItemIterator(ns3::PacketMetadata::ItemIterator const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::PacketMetadata::ItemIterator const &', 'arg0')])
    ## packet-metadata.h (module 'network'): ns3::PacketMetadata::ItemIterator::ItemIterator(ns3::PacketMetadata const * metadata, ns3::Buffer buffer) [constructor]
    cls.add_constructor([param('ns3::PacketMetadata const *', 'metadata'), param('ns3::Buffer', 'buffer')])
    ## packet-metadata.h (module 'network'): bool ns3::PacketMetadata::ItemIterator::HasNext() const [member function]
    cls.add_method('HasNext', 
                   'bool', 
                   [], 
                   is_const=True)
    ## packet-metadata.h (module 'network'): ns3::PacketMetadata::Item ns3::PacketMetadata::ItemIterator::Next() [member function]
    cls.add_method('Next', 
                   'ns3::PacketMetadata::Item', 
                   [])
    return

def register_Ns3PacketTagIterator_methods(root_module, cls):
    ## packet.h (module 'network'): ns3::PacketTagIterator::PacketTagIterator(ns3::PacketTagIterator const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::PacketTagIterator const &', 'arg0')])
    ## packet.h (module 'network'): bool ns3::PacketTagIterator::HasNext() const [member function]
    cls.add_method('HasNext', 
                   'bool', 
                   [], 
                   is_const=True)
    ## packet.h (module 'network'): ns3::PacketTagIterator::Item ns3::PacketTagIterator::Next() [member function]
    cls.add_method('Next', 
                   'ns3::PacketTagIterator::Item', 
                   [])
    return

def register_Ns3PacketTagIteratorItem_methods(root_module, cls):
    ## packet.h (module 'network'): ns3::PacketTagIterator::Item::Item(ns3::PacketTagIterator::Item const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::PacketTagIterator::Item const &', 'arg0')])
    ## packet.h (module 'network'): void ns3::PacketTagIterator::Item::GetTag(ns3::Tag & tag) const [member function]
    cls.add_method('GetTag', 
                   'void', 
                   [param('ns3::Tag &', 'tag')], 
                   is_const=True)
    ## packet.h (module 'network'): ns3::TypeId ns3::PacketTagIterator::Item::GetTypeId() const [member function]
    cls.add_method('GetTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_const=True)
    return

def register_Ns3PacketTagList_methods(root_module, cls):
    ## packet-tag-list.h (module 'network'): ns3::PacketTagList::PacketTagList() [constructor]
    cls.add_constructor([])
    ## packet-tag-list.h (module 'network'): ns3::PacketTagList::PacketTagList(ns3::PacketTagList const & o) [copy constructor]
    cls.add_constructor([param('ns3::PacketTagList const &', 'o')])
    ## packet-tag-list.h (module 'network'): void ns3::PacketTagList::Add(ns3::Tag const & tag) const [member function]
    cls.add_method('Add', 
                   'void', 
                   [param('ns3::Tag const &', 'tag')], 
                   is_const=True)
    ## packet-tag-list.h (module 'network'): ns3::PacketTagList::TagData const * ns3::PacketTagList::Head() const [member function]
    cls.add_method('Head', 
                   'ns3::PacketTagList::TagData const *', 
                   [], 
                   is_const=True)
    ## packet-tag-list.h (module 'network'): bool ns3::PacketTagList::Peek(ns3::Tag & tag) const [member function]
    cls.add_method('Peek', 
                   'bool', 
                   [param('ns3::Tag &', 'tag')], 
                   is_const=True)
    ## packet-tag-list.h (module 'network'): bool ns3::PacketTagList::Remove(ns3::Tag & tag) [member function]
    cls.add_method('Remove', 
                   'bool', 
                   [param('ns3::Tag &', 'tag')])
    ## packet-tag-list.h (module 'network'): void ns3::PacketTagList::RemoveAll() [member function]
    cls.add_method('RemoveAll', 
                   'void', 
                   [])
    return

def register_Ns3PacketTagListTagData_methods(root_module, cls):
    ## packet-tag-list.h (module 'network'): ns3::PacketTagList::TagData::TagData() [constructor]
    cls.add_constructor([])
    ## packet-tag-list.h (module 'network'): ns3::PacketTagList::TagData::TagData(ns3::PacketTagList::TagData const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::PacketTagList::TagData const &', 'arg0')])
    ## packet-tag-list.h (module 'network'): ns3::PacketTagList::TagData::count [variable]
    cls.add_instance_attribute('count', 'uint32_t', is_const=False)
    ## packet-tag-list.h (module 'network'): ns3::PacketTagList::TagData::data [variable]
    cls.add_instance_attribute('data', 'uint8_t [ 20 ]', is_const=False)
    ## packet-tag-list.h (module 'network'): ns3::PacketTagList::TagData::next [variable]
    cls.add_instance_attribute('next', 'ns3::PacketTagList::TagData *', is_const=False)
    ## packet-tag-list.h (module 'network'): ns3::PacketTagList::TagData::tid [variable]
    cls.add_instance_attribute('tid', 'ns3::TypeId', is_const=False)
    return

def register_Ns3PendingData_methods(root_module, cls):
    ## pending-data.h (module 'internet'): ns3::PendingData::PendingData() [constructor]
    cls.add_constructor([])
    ## pending-data.h (module 'internet'): ns3::PendingData::PendingData(uint32_t s, uint8_t * d=0l, uint32_t msg=0, uint32_t resp=0) [constructor]
    cls.add_constructor([param('uint32_t', 's'), param('uint8_t *', 'd', default_value='0l'), param('uint32_t', 'msg', default_value='0'), param('uint32_t', 'resp', default_value='0')])
    ## pending-data.h (module 'internet'): ns3::PendingData::PendingData(std::string const & arg0) [constructor]
    cls.add_constructor([param('std::string const &', 'arg0')])
    ## pending-data.h (module 'internet'): ns3::PendingData::PendingData(uint8_t * arg0, uint32_t & arg1, ns3::Packet * arg2) [constructor]
    cls.add_constructor([param('uint8_t *', 'arg0'), param('uint32_t &', 'arg1'), param('ns3::Packet *', 'arg2')])
    ## pending-data.h (module 'internet'): ns3::PendingData::PendingData(ns3::PendingData const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::PendingData const &', 'arg0')])
    ## pending-data.h (module 'internet'): void ns3::PendingData::Add(uint32_t s, uint8_t const * d=0) [member function]
    cls.add_method('Add', 
                   'void', 
                   [param('uint32_t', 's'), param('uint8_t const *', 'd', default_value='0')], 
                   is_virtual=True)
    ## pending-data.h (module 'internet'): void ns3::PendingData::Add(ns3::Ptr<ns3::Packet> p) [member function]
    cls.add_method('Add', 
                   'void', 
                   [param('ns3::Ptr< ns3::Packet >', 'p')], 
                   is_virtual=True)
    ## pending-data.h (module 'internet'): void ns3::PendingData::Clear() [member function]
    cls.add_method('Clear', 
                   'void', 
                   [], 
                   is_virtual=True)
    ## pending-data.h (module 'internet'): uint8_t * ns3::PendingData::Construct(uint8_t * arg0, uint32_t & arg1) [member function]
    cls.add_method('Construct', 
                   'uint8_t *', 
                   [param('uint8_t *', 'arg0'), param('uint32_t &', 'arg1')])
    ## pending-data.h (module 'internet'): ns3::PendingData * ns3::PendingData::Copy() const [member function]
    cls.add_method('Copy', 
                   'ns3::PendingData *', 
                   [], 
                   is_const=True)
    ## pending-data.h (module 'internet'): ns3::Ptr<ns3::Packet> ns3::PendingData::CopyFromOffset(uint32_t arg0, uint32_t arg1) [member function]
    cls.add_method('CopyFromOffset', 
                   'ns3::Ptr< ns3::Packet >', 
                   [param('uint32_t', 'arg0'), param('uint32_t', 'arg1')], 
                   is_virtual=True)
    ## pending-data.h (module 'internet'): ns3::Ptr<ns3::Packet> ns3::PendingData::CopyFromSeq(uint32_t arg0, ns3::SequenceNumber32 const & arg1, ns3::SequenceNumber32 const & arg2) [member function]
    cls.add_method('CopyFromSeq', 
                   'ns3::Ptr< ns3::Packet >', 
                   [param('uint32_t', 'arg0'), param('ns3::SequenceNumber32 const &', 'arg1'), param('ns3::SequenceNumber32 const &', 'arg2')], 
                   is_virtual=True)
    ## pending-data.h (module 'internet'): ns3::PendingData * ns3::PendingData::CopyS(uint32_t arg0) [member function]
    cls.add_method('CopyS', 
                   'ns3::PendingData *', 
                   [param('uint32_t', 'arg0')])
    ## pending-data.h (module 'internet'): ns3::PendingData * ns3::PendingData::CopySD(uint32_t arg0, uint8_t * arg1) [member function]
    cls.add_method('CopySD', 
                   'ns3::PendingData *', 
                   [param('uint32_t', 'arg0'), param('uint8_t *', 'arg1')])
    ## pending-data.h (module 'internet'): uint32_t ns3::PendingData::OffsetFromSeq(ns3::SequenceNumber32 const & seqFront, ns3::SequenceNumber32 const & seqOffset) [member function]
    cls.add_method('OffsetFromSeq', 
                   'uint32_t', 
                   [param('ns3::SequenceNumber32 const &', 'seqFront'), param('ns3::SequenceNumber32 const &', 'seqOffset')], 
                   is_virtual=True)
    ## pending-data.h (module 'internet'): uint32_t ns3::PendingData::RemoveToSeq(ns3::SequenceNumber32 const & seqFront, ns3::SequenceNumber32 const & seqOffset) [member function]
    cls.add_method('RemoveToSeq', 
                   'uint32_t', 
                   [param('ns3::SequenceNumber32 const &', 'seqFront'), param('ns3::SequenceNumber32 const &', 'seqOffset')], 
                   is_virtual=True)
    ## pending-data.h (module 'internet'): uint8_t * ns3::PendingData::Serialize(uint8_t * arg0, uint32_t & arg1) [member function]
    cls.add_method('Serialize', 
                   'uint8_t *', 
                   [param('uint8_t *', 'arg0'), param('uint32_t &', 'arg1')])
    ## pending-data.h (module 'internet'): uint32_t ns3::PendingData::Size() const [member function]
    cls.add_method('Size', 
                   'uint32_t', 
                   [], 
                   is_const=True)
    ## pending-data.h (module 'internet'): uint32_t ns3::PendingData::SizeFromOffset(uint32_t offset) [member function]
    cls.add_method('SizeFromOffset', 
                   'uint32_t', 
                   [param('uint32_t', 'offset')], 
                   is_virtual=True)
    ## pending-data.h (module 'internet'): uint32_t ns3::PendingData::SizeFromSeq(ns3::SequenceNumber32 const & seqFront, ns3::SequenceNumber32 const & seqOffset) [member function]
    cls.add_method('SizeFromSeq', 
                   'uint32_t', 
                   [param('ns3::SequenceNumber32 const &', 'seqFront'), param('ns3::SequenceNumber32 const &', 'seqOffset')], 
                   is_virtual=True)
    ## pending-data.h (module 'internet'): ns3::PendingData::data [variable]
    cls.add_instance_attribute('data', 'std::vector< ns3::Ptr< ns3::Packet > >', is_const=False)
    ## pending-data.h (module 'internet'): ns3::PendingData::msgSize [variable]
    cls.add_instance_attribute('msgSize', 'uint32_t', is_const=False)
    ## pending-data.h (module 'internet'): ns3::PendingData::responseSize [variable]
    cls.add_instance_attribute('responseSize', 'uint32_t', is_const=False)
    ## pending-data.h (module 'internet'): ns3::PendingData::size [variable]
    cls.add_instance_attribute('size', 'uint32_t', is_const=False)
    return

def register_Ns3RttHistory_methods(root_module, cls):
    ## rtt-estimator.h (module 'internet'): ns3::RttHistory::RttHistory(ns3::SequenceNumber32 s, uint32_t c, ns3::Time t) [constructor]
    cls.add_constructor([param('ns3::SequenceNumber32', 's'), param('uint32_t', 'c'), param('ns3::Time', 't')])
    ## rtt-estimator.h (module 'internet'): ns3::RttHistory::RttHistory(ns3::RttHistory const & h) [copy constructor]
    cls.add_constructor([param('ns3::RttHistory const &', 'h')])
    ## rtt-estimator.h (module 'internet'): ns3::RttHistory::count [variable]
    cls.add_instance_attribute('count', 'uint32_t', is_const=False)
    ## rtt-estimator.h (module 'internet'): ns3::RttHistory::retx [variable]
    cls.add_instance_attribute('retx', 'bool', is_const=False)
    ## rtt-estimator.h (module 'internet'): ns3::RttHistory::seq [variable]
    cls.add_instance_attribute('seq', 'ns3::SequenceNumber32', is_const=False)
    ## rtt-estimator.h (module 'internet'): ns3::RttHistory::time [variable]
    cls.add_instance_attribute('time', 'ns3::Time', is_const=False)
    return

def register_Ns3SA_methods(root_module, cls):
    ## tcp-typedefs.h (module 'internet'): ns3::SA::SA(ns3::SA const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::SA const &', 'arg0')])
    ## tcp-typedefs.h (module 'internet'): ns3::SA::SA() [constructor]
    cls.add_constructor([])
    ## tcp-typedefs.h (module 'internet'): ns3::SA::SA(ns3::TcpStates_t s, ns3::Actions_t a) [constructor]
    cls.add_constructor([param('ns3::TcpStates_t', 's'), param('ns3::Actions_t', 'a')])
    ## tcp-typedefs.h (module 'internet'): ns3::SA::action [variable]
    cls.add_instance_attribute('action', 'ns3::Actions_t', is_const=False)
    ## tcp-typedefs.h (module 'internet'): ns3::SA::state [variable]
    cls.add_instance_attribute('state', 'ns3::TcpStates_t', is_const=False)
    return

def register_Ns3SequenceNumber32_methods(root_module, cls):
    cls.add_binary_comparison_operator('!=')
    cls.add_binary_numeric_operator('+', root_module['ns3::SequenceNumber32'], root_module['ns3::SequenceNumber32'], param('ns3::SequenceNumber< unsigned int, int > const &', 'right'))
    cls.add_binary_numeric_operator('+', root_module['ns3::SequenceNumber32'], root_module['ns3::SequenceNumber32'], param('int', 'right'))
    cls.add_inplace_numeric_operator('+=', param('int', 'right'))
    cls.add_binary_numeric_operator('-', root_module['ns3::SequenceNumber32'], root_module['ns3::SequenceNumber32'], param('int', 'right'))
    cls.add_inplace_numeric_operator('-=', param('int', 'right'))
    cls.add_binary_comparison_operator('<')
    cls.add_binary_comparison_operator('<=')
    cls.add_binary_comparison_operator('==')
    cls.add_binary_comparison_operator('>')
    cls.add_binary_comparison_operator('>=')
    ## sequence-number.h (module 'network'): ns3::SequenceNumber<unsigned int, int>::SequenceNumber() [constructor]
    cls.add_constructor([])
    ## sequence-number.h (module 'network'): ns3::SequenceNumber<unsigned int, int>::SequenceNumber(unsigned int value) [constructor]
    cls.add_constructor([param('unsigned int', 'value')])
    ## sequence-number.h (module 'network'): ns3::SequenceNumber<unsigned int, int>::SequenceNumber(ns3::SequenceNumber<unsigned int, int> const & value) [copy constructor]
    cls.add_constructor([param('ns3::SequenceNumber< unsigned int, int > const &', 'value')])
    ## sequence-number.h (module 'network'): unsigned int ns3::SequenceNumber<unsigned int, int>::GetValue() const [member function]
    cls.add_method('GetValue', 
                   'unsigned int', 
                   [], 
                   is_const=True)
    return

def register_Ns3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter_methods(root_module, cls):
    ## simple-ref-count.h (module 'core'): ns3::SimpleRefCount<ns3::Object, ns3::ObjectBase, ns3::ObjectDeleter>::SimpleRefCount() [constructor]
    cls.add_constructor([])
    ## simple-ref-count.h (module 'core'): ns3::SimpleRefCount<ns3::Object, ns3::ObjectBase, ns3::ObjectDeleter>::SimpleRefCount(ns3::SimpleRefCount<ns3::Object, ns3::ObjectBase, ns3::ObjectDeleter> const & o) [copy constructor]
    cls.add_constructor([param('ns3::SimpleRefCount< ns3::Object, ns3::ObjectBase, ns3::ObjectDeleter > const &', 'o')])
    ## simple-ref-count.h (module 'core'): static void ns3::SimpleRefCount<ns3::Object, ns3::ObjectBase, ns3::ObjectDeleter>::Cleanup() [member function]
    cls.add_method('Cleanup', 
                   'void', 
                   [], 
                   is_static=True)
    return

def register_Ns3Simulator_methods(root_module, cls):
    ## simulator.h (module 'core'): ns3::Simulator::Simulator(ns3::Simulator const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::Simulator const &', 'arg0')])
    ## simulator.h (module 'core'): static void ns3::Simulator::Cancel(ns3::EventId const & id) [member function]
    cls.add_method('Cancel', 
                   'void', 
                   [param('ns3::EventId const &', 'id')], 
                   is_static=True)
    ## simulator.h (module 'core'): static void ns3::Simulator::Destroy() [member function]
    cls.add_method('Destroy', 
                   'void', 
                   [], 
                   is_static=True)
    ## simulator.h (module 'core'): static uint32_t ns3::Simulator::GetContext() [member function]
    cls.add_method('GetContext', 
                   'uint32_t', 
                   [], 
                   is_static=True)
    ## simulator.h (module 'core'): static ns3::Time ns3::Simulator::GetDelayLeft(ns3::EventId const & id) [member function]
    cls.add_method('GetDelayLeft', 
                   'ns3::Time', 
                   [param('ns3::EventId const &', 'id')], 
                   is_static=True)
    ## simulator.h (module 'core'): static ns3::Ptr<ns3::SimulatorImpl> ns3::Simulator::GetImplementation() [member function]
    cls.add_method('GetImplementation', 
                   'ns3::Ptr< ns3::SimulatorImpl >', 
                   [], 
                   is_static=True)
    ## simulator.h (module 'core'): static ns3::Time ns3::Simulator::GetMaximumSimulationTime() [member function]
    cls.add_method('GetMaximumSimulationTime', 
                   'ns3::Time', 
                   [], 
                   is_static=True)
    ## simulator.h (module 'core'): static uint32_t ns3::Simulator::GetSystemId() [member function]
    cls.add_method('GetSystemId', 
                   'uint32_t', 
                   [], 
                   is_static=True)
    ## simulator.h (module 'core'): static bool ns3::Simulator::IsExpired(ns3::EventId const & id) [member function]
    cls.add_method('IsExpired', 
                   'bool', 
                   [param('ns3::EventId const &', 'id')], 
                   is_static=True)
    ## simulator.h (module 'core'): static bool ns3::Simulator::IsFinished() [member function]
    cls.add_method('IsFinished', 
                   'bool', 
                   [], 
                   is_static=True)
    ## simulator.h (module 'core'): static ns3::Time ns3::Simulator::Next() [member function]
    cls.add_method('Next', 
                   'ns3::Time', 
                   [], 
                   is_static=True, deprecated=True)
    ## simulator.h (module 'core'): static ns3::Time ns3::Simulator::Now() [member function]
    cls.add_method('Now', 
                   'ns3::Time', 
                   [], 
                   is_static=True)
    ## simulator.h (module 'core'): static void ns3::Simulator::Remove(ns3::EventId const & id) [member function]
    cls.add_method('Remove', 
                   'void', 
                   [param('ns3::EventId const &', 'id')], 
                   is_static=True)
    ## simulator.h (module 'core'): static void ns3::Simulator::RunOneEvent() [member function]
    cls.add_method('RunOneEvent', 
                   'void', 
                   [], 
                   is_static=True, deprecated=True)
    ## simulator.h (module 'core'): static void ns3::Simulator::SetImplementation(ns3::Ptr<ns3::SimulatorImpl> impl) [member function]
    cls.add_method('SetImplementation', 
                   'void', 
                   [param('ns3::Ptr< ns3::SimulatorImpl >', 'impl')], 
                   is_static=True)
    ## simulator.h (module 'core'): static void ns3::Simulator::SetScheduler(ns3::ObjectFactory schedulerFactory) [member function]
    cls.add_method('SetScheduler', 
                   'void', 
                   [param('ns3::ObjectFactory', 'schedulerFactory')], 
                   is_static=True)
    ## simulator.h (module 'core'): static void ns3::Simulator::Stop() [member function]
    cls.add_method('Stop', 
                   'void', 
                   [], 
                   is_static=True)
    ## simulator.h (module 'core'): static void ns3::Simulator::Stop(ns3::Time const & time) [member function]
    cls.add_method('Stop', 
                   'void', 
                   [param('ns3::Time const &', 'time')], 
                   is_static=True)
    return

def register_Ns3Tag_methods(root_module, cls):
    ## tag.h (module 'network'): ns3::Tag::Tag() [constructor]
    cls.add_constructor([])
    ## tag.h (module 'network'): ns3::Tag::Tag(ns3::Tag const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::Tag const &', 'arg0')])
    ## tag.h (module 'network'): void ns3::Tag::Deserialize(ns3::TagBuffer i) [member function]
    cls.add_method('Deserialize', 
                   'void', 
                   [param('ns3::TagBuffer', 'i')], 
                   is_pure_virtual=True, is_virtual=True)
    ## tag.h (module 'network'): uint32_t ns3::Tag::GetSerializedSize() const [member function]
    cls.add_method('GetSerializedSize', 
                   'uint32_t', 
                   [], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## tag.h (module 'network'): static ns3::TypeId ns3::Tag::GetTypeId() [member function]
    cls.add_method('GetTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_static=True)
    ## tag.h (module 'network'): void ns3::Tag::Print(std::ostream & os) const [member function]
    cls.add_method('Print', 
                   'void', 
                   [param('std::ostream &', 'os')], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## tag.h (module 'network'): void ns3::Tag::Serialize(ns3::TagBuffer i) const [member function]
    cls.add_method('Serialize', 
                   'void', 
                   [param('ns3::TagBuffer', 'i')], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    return

def register_Ns3TagBuffer_methods(root_module, cls):
    ## tag-buffer.h (module 'network'): ns3::TagBuffer::TagBuffer(ns3::TagBuffer const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::TagBuffer const &', 'arg0')])
    ## tag-buffer.h (module 'network'): ns3::TagBuffer::TagBuffer(uint8_t * start, uint8_t * end) [constructor]
    cls.add_constructor([param('uint8_t *', 'start'), param('uint8_t *', 'end')])
    ## tag-buffer.h (module 'network'): void ns3::TagBuffer::CopyFrom(ns3::TagBuffer o) [member function]
    cls.add_method('CopyFrom', 
                   'void', 
                   [param('ns3::TagBuffer', 'o')])
    ## tag-buffer.h (module 'network'): void ns3::TagBuffer::Read(uint8_t * buffer, uint32_t size) [member function]
    cls.add_method('Read', 
                   'void', 
                   [param('uint8_t *', 'buffer'), param('uint32_t', 'size')])
    ## tag-buffer.h (module 'network'): double ns3::TagBuffer::ReadDouble() [member function]
    cls.add_method('ReadDouble', 
                   'double', 
                   [])
    ## tag-buffer.h (module 'network'): uint16_t ns3::TagBuffer::ReadU16() [member function]
    cls.add_method('ReadU16', 
                   'uint16_t', 
                   [])
    ## tag-buffer.h (module 'network'): uint32_t ns3::TagBuffer::ReadU32() [member function]
    cls.add_method('ReadU32', 
                   'uint32_t', 
                   [])
    ## tag-buffer.h (module 'network'): uint64_t ns3::TagBuffer::ReadU64() [member function]
    cls.add_method('ReadU64', 
                   'uint64_t', 
                   [])
    ## tag-buffer.h (module 'network'): uint8_t ns3::TagBuffer::ReadU8() [member function]
    cls.add_method('ReadU8', 
                   'uint8_t', 
                   [])
    ## tag-buffer.h (module 'network'): void ns3::TagBuffer::TrimAtEnd(uint32_t trim) [member function]
    cls.add_method('TrimAtEnd', 
                   'void', 
                   [param('uint32_t', 'trim')])
    ## tag-buffer.h (module 'network'): void ns3::TagBuffer::Write(uint8_t const * buffer, uint32_t size) [member function]
    cls.add_method('Write', 
                   'void', 
                   [param('uint8_t const *', 'buffer'), param('uint32_t', 'size')])
    ## tag-buffer.h (module 'network'): void ns3::TagBuffer::WriteDouble(double v) [member function]
    cls.add_method('WriteDouble', 
                   'void', 
                   [param('double', 'v')])
    ## tag-buffer.h (module 'network'): void ns3::TagBuffer::WriteU16(uint16_t data) [member function]
    cls.add_method('WriteU16', 
                   'void', 
                   [param('uint16_t', 'data')])
    ## tag-buffer.h (module 'network'): void ns3::TagBuffer::WriteU32(uint32_t data) [member function]
    cls.add_method('WriteU32', 
                   'void', 
                   [param('uint32_t', 'data')])
    ## tag-buffer.h (module 'network'): void ns3::TagBuffer::WriteU64(uint64_t v) [member function]
    cls.add_method('WriteU64', 
                   'void', 
                   [param('uint64_t', 'v')])
    ## tag-buffer.h (module 'network'): void ns3::TagBuffer::WriteU8(uint8_t v) [member function]
    cls.add_method('WriteU8', 
                   'void', 
                   [param('uint8_t', 'v')])
    return

def register_Ns3TcpOptions_methods(root_module, cls):
    ## mp-tcp-header.h (module 'mptcp'): ns3::TcpOptions::TcpOptions(ns3::TcpOptions const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::TcpOptions const &', 'arg0')])
    ## mp-tcp-header.h (module 'mptcp'): ns3::TcpOptions::TcpOptions() [constructor]
    cls.add_constructor([])
    ## mp-tcp-header.h (module 'mptcp'): ns3::TcpOptions::Length [variable]
    cls.add_instance_attribute('Length', 'uint8_t', is_const=False)
    ## mp-tcp-header.h (module 'mptcp'): ns3::TcpOptions::optName [variable]
    cls.add_instance_attribute('optName', 'ns3::TcpOption_t', is_const=False)
    return

def register_Ns3TcpStateMachine_methods(root_module, cls):
    ## tcp-typedefs.h (module 'internet'): ns3::TcpStateMachine::TcpStateMachine(ns3::TcpStateMachine const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::TcpStateMachine const &', 'arg0')])
    ## tcp-typedefs.h (module 'internet'): ns3::TcpStateMachine::TcpStateMachine() [constructor]
    cls.add_constructor([])
    ## tcp-typedefs.h (module 'internet'): ns3::Events_t ns3::TcpStateMachine::FlagsEvent(uint8_t arg0) [member function]
    cls.add_method('FlagsEvent', 
                   'ns3::Events_t', 
                   [param('uint8_t', 'arg0')])
    ## tcp-typedefs.h (module 'internet'): ns3::SA ns3::TcpStateMachine::Lookup(ns3::TcpStates_t arg0, ns3::Events_t arg1) [member function]
    cls.add_method('Lookup', 
                   'ns3::SA', 
                   [param('ns3::TcpStates_t', 'arg0'), param('ns3::Events_t', 'arg1')])
    ## tcp-typedefs.h (module 'internet'): ns3::TcpStateMachine::aT [variable]
    cls.add_instance_attribute('aT', 'ns3::StateActions_t', is_const=False)
    ## tcp-typedefs.h (module 'internet'): ns3::TcpStateMachine::eV [variable]
    cls.add_instance_attribute('eV', 'ns3::EventVec_t', is_const=False)
    return

def register_Ns3TracedValue__Double_methods(root_module, cls):
    ## traced-value.h (module 'core'): ns3::TracedValue<double>::TracedValue() [constructor]
    cls.add_constructor([])
    ## traced-value.h (module 'core'): ns3::TracedValue<double>::TracedValue(ns3::TracedValue<double> const & o) [copy constructor]
    cls.add_constructor([param('ns3::TracedValue< double > const &', 'o')])
    ## traced-value.h (module 'core'): ns3::TracedValue<double>::TracedValue(double const & v) [constructor]
    cls.add_constructor([param('double const &', 'v')])
    ## traced-value.h (module 'core'): void ns3::TracedValue<double>::Connect(ns3::CallbackBase const & cb, std::basic_string<char,std::char_traits<char>,std::allocator<char> > path) [member function]
    cls.add_method('Connect', 
                   'void', 
                   [param('ns3::CallbackBase const &', 'cb'), param('std::string', 'path')])
    ## traced-value.h (module 'core'): void ns3::TracedValue<double>::ConnectWithoutContext(ns3::CallbackBase const & cb) [member function]
    cls.add_method('ConnectWithoutContext', 
                   'void', 
                   [param('ns3::CallbackBase const &', 'cb')])
    ## traced-value.h (module 'core'): void ns3::TracedValue<double>::Disconnect(ns3::CallbackBase const & cb, std::basic_string<char,std::char_traits<char>,std::allocator<char> > path) [member function]
    cls.add_method('Disconnect', 
                   'void', 
                   [param('ns3::CallbackBase const &', 'cb'), param('std::string', 'path')])
    ## traced-value.h (module 'core'): void ns3::TracedValue<double>::DisconnectWithoutContext(ns3::CallbackBase const & cb) [member function]
    cls.add_method('DisconnectWithoutContext', 
                   'void', 
                   [param('ns3::CallbackBase const &', 'cb')])
    ## traced-value.h (module 'core'): double ns3::TracedValue<double>::Get() const [member function]
    cls.add_method('Get', 
                   'double', 
                   [], 
                   is_const=True)
    ## traced-value.h (module 'core'): void ns3::TracedValue<double>::Set(double const & v) [member function]
    cls.add_method('Set', 
                   'void', 
                   [param('double const &', 'v')])
    return

def register_Ns3TracedValue__Ns3SequenceNumber__lt__unsigned_int__int__gt___methods(root_module, cls):
    ## traced-value.h (module 'core'): ns3::TracedValue<ns3::SequenceNumber<unsigned int, int> >::TracedValue() [constructor]
    cls.add_constructor([])
    ## traced-value.h (module 'core'): ns3::TracedValue<ns3::SequenceNumber<unsigned int, int> >::TracedValue(ns3::TracedValue<ns3::SequenceNumber<unsigned int, int> > const & o) [copy constructor]
    cls.add_constructor([param('ns3::TracedValue< ns3::SequenceNumber< unsigned int, int > > const &', 'o')])
    ## traced-value.h (module 'core'): ns3::TracedValue<ns3::SequenceNumber<unsigned int, int> >::TracedValue(ns3::SequenceNumber<unsigned int, int> const & v) [constructor]
    cls.add_constructor([param('ns3::SequenceNumber< unsigned int, int > const &', 'v')])
    ## traced-value.h (module 'core'): void ns3::TracedValue<ns3::SequenceNumber<unsigned int, int> >::Connect(ns3::CallbackBase const & cb, std::basic_string<char,std::char_traits<char>,std::allocator<char> > path) [member function]
    cls.add_method('Connect', 
                   'void', 
                   [param('ns3::CallbackBase const &', 'cb'), param('std::string', 'path')])
    ## traced-value.h (module 'core'): void ns3::TracedValue<ns3::SequenceNumber<unsigned int, int> >::ConnectWithoutContext(ns3::CallbackBase const & cb) [member function]
    cls.add_method('ConnectWithoutContext', 
                   'void', 
                   [param('ns3::CallbackBase const &', 'cb')])
    ## traced-value.h (module 'core'): void ns3::TracedValue<ns3::SequenceNumber<unsigned int, int> >::Disconnect(ns3::CallbackBase const & cb, std::basic_string<char,std::char_traits<char>,std::allocator<char> > path) [member function]
    cls.add_method('Disconnect', 
                   'void', 
                   [param('ns3::CallbackBase const &', 'cb'), param('std::string', 'path')])
    ## traced-value.h (module 'core'): void ns3::TracedValue<ns3::SequenceNumber<unsigned int, int> >::DisconnectWithoutContext(ns3::CallbackBase const & cb) [member function]
    cls.add_method('DisconnectWithoutContext', 
                   'void', 
                   [param('ns3::CallbackBase const &', 'cb')])
    ## traced-value.h (module 'core'): ns3::SequenceNumber<unsigned int, int> ns3::TracedValue<ns3::SequenceNumber<unsigned int, int> >::Get() const [member function]
    cls.add_method('Get', 
                   'ns3::SequenceNumber< unsigned int, int >', 
                   [], 
                   is_const=True)
    ## traced-value.h (module 'core'): void ns3::TracedValue<ns3::SequenceNumber<unsigned int, int> >::Set(ns3::SequenceNumber<unsigned int, int> const & v) [member function]
    cls.add_method('Set', 
                   'void', 
                   [param('ns3::SequenceNumber< unsigned int, int > const &', 'v')])
    return

def register_Ns3TracedValue__Ns3TcpStates_t_methods(root_module, cls):
    ## traced-value.h (module 'core'): ns3::TracedValue<ns3::TcpStates_t>::TracedValue() [constructor]
    cls.add_constructor([])
    ## traced-value.h (module 'core'): ns3::TracedValue<ns3::TcpStates_t>::TracedValue(ns3::TracedValue<ns3::TcpStates_t> const & o) [copy constructor]
    cls.add_constructor([param('ns3::TracedValue< ns3::TcpStates_t > const &', 'o')])
    ## traced-value.h (module 'core'): ns3::TracedValue<ns3::TcpStates_t>::TracedValue(ns3::TcpStates_t const & v) [constructor]
    cls.add_constructor([param('ns3::TcpStates_t const &', 'v')])
    ## traced-value.h (module 'core'): void ns3::TracedValue<ns3::TcpStates_t>::Connect(ns3::CallbackBase const & cb, std::basic_string<char,std::char_traits<char>,std::allocator<char> > path) [member function]
    cls.add_method('Connect', 
                   'void', 
                   [param('ns3::CallbackBase const &', 'cb'), param('std::string', 'path')])
    ## traced-value.h (module 'core'): void ns3::TracedValue<ns3::TcpStates_t>::ConnectWithoutContext(ns3::CallbackBase const & cb) [member function]
    cls.add_method('ConnectWithoutContext', 
                   'void', 
                   [param('ns3::CallbackBase const &', 'cb')])
    ## traced-value.h (module 'core'): void ns3::TracedValue<ns3::TcpStates_t>::Disconnect(ns3::CallbackBase const & cb, std::basic_string<char,std::char_traits<char>,std::allocator<char> > path) [member function]
    cls.add_method('Disconnect', 
                   'void', 
                   [param('ns3::CallbackBase const &', 'cb'), param('std::string', 'path')])
    ## traced-value.h (module 'core'): void ns3::TracedValue<ns3::TcpStates_t>::DisconnectWithoutContext(ns3::CallbackBase const & cb) [member function]
    cls.add_method('DisconnectWithoutContext', 
                   'void', 
                   [param('ns3::CallbackBase const &', 'cb')])
    ## traced-value.h (module 'core'): ns3::TcpStates_t ns3::TracedValue<ns3::TcpStates_t>::Get() const [member function]
    cls.add_method('Get', 
                   'ns3::TcpStates_t', 
                   [], 
                   is_const=True)
    ## traced-value.h (module 'core'): void ns3::TracedValue<ns3::TcpStates_t>::Set(ns3::TcpStates_t const & v) [member function]
    cls.add_method('Set', 
                   'void', 
                   [param('ns3::TcpStates_t const &', 'v')])
    return

def register_Ns3TracedValue__Unsigned_int_methods(root_module, cls):
    ## traced-value.h (module 'core'): ns3::TracedValue<unsigned int>::TracedValue() [constructor]
    cls.add_constructor([])
    ## traced-value.h (module 'core'): ns3::TracedValue<unsigned int>::TracedValue(ns3::TracedValue<unsigned int> const & o) [copy constructor]
    cls.add_constructor([param('ns3::TracedValue< unsigned int > const &', 'o')])
    ## traced-value.h (module 'core'): ns3::TracedValue<unsigned int>::TracedValue(unsigned int const & v) [constructor]
    cls.add_constructor([param('unsigned int const &', 'v')])
    ## traced-value.h (module 'core'): void ns3::TracedValue<unsigned int>::Connect(ns3::CallbackBase const & cb, std::basic_string<char,std::char_traits<char>,std::allocator<char> > path) [member function]
    cls.add_method('Connect', 
                   'void', 
                   [param('ns3::CallbackBase const &', 'cb'), param('std::string', 'path')])
    ## traced-value.h (module 'core'): void ns3::TracedValue<unsigned int>::ConnectWithoutContext(ns3::CallbackBase const & cb) [member function]
    cls.add_method('ConnectWithoutContext', 
                   'void', 
                   [param('ns3::CallbackBase const &', 'cb')])
    ## traced-value.h (module 'core'): void ns3::TracedValue<unsigned int>::Disconnect(ns3::CallbackBase const & cb, std::basic_string<char,std::char_traits<char>,std::allocator<char> > path) [member function]
    cls.add_method('Disconnect', 
                   'void', 
                   [param('ns3::CallbackBase const &', 'cb'), param('std::string', 'path')])
    ## traced-value.h (module 'core'): void ns3::TracedValue<unsigned int>::DisconnectWithoutContext(ns3::CallbackBase const & cb) [member function]
    cls.add_method('DisconnectWithoutContext', 
                   'void', 
                   [param('ns3::CallbackBase const &', 'cb')])
    ## traced-value.h (module 'core'): unsigned int ns3::TracedValue<unsigned int>::Get() const [member function]
    cls.add_method('Get', 
                   'unsigned int', 
                   [], 
                   is_const=True)
    ## traced-value.h (module 'core'): void ns3::TracedValue<unsigned int>::Set(unsigned int const & v) [member function]
    cls.add_method('Set', 
                   'void', 
                   [param('unsigned int const &', 'v')])
    return

def register_Ns3TypeId_methods(root_module, cls):
    cls.add_binary_comparison_operator('!=')
    cls.add_binary_comparison_operator('<')
    cls.add_output_stream_operator()
    cls.add_binary_comparison_operator('==')
    ## type-id.h (module 'core'): ns3::TypeId::TypeId(char const * name) [constructor]
    cls.add_constructor([param('char const *', 'name')])
    ## type-id.h (module 'core'): ns3::TypeId::TypeId() [constructor]
    cls.add_constructor([])
    ## type-id.h (module 'core'): ns3::TypeId::TypeId(ns3::TypeId const & o) [copy constructor]
    cls.add_constructor([param('ns3::TypeId const &', 'o')])
    ## type-id.h (module 'core'): ns3::TypeId ns3::TypeId::AddAttribute(std::string name, std::string help, ns3::AttributeValue const & initialValue, ns3::Ptr<ns3::AttributeAccessor const> accessor, ns3::Ptr<ns3::AttributeChecker const> checker) [member function]
    cls.add_method('AddAttribute', 
                   'ns3::TypeId', 
                   [param('std::string', 'name'), param('std::string', 'help'), param('ns3::AttributeValue const &', 'initialValue'), param('ns3::Ptr< ns3::AttributeAccessor const >', 'accessor'), param('ns3::Ptr< ns3::AttributeChecker const >', 'checker')])
    ## type-id.h (module 'core'): ns3::TypeId ns3::TypeId::AddAttribute(std::string name, std::string help, uint32_t flags, ns3::AttributeValue const & initialValue, ns3::Ptr<ns3::AttributeAccessor const> accessor, ns3::Ptr<ns3::AttributeChecker const> checker) [member function]
    cls.add_method('AddAttribute', 
                   'ns3::TypeId', 
                   [param('std::string', 'name'), param('std::string', 'help'), param('uint32_t', 'flags'), param('ns3::AttributeValue const &', 'initialValue'), param('ns3::Ptr< ns3::AttributeAccessor const >', 'accessor'), param('ns3::Ptr< ns3::AttributeChecker const >', 'checker')])
    ## type-id.h (module 'core'): ns3::TypeId ns3::TypeId::AddTraceSource(std::string name, std::string help, ns3::Ptr<ns3::TraceSourceAccessor const> accessor) [member function]
    cls.add_method('AddTraceSource', 
                   'ns3::TypeId', 
                   [param('std::string', 'name'), param('std::string', 'help'), param('ns3::Ptr< ns3::TraceSourceAccessor const >', 'accessor')])
    ## type-id.h (module 'core'): ns3::TypeId::AttributeInformation ns3::TypeId::GetAttribute(uint32_t i) const [member function]
    cls.add_method('GetAttribute', 
                   'ns3::TypeId::AttributeInformation', 
                   [param('uint32_t', 'i')], 
                   is_const=True)
    ## type-id.h (module 'core'): std::string ns3::TypeId::GetAttributeFullName(uint32_t i) const [member function]
    cls.add_method('GetAttributeFullName', 
                   'std::string', 
                   [param('uint32_t', 'i')], 
                   is_const=True)
    ## type-id.h (module 'core'): uint32_t ns3::TypeId::GetAttributeN() const [member function]
    cls.add_method('GetAttributeN', 
                   'uint32_t', 
                   [], 
                   is_const=True)
    ## type-id.h (module 'core'): ns3::Callback<ns3::ObjectBase*,ns3::empty,ns3::empty,ns3::empty,ns3::empty,ns3::empty,ns3::empty,ns3::empty,ns3::empty,ns3::empty> ns3::TypeId::GetConstructor() const [member function]
    cls.add_method('GetConstructor', 
                   'ns3::Callback< ns3::ObjectBase *, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty >', 
                   [], 
                   is_const=True)
    ## type-id.h (module 'core'): std::string ns3::TypeId::GetGroupName() const [member function]
    cls.add_method('GetGroupName', 
                   'std::string', 
                   [], 
                   is_const=True)
    ## type-id.h (module 'core'): std::string ns3::TypeId::GetName() const [member function]
    cls.add_method('GetName', 
                   'std::string', 
                   [], 
                   is_const=True)
    ## type-id.h (module 'core'): ns3::TypeId ns3::TypeId::GetParent() const [member function]
    cls.add_method('GetParent', 
                   'ns3::TypeId', 
                   [], 
                   is_const=True)
    ## type-id.h (module 'core'): static ns3::TypeId ns3::TypeId::GetRegistered(uint32_t i) [member function]
    cls.add_method('GetRegistered', 
                   'ns3::TypeId', 
                   [param('uint32_t', 'i')], 
                   is_static=True)
    ## type-id.h (module 'core'): static uint32_t ns3::TypeId::GetRegisteredN() [member function]
    cls.add_method('GetRegisteredN', 
                   'uint32_t', 
                   [], 
                   is_static=True)
    ## type-id.h (module 'core'): ns3::TypeId::TraceSourceInformation ns3::TypeId::GetTraceSource(uint32_t i) const [member function]
    cls.add_method('GetTraceSource', 
                   'ns3::TypeId::TraceSourceInformation', 
                   [param('uint32_t', 'i')], 
                   is_const=True)
    ## type-id.h (module 'core'): uint32_t ns3::TypeId::GetTraceSourceN() const [member function]
    cls.add_method('GetTraceSourceN', 
                   'uint32_t', 
                   [], 
                   is_const=True)
    ## type-id.h (module 'core'): uint16_t ns3::TypeId::GetUid() const [member function]
    cls.add_method('GetUid', 
                   'uint16_t', 
                   [], 
                   is_const=True)
    ## type-id.h (module 'core'): bool ns3::TypeId::HasConstructor() const [member function]
    cls.add_method('HasConstructor', 
                   'bool', 
                   [], 
                   is_const=True)
    ## type-id.h (module 'core'): bool ns3::TypeId::HasParent() const [member function]
    cls.add_method('HasParent', 
                   'bool', 
                   [], 
                   is_const=True)
    ## type-id.h (module 'core'): ns3::TypeId ns3::TypeId::HideFromDocumentation() [member function]
    cls.add_method('HideFromDocumentation', 
                   'ns3::TypeId', 
                   [])
    ## type-id.h (module 'core'): bool ns3::TypeId::IsChildOf(ns3::TypeId other) const [member function]
    cls.add_method('IsChildOf', 
                   'bool', 
                   [param('ns3::TypeId', 'other')], 
                   is_const=True)
    ## type-id.h (module 'core'): bool ns3::TypeId::LookupAttributeByName(std::string name, ns3::TypeId::AttributeInformation * info) const [member function]
    cls.add_method('LookupAttributeByName', 
                   'bool', 
                   [param('std::string', 'name'), param('ns3::TypeId::AttributeInformation *', 'info')], 
                   is_const=True)
    ## type-id.h (module 'core'): static ns3::TypeId ns3::TypeId::LookupByName(std::string name) [member function]
    cls.add_method('LookupByName', 
                   'ns3::TypeId', 
                   [param('std::string', 'name')], 
                   is_static=True)
    ## type-id.h (module 'core'): ns3::Ptr<ns3::TraceSourceAccessor const> ns3::TypeId::LookupTraceSourceByName(std::string name) const [member function]
    cls.add_method('LookupTraceSourceByName', 
                   'ns3::Ptr< ns3::TraceSourceAccessor const >', 
                   [param('std::string', 'name')], 
                   is_const=True)
    ## type-id.h (module 'core'): bool ns3::TypeId::MustHideFromDocumentation() const [member function]
    cls.add_method('MustHideFromDocumentation', 
                   'bool', 
                   [], 
                   is_const=True)
    ## type-id.h (module 'core'): bool ns3::TypeId::SetAttributeInitialValue(uint32_t i, ns3::Ptr<ns3::AttributeValue const> initialValue) [member function]
    cls.add_method('SetAttributeInitialValue', 
                   'bool', 
                   [param('uint32_t', 'i'), param('ns3::Ptr< ns3::AttributeValue const >', 'initialValue')])
    ## type-id.h (module 'core'): ns3::TypeId ns3::TypeId::SetGroupName(std::string groupName) [member function]
    cls.add_method('SetGroupName', 
                   'ns3::TypeId', 
                   [param('std::string', 'groupName')])
    ## type-id.h (module 'core'): ns3::TypeId ns3::TypeId::SetParent(ns3::TypeId tid) [member function]
    cls.add_method('SetParent', 
                   'ns3::TypeId', 
                   [param('ns3::TypeId', 'tid')])
    ## type-id.h (module 'core'): void ns3::TypeId::SetUid(uint16_t tid) [member function]
    cls.add_method('SetUid', 
                   'void', 
                   [param('uint16_t', 'tid')])
    return

def register_Ns3TypeIdAttributeInformation_methods(root_module, cls):
    ## type-id.h (module 'core'): ns3::TypeId::AttributeInformation::AttributeInformation() [constructor]
    cls.add_constructor([])
    ## type-id.h (module 'core'): ns3::TypeId::AttributeInformation::AttributeInformation(ns3::TypeId::AttributeInformation const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::TypeId::AttributeInformation const &', 'arg0')])
    ## type-id.h (module 'core'): ns3::TypeId::AttributeInformation::accessor [variable]
    cls.add_instance_attribute('accessor', 'ns3::Ptr< ns3::AttributeAccessor const >', is_const=False)
    ## type-id.h (module 'core'): ns3::TypeId::AttributeInformation::checker [variable]
    cls.add_instance_attribute('checker', 'ns3::Ptr< ns3::AttributeChecker const >', is_const=False)
    ## type-id.h (module 'core'): ns3::TypeId::AttributeInformation::flags [variable]
    cls.add_instance_attribute('flags', 'uint32_t', is_const=False)
    ## type-id.h (module 'core'): ns3::TypeId::AttributeInformation::help [variable]
    cls.add_instance_attribute('help', 'std::string', is_const=False)
    ## type-id.h (module 'core'): ns3::TypeId::AttributeInformation::initialValue [variable]
    cls.add_instance_attribute('initialValue', 'ns3::Ptr< ns3::AttributeValue const >', is_const=False)
    ## type-id.h (module 'core'): ns3::TypeId::AttributeInformation::name [variable]
    cls.add_instance_attribute('name', 'std::string', is_const=False)
    ## type-id.h (module 'core'): ns3::TypeId::AttributeInformation::originalInitialValue [variable]
    cls.add_instance_attribute('originalInitialValue', 'ns3::Ptr< ns3::AttributeValue const >', is_const=False)
    return

def register_Ns3TypeIdTraceSourceInformation_methods(root_module, cls):
    ## type-id.h (module 'core'): ns3::TypeId::TraceSourceInformation::TraceSourceInformation() [constructor]
    cls.add_constructor([])
    ## type-id.h (module 'core'): ns3::TypeId::TraceSourceInformation::TraceSourceInformation(ns3::TypeId::TraceSourceInformation const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::TypeId::TraceSourceInformation const &', 'arg0')])
    ## type-id.h (module 'core'): ns3::TypeId::TraceSourceInformation::accessor [variable]
    cls.add_instance_attribute('accessor', 'ns3::Ptr< ns3::TraceSourceAccessor const >', is_const=False)
    ## type-id.h (module 'core'): ns3::TypeId::TraceSourceInformation::help [variable]
    cls.add_instance_attribute('help', 'std::string', is_const=False)
    ## type-id.h (module 'core'): ns3::TypeId::TraceSourceInformation::name [variable]
    cls.add_instance_attribute('name', 'std::string', is_const=False)
    return

def register_Ns3Empty_methods(root_module, cls):
    ## empty.h (module 'core'): ns3::empty::empty() [constructor]
    cls.add_constructor([])
    ## empty.h (module 'core'): ns3::empty::empty(ns3::empty const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::empty const &', 'arg0')])
    return

def register_Ns3Int64x64_t_methods(root_module, cls):
    cls.add_binary_comparison_operator('!=')
    cls.add_inplace_numeric_operator('+=', param('ns3::int64x64_t const &', 'right'))
    cls.add_binary_numeric_operator('*', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('long long unsigned int const', 'right'))
    cls.add_binary_numeric_operator('*', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('long unsigned int const', 'right'))
    cls.add_binary_numeric_operator('*', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('unsigned int const', 'right'))
    cls.add_binary_numeric_operator('*', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('short unsigned int const', 'right'))
    cls.add_binary_numeric_operator('*', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('unsigned char const', 'right'))
    cls.add_binary_numeric_operator('*', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('long long int const', 'right'))
    cls.add_binary_numeric_operator('*', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('long int const', 'right'))
    cls.add_binary_numeric_operator('*', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('int const', 'right'))
    cls.add_binary_numeric_operator('*', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('short int const', 'right'))
    cls.add_binary_numeric_operator('*', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('signed char const', 'right'))
    cls.add_binary_numeric_operator('*', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('double const', 'right'))
    cls.add_binary_numeric_operator('*', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('ns3::int64x64_t const &', 'right'))
    cls.add_binary_numeric_operator('+', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('long long unsigned int const', 'right'))
    cls.add_binary_numeric_operator('+', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('long unsigned int const', 'right'))
    cls.add_binary_numeric_operator('+', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('unsigned int const', 'right'))
    cls.add_binary_numeric_operator('+', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('short unsigned int const', 'right'))
    cls.add_binary_numeric_operator('+', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('unsigned char const', 'right'))
    cls.add_binary_numeric_operator('+', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('long long int const', 'right'))
    cls.add_binary_numeric_operator('+', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('long int const', 'right'))
    cls.add_binary_numeric_operator('+', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('int const', 'right'))
    cls.add_binary_numeric_operator('+', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('short int const', 'right'))
    cls.add_binary_numeric_operator('+', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('signed char const', 'right'))
    cls.add_binary_numeric_operator('+', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('double const', 'right'))
    cls.add_binary_numeric_operator('+', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('ns3::int64x64_t const &', 'right'))
    cls.add_binary_numeric_operator('-', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('long long unsigned int const', 'right'))
    cls.add_binary_numeric_operator('-', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('long unsigned int const', 'right'))
    cls.add_binary_numeric_operator('-', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('unsigned int const', 'right'))
    cls.add_binary_numeric_operator('-', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('short unsigned int const', 'right'))
    cls.add_binary_numeric_operator('-', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('unsigned char const', 'right'))
    cls.add_binary_numeric_operator('-', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('long long int const', 'right'))
    cls.add_binary_numeric_operator('-', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('long int const', 'right'))
    cls.add_binary_numeric_operator('-', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('int const', 'right'))
    cls.add_binary_numeric_operator('-', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('short int const', 'right'))
    cls.add_binary_numeric_operator('-', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('signed char const', 'right'))
    cls.add_binary_numeric_operator('-', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('double const', 'right'))
    cls.add_unary_numeric_operator('-')
    cls.add_binary_numeric_operator('-', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('ns3::int64x64_t const &', 'right'))
    cls.add_binary_numeric_operator('/', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('long long unsigned int const', 'right'))
    cls.add_binary_numeric_operator('/', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('long unsigned int const', 'right'))
    cls.add_binary_numeric_operator('/', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('unsigned int const', 'right'))
    cls.add_binary_numeric_operator('/', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('short unsigned int const', 'right'))
    cls.add_binary_numeric_operator('/', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('unsigned char const', 'right'))
    cls.add_binary_numeric_operator('/', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('long long int const', 'right'))
    cls.add_binary_numeric_operator('/', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('long int const', 'right'))
    cls.add_binary_numeric_operator('/', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('int const', 'right'))
    cls.add_binary_numeric_operator('/', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('short int const', 'right'))
    cls.add_binary_numeric_operator('/', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('signed char const', 'right'))
    cls.add_binary_numeric_operator('/', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('double const', 'right'))
    cls.add_binary_numeric_operator('/', root_module['ns3::int64x64_t'], root_module['ns3::int64x64_t'], param('ns3::int64x64_t const &', 'right'))
    cls.add_binary_comparison_operator('<')
    cls.add_binary_comparison_operator('>')
    cls.add_inplace_numeric_operator('*=', param('ns3::int64x64_t const &', 'right'))
    cls.add_inplace_numeric_operator('-=', param('ns3::int64x64_t const &', 'right'))
    cls.add_inplace_numeric_operator('/=', param('ns3::int64x64_t const &', 'right'))
    cls.add_output_stream_operator()
    cls.add_binary_comparison_operator('<=')
    cls.add_binary_comparison_operator('==')
    cls.add_binary_comparison_operator('>=')
    ## int64x64-double.h (module 'core'): ns3::int64x64_t::int64x64_t() [constructor]
    cls.add_constructor([])
    ## int64x64-double.h (module 'core'): ns3::int64x64_t::int64x64_t(double v) [constructor]
    cls.add_constructor([param('double', 'v')])
    ## int64x64-double.h (module 'core'): ns3::int64x64_t::int64x64_t(int v) [constructor]
    cls.add_constructor([param('int', 'v')])
    ## int64x64-double.h (module 'core'): ns3::int64x64_t::int64x64_t(long int v) [constructor]
    cls.add_constructor([param('long int', 'v')])
    ## int64x64-double.h (module 'core'): ns3::int64x64_t::int64x64_t(long long int v) [constructor]
    cls.add_constructor([param('long long int', 'v')])
    ## int64x64-double.h (module 'core'): ns3::int64x64_t::int64x64_t(unsigned int v) [constructor]
    cls.add_constructor([param('unsigned int', 'v')])
    ## int64x64-double.h (module 'core'): ns3::int64x64_t::int64x64_t(long unsigned int v) [constructor]
    cls.add_constructor([param('long unsigned int', 'v')])
    ## int64x64-double.h (module 'core'): ns3::int64x64_t::int64x64_t(long long unsigned int v) [constructor]
    cls.add_constructor([param('long long unsigned int', 'v')])
    ## int64x64-double.h (module 'core'): ns3::int64x64_t::int64x64_t(int64_t hi, uint64_t lo) [constructor]
    cls.add_constructor([param('int64_t', 'hi'), param('uint64_t', 'lo')])
    ## int64x64-double.h (module 'core'): ns3::int64x64_t::int64x64_t(ns3::int64x64_t const & o) [copy constructor]
    cls.add_constructor([param('ns3::int64x64_t const &', 'o')])
    ## int64x64-double.h (module 'core'): double ns3::int64x64_t::GetDouble() const [member function]
    cls.add_method('GetDouble', 
                   'double', 
                   [], 
                   is_const=True)
    ## int64x64-double.h (module 'core'): int64_t ns3::int64x64_t::GetHigh() const [member function]
    cls.add_method('GetHigh', 
                   'int64_t', 
                   [], 
                   is_const=True)
    ## int64x64-double.h (module 'core'): uint64_t ns3::int64x64_t::GetLow() const [member function]
    cls.add_method('GetLow', 
                   'uint64_t', 
                   [], 
                   is_const=True)
    ## int64x64-double.h (module 'core'): static ns3::int64x64_t ns3::int64x64_t::Invert(uint64_t v) [member function]
    cls.add_method('Invert', 
                   'ns3::int64x64_t', 
                   [param('uint64_t', 'v')], 
                   is_static=True)
    ## int64x64-double.h (module 'core'): void ns3::int64x64_t::MulByInvert(ns3::int64x64_t const & o) [member function]
    cls.add_method('MulByInvert', 
                   'void', 
                   [param('ns3::int64x64_t const &', 'o')])
    return

def register_Ns3Chunk_methods(root_module, cls):
    ## chunk.h (module 'network'): ns3::Chunk::Chunk() [constructor]
    cls.add_constructor([])
    ## chunk.h (module 'network'): ns3::Chunk::Chunk(ns3::Chunk const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::Chunk const &', 'arg0')])
    ## chunk.h (module 'network'): uint32_t ns3::Chunk::Deserialize(ns3::Buffer::Iterator start) [member function]
    cls.add_method('Deserialize', 
                   'uint32_t', 
                   [param('ns3::Buffer::Iterator', 'start')], 
                   is_pure_virtual=True, is_virtual=True)
    ## chunk.h (module 'network'): static ns3::TypeId ns3::Chunk::GetTypeId() [member function]
    cls.add_method('GetTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_static=True)
    ## chunk.h (module 'network'): void ns3::Chunk::Print(std::ostream & os) const [member function]
    cls.add_method('Print', 
                   'void', 
                   [param('std::ostream &', 'os')], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    return

def register_Ns3Header_methods(root_module, cls):
    cls.add_output_stream_operator()
    ## header.h (module 'network'): ns3::Header::Header() [constructor]
    cls.add_constructor([])
    ## header.h (module 'network'): ns3::Header::Header(ns3::Header const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::Header const &', 'arg0')])
    ## header.h (module 'network'): uint32_t ns3::Header::Deserialize(ns3::Buffer::Iterator start) [member function]
    cls.add_method('Deserialize', 
                   'uint32_t', 
                   [param('ns3::Buffer::Iterator', 'start')], 
                   is_pure_virtual=True, is_virtual=True)
    ## header.h (module 'network'): uint32_t ns3::Header::GetSerializedSize() const [member function]
    cls.add_method('GetSerializedSize', 
                   'uint32_t', 
                   [], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## header.h (module 'network'): static ns3::TypeId ns3::Header::GetTypeId() [member function]
    cls.add_method('GetTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_static=True)
    ## header.h (module 'network'): void ns3::Header::Print(std::ostream & os) const [member function]
    cls.add_method('Print', 
                   'void', 
                   [param('std::ostream &', 'os')], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## header.h (module 'network'): void ns3::Header::Serialize(ns3::Buffer::Iterator start) const [member function]
    cls.add_method('Serialize', 
                   'void', 
                   [param('ns3::Buffer::Iterator', 'start')], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    return

def register_Ns3Ipv4Header_methods(root_module, cls):
    ## ipv4-header.h (module 'internet'): ns3::Ipv4Header::Ipv4Header(ns3::Ipv4Header const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::Ipv4Header const &', 'arg0')])
    ## ipv4-header.h (module 'internet'): ns3::Ipv4Header::Ipv4Header() [constructor]
    cls.add_constructor([])
    ## ipv4-header.h (module 'internet'): uint32_t ns3::Ipv4Header::Deserialize(ns3::Buffer::Iterator start) [member function]
    cls.add_method('Deserialize', 
                   'uint32_t', 
                   [param('ns3::Buffer::Iterator', 'start')], 
                   is_virtual=True)
    ## ipv4-header.h (module 'internet'): std::string ns3::Ipv4Header::DscpTypeToString(ns3::Ipv4Header::DscpType dscp) const [member function]
    cls.add_method('DscpTypeToString', 
                   'std::string', 
                   [param('ns3::Ipv4Header::DscpType', 'dscp')], 
                   is_const=True)
    ## ipv4-header.h (module 'internet'): std::string ns3::Ipv4Header::EcnTypeToString(ns3::Ipv4Header::EcnType ecn) const [member function]
    cls.add_method('EcnTypeToString', 
                   'std::string', 
                   [param('ns3::Ipv4Header::EcnType', 'ecn')], 
                   is_const=True)
    ## ipv4-header.h (module 'internet'): void ns3::Ipv4Header::EnableChecksum() [member function]
    cls.add_method('EnableChecksum', 
                   'void', 
                   [])
    ## ipv4-header.h (module 'internet'): ns3::Ipv4Address ns3::Ipv4Header::GetDestination() const [member function]
    cls.add_method('GetDestination', 
                   'ns3::Ipv4Address', 
                   [], 
                   is_const=True)
    ## ipv4-header.h (module 'internet'): ns3::Ipv4Header::DscpType ns3::Ipv4Header::GetDscp() const [member function]
    cls.add_method('GetDscp', 
                   'ns3::Ipv4Header::DscpType', 
                   [], 
                   is_const=True)
    ## ipv4-header.h (module 'internet'): ns3::Ipv4Header::EcnType ns3::Ipv4Header::GetEcn() const [member function]
    cls.add_method('GetEcn', 
                   'ns3::Ipv4Header::EcnType', 
                   [], 
                   is_const=True)
    ## ipv4-header.h (module 'internet'): uint16_t ns3::Ipv4Header::GetFragmentOffset() const [member function]
    cls.add_method('GetFragmentOffset', 
                   'uint16_t', 
                   [], 
                   is_const=True)
    ## ipv4-header.h (module 'internet'): uint16_t ns3::Ipv4Header::GetIdentification() const [member function]
    cls.add_method('GetIdentification', 
                   'uint16_t', 
                   [], 
                   is_const=True)
    ## ipv4-header.h (module 'internet'): ns3::TypeId ns3::Ipv4Header::GetInstanceTypeId() const [member function]
    cls.add_method('GetInstanceTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_const=True, is_virtual=True)
    ## ipv4-header.h (module 'internet'): uint16_t ns3::Ipv4Header::GetPayloadSize() const [member function]
    cls.add_method('GetPayloadSize', 
                   'uint16_t', 
                   [], 
                   is_const=True)
    ## ipv4-header.h (module 'internet'): uint8_t ns3::Ipv4Header::GetProtocol() const [member function]
    cls.add_method('GetProtocol', 
                   'uint8_t', 
                   [], 
                   is_const=True)
    ## ipv4-header.h (module 'internet'): uint32_t ns3::Ipv4Header::GetSerializedSize() const [member function]
    cls.add_method('GetSerializedSize', 
                   'uint32_t', 
                   [], 
                   is_const=True, is_virtual=True)
    ## ipv4-header.h (module 'internet'): ns3::Ipv4Address ns3::Ipv4Header::GetSource() const [member function]
    cls.add_method('GetSource', 
                   'ns3::Ipv4Address', 
                   [], 
                   is_const=True)
    ## ipv4-header.h (module 'internet'): uint8_t ns3::Ipv4Header::GetTos() const [member function]
    cls.add_method('GetTos', 
                   'uint8_t', 
                   [], 
                   is_const=True)
    ## ipv4-header.h (module 'internet'): uint8_t ns3::Ipv4Header::GetTtl() const [member function]
    cls.add_method('GetTtl', 
                   'uint8_t', 
                   [], 
                   is_const=True)
    ## ipv4-header.h (module 'internet'): static ns3::TypeId ns3::Ipv4Header::GetTypeId() [member function]
    cls.add_method('GetTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_static=True)
    ## ipv4-header.h (module 'internet'): bool ns3::Ipv4Header::IsChecksumOk() const [member function]
    cls.add_method('IsChecksumOk', 
                   'bool', 
                   [], 
                   is_const=True)
    ## ipv4-header.h (module 'internet'): bool ns3::Ipv4Header::IsDontFragment() const [member function]
    cls.add_method('IsDontFragment', 
                   'bool', 
                   [], 
                   is_const=True)
    ## ipv4-header.h (module 'internet'): bool ns3::Ipv4Header::IsLastFragment() const [member function]
    cls.add_method('IsLastFragment', 
                   'bool', 
                   [], 
                   is_const=True)
    ## ipv4-header.h (module 'internet'): void ns3::Ipv4Header::Print(std::ostream & os) const [member function]
    cls.add_method('Print', 
                   'void', 
                   [param('std::ostream &', 'os')], 
                   is_const=True, is_virtual=True)
    ## ipv4-header.h (module 'internet'): void ns3::Ipv4Header::Serialize(ns3::Buffer::Iterator start) const [member function]
    cls.add_method('Serialize', 
                   'void', 
                   [param('ns3::Buffer::Iterator', 'start')], 
                   is_const=True, is_virtual=True)
    ## ipv4-header.h (module 'internet'): void ns3::Ipv4Header::SetDestination(ns3::Ipv4Address destination) [member function]
    cls.add_method('SetDestination', 
                   'void', 
                   [param('ns3::Ipv4Address', 'destination')])
    ## ipv4-header.h (module 'internet'): void ns3::Ipv4Header::SetDontFragment() [member function]
    cls.add_method('SetDontFragment', 
                   'void', 
                   [])
    ## ipv4-header.h (module 'internet'): void ns3::Ipv4Header::SetDscp(ns3::Ipv4Header::DscpType dscp) [member function]
    cls.add_method('SetDscp', 
                   'void', 
                   [param('ns3::Ipv4Header::DscpType', 'dscp')])
    ## ipv4-header.h (module 'internet'): void ns3::Ipv4Header::SetEcn(ns3::Ipv4Header::EcnType ecn) [member function]
    cls.add_method('SetEcn', 
                   'void', 
                   [param('ns3::Ipv4Header::EcnType', 'ecn')])
    ## ipv4-header.h (module 'internet'): void ns3::Ipv4Header::SetFragmentOffset(uint16_t offsetBytes) [member function]
    cls.add_method('SetFragmentOffset', 
                   'void', 
                   [param('uint16_t', 'offsetBytes')])
    ## ipv4-header.h (module 'internet'): void ns3::Ipv4Header::SetIdentification(uint16_t identification) [member function]
    cls.add_method('SetIdentification', 
                   'void', 
                   [param('uint16_t', 'identification')])
    ## ipv4-header.h (module 'internet'): void ns3::Ipv4Header::SetLastFragment() [member function]
    cls.add_method('SetLastFragment', 
                   'void', 
                   [])
    ## ipv4-header.h (module 'internet'): void ns3::Ipv4Header::SetMayFragment() [member function]
    cls.add_method('SetMayFragment', 
                   'void', 
                   [])
    ## ipv4-header.h (module 'internet'): void ns3::Ipv4Header::SetMoreFragments() [member function]
    cls.add_method('SetMoreFragments', 
                   'void', 
                   [])
    ## ipv4-header.h (module 'internet'): void ns3::Ipv4Header::SetPayloadSize(uint16_t size) [member function]
    cls.add_method('SetPayloadSize', 
                   'void', 
                   [param('uint16_t', 'size')])
    ## ipv4-header.h (module 'internet'): void ns3::Ipv4Header::SetProtocol(uint8_t num) [member function]
    cls.add_method('SetProtocol', 
                   'void', 
                   [param('uint8_t', 'num')])
    ## ipv4-header.h (module 'internet'): void ns3::Ipv4Header::SetSource(ns3::Ipv4Address source) [member function]
    cls.add_method('SetSource', 
                   'void', 
                   [param('ns3::Ipv4Address', 'source')])
    ## ipv4-header.h (module 'internet'): void ns3::Ipv4Header::SetTos(uint8_t tos) [member function]
    cls.add_method('SetTos', 
                   'void', 
                   [param('uint8_t', 'tos')])
    ## ipv4-header.h (module 'internet'): void ns3::Ipv4Header::SetTtl(uint8_t ttl) [member function]
    cls.add_method('SetTtl', 
                   'void', 
                   [param('uint8_t', 'ttl')])
    return

def register_Ns3Ipv6Header_methods(root_module, cls):
    ## ipv6-header.h (module 'internet'): ns3::Ipv6Header::Ipv6Header(ns3::Ipv6Header const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::Ipv6Header const &', 'arg0')])
    ## ipv6-header.h (module 'internet'): ns3::Ipv6Header::Ipv6Header() [constructor]
    cls.add_constructor([])
    ## ipv6-header.h (module 'internet'): uint32_t ns3::Ipv6Header::Deserialize(ns3::Buffer::Iterator start) [member function]
    cls.add_method('Deserialize', 
                   'uint32_t', 
                   [param('ns3::Buffer::Iterator', 'start')], 
                   is_virtual=True)
    ## ipv6-header.h (module 'internet'): ns3::Ipv6Address ns3::Ipv6Header::GetDestinationAddress() const [member function]
    cls.add_method('GetDestinationAddress', 
                   'ns3::Ipv6Address', 
                   [], 
                   is_const=True)
    ## ipv6-header.h (module 'internet'): uint32_t ns3::Ipv6Header::GetFlowLabel() const [member function]
    cls.add_method('GetFlowLabel', 
                   'uint32_t', 
                   [], 
                   is_const=True)
    ## ipv6-header.h (module 'internet'): uint8_t ns3::Ipv6Header::GetHopLimit() const [member function]
    cls.add_method('GetHopLimit', 
                   'uint8_t', 
                   [], 
                   is_const=True)
    ## ipv6-header.h (module 'internet'): ns3::TypeId ns3::Ipv6Header::GetInstanceTypeId() const [member function]
    cls.add_method('GetInstanceTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_const=True, is_virtual=True)
    ## ipv6-header.h (module 'internet'): uint8_t ns3::Ipv6Header::GetNextHeader() const [member function]
    cls.add_method('GetNextHeader', 
                   'uint8_t', 
                   [], 
                   is_const=True)
    ## ipv6-header.h (module 'internet'): uint16_t ns3::Ipv6Header::GetPayloadLength() const [member function]
    cls.add_method('GetPayloadLength', 
                   'uint16_t', 
                   [], 
                   is_const=True)
    ## ipv6-header.h (module 'internet'): uint32_t ns3::Ipv6Header::GetSerializedSize() const [member function]
    cls.add_method('GetSerializedSize', 
                   'uint32_t', 
                   [], 
                   is_const=True, is_virtual=True)
    ## ipv6-header.h (module 'internet'): ns3::Ipv6Address ns3::Ipv6Header::GetSourceAddress() const [member function]
    cls.add_method('GetSourceAddress', 
                   'ns3::Ipv6Address', 
                   [], 
                   is_const=True)
    ## ipv6-header.h (module 'internet'): uint8_t ns3::Ipv6Header::GetTrafficClass() const [member function]
    cls.add_method('GetTrafficClass', 
                   'uint8_t', 
                   [], 
                   is_const=True)
    ## ipv6-header.h (module 'internet'): static ns3::TypeId ns3::Ipv6Header::GetTypeId() [member function]
    cls.add_method('GetTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_static=True)
    ## ipv6-header.h (module 'internet'): void ns3::Ipv6Header::Print(std::ostream & os) const [member function]
    cls.add_method('Print', 
                   'void', 
                   [param('std::ostream &', 'os')], 
                   is_const=True, is_virtual=True)
    ## ipv6-header.h (module 'internet'): void ns3::Ipv6Header::Serialize(ns3::Buffer::Iterator start) const [member function]
    cls.add_method('Serialize', 
                   'void', 
                   [param('ns3::Buffer::Iterator', 'start')], 
                   is_const=True, is_virtual=True)
    ## ipv6-header.h (module 'internet'): void ns3::Ipv6Header::SetDestinationAddress(ns3::Ipv6Address dst) [member function]
    cls.add_method('SetDestinationAddress', 
                   'void', 
                   [param('ns3::Ipv6Address', 'dst')])
    ## ipv6-header.h (module 'internet'): void ns3::Ipv6Header::SetFlowLabel(uint32_t flow) [member function]
    cls.add_method('SetFlowLabel', 
                   'void', 
                   [param('uint32_t', 'flow')])
    ## ipv6-header.h (module 'internet'): void ns3::Ipv6Header::SetHopLimit(uint8_t limit) [member function]
    cls.add_method('SetHopLimit', 
                   'void', 
                   [param('uint8_t', 'limit')])
    ## ipv6-header.h (module 'internet'): void ns3::Ipv6Header::SetNextHeader(uint8_t next) [member function]
    cls.add_method('SetNextHeader', 
                   'void', 
                   [param('uint8_t', 'next')])
    ## ipv6-header.h (module 'internet'): void ns3::Ipv6Header::SetPayloadLength(uint16_t len) [member function]
    cls.add_method('SetPayloadLength', 
                   'void', 
                   [param('uint16_t', 'len')])
    ## ipv6-header.h (module 'internet'): void ns3::Ipv6Header::SetSourceAddress(ns3::Ipv6Address src) [member function]
    cls.add_method('SetSourceAddress', 
                   'void', 
                   [param('ns3::Ipv6Address', 'src')])
    ## ipv6-header.h (module 'internet'): void ns3::Ipv6Header::SetTrafficClass(uint8_t traffic) [member function]
    cls.add_method('SetTrafficClass', 
                   'void', 
                   [param('uint8_t', 'traffic')])
    return

def register_Ns3MpTcpStateMachine_methods(root_module, cls):
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpStateMachine::MpTcpStateMachine(ns3::MpTcpStateMachine const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::MpTcpStateMachine const &', 'arg0')])
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpStateMachine::MpTcpStateMachine() [constructor]
    cls.add_constructor([])
    ## mp-tcp-typedefs.h (module 'mptcp'): std::string ns3::MpTcpStateMachine::printAction(ns3::Actions_t a) [member function]
    cls.add_method('printAction', 
                   'std::string', 
                   [param('ns3::Actions_t', 'a')])
    ## mp-tcp-typedefs.h (module 'mptcp'): std::string ns3::MpTcpStateMachine::printEvent(ns3::Events_t e) [member function]
    cls.add_method('printEvent', 
                   'std::string', 
                   [param('ns3::Events_t', 'e')])
    ## mp-tcp-typedefs.h (module 'mptcp'): std::string ns3::MpTcpStateMachine::printState(ns3::TcpStates_t s) [member function]
    cls.add_method('printState', 
                   'std::string', 
                   [param('ns3::TcpStates_t', 's')])
    return

def register_Ns3Object_methods(root_module, cls):
    ## object.h (module 'core'): ns3::Object::Object() [constructor]
    cls.add_constructor([])
    ## object.h (module 'core'): void ns3::Object::AggregateObject(ns3::Ptr<ns3::Object> other) [member function]
    cls.add_method('AggregateObject', 
                   'void', 
                   [param('ns3::Ptr< ns3::Object >', 'other')])
    ## object.h (module 'core'): void ns3::Object::Dispose() [member function]
    cls.add_method('Dispose', 
                   'void', 
                   [])
    ## object.h (module 'core'): ns3::Object::AggregateIterator ns3::Object::GetAggregateIterator() const [member function]
    cls.add_method('GetAggregateIterator', 
                   'ns3::Object::AggregateIterator', 
                   [], 
                   is_const=True)
    ## object.h (module 'core'): ns3::TypeId ns3::Object::GetInstanceTypeId() const [member function]
    cls.add_method('GetInstanceTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_const=True, is_virtual=True)
    ## object.h (module 'core'): static ns3::TypeId ns3::Object::GetTypeId() [member function]
    cls.add_method('GetTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_static=True)
    ## object.h (module 'core'): void ns3::Object::Start() [member function]
    cls.add_method('Start', 
                   'void', 
                   [])
    ## object.h (module 'core'): ns3::Object::Object(ns3::Object const & o) [copy constructor]
    cls.add_constructor([param('ns3::Object const &', 'o')], 
                        visibility='protected')
    ## object.h (module 'core'): void ns3::Object::DoDispose() [member function]
    cls.add_method('DoDispose', 
                   'void', 
                   [], 
                   visibility='protected', is_virtual=True)
    ## object.h (module 'core'): void ns3::Object::DoStart() [member function]
    cls.add_method('DoStart', 
                   'void', 
                   [], 
                   visibility='protected', is_virtual=True)
    ## object.h (module 'core'): void ns3::Object::NotifyNewAggregate() [member function]
    cls.add_method('NotifyNewAggregate', 
                   'void', 
                   [], 
                   visibility='protected', is_virtual=True)
    return

def register_Ns3ObjectAggregateIterator_methods(root_module, cls):
    ## object.h (module 'core'): ns3::Object::AggregateIterator::AggregateIterator(ns3::Object::AggregateIterator const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::Object::AggregateIterator const &', 'arg0')])
    ## object.h (module 'core'): ns3::Object::AggregateIterator::AggregateIterator() [constructor]
    cls.add_constructor([])
    ## object.h (module 'core'): bool ns3::Object::AggregateIterator::HasNext() const [member function]
    cls.add_method('HasNext', 
                   'bool', 
                   [], 
                   is_const=True)
    ## object.h (module 'core'): ns3::Ptr<ns3::Object const> ns3::Object::AggregateIterator::Next() [member function]
    cls.add_method('Next', 
                   'ns3::Ptr< ns3::Object const >', 
                   [])
    return

def register_Ns3OptAddAddress_methods(root_module, cls):
    ## mp-tcp-header.h (module 'mptcp'): ns3::OptAddAddress::OptAddAddress(ns3::OptAddAddress const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::OptAddAddress const &', 'arg0')])
    ## mp-tcp-header.h (module 'mptcp'): ns3::OptAddAddress::OptAddAddress(ns3::TcpOption_t oName, uint8_t aID, ns3::Ipv4Address address) [constructor]
    cls.add_constructor([param('ns3::TcpOption_t', 'oName'), param('uint8_t', 'aID'), param('ns3::Ipv4Address', 'address')])
    ## mp-tcp-header.h (module 'mptcp'): ns3::OptAddAddress::addr [variable]
    cls.add_instance_attribute('addr', 'ns3::Ipv4Address', is_const=False)
    ## mp-tcp-header.h (module 'mptcp'): ns3::OptAddAddress::addrID [variable]
    cls.add_instance_attribute('addrID', 'uint8_t', is_const=False)
    return

def register_Ns3OptDSACK_methods(root_module, cls):
    ## mp-tcp-header.h (module 'mptcp'): ns3::OptDSACK::OptDSACK(ns3::OptDSACK const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::OptDSACK const &', 'arg0')])
    ## mp-tcp-header.h (module 'mptcp'): ns3::OptDSACK::OptDSACK(ns3::TcpOption_t oName) [constructor]
    cls.add_constructor([param('ns3::TcpOption_t', 'oName')])
    ## mp-tcp-header.h (module 'mptcp'): void ns3::OptDSACK::AddBlock(uint64_t leftEdge, uint64_t rightEdge) [member function]
    cls.add_method('AddBlock', 
                   'void', 
                   [param('uint64_t', 'leftEdge'), param('uint64_t', 'rightEdge')])
    ## mp-tcp-header.h (module 'mptcp'): void ns3::OptDSACK::AddfstBlock(uint64_t leftEdge, uint64_t rightEdge) [member function]
    cls.add_method('AddfstBlock', 
                   'void', 
                   [param('uint64_t', 'leftEdge'), param('uint64_t', 'rightEdge')])
    ## mp-tcp-header.h (module 'mptcp'): ns3::OptDSACK::blocks [variable]
    cls.add_instance_attribute('blocks', 'std::vector< unsigned long >', is_const=False)
    return

def register_Ns3OptDataSeqMapping_methods(root_module, cls):
    ## mp-tcp-header.h (module 'mptcp'): ns3::OptDataSeqMapping::OptDataSeqMapping(ns3::OptDataSeqMapping const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::OptDataSeqMapping const &', 'arg0')])
    ## mp-tcp-header.h (module 'mptcp'): ns3::OptDataSeqMapping::OptDataSeqMapping(ns3::TcpOption_t oName, uint64_t dSeqNum, uint16_t dLevelLength, uint32_t sfSeqNum) [constructor]
    cls.add_constructor([param('ns3::TcpOption_t', 'oName'), param('uint64_t', 'dSeqNum'), param('uint16_t', 'dLevelLength'), param('uint32_t', 'sfSeqNum')])
    ## mp-tcp-header.h (module 'mptcp'): ns3::OptDataSeqMapping::dataLevelLength [variable]
    cls.add_instance_attribute('dataLevelLength', 'uint16_t', is_const=False)
    ## mp-tcp-header.h (module 'mptcp'): ns3::OptDataSeqMapping::dataSeqNumber [variable]
    cls.add_instance_attribute('dataSeqNumber', 'uint64_t', is_const=False)
    ## mp-tcp-header.h (module 'mptcp'): ns3::OptDataSeqMapping::subflowSeqNumber [variable]
    cls.add_instance_attribute('subflowSeqNumber', 'uint32_t', is_const=False)
    return

def register_Ns3OptJoinConnection_methods(root_module, cls):
    ## mp-tcp-header.h (module 'mptcp'): ns3::OptJoinConnection::OptJoinConnection(ns3::OptJoinConnection const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::OptJoinConnection const &', 'arg0')])
    ## mp-tcp-header.h (module 'mptcp'): ns3::OptJoinConnection::OptJoinConnection(ns3::TcpOption_t oName, uint32_t RxToken, uint8_t aID) [constructor]
    cls.add_constructor([param('ns3::TcpOption_t', 'oName'), param('uint32_t', 'RxToken'), param('uint8_t', 'aID')])
    ## mp-tcp-header.h (module 'mptcp'): ns3::OptJoinConnection::addrID [variable]
    cls.add_instance_attribute('addrID', 'uint8_t', is_const=False)
    ## mp-tcp-header.h (module 'mptcp'): ns3::OptJoinConnection::receiverToken [variable]
    cls.add_instance_attribute('receiverToken', 'uint32_t', is_const=False)
    return

def register_Ns3OptMultipathCapable_methods(root_module, cls):
    ## mp-tcp-header.h (module 'mptcp'): ns3::OptMultipathCapable::OptMultipathCapable(ns3::OptMultipathCapable const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::OptMultipathCapable const &', 'arg0')])
    ## mp-tcp-header.h (module 'mptcp'): ns3::OptMultipathCapable::OptMultipathCapable(ns3::TcpOption_t oName, uint32_t TxToken) [constructor]
    cls.add_constructor([param('ns3::TcpOption_t', 'oName'), param('uint32_t', 'TxToken')])
    ## mp-tcp-header.h (module 'mptcp'): ns3::OptMultipathCapable::senderToken [variable]
    cls.add_instance_attribute('senderToken', 'uint32_t', is_const=False)
    return

def register_Ns3OptRemoveAddress_methods(root_module, cls):
    ## mp-tcp-header.h (module 'mptcp'): ns3::OptRemoveAddress::OptRemoveAddress(ns3::OptRemoveAddress const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::OptRemoveAddress const &', 'arg0')])
    ## mp-tcp-header.h (module 'mptcp'): ns3::OptRemoveAddress::OptRemoveAddress(ns3::TcpOption_t oName, uint8_t aID) [constructor]
    cls.add_constructor([param('ns3::TcpOption_t', 'oName'), param('uint8_t', 'aID')])
    ## mp-tcp-header.h (module 'mptcp'): ns3::OptRemoveAddress::addrID [variable]
    cls.add_instance_attribute('addrID', 'uint8_t', is_const=False)
    return

def register_Ns3OptTimesTamp_methods(root_module, cls):
    ## mp-tcp-header.h (module 'mptcp'): ns3::OptTimesTamp::OptTimesTamp(ns3::OptTimesTamp const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::OptTimesTamp const &', 'arg0')])
    ## mp-tcp-header.h (module 'mptcp'): ns3::OptTimesTamp::OptTimesTamp(ns3::TcpOption_t oName, uint64_t tsval, uint64_t tsecr) [constructor]
    cls.add_constructor([param('ns3::TcpOption_t', 'oName'), param('uint64_t', 'tsval'), param('uint64_t', 'tsecr')])
    ## mp-tcp-header.h (module 'mptcp'): ns3::OptTimesTamp::TSecr [variable]
    cls.add_instance_attribute('TSecr', 'uint64_t', is_const=False)
    ## mp-tcp-header.h (module 'mptcp'): ns3::OptTimesTamp::TSval [variable]
    cls.add_instance_attribute('TSval', 'uint64_t', is_const=False)
    return

def register_Ns3RttEstimator_methods(root_module, cls):
    ## rtt-estimator.h (module 'internet'): ns3::RttEstimator::RttEstimator(ns3::RttEstimator const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::RttEstimator const &', 'arg0')])
    ## rtt-estimator.h (module 'internet'): ns3::RttEstimator::RttEstimator() [constructor]
    cls.add_constructor([])
    ## rtt-estimator.h (module 'internet'): ns3::Time ns3::RttEstimator::AckSeq(ns3::SequenceNumber32 ackSeq) [member function]
    cls.add_method('AckSeq', 
                   'ns3::Time', 
                   [param('ns3::SequenceNumber32', 'ackSeq')], 
                   is_virtual=True)
    ## rtt-estimator.h (module 'internet'): void ns3::RttEstimator::ClearSent() [member function]
    cls.add_method('ClearSent', 
                   'void', 
                   [], 
                   is_virtual=True)
    ## rtt-estimator.h (module 'internet'): ns3::Ptr<ns3::RttEstimator> ns3::RttEstimator::Copy() const [member function]
    cls.add_method('Copy', 
                   'ns3::Ptr< ns3::RttEstimator >', 
                   [], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## rtt-estimator.h (module 'internet'): ns3::Time ns3::RttEstimator::GetCurrentEstimate() const [member function]
    cls.add_method('GetCurrentEstimate', 
                   'ns3::Time', 
                   [], 
                   is_const=True)
    ## rtt-estimator.h (module 'internet'): ns3::Time ns3::RttEstimator::GetMinRto() const [member function]
    cls.add_method('GetMinRto', 
                   'ns3::Time', 
                   [], 
                   is_const=True)
    ## rtt-estimator.h (module 'internet'): static ns3::TypeId ns3::RttEstimator::GetTypeId() [member function]
    cls.add_method('GetTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_static=True)
    ## rtt-estimator.h (module 'internet'): void ns3::RttEstimator::IncreaseMultiplier() [member function]
    cls.add_method('IncreaseMultiplier', 
                   'void', 
                   [], 
                   is_virtual=True)
    ## rtt-estimator.h (module 'internet'): void ns3::RttEstimator::Init(ns3::SequenceNumber32 s) [member function]
    cls.add_method('Init', 
                   'void', 
                   [param('ns3::SequenceNumber32', 's')])
    ## rtt-estimator.h (module 'internet'): void ns3::RttEstimator::Measurement(ns3::Time t) [member function]
    cls.add_method('Measurement', 
                   'void', 
                   [param('ns3::Time', 't')], 
                   is_pure_virtual=True, is_virtual=True)
    ## rtt-estimator.h (module 'internet'): void ns3::RttEstimator::Reset() [member function]
    cls.add_method('Reset', 
                   'void', 
                   [], 
                   is_virtual=True)
    ## rtt-estimator.h (module 'internet'): void ns3::RttEstimator::ResetMultiplier() [member function]
    cls.add_method('ResetMultiplier', 
                   'void', 
                   [], 
                   is_virtual=True)
    ## rtt-estimator.h (module 'internet'): ns3::Time ns3::RttEstimator::RetransmitTimeout() [member function]
    cls.add_method('RetransmitTimeout', 
                   'ns3::Time', 
                   [], 
                   is_pure_virtual=True, is_virtual=True)
    ## rtt-estimator.h (module 'internet'): void ns3::RttEstimator::SentSeq(ns3::SequenceNumber32 seq, uint32_t size) [member function]
    cls.add_method('SentSeq', 
                   'void', 
                   [param('ns3::SequenceNumber32', 'seq'), param('uint32_t', 'size')], 
                   is_virtual=True)
    ## rtt-estimator.h (module 'internet'): void ns3::RttEstimator::SetCurrentEstimate(ns3::Time estimate) [member function]
    cls.add_method('SetCurrentEstimate', 
                   'void', 
                   [param('ns3::Time', 'estimate')])
    ## rtt-estimator.h (module 'internet'): void ns3::RttEstimator::SetMinRto(ns3::Time minRto) [member function]
    cls.add_method('SetMinRto', 
                   'void', 
                   [param('ns3::Time', 'minRto')])
    ## rtt-estimator.h (module 'internet'): void ns3::RttEstimator::pktRetransmit(ns3::SequenceNumber32 seq) [member function]
    cls.add_method('pktRetransmit', 
                   'void', 
                   [param('ns3::SequenceNumber32', 'seq')])
    return

def register_Ns3RttMeanDeviation_methods(root_module, cls):
    ## rtt-estimator.h (module 'internet'): ns3::RttMeanDeviation::RttMeanDeviation() [constructor]
    cls.add_constructor([])
    ## rtt-estimator.h (module 'internet'): ns3::RttMeanDeviation::RttMeanDeviation(ns3::RttMeanDeviation const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::RttMeanDeviation const &', 'arg0')])
    ## rtt-estimator.h (module 'internet'): ns3::Ptr<ns3::RttEstimator> ns3::RttMeanDeviation::Copy() const [member function]
    cls.add_method('Copy', 
                   'ns3::Ptr< ns3::RttEstimator >', 
                   [], 
                   is_const=True, is_virtual=True)
    ## rtt-estimator.h (module 'internet'): void ns3::RttMeanDeviation::Gain(double g) [member function]
    cls.add_method('Gain', 
                   'void', 
                   [param('double', 'g')])
    ## rtt-estimator.h (module 'internet'): static ns3::TypeId ns3::RttMeanDeviation::GetTypeId() [member function]
    cls.add_method('GetTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_static=True)
    ## rtt-estimator.h (module 'internet'): void ns3::RttMeanDeviation::Measurement(ns3::Time measure) [member function]
    cls.add_method('Measurement', 
                   'void', 
                   [param('ns3::Time', 'measure')], 
                   is_virtual=True)
    ## rtt-estimator.h (module 'internet'): void ns3::RttMeanDeviation::Reset() [member function]
    cls.add_method('Reset', 
                   'void', 
                   [], 
                   is_virtual=True)
    ## rtt-estimator.h (module 'internet'): ns3::Time ns3::RttMeanDeviation::RetransmitTimeout() [member function]
    cls.add_method('RetransmitTimeout', 
                   'ns3::Time', 
                   [], 
                   is_virtual=True)
    return

def register_Ns3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt___methods(root_module, cls):
    ## simple-ref-count.h (module 'core'): ns3::SimpleRefCount<ns3::AttributeAccessor, ns3::empty, ns3::DefaultDeleter<ns3::AttributeAccessor> >::SimpleRefCount() [constructor]
    cls.add_constructor([])
    ## simple-ref-count.h (module 'core'): ns3::SimpleRefCount<ns3::AttributeAccessor, ns3::empty, ns3::DefaultDeleter<ns3::AttributeAccessor> >::SimpleRefCount(ns3::SimpleRefCount<ns3::AttributeAccessor, ns3::empty, ns3::DefaultDeleter<ns3::AttributeAccessor> > const & o) [copy constructor]
    cls.add_constructor([param('ns3::SimpleRefCount< ns3::AttributeAccessor, ns3::empty, ns3::DefaultDeleter< ns3::AttributeAccessor > > const &', 'o')])
    ## simple-ref-count.h (module 'core'): static void ns3::SimpleRefCount<ns3::AttributeAccessor, ns3::empty, ns3::DefaultDeleter<ns3::AttributeAccessor> >::Cleanup() [member function]
    cls.add_method('Cleanup', 
                   'void', 
                   [], 
                   is_static=True)
    return

def register_Ns3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt___methods(root_module, cls):
    ## simple-ref-count.h (module 'core'): ns3::SimpleRefCount<ns3::AttributeChecker, ns3::empty, ns3::DefaultDeleter<ns3::AttributeChecker> >::SimpleRefCount() [constructor]
    cls.add_constructor([])
    ## simple-ref-count.h (module 'core'): ns3::SimpleRefCount<ns3::AttributeChecker, ns3::empty, ns3::DefaultDeleter<ns3::AttributeChecker> >::SimpleRefCount(ns3::SimpleRefCount<ns3::AttributeChecker, ns3::empty, ns3::DefaultDeleter<ns3::AttributeChecker> > const & o) [copy constructor]
    cls.add_constructor([param('ns3::SimpleRefCount< ns3::AttributeChecker, ns3::empty, ns3::DefaultDeleter< ns3::AttributeChecker > > const &', 'o')])
    ## simple-ref-count.h (module 'core'): static void ns3::SimpleRefCount<ns3::AttributeChecker, ns3::empty, ns3::DefaultDeleter<ns3::AttributeChecker> >::Cleanup() [member function]
    cls.add_method('Cleanup', 
                   'void', 
                   [], 
                   is_static=True)
    return

def register_Ns3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt___methods(root_module, cls):
    ## simple-ref-count.h (module 'core'): ns3::SimpleRefCount<ns3::AttributeValue, ns3::empty, ns3::DefaultDeleter<ns3::AttributeValue> >::SimpleRefCount() [constructor]
    cls.add_constructor([])
    ## simple-ref-count.h (module 'core'): ns3::SimpleRefCount<ns3::AttributeValue, ns3::empty, ns3::DefaultDeleter<ns3::AttributeValue> >::SimpleRefCount(ns3::SimpleRefCount<ns3::AttributeValue, ns3::empty, ns3::DefaultDeleter<ns3::AttributeValue> > const & o) [copy constructor]
    cls.add_constructor([param('ns3::SimpleRefCount< ns3::AttributeValue, ns3::empty, ns3::DefaultDeleter< ns3::AttributeValue > > const &', 'o')])
    ## simple-ref-count.h (module 'core'): static void ns3::SimpleRefCount<ns3::AttributeValue, ns3::empty, ns3::DefaultDeleter<ns3::AttributeValue> >::Cleanup() [member function]
    cls.add_method('Cleanup', 
                   'void', 
                   [], 
                   is_static=True)
    return

def register_Ns3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt___methods(root_module, cls):
    ## simple-ref-count.h (module 'core'): ns3::SimpleRefCount<ns3::CallbackImplBase, ns3::empty, ns3::DefaultDeleter<ns3::CallbackImplBase> >::SimpleRefCount() [constructor]
    cls.add_constructor([])
    ## simple-ref-count.h (module 'core'): ns3::SimpleRefCount<ns3::CallbackImplBase, ns3::empty, ns3::DefaultDeleter<ns3::CallbackImplBase> >::SimpleRefCount(ns3::SimpleRefCount<ns3::CallbackImplBase, ns3::empty, ns3::DefaultDeleter<ns3::CallbackImplBase> > const & o) [copy constructor]
    cls.add_constructor([param('ns3::SimpleRefCount< ns3::CallbackImplBase, ns3::empty, ns3::DefaultDeleter< ns3::CallbackImplBase > > const &', 'o')])
    ## simple-ref-count.h (module 'core'): static void ns3::SimpleRefCount<ns3::CallbackImplBase, ns3::empty, ns3::DefaultDeleter<ns3::CallbackImplBase> >::Cleanup() [member function]
    cls.add_method('Cleanup', 
                   'void', 
                   [], 
                   is_static=True)
    return

def register_Ns3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt___methods(root_module, cls):
    ## simple-ref-count.h (module 'core'): ns3::SimpleRefCount<ns3::EventImpl, ns3::empty, ns3::DefaultDeleter<ns3::EventImpl> >::SimpleRefCount() [constructor]
    cls.add_constructor([])
    ## simple-ref-count.h (module 'core'): ns3::SimpleRefCount<ns3::EventImpl, ns3::empty, ns3::DefaultDeleter<ns3::EventImpl> >::SimpleRefCount(ns3::SimpleRefCount<ns3::EventImpl, ns3::empty, ns3::DefaultDeleter<ns3::EventImpl> > const & o) [copy constructor]
    cls.add_constructor([param('ns3::SimpleRefCount< ns3::EventImpl, ns3::empty, ns3::DefaultDeleter< ns3::EventImpl > > const &', 'o')])
    ## simple-ref-count.h (module 'core'): static void ns3::SimpleRefCount<ns3::EventImpl, ns3::empty, ns3::DefaultDeleter<ns3::EventImpl> >::Cleanup() [member function]
    cls.add_method('Cleanup', 
                   'void', 
                   [], 
                   is_static=True)
    return

def register_Ns3SimpleRefCount__Ns3Ipv4MulticastRoute_Ns3Empty_Ns3DefaultDeleter__lt__ns3Ipv4MulticastRoute__gt___methods(root_module, cls):
    ## simple-ref-count.h (module 'core'): ns3::SimpleRefCount<ns3::Ipv4MulticastRoute, ns3::empty, ns3::DefaultDeleter<ns3::Ipv4MulticastRoute> >::SimpleRefCount() [constructor]
    cls.add_constructor([])
    ## simple-ref-count.h (module 'core'): ns3::SimpleRefCount<ns3::Ipv4MulticastRoute, ns3::empty, ns3::DefaultDeleter<ns3::Ipv4MulticastRoute> >::SimpleRefCount(ns3::SimpleRefCount<ns3::Ipv4MulticastRoute, ns3::empty, ns3::DefaultDeleter<ns3::Ipv4MulticastRoute> > const & o) [copy constructor]
    cls.add_constructor([param('ns3::SimpleRefCount< ns3::Ipv4MulticastRoute, ns3::empty, ns3::DefaultDeleter< ns3::Ipv4MulticastRoute > > const &', 'o')])
    ## simple-ref-count.h (module 'core'): static void ns3::SimpleRefCount<ns3::Ipv4MulticastRoute, ns3::empty, ns3::DefaultDeleter<ns3::Ipv4MulticastRoute> >::Cleanup() [member function]
    cls.add_method('Cleanup', 
                   'void', 
                   [], 
                   is_static=True)
    return

def register_Ns3SimpleRefCount__Ns3Ipv4Route_Ns3Empty_Ns3DefaultDeleter__lt__ns3Ipv4Route__gt___methods(root_module, cls):
    ## simple-ref-count.h (module 'core'): ns3::SimpleRefCount<ns3::Ipv4Route, ns3::empty, ns3::DefaultDeleter<ns3::Ipv4Route> >::SimpleRefCount() [constructor]
    cls.add_constructor([])
    ## simple-ref-count.h (module 'core'): ns3::SimpleRefCount<ns3::Ipv4Route, ns3::empty, ns3::DefaultDeleter<ns3::Ipv4Route> >::SimpleRefCount(ns3::SimpleRefCount<ns3::Ipv4Route, ns3::empty, ns3::DefaultDeleter<ns3::Ipv4Route> > const & o) [copy constructor]
    cls.add_constructor([param('ns3::SimpleRefCount< ns3::Ipv4Route, ns3::empty, ns3::DefaultDeleter< ns3::Ipv4Route > > const &', 'o')])
    ## simple-ref-count.h (module 'core'): static void ns3::SimpleRefCount<ns3::Ipv4Route, ns3::empty, ns3::DefaultDeleter<ns3::Ipv4Route> >::Cleanup() [member function]
    cls.add_method('Cleanup', 
                   'void', 
                   [], 
                   is_static=True)
    return

def register_Ns3SimpleRefCount__Ns3NixVector_Ns3Empty_Ns3DefaultDeleter__lt__ns3NixVector__gt___methods(root_module, cls):
    ## simple-ref-count.h (module 'core'): ns3::SimpleRefCount<ns3::NixVector, ns3::empty, ns3::DefaultDeleter<ns3::NixVector> >::SimpleRefCount() [constructor]
    cls.add_constructor([])
    ## simple-ref-count.h (module 'core'): ns3::SimpleRefCount<ns3::NixVector, ns3::empty, ns3::DefaultDeleter<ns3::NixVector> >::SimpleRefCount(ns3::SimpleRefCount<ns3::NixVector, ns3::empty, ns3::DefaultDeleter<ns3::NixVector> > const & o) [copy constructor]
    cls.add_constructor([param('ns3::SimpleRefCount< ns3::NixVector, ns3::empty, ns3::DefaultDeleter< ns3::NixVector > > const &', 'o')])
    ## simple-ref-count.h (module 'core'): static void ns3::SimpleRefCount<ns3::NixVector, ns3::empty, ns3::DefaultDeleter<ns3::NixVector> >::Cleanup() [member function]
    cls.add_method('Cleanup', 
                   'void', 
                   [], 
                   is_static=True)
    return

def register_Ns3SimpleRefCount__Ns3OutputStreamWrapper_Ns3Empty_Ns3DefaultDeleter__lt__ns3OutputStreamWrapper__gt___methods(root_module, cls):
    ## simple-ref-count.h (module 'core'): ns3::SimpleRefCount<ns3::OutputStreamWrapper, ns3::empty, ns3::DefaultDeleter<ns3::OutputStreamWrapper> >::SimpleRefCount() [constructor]
    cls.add_constructor([])
    ## simple-ref-count.h (module 'core'): ns3::SimpleRefCount<ns3::OutputStreamWrapper, ns3::empty, ns3::DefaultDeleter<ns3::OutputStreamWrapper> >::SimpleRefCount(ns3::SimpleRefCount<ns3::OutputStreamWrapper, ns3::empty, ns3::DefaultDeleter<ns3::OutputStreamWrapper> > const & o) [copy constructor]
    cls.add_constructor([param('ns3::SimpleRefCount< ns3::OutputStreamWrapper, ns3::empty, ns3::DefaultDeleter< ns3::OutputStreamWrapper > > const &', 'o')])
    ## simple-ref-count.h (module 'core'): static void ns3::SimpleRefCount<ns3::OutputStreamWrapper, ns3::empty, ns3::DefaultDeleter<ns3::OutputStreamWrapper> >::Cleanup() [member function]
    cls.add_method('Cleanup', 
                   'void', 
                   [], 
                   is_static=True)
    return

def register_Ns3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt___methods(root_module, cls):
    ## simple-ref-count.h (module 'core'): ns3::SimpleRefCount<ns3::Packet, ns3::empty, ns3::DefaultDeleter<ns3::Packet> >::SimpleRefCount() [constructor]
    cls.add_constructor([])
    ## simple-ref-count.h (module 'core'): ns3::SimpleRefCount<ns3::Packet, ns3::empty, ns3::DefaultDeleter<ns3::Packet> >::SimpleRefCount(ns3::SimpleRefCount<ns3::Packet, ns3::empty, ns3::DefaultDeleter<ns3::Packet> > const & o) [copy constructor]
    cls.add_constructor([param('ns3::SimpleRefCount< ns3::Packet, ns3::empty, ns3::DefaultDeleter< ns3::Packet > > const &', 'o')])
    ## simple-ref-count.h (module 'core'): static void ns3::SimpleRefCount<ns3::Packet, ns3::empty, ns3::DefaultDeleter<ns3::Packet> >::Cleanup() [member function]
    cls.add_method('Cleanup', 
                   'void', 
                   [], 
                   is_static=True)
    return

def register_Ns3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt___methods(root_module, cls):
    ## simple-ref-count.h (module 'core'): ns3::SimpleRefCount<ns3::TraceSourceAccessor, ns3::empty, ns3::DefaultDeleter<ns3::TraceSourceAccessor> >::SimpleRefCount() [constructor]
    cls.add_constructor([])
    ## simple-ref-count.h (module 'core'): ns3::SimpleRefCount<ns3::TraceSourceAccessor, ns3::empty, ns3::DefaultDeleter<ns3::TraceSourceAccessor> >::SimpleRefCount(ns3::SimpleRefCount<ns3::TraceSourceAccessor, ns3::empty, ns3::DefaultDeleter<ns3::TraceSourceAccessor> > const & o) [copy constructor]
    cls.add_constructor([param('ns3::SimpleRefCount< ns3::TraceSourceAccessor, ns3::empty, ns3::DefaultDeleter< ns3::TraceSourceAccessor > > const &', 'o')])
    ## simple-ref-count.h (module 'core'): static void ns3::SimpleRefCount<ns3::TraceSourceAccessor, ns3::empty, ns3::DefaultDeleter<ns3::TraceSourceAccessor> >::Cleanup() [member function]
    cls.add_method('Cleanup', 
                   'void', 
                   [], 
                   is_static=True)
    return

def register_Ns3Socket_methods(root_module, cls):
    ## socket.h (module 'network'): ns3::Socket::Socket(ns3::Socket const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::Socket const &', 'arg0')])
    ## socket.h (module 'network'): ns3::Socket::Socket() [constructor]
    cls.add_constructor([])
    ## socket.h (module 'network'): int ns3::Socket::Bind(ns3::Address const & address) [member function]
    cls.add_method('Bind', 
                   'int', 
                   [param('ns3::Address const &', 'address')], 
                   is_pure_virtual=True, is_virtual=True)
    ## socket.h (module 'network'): int ns3::Socket::Bind() [member function]
    cls.add_method('Bind', 
                   'int', 
                   [], 
                   is_pure_virtual=True, is_virtual=True)
    ## socket.h (module 'network'): void ns3::Socket::BindToNetDevice(ns3::Ptr<ns3::NetDevice> netdevice) [member function]
    cls.add_method('BindToNetDevice', 
                   'void', 
                   [param('ns3::Ptr< ns3::NetDevice >', 'netdevice')], 
                   is_virtual=True)
    ## socket.h (module 'network'): int ns3::Socket::Close() [member function]
    cls.add_method('Close', 
                   'int', 
                   [], 
                   is_pure_virtual=True, is_virtual=True)
    ## socket.h (module 'network'): int ns3::Socket::Connect(ns3::Address const & address) [member function]
    cls.add_method('Connect', 
                   'int', 
                   [param('ns3::Address const &', 'address')], 
                   is_pure_virtual=True, is_virtual=True)
    ## socket.h (module 'network'): static ns3::Ptr<ns3::Socket> ns3::Socket::CreateSocket(ns3::Ptr<ns3::Node> node, ns3::TypeId tid) [member function]
    cls.add_method('CreateSocket', 
                   'ns3::Ptr< ns3::Socket >', 
                   [param('ns3::Ptr< ns3::Node >', 'node'), param('ns3::TypeId', 'tid')], 
                   is_static=True)
    ## socket.h (module 'network'): bool ns3::Socket::GetAllowBroadcast() const [member function]
    cls.add_method('GetAllowBroadcast', 
                   'bool', 
                   [], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## socket.h (module 'network'): ns3::Ptr<ns3::NetDevice> ns3::Socket::GetBoundNetDevice() [member function]
    cls.add_method('GetBoundNetDevice', 
                   'ns3::Ptr< ns3::NetDevice >', 
                   [])
    ## socket.h (module 'network'): ns3::Socket::SocketErrno ns3::Socket::GetErrno() const [member function]
    cls.add_method('GetErrno', 
                   'ns3::Socket::SocketErrno', 
                   [], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## socket.h (module 'network'): ns3::Ptr<ns3::Node> ns3::Socket::GetNode() const [member function]
    cls.add_method('GetNode', 
                   'ns3::Ptr< ns3::Node >', 
                   [], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## socket.h (module 'network'): uint32_t ns3::Socket::GetRxAvailable() const [member function]
    cls.add_method('GetRxAvailable', 
                   'uint32_t', 
                   [], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## socket.h (module 'network'): int ns3::Socket::GetSockName(ns3::Address & address) const [member function]
    cls.add_method('GetSockName', 
                   'int', 
                   [param('ns3::Address &', 'address')], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## socket.h (module 'network'): ns3::Socket::SocketType ns3::Socket::GetSocketType() const [member function]
    cls.add_method('GetSocketType', 
                   'ns3::Socket::SocketType', 
                   [], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## socket.h (module 'network'): uint32_t ns3::Socket::GetTxAvailable() const [member function]
    cls.add_method('GetTxAvailable', 
                   'uint32_t', 
                   [], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## socket.h (module 'network'): int ns3::Socket::Listen() [member function]
    cls.add_method('Listen', 
                   'int', 
                   [], 
                   is_pure_virtual=True, is_virtual=True)
    ## socket.h (module 'network'): ns3::Ptr<ns3::Packet> ns3::Socket::Recv(uint32_t maxSize, uint32_t flags) [member function]
    cls.add_method('Recv', 
                   'ns3::Ptr< ns3::Packet >', 
                   [param('uint32_t', 'maxSize'), param('uint32_t', 'flags')], 
                   is_pure_virtual=True, is_virtual=True)
    ## socket.h (module 'network'): ns3::Ptr<ns3::Packet> ns3::Socket::Recv() [member function]
    cls.add_method('Recv', 
                   'ns3::Ptr< ns3::Packet >', 
                   [])
    ## socket.h (module 'network'): int ns3::Socket::Recv(uint8_t * buf, uint32_t size, uint32_t flags) [member function]
    cls.add_method('Recv', 
                   'int', 
                   [param('uint8_t *', 'buf'), param('uint32_t', 'size'), param('uint32_t', 'flags')])
    ## socket.h (module 'network'): ns3::Ptr<ns3::Packet> ns3::Socket::RecvFrom(uint32_t maxSize, uint32_t flags, ns3::Address & fromAddress) [member function]
    cls.add_method('RecvFrom', 
                   'ns3::Ptr< ns3::Packet >', 
                   [param('uint32_t', 'maxSize'), param('uint32_t', 'flags'), param('ns3::Address &', 'fromAddress')], 
                   is_pure_virtual=True, is_virtual=True)
    ## socket.h (module 'network'): ns3::Ptr<ns3::Packet> ns3::Socket::RecvFrom(ns3::Address & fromAddress) [member function]
    cls.add_method('RecvFrom', 
                   'ns3::Ptr< ns3::Packet >', 
                   [param('ns3::Address &', 'fromAddress')])
    ## socket.h (module 'network'): int ns3::Socket::RecvFrom(uint8_t * buf, uint32_t size, uint32_t flags, ns3::Address & fromAddress) [member function]
    cls.add_method('RecvFrom', 
                   'int', 
                   [param('uint8_t *', 'buf'), param('uint32_t', 'size'), param('uint32_t', 'flags'), param('ns3::Address &', 'fromAddress')])
    ## socket.h (module 'network'): int ns3::Socket::Send(ns3::Ptr<ns3::Packet> p, uint32_t flags) [member function]
    cls.add_method('Send', 
                   'int', 
                   [param('ns3::Ptr< ns3::Packet >', 'p'), param('uint32_t', 'flags')], 
                   is_pure_virtual=True, is_virtual=True)
    ## socket.h (module 'network'): int ns3::Socket::Send(ns3::Ptr<ns3::Packet> p) [member function]
    cls.add_method('Send', 
                   'int', 
                   [param('ns3::Ptr< ns3::Packet >', 'p')])
    ## socket.h (module 'network'): int ns3::Socket::Send(uint8_t const * buf, uint32_t size, uint32_t flags) [member function]
    cls.add_method('Send', 
                   'int', 
                   [param('uint8_t const *', 'buf'), param('uint32_t', 'size'), param('uint32_t', 'flags')])
    ## socket.h (module 'network'): int ns3::Socket::SendTo(ns3::Ptr<ns3::Packet> p, uint32_t flags, ns3::Address const & toAddress) [member function]
    cls.add_method('SendTo', 
                   'int', 
                   [param('ns3::Ptr< ns3::Packet >', 'p'), param('uint32_t', 'flags'), param('ns3::Address const &', 'toAddress')], 
                   is_pure_virtual=True, is_virtual=True)
    ## socket.h (module 'network'): int ns3::Socket::SendTo(uint8_t const * buf, uint32_t size, uint32_t flags, ns3::Address const & address) [member function]
    cls.add_method('SendTo', 
                   'int', 
                   [param('uint8_t const *', 'buf'), param('uint32_t', 'size'), param('uint32_t', 'flags'), param('ns3::Address const &', 'address')])
    ## socket.h (module 'network'): void ns3::Socket::SetAcceptCallback(ns3::Callback<bool, ns3::Ptr<ns3::Socket>, ns3::Address const&, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty> connectionRequest, ns3::Callback<void, ns3::Ptr<ns3::Socket>, ns3::Address const&, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty> newConnectionCreated) [member function]
    cls.add_method('SetAcceptCallback', 
                   'void', 
                   [param('ns3::Callback< bool, ns3::Ptr< ns3::Socket >, ns3::Address const &, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty >', 'connectionRequest'), param('ns3::Callback< void, ns3::Ptr< ns3::Socket >, ns3::Address const &, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty >', 'newConnectionCreated')])
    ## socket.h (module 'network'): bool ns3::Socket::SetAllowBroadcast(bool allowBroadcast) [member function]
    cls.add_method('SetAllowBroadcast', 
                   'bool', 
                   [param('bool', 'allowBroadcast')], 
                   is_pure_virtual=True, is_virtual=True)
    ## socket.h (module 'network'): void ns3::Socket::SetCloseCallbacks(ns3::Callback<void, ns3::Ptr<ns3::Socket>, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty> normalClose, ns3::Callback<void, ns3::Ptr<ns3::Socket>, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty> errorClose) [member function]
    cls.add_method('SetCloseCallbacks', 
                   'void', 
                   [param('ns3::Callback< void, ns3::Ptr< ns3::Socket >, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty >', 'normalClose'), param('ns3::Callback< void, ns3::Ptr< ns3::Socket >, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty >', 'errorClose')])
    ## socket.h (module 'network'): void ns3::Socket::SetConnectCallback(ns3::Callback<void, ns3::Ptr<ns3::Socket>, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty> connectionSucceeded, ns3::Callback<void, ns3::Ptr<ns3::Socket>, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty> connectionFailed) [member function]
    cls.add_method('SetConnectCallback', 
                   'void', 
                   [param('ns3::Callback< void, ns3::Ptr< ns3::Socket >, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty >', 'connectionSucceeded'), param('ns3::Callback< void, ns3::Ptr< ns3::Socket >, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty >', 'connectionFailed')])
    ## socket.h (module 'network'): void ns3::Socket::SetDataSentCallback(ns3::Callback<void, ns3::Ptr<ns3::Socket>, unsigned int, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty> dataSent) [member function]
    cls.add_method('SetDataSentCallback', 
                   'void', 
                   [param('ns3::Callback< void, ns3::Ptr< ns3::Socket >, unsigned int, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty >', 'dataSent')])
    ## socket.h (module 'network'): void ns3::Socket::SetRecvCallback(ns3::Callback<void, ns3::Ptr<ns3::Socket>, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty> arg0) [member function]
    cls.add_method('SetRecvCallback', 
                   'void', 
                   [param('ns3::Callback< void, ns3::Ptr< ns3::Socket >, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty >', 'arg0')])
    ## socket.h (module 'network'): void ns3::Socket::SetRecvPktInfo(bool flag) [member function]
    cls.add_method('SetRecvPktInfo', 
                   'void', 
                   [param('bool', 'flag')])
    ## socket.h (module 'network'): void ns3::Socket::SetSendCallback(ns3::Callback<void, ns3::Ptr<ns3::Socket>, unsigned int, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty> sendCb) [member function]
    cls.add_method('SetSendCallback', 
                   'void', 
                   [param('ns3::Callback< void, ns3::Ptr< ns3::Socket >, unsigned int, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty >', 'sendCb')])
    ## socket.h (module 'network'): int ns3::Socket::ShutdownRecv() [member function]
    cls.add_method('ShutdownRecv', 
                   'int', 
                   [], 
                   is_pure_virtual=True, is_virtual=True)
    ## socket.h (module 'network'): int ns3::Socket::ShutdownSend() [member function]
    cls.add_method('ShutdownSend', 
                   'int', 
                   [], 
                   is_pure_virtual=True, is_virtual=True)
    ## socket.h (module 'network'): void ns3::Socket::DoDispose() [member function]
    cls.add_method('DoDispose', 
                   'void', 
                   [], 
                   visibility='protected', is_virtual=True)
    ## socket.h (module 'network'): void ns3::Socket::NotifyConnectionFailed() [member function]
    cls.add_method('NotifyConnectionFailed', 
                   'void', 
                   [], 
                   visibility='protected')
    ## socket.h (module 'network'): bool ns3::Socket::NotifyConnectionRequest(ns3::Address const & from) [member function]
    cls.add_method('NotifyConnectionRequest', 
                   'bool', 
                   [param('ns3::Address const &', 'from')], 
                   visibility='protected')
    ## socket.h (module 'network'): void ns3::Socket::NotifyConnectionSucceeded() [member function]
    cls.add_method('NotifyConnectionSucceeded', 
                   'void', 
                   [], 
                   visibility='protected')
    ## socket.h (module 'network'): void ns3::Socket::NotifyDataRecv() [member function]
    cls.add_method('NotifyDataRecv', 
                   'void', 
                   [], 
                   visibility='protected')
    ## socket.h (module 'network'): void ns3::Socket::NotifyDataSent(uint32_t size) [member function]
    cls.add_method('NotifyDataSent', 
                   'void', 
                   [param('uint32_t', 'size')], 
                   visibility='protected')
    ## socket.h (module 'network'): void ns3::Socket::NotifyErrorClose() [member function]
    cls.add_method('NotifyErrorClose', 
                   'void', 
                   [], 
                   visibility='protected')
    ## socket.h (module 'network'): void ns3::Socket::NotifyNewConnectionCreated(ns3::Ptr<ns3::Socket> socket, ns3::Address const & from) [member function]
    cls.add_method('NotifyNewConnectionCreated', 
                   'void', 
                   [param('ns3::Ptr< ns3::Socket >', 'socket'), param('ns3::Address const &', 'from')], 
                   visibility='protected')
    ## socket.h (module 'network'): void ns3::Socket::NotifyNormalClose() [member function]
    cls.add_method('NotifyNormalClose', 
                   'void', 
                   [], 
                   visibility='protected')
    ## socket.h (module 'network'): void ns3::Socket::NotifySend(uint32_t spaceAvailable) [member function]
    cls.add_method('NotifySend', 
                   'void', 
                   [param('uint32_t', 'spaceAvailable')], 
                   visibility='protected')
    return

def register_Ns3SocketAddressTag_methods(root_module, cls):
    ## socket.h (module 'network'): ns3::SocketAddressTag::SocketAddressTag(ns3::SocketAddressTag const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::SocketAddressTag const &', 'arg0')])
    ## socket.h (module 'network'): ns3::SocketAddressTag::SocketAddressTag() [constructor]
    cls.add_constructor([])
    ## socket.h (module 'network'): void ns3::SocketAddressTag::Deserialize(ns3::TagBuffer i) [member function]
    cls.add_method('Deserialize', 
                   'void', 
                   [param('ns3::TagBuffer', 'i')], 
                   is_virtual=True)
    ## socket.h (module 'network'): ns3::Address ns3::SocketAddressTag::GetAddress() const [member function]
    cls.add_method('GetAddress', 
                   'ns3::Address', 
                   [], 
                   is_const=True)
    ## socket.h (module 'network'): ns3::TypeId ns3::SocketAddressTag::GetInstanceTypeId() const [member function]
    cls.add_method('GetInstanceTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_const=True, is_virtual=True)
    ## socket.h (module 'network'): uint32_t ns3::SocketAddressTag::GetSerializedSize() const [member function]
    cls.add_method('GetSerializedSize', 
                   'uint32_t', 
                   [], 
                   is_const=True, is_virtual=True)
    ## socket.h (module 'network'): static ns3::TypeId ns3::SocketAddressTag::GetTypeId() [member function]
    cls.add_method('GetTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_static=True)
    ## socket.h (module 'network'): void ns3::SocketAddressTag::Print(std::ostream & os) const [member function]
    cls.add_method('Print', 
                   'void', 
                   [param('std::ostream &', 'os')], 
                   is_const=True, is_virtual=True)
    ## socket.h (module 'network'): void ns3::SocketAddressTag::Serialize(ns3::TagBuffer i) const [member function]
    cls.add_method('Serialize', 
                   'void', 
                   [param('ns3::TagBuffer', 'i')], 
                   is_const=True, is_virtual=True)
    ## socket.h (module 'network'): void ns3::SocketAddressTag::SetAddress(ns3::Address addr) [member function]
    cls.add_method('SetAddress', 
                   'void', 
                   [param('ns3::Address', 'addr')])
    return

def register_Ns3SocketFactory_methods(root_module, cls):
    ## socket-factory.h (module 'network'): ns3::SocketFactory::SocketFactory(ns3::SocketFactory const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::SocketFactory const &', 'arg0')])
    ## socket-factory.h (module 'network'): ns3::SocketFactory::SocketFactory() [constructor]
    cls.add_constructor([])
    ## socket-factory.h (module 'network'): ns3::Ptr<ns3::Socket> ns3::SocketFactory::CreateSocket() [member function]
    cls.add_method('CreateSocket', 
                   'ns3::Ptr< ns3::Socket >', 
                   [], 
                   is_pure_virtual=True, is_virtual=True)
    ## socket-factory.h (module 'network'): static ns3::TypeId ns3::SocketFactory::GetTypeId() [member function]
    cls.add_method('GetTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_static=True)
    return

def register_Ns3SocketIpTtlTag_methods(root_module, cls):
    ## socket.h (module 'network'): ns3::SocketIpTtlTag::SocketIpTtlTag(ns3::SocketIpTtlTag const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::SocketIpTtlTag const &', 'arg0')])
    ## socket.h (module 'network'): ns3::SocketIpTtlTag::SocketIpTtlTag() [constructor]
    cls.add_constructor([])
    ## socket.h (module 'network'): void ns3::SocketIpTtlTag::Deserialize(ns3::TagBuffer i) [member function]
    cls.add_method('Deserialize', 
                   'void', 
                   [param('ns3::TagBuffer', 'i')], 
                   is_virtual=True)
    ## socket.h (module 'network'): ns3::TypeId ns3::SocketIpTtlTag::GetInstanceTypeId() const [member function]
    cls.add_method('GetInstanceTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_const=True, is_virtual=True)
    ## socket.h (module 'network'): uint32_t ns3::SocketIpTtlTag::GetSerializedSize() const [member function]
    cls.add_method('GetSerializedSize', 
                   'uint32_t', 
                   [], 
                   is_const=True, is_virtual=True)
    ## socket.h (module 'network'): uint8_t ns3::SocketIpTtlTag::GetTtl() const [member function]
    cls.add_method('GetTtl', 
                   'uint8_t', 
                   [], 
                   is_const=True)
    ## socket.h (module 'network'): static ns3::TypeId ns3::SocketIpTtlTag::GetTypeId() [member function]
    cls.add_method('GetTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_static=True)
    ## socket.h (module 'network'): void ns3::SocketIpTtlTag::Print(std::ostream & os) const [member function]
    cls.add_method('Print', 
                   'void', 
                   [param('std::ostream &', 'os')], 
                   is_const=True, is_virtual=True)
    ## socket.h (module 'network'): void ns3::SocketIpTtlTag::Serialize(ns3::TagBuffer i) const [member function]
    cls.add_method('Serialize', 
                   'void', 
                   [param('ns3::TagBuffer', 'i')], 
                   is_const=True, is_virtual=True)
    ## socket.h (module 'network'): void ns3::SocketIpTtlTag::SetTtl(uint8_t ttl) [member function]
    cls.add_method('SetTtl', 
                   'void', 
                   [param('uint8_t', 'ttl')])
    return

def register_Ns3SocketSetDontFragmentTag_methods(root_module, cls):
    ## socket.h (module 'network'): ns3::SocketSetDontFragmentTag::SocketSetDontFragmentTag(ns3::SocketSetDontFragmentTag const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::SocketSetDontFragmentTag const &', 'arg0')])
    ## socket.h (module 'network'): ns3::SocketSetDontFragmentTag::SocketSetDontFragmentTag() [constructor]
    cls.add_constructor([])
    ## socket.h (module 'network'): void ns3::SocketSetDontFragmentTag::Deserialize(ns3::TagBuffer i) [member function]
    cls.add_method('Deserialize', 
                   'void', 
                   [param('ns3::TagBuffer', 'i')], 
                   is_virtual=True)
    ## socket.h (module 'network'): void ns3::SocketSetDontFragmentTag::Disable() [member function]
    cls.add_method('Disable', 
                   'void', 
                   [])
    ## socket.h (module 'network'): void ns3::SocketSetDontFragmentTag::Enable() [member function]
    cls.add_method('Enable', 
                   'void', 
                   [])
    ## socket.h (module 'network'): ns3::TypeId ns3::SocketSetDontFragmentTag::GetInstanceTypeId() const [member function]
    cls.add_method('GetInstanceTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_const=True, is_virtual=True)
    ## socket.h (module 'network'): uint32_t ns3::SocketSetDontFragmentTag::GetSerializedSize() const [member function]
    cls.add_method('GetSerializedSize', 
                   'uint32_t', 
                   [], 
                   is_const=True, is_virtual=True)
    ## socket.h (module 'network'): static ns3::TypeId ns3::SocketSetDontFragmentTag::GetTypeId() [member function]
    cls.add_method('GetTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_static=True)
    ## socket.h (module 'network'): bool ns3::SocketSetDontFragmentTag::IsEnabled() const [member function]
    cls.add_method('IsEnabled', 
                   'bool', 
                   [], 
                   is_const=True)
    ## socket.h (module 'network'): void ns3::SocketSetDontFragmentTag::Print(std::ostream & os) const [member function]
    cls.add_method('Print', 
                   'void', 
                   [param('std::ostream &', 'os')], 
                   is_const=True, is_virtual=True)
    ## socket.h (module 'network'): void ns3::SocketSetDontFragmentTag::Serialize(ns3::TagBuffer i) const [member function]
    cls.add_method('Serialize', 
                   'void', 
                   [param('ns3::TagBuffer', 'i')], 
                   is_const=True, is_virtual=True)
    return

def register_Ns3TcpHeader_methods(root_module, cls):
    ## tcp-header.h (module 'internet'): ns3::TcpHeader::TcpHeader(ns3::TcpHeader const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::TcpHeader const &', 'arg0')])
    ## tcp-header.h (module 'internet'): ns3::TcpHeader::TcpHeader() [constructor]
    cls.add_constructor([])
    ## tcp-header.h (module 'internet'): uint32_t ns3::TcpHeader::Deserialize(ns3::Buffer::Iterator start) [member function]
    cls.add_method('Deserialize', 
                   'uint32_t', 
                   [param('ns3::Buffer::Iterator', 'start')], 
                   is_virtual=True)
    ## tcp-header.h (module 'internet'): void ns3::TcpHeader::EnableChecksums() [member function]
    cls.add_method('EnableChecksums', 
                   'void', 
                   [])
    ## tcp-header.h (module 'internet'): ns3::SequenceNumber32 ns3::TcpHeader::GetAckNumber() const [member function]
    cls.add_method('GetAckNumber', 
                   'ns3::SequenceNumber32', 
                   [], 
                   is_const=True)
    ## tcp-header.h (module 'internet'): uint16_t ns3::TcpHeader::GetDestinationPort() const [member function]
    cls.add_method('GetDestinationPort', 
                   'uint16_t', 
                   [], 
                   is_const=True)
    ## tcp-header.h (module 'internet'): uint8_t ns3::TcpHeader::GetFlags() const [member function]
    cls.add_method('GetFlags', 
                   'uint8_t', 
                   [], 
                   is_const=True)
    ## tcp-header.h (module 'internet'): ns3::TypeId ns3::TcpHeader::GetInstanceTypeId() const [member function]
    cls.add_method('GetInstanceTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_const=True, is_virtual=True)
    ## tcp-header.h (module 'internet'): uint8_t ns3::TcpHeader::GetLength() const [member function]
    cls.add_method('GetLength', 
                   'uint8_t', 
                   [], 
                   is_const=True)
    ## tcp-header.h (module 'internet'): ns3::SequenceNumber32 ns3::TcpHeader::GetSequenceNumber() const [member function]
    cls.add_method('GetSequenceNumber', 
                   'ns3::SequenceNumber32', 
                   [], 
                   is_const=True)
    ## tcp-header.h (module 'internet'): uint32_t ns3::TcpHeader::GetSerializedSize() const [member function]
    cls.add_method('GetSerializedSize', 
                   'uint32_t', 
                   [], 
                   is_const=True, is_virtual=True)
    ## tcp-header.h (module 'internet'): uint16_t ns3::TcpHeader::GetSourcePort() const [member function]
    cls.add_method('GetSourcePort', 
                   'uint16_t', 
                   [], 
                   is_const=True)
    ## tcp-header.h (module 'internet'): static ns3::TypeId ns3::TcpHeader::GetTypeId() [member function]
    cls.add_method('GetTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_static=True)
    ## tcp-header.h (module 'internet'): uint16_t ns3::TcpHeader::GetUrgentPointer() const [member function]
    cls.add_method('GetUrgentPointer', 
                   'uint16_t', 
                   [], 
                   is_const=True)
    ## tcp-header.h (module 'internet'): uint16_t ns3::TcpHeader::GetWindowSize() const [member function]
    cls.add_method('GetWindowSize', 
                   'uint16_t', 
                   [], 
                   is_const=True)
    ## tcp-header.h (module 'internet'): void ns3::TcpHeader::InitializeChecksum(ns3::Ipv4Address source, ns3::Ipv4Address destination, uint8_t protocol) [member function]
    cls.add_method('InitializeChecksum', 
                   'void', 
                   [param('ns3::Ipv4Address', 'source'), param('ns3::Ipv4Address', 'destination'), param('uint8_t', 'protocol')])
    ## tcp-header.h (module 'internet'): bool ns3::TcpHeader::IsChecksumOk() const [member function]
    cls.add_method('IsChecksumOk', 
                   'bool', 
                   [], 
                   is_const=True)
    ## tcp-header.h (module 'internet'): void ns3::TcpHeader::Print(std::ostream & os) const [member function]
    cls.add_method('Print', 
                   'void', 
                   [param('std::ostream &', 'os')], 
                   is_const=True, is_virtual=True)
    ## tcp-header.h (module 'internet'): void ns3::TcpHeader::Serialize(ns3::Buffer::Iterator start) const [member function]
    cls.add_method('Serialize', 
                   'void', 
                   [param('ns3::Buffer::Iterator', 'start')], 
                   is_const=True, is_virtual=True)
    ## tcp-header.h (module 'internet'): void ns3::TcpHeader::SetAckNumber(ns3::SequenceNumber32 ackNumber) [member function]
    cls.add_method('SetAckNumber', 
                   'void', 
                   [param('ns3::SequenceNumber32', 'ackNumber')])
    ## tcp-header.h (module 'internet'): void ns3::TcpHeader::SetDestinationPort(uint16_t port) [member function]
    cls.add_method('SetDestinationPort', 
                   'void', 
                   [param('uint16_t', 'port')])
    ## tcp-header.h (module 'internet'): void ns3::TcpHeader::SetFlags(uint8_t flags) [member function]
    cls.add_method('SetFlags', 
                   'void', 
                   [param('uint8_t', 'flags')])
    ## tcp-header.h (module 'internet'): void ns3::TcpHeader::SetLength(uint8_t length) [member function]
    cls.add_method('SetLength', 
                   'void', 
                   [param('uint8_t', 'length')])
    ## tcp-header.h (module 'internet'): void ns3::TcpHeader::SetSequenceNumber(ns3::SequenceNumber32 sequenceNumber) [member function]
    cls.add_method('SetSequenceNumber', 
                   'void', 
                   [param('ns3::SequenceNumber32', 'sequenceNumber')])
    ## tcp-header.h (module 'internet'): void ns3::TcpHeader::SetSourcePort(uint16_t port) [member function]
    cls.add_method('SetSourcePort', 
                   'void', 
                   [param('uint16_t', 'port')])
    ## tcp-header.h (module 'internet'): void ns3::TcpHeader::SetUrgentPointer(uint16_t urgentPointer) [member function]
    cls.add_method('SetUrgentPointer', 
                   'void', 
                   [param('uint16_t', 'urgentPointer')])
    ## tcp-header.h (module 'internet'): void ns3::TcpHeader::SetWindowSize(uint16_t windowSize) [member function]
    cls.add_method('SetWindowSize', 
                   'void', 
                   [param('uint16_t', 'windowSize')])
    return

def register_Ns3TcpRxBuffer_methods(root_module, cls):
    ## tcp-rx-buffer.h (module 'internet'): ns3::TcpRxBuffer::TcpRxBuffer(ns3::TcpRxBuffer const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::TcpRxBuffer const &', 'arg0')])
    ## tcp-rx-buffer.h (module 'internet'): ns3::TcpRxBuffer::TcpRxBuffer(uint32_t n=0) [constructor]
    cls.add_constructor([param('uint32_t', 'n', default_value='0')])
    ## tcp-rx-buffer.h (module 'internet'): bool ns3::TcpRxBuffer::Add(ns3::Ptr<ns3::Packet> p, ns3::TcpHeader const & tcph) [member function]
    cls.add_method('Add', 
                   'bool', 
                   [param('ns3::Ptr< ns3::Packet >', 'p'), param('ns3::TcpHeader const &', 'tcph')])
    ## tcp-rx-buffer.h (module 'internet'): uint32_t ns3::TcpRxBuffer::Available() const [member function]
    cls.add_method('Available', 
                   'uint32_t', 
                   [], 
                   is_const=True)
    ## tcp-rx-buffer.h (module 'internet'): ns3::Ptr<ns3::Packet> ns3::TcpRxBuffer::Extract(uint32_t maxSize) [member function]
    cls.add_method('Extract', 
                   'ns3::Ptr< ns3::Packet >', 
                   [param('uint32_t', 'maxSize')])
    ## tcp-rx-buffer.h (module 'internet'): bool ns3::TcpRxBuffer::Finished() [member function]
    cls.add_method('Finished', 
                   'bool', 
                   [])
    ## tcp-rx-buffer.h (module 'internet'): static ns3::TypeId ns3::TcpRxBuffer::GetTypeId() [member function]
    cls.add_method('GetTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_static=True)
    ## tcp-rx-buffer.h (module 'internet'): void ns3::TcpRxBuffer::IncNextRxSequence() [member function]
    cls.add_method('IncNextRxSequence', 
                   'void', 
                   [])
    ## tcp-rx-buffer.h (module 'internet'): uint32_t ns3::TcpRxBuffer::MaxBufferSize() const [member function]
    cls.add_method('MaxBufferSize', 
                   'uint32_t', 
                   [], 
                   is_const=True)
    ## tcp-rx-buffer.h (module 'internet'): ns3::SequenceNumber32 ns3::TcpRxBuffer::MaxRxSequence() const [member function]
    cls.add_method('MaxRxSequence', 
                   'ns3::SequenceNumber32', 
                   [], 
                   is_const=True)
    ## tcp-rx-buffer.h (module 'internet'): ns3::SequenceNumber32 ns3::TcpRxBuffer::NextRxSequence() const [member function]
    cls.add_method('NextRxSequence', 
                   'ns3::SequenceNumber32', 
                   [], 
                   is_const=True)
    ## tcp-rx-buffer.h (module 'internet'): void ns3::TcpRxBuffer::SetFinSequence(ns3::SequenceNumber32 const & s) [member function]
    cls.add_method('SetFinSequence', 
                   'void', 
                   [param('ns3::SequenceNumber32 const &', 's')])
    ## tcp-rx-buffer.h (module 'internet'): void ns3::TcpRxBuffer::SetMaxBufferSize(uint32_t s) [member function]
    cls.add_method('SetMaxBufferSize', 
                   'void', 
                   [param('uint32_t', 's')])
    ## tcp-rx-buffer.h (module 'internet'): void ns3::TcpRxBuffer::SetNextRxSequence(ns3::SequenceNumber32 const & s) [member function]
    cls.add_method('SetNextRxSequence', 
                   'void', 
                   [param('ns3::SequenceNumber32 const &', 's')])
    ## tcp-rx-buffer.h (module 'internet'): uint32_t ns3::TcpRxBuffer::Size() const [member function]
    cls.add_method('Size', 
                   'uint32_t', 
                   [], 
                   is_const=True)
    ## tcp-rx-buffer.h (module 'internet'): ns3::TcpRxBuffer::m_availBytes [variable]
    cls.add_instance_attribute('m_availBytes', 'uint32_t', is_const=False)
    ## tcp-rx-buffer.h (module 'internet'): ns3::TcpRxBuffer::m_data [variable]
    cls.add_instance_attribute('m_data', 'std::map< ns3::SequenceNumber< unsigned int, int >, ns3::Ptr< ns3::Packet > >', is_const=False)
    ## tcp-rx-buffer.h (module 'internet'): ns3::TcpRxBuffer::m_finSeq [variable]
    cls.add_instance_attribute('m_finSeq', 'ns3::SequenceNumber32', is_const=False)
    ## tcp-rx-buffer.h (module 'internet'): ns3::TcpRxBuffer::m_gotFin [variable]
    cls.add_instance_attribute('m_gotFin', 'bool', is_const=False)
    ## tcp-rx-buffer.h (module 'internet'): ns3::TcpRxBuffer::m_maxBuffer [variable]
    cls.add_instance_attribute('m_maxBuffer', 'uint32_t', is_const=False)
    ## tcp-rx-buffer.h (module 'internet'): ns3::TcpRxBuffer::m_nextRxSeq [variable]
    cls.add_instance_attribute('m_nextRxSeq', 'ns3::TracedValue< ns3::SequenceNumber< unsigned int, int > >', is_const=False)
    ## tcp-rx-buffer.h (module 'internet'): ns3::TcpRxBuffer::m_size [variable]
    cls.add_instance_attribute('m_size', 'uint32_t', is_const=False)
    return

def register_Ns3TcpSocket_methods(root_module, cls):
    ## tcp-socket.h (module 'internet'): ns3::TcpSocket::TcpSocket(ns3::TcpSocket const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::TcpSocket const &', 'arg0')])
    ## tcp-socket.h (module 'internet'): ns3::TcpSocket::TcpSocket() [constructor]
    cls.add_constructor([])
    ## tcp-socket.h (module 'internet'): static ns3::TypeId ns3::TcpSocket::GetTypeId() [member function]
    cls.add_method('GetTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_static=True)
    ## tcp-socket.h (module 'internet'): ns3::TcpSocket::TcpStateName [variable]
    cls.add_static_attribute('TcpStateName', 'char const * [ 11 ] const', is_const=True)
    ## tcp-socket.h (module 'internet'): uint32_t ns3::TcpSocket::GetConnCount() const [member function]
    cls.add_method('GetConnCount', 
                   'uint32_t', 
                   [], 
                   is_pure_virtual=True, is_const=True, visibility='private', is_virtual=True)
    ## tcp-socket.h (module 'internet'): ns3::Time ns3::TcpSocket::GetConnTimeout() const [member function]
    cls.add_method('GetConnTimeout', 
                   'ns3::Time', 
                   [], 
                   is_pure_virtual=True, is_const=True, visibility='private', is_virtual=True)
    ## tcp-socket.h (module 'internet'): uint32_t ns3::TcpSocket::GetDelAckMaxCount() const [member function]
    cls.add_method('GetDelAckMaxCount', 
                   'uint32_t', 
                   [], 
                   is_pure_virtual=True, is_const=True, visibility='private', is_virtual=True)
    ## tcp-socket.h (module 'internet'): ns3::Time ns3::TcpSocket::GetDelAckTimeout() const [member function]
    cls.add_method('GetDelAckTimeout', 
                   'ns3::Time', 
                   [], 
                   is_pure_virtual=True, is_const=True, visibility='private', is_virtual=True)
    ## tcp-socket.h (module 'internet'): uint32_t ns3::TcpSocket::GetInitialCwnd() const [member function]
    cls.add_method('GetInitialCwnd', 
                   'uint32_t', 
                   [], 
                   is_pure_virtual=True, is_const=True, visibility='private', is_virtual=True)
    ## tcp-socket.h (module 'internet'): ns3::Time ns3::TcpSocket::GetPersistTimeout() const [member function]
    cls.add_method('GetPersistTimeout', 
                   'ns3::Time', 
                   [], 
                   is_pure_virtual=True, is_const=True, visibility='private', is_virtual=True)
    ## tcp-socket.h (module 'internet'): uint32_t ns3::TcpSocket::GetRcvBufSize() const [member function]
    cls.add_method('GetRcvBufSize', 
                   'uint32_t', 
                   [], 
                   is_pure_virtual=True, is_const=True, visibility='private', is_virtual=True)
    ## tcp-socket.h (module 'internet'): uint32_t ns3::TcpSocket::GetSSThresh() const [member function]
    cls.add_method('GetSSThresh', 
                   'uint32_t', 
                   [], 
                   is_pure_virtual=True, is_const=True, visibility='private', is_virtual=True)
    ## tcp-socket.h (module 'internet'): uint32_t ns3::TcpSocket::GetSegSize() const [member function]
    cls.add_method('GetSegSize', 
                   'uint32_t', 
                   [], 
                   is_pure_virtual=True, is_const=True, visibility='private', is_virtual=True)
    ## tcp-socket.h (module 'internet'): uint32_t ns3::TcpSocket::GetSndBufSize() const [member function]
    cls.add_method('GetSndBufSize', 
                   'uint32_t', 
                   [], 
                   is_pure_virtual=True, is_const=True, visibility='private', is_virtual=True)
    ## tcp-socket.h (module 'internet'): bool ns3::TcpSocket::GetTcpNoDelay() const [member function]
    cls.add_method('GetTcpNoDelay', 
                   'bool', 
                   [], 
                   is_pure_virtual=True, is_const=True, visibility='private', is_virtual=True)
    ## tcp-socket.h (module 'internet'): void ns3::TcpSocket::SetConnCount(uint32_t count) [member function]
    cls.add_method('SetConnCount', 
                   'void', 
                   [param('uint32_t', 'count')], 
                   is_pure_virtual=True, visibility='private', is_virtual=True)
    ## tcp-socket.h (module 'internet'): void ns3::TcpSocket::SetConnTimeout(ns3::Time timeout) [member function]
    cls.add_method('SetConnTimeout', 
                   'void', 
                   [param('ns3::Time', 'timeout')], 
                   is_pure_virtual=True, visibility='private', is_virtual=True)
    ## tcp-socket.h (module 'internet'): void ns3::TcpSocket::SetDelAckMaxCount(uint32_t count) [member function]
    cls.add_method('SetDelAckMaxCount', 
                   'void', 
                   [param('uint32_t', 'count')], 
                   is_pure_virtual=True, visibility='private', is_virtual=True)
    ## tcp-socket.h (module 'internet'): void ns3::TcpSocket::SetDelAckTimeout(ns3::Time timeout) [member function]
    cls.add_method('SetDelAckTimeout', 
                   'void', 
                   [param('ns3::Time', 'timeout')], 
                   is_pure_virtual=True, visibility='private', is_virtual=True)
    ## tcp-socket.h (module 'internet'): void ns3::TcpSocket::SetInitialCwnd(uint32_t count) [member function]
    cls.add_method('SetInitialCwnd', 
                   'void', 
                   [param('uint32_t', 'count')], 
                   is_pure_virtual=True, visibility='private', is_virtual=True)
    ## tcp-socket.h (module 'internet'): void ns3::TcpSocket::SetPersistTimeout(ns3::Time timeout) [member function]
    cls.add_method('SetPersistTimeout', 
                   'void', 
                   [param('ns3::Time', 'timeout')], 
                   is_pure_virtual=True, visibility='private', is_virtual=True)
    ## tcp-socket.h (module 'internet'): void ns3::TcpSocket::SetRcvBufSize(uint32_t size) [member function]
    cls.add_method('SetRcvBufSize', 
                   'void', 
                   [param('uint32_t', 'size')], 
                   is_pure_virtual=True, visibility='private', is_virtual=True)
    ## tcp-socket.h (module 'internet'): void ns3::TcpSocket::SetSSThresh(uint32_t threshold) [member function]
    cls.add_method('SetSSThresh', 
                   'void', 
                   [param('uint32_t', 'threshold')], 
                   is_pure_virtual=True, visibility='private', is_virtual=True)
    ## tcp-socket.h (module 'internet'): void ns3::TcpSocket::SetSegSize(uint32_t size) [member function]
    cls.add_method('SetSegSize', 
                   'void', 
                   [param('uint32_t', 'size')], 
                   is_pure_virtual=True, visibility='private', is_virtual=True)
    ## tcp-socket.h (module 'internet'): void ns3::TcpSocket::SetSndBufSize(uint32_t size) [member function]
    cls.add_method('SetSndBufSize', 
                   'void', 
                   [param('uint32_t', 'size')], 
                   is_pure_virtual=True, visibility='private', is_virtual=True)
    ## tcp-socket.h (module 'internet'): void ns3::TcpSocket::SetTcpNoDelay(bool noDelay) [member function]
    cls.add_method('SetTcpNoDelay', 
                   'void', 
                   [param('bool', 'noDelay')], 
                   is_pure_virtual=True, visibility='private', is_virtual=True)
    return

def register_Ns3TcpSocketBase_methods(root_module, cls):
    ## tcp-socket-base.h (module 'internet'): ns3::TcpSocketBase::TcpSocketBase() [constructor]
    cls.add_constructor([])
    ## tcp-socket-base.h (module 'internet'): ns3::TcpSocketBase::TcpSocketBase(ns3::TcpSocketBase const & sock) [copy constructor]
    cls.add_constructor([param('ns3::TcpSocketBase const &', 'sock')])
    ## tcp-socket-base.h (module 'internet'): int ns3::TcpSocketBase::Bind() [member function]
    cls.add_method('Bind', 
                   'int', 
                   [], 
                   is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): int ns3::TcpSocketBase::Bind(ns3::Address const & address) [member function]
    cls.add_method('Bind', 
                   'int', 
                   [param('ns3::Address const &', 'address')], 
                   is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::BindToNetDevice(ns3::Ptr<ns3::NetDevice> netdevice) [member function]
    cls.add_method('BindToNetDevice', 
                   'void', 
                   [param('ns3::Ptr< ns3::NetDevice >', 'netdevice')], 
                   is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): int ns3::TcpSocketBase::Close() [member function]
    cls.add_method('Close', 
                   'int', 
                   [], 
                   is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): int ns3::TcpSocketBase::Connect(ns3::Address const & address) [member function]
    cls.add_method('Connect', 
                   'int', 
                   [param('ns3::Address const &', 'address')], 
                   is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): ns3::Socket::SocketErrno ns3::TcpSocketBase::GetErrno() const [member function]
    cls.add_method('GetErrno', 
                   'ns3::Socket::SocketErrno', 
                   [], 
                   is_const=True, is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): ns3::Ptr<ns3::Node> ns3::TcpSocketBase::GetNode() const [member function]
    cls.add_method('GetNode', 
                   'ns3::Ptr< ns3::Node >', 
                   [], 
                   is_const=True, is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): uint32_t ns3::TcpSocketBase::GetRxAvailable() const [member function]
    cls.add_method('GetRxAvailable', 
                   'uint32_t', 
                   [], 
                   is_const=True, is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): int ns3::TcpSocketBase::GetSockName(ns3::Address & address) const [member function]
    cls.add_method('GetSockName', 
                   'int', 
                   [param('ns3::Address &', 'address')], 
                   is_const=True, is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): ns3::Socket::SocketType ns3::TcpSocketBase::GetSocketType() const [member function]
    cls.add_method('GetSocketType', 
                   'ns3::Socket::SocketType', 
                   [], 
                   is_const=True, is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): uint32_t ns3::TcpSocketBase::GetTxAvailable() const [member function]
    cls.add_method('GetTxAvailable', 
                   'uint32_t', 
                   [], 
                   is_const=True, is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): static ns3::TypeId ns3::TcpSocketBase::GetTypeId() [member function]
    cls.add_method('GetTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_static=True)
    ## tcp-socket-base.h (module 'internet'): int ns3::TcpSocketBase::Listen() [member function]
    cls.add_method('Listen', 
                   'int', 
                   [], 
                   is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): ns3::Ptr<ns3::Packet> ns3::TcpSocketBase::Recv(uint32_t maxSize, uint32_t flags) [member function]
    cls.add_method('Recv', 
                   'ns3::Ptr< ns3::Packet >', 
                   [param('uint32_t', 'maxSize'), param('uint32_t', 'flags')], 
                   is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): ns3::Ptr<ns3::Packet> ns3::TcpSocketBase::RecvFrom(uint32_t maxSize, uint32_t flags, ns3::Address & fromAddress) [member function]
    cls.add_method('RecvFrom', 
                   'ns3::Ptr< ns3::Packet >', 
                   [param('uint32_t', 'maxSize'), param('uint32_t', 'flags'), param('ns3::Address &', 'fromAddress')], 
                   is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): int ns3::TcpSocketBase::Send(ns3::Ptr<ns3::Packet> p, uint32_t flags) [member function]
    cls.add_method('Send', 
                   'int', 
                   [param('ns3::Ptr< ns3::Packet >', 'p'), param('uint32_t', 'flags')], 
                   is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): int ns3::TcpSocketBase::SendTo(ns3::Ptr<ns3::Packet> p, uint32_t flags, ns3::Address const & toAddress) [member function]
    cls.add_method('SendTo', 
                   'int', 
                   [param('ns3::Ptr< ns3::Packet >', 'p'), param('uint32_t', 'flags'), param('ns3::Address const &', 'toAddress')], 
                   is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::SetNode(ns3::Ptr<ns3::Node> node) [member function]
    cls.add_method('SetNode', 
                   'void', 
                   [param('ns3::Ptr< ns3::Node >', 'node')], 
                   is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::SetRtt(ns3::Ptr<ns3::RttEstimator> rtt) [member function]
    cls.add_method('SetRtt', 
                   'void', 
                   [param('ns3::Ptr< ns3::RttEstimator >', 'rtt')], 
                   is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::SetTcp(ns3::Ptr<ns3::TcpL4Protocol> tcp) [member function]
    cls.add_method('SetTcp', 
                   'void', 
                   [param('ns3::Ptr< ns3::TcpL4Protocol >', 'tcp')], 
                   is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): int ns3::TcpSocketBase::ShutdownRecv() [member function]
    cls.add_method('ShutdownRecv', 
                   'int', 
                   [], 
                   is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): int ns3::TcpSocketBase::ShutdownSend() [member function]
    cls.add_method('ShutdownSend', 
                   'int', 
                   [], 
                   is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::AddOptions(ns3::TcpHeader & arg0) [member function]
    cls.add_method('AddOptions', 
                   'void', 
                   [param('ns3::TcpHeader &', 'arg0')], 
                   visibility='protected', is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): uint16_t ns3::TcpSocketBase::AdvertisedWindowSize() [member function]
    cls.add_method('AdvertisedWindowSize', 
                   'uint16_t', 
                   [], 
                   visibility='protected', is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): uint32_t ns3::TcpSocketBase::AvailableWindow() [member function]
    cls.add_method('AvailableWindow', 
                   'uint32_t', 
                   [], 
                   visibility='protected', is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): uint32_t ns3::TcpSocketBase::BytesInFlight() [member function]
    cls.add_method('BytesInFlight', 
                   'uint32_t', 
                   [], 
                   visibility='protected', is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::CancelAllTimers() [member function]
    cls.add_method('CancelAllTimers', 
                   'void', 
                   [], 
                   visibility='protected')
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::CloseAndNotify() [member function]
    cls.add_method('CloseAndNotify', 
                   'void', 
                   [], 
                   visibility='protected')
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::CompleteFork(ns3::Ptr<ns3::Packet> arg0, ns3::TcpHeader const & arg1, ns3::Address const & fromAddress, ns3::Address const & toAdress) [member function]
    cls.add_method('CompleteFork', 
                   'void', 
                   [param('ns3::Ptr< ns3::Packet >', 'arg0'), param('ns3::TcpHeader const &', 'arg1'), param('ns3::Address const &', 'fromAddress'), param('ns3::Address const &', 'toAdress')], 
                   visibility='protected')
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::ConnectionSucceeded() [member function]
    cls.add_method('ConnectionSucceeded', 
                   'void', 
                   [], 
                   visibility='protected')
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::DeallocateEndPoint() [member function]
    cls.add_method('DeallocateEndPoint', 
                   'void', 
                   [], 
                   visibility='protected')
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::DelAckTimeout() [member function]
    cls.add_method('DelAckTimeout', 
                   'void', 
                   [], 
                   visibility='protected', is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::Destroy() [member function]
    cls.add_method('Destroy', 
                   'void', 
                   [], 
                   visibility='protected')
    ## tcp-socket-base.h (module 'internet'): int ns3::TcpSocketBase::DoClose() [member function]
    cls.add_method('DoClose', 
                   'int', 
                   [], 
                   visibility='protected')
    ## tcp-socket-base.h (module 'internet'): int ns3::TcpSocketBase::DoConnect() [member function]
    cls.add_method('DoConnect', 
                   'int', 
                   [], 
                   visibility='protected')
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::DoForwardUp(ns3::Ptr<ns3::Packet> packet, ns3::Ipv4Header header, uint16_t port, ns3::Ptr<ns3::Ipv4Interface> incomingInterface) [member function]
    cls.add_method('DoForwardUp', 
                   'void', 
                   [param('ns3::Ptr< ns3::Packet >', 'packet'), param('ns3::Ipv4Header', 'header'), param('uint16_t', 'port'), param('ns3::Ptr< ns3::Ipv4Interface >', 'incomingInterface')], 
                   visibility='protected', is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::DoPeerClose() [member function]
    cls.add_method('DoPeerClose', 
                   'void', 
                   [], 
                   visibility='protected')
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::DoRetransmit() [member function]
    cls.add_method('DoRetransmit', 
                   'void', 
                   [], 
                   visibility='protected', is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::DupAck(ns3::TcpHeader const & t, uint32_t count) [member function]
    cls.add_method('DupAck', 
                   'void', 
                   [param('ns3::TcpHeader const &', 't'), param('uint32_t', 'count')], 
                   is_pure_virtual=True, visibility='protected', is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::EstimateRtt(ns3::TcpHeader const & arg0) [member function]
    cls.add_method('EstimateRtt', 
                   'void', 
                   [param('ns3::TcpHeader const &', 'arg0')], 
                   visibility='protected', is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): ns3::Ptr<ns3::TcpSocketBase> ns3::TcpSocketBase::Fork() [member function]
    cls.add_method('Fork', 
                   'ns3::Ptr< ns3::TcpSocketBase >', 
                   [], 
                   is_pure_virtual=True, visibility='protected', is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::ForwardUp(ns3::Ptr<ns3::Packet> packet, ns3::Ipv4Header header, uint16_t port, ns3::Ptr<ns3::Ipv4Interface> incomingInterface) [member function]
    cls.add_method('ForwardUp', 
                   'void', 
                   [param('ns3::Ptr< ns3::Packet >', 'packet'), param('ns3::Ipv4Header', 'header'), param('uint16_t', 'port'), param('ns3::Ptr< ns3::Ipv4Interface >', 'incomingInterface')], 
                   visibility='protected')
    ## tcp-socket-base.h (module 'internet'): bool ns3::TcpSocketBase::GetAllowBroadcast() const [member function]
    cls.add_method('GetAllowBroadcast', 
                   'bool', 
                   [], 
                   is_const=True, visibility='protected', is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): uint32_t ns3::TcpSocketBase::GetConnCount() const [member function]
    cls.add_method('GetConnCount', 
                   'uint32_t', 
                   [], 
                   is_const=True, visibility='protected', is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): ns3::Time ns3::TcpSocketBase::GetConnTimeout() const [member function]
    cls.add_method('GetConnTimeout', 
                   'ns3::Time', 
                   [], 
                   is_const=True, visibility='protected', is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): uint32_t ns3::TcpSocketBase::GetDelAckMaxCount() const [member function]
    cls.add_method('GetDelAckMaxCount', 
                   'uint32_t', 
                   [], 
                   is_const=True, visibility='protected', is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): ns3::Time ns3::TcpSocketBase::GetDelAckTimeout() const [member function]
    cls.add_method('GetDelAckTimeout', 
                   'ns3::Time', 
                   [], 
                   is_const=True, visibility='protected', is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): uint32_t ns3::TcpSocketBase::GetInitialCwnd() const [member function]
    cls.add_method('GetInitialCwnd', 
                   'uint32_t', 
                   [], 
                   is_pure_virtual=True, is_const=True, visibility='protected', is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): ns3::Time ns3::TcpSocketBase::GetPersistTimeout() const [member function]
    cls.add_method('GetPersistTimeout', 
                   'ns3::Time', 
                   [], 
                   is_const=True, visibility='protected', is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): uint32_t ns3::TcpSocketBase::GetRcvBufSize() const [member function]
    cls.add_method('GetRcvBufSize', 
                   'uint32_t', 
                   [], 
                   is_const=True, visibility='protected', is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): uint32_t ns3::TcpSocketBase::GetSSThresh() const [member function]
    cls.add_method('GetSSThresh', 
                   'uint32_t', 
                   [], 
                   is_pure_virtual=True, is_const=True, visibility='protected', is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): uint32_t ns3::TcpSocketBase::GetSegSize() const [member function]
    cls.add_method('GetSegSize', 
                   'uint32_t', 
                   [], 
                   is_const=True, visibility='protected', is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): uint32_t ns3::TcpSocketBase::GetSndBufSize() const [member function]
    cls.add_method('GetSndBufSize', 
                   'uint32_t', 
                   [], 
                   is_const=True, visibility='protected', is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): bool ns3::TcpSocketBase::GetTcpNoDelay() const [member function]
    cls.add_method('GetTcpNoDelay', 
                   'bool', 
                   [], 
                   is_const=True, visibility='protected', is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::LastAckTimeout() [member function]
    cls.add_method('LastAckTimeout', 
                   'void', 
                   [], 
                   visibility='protected', is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::NewAck(ns3::SequenceNumber32 const & seq) [member function]
    cls.add_method('NewAck', 
                   'void', 
                   [param('ns3::SequenceNumber32 const &', 'seq')], 
                   visibility='protected', is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): bool ns3::TcpSocketBase::OutOfRange(ns3::SequenceNumber32 head, ns3::SequenceNumber32 tail) const [member function]
    cls.add_method('OutOfRange', 
                   'bool', 
                   [param('ns3::SequenceNumber32', 'head'), param('ns3::SequenceNumber32', 'tail')], 
                   is_const=True, visibility='protected')
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::PeerClose(ns3::Ptr<ns3::Packet> arg0, ns3::TcpHeader const & arg1) [member function]
    cls.add_method('PeerClose', 
                   'void', 
                   [param('ns3::Ptr< ns3::Packet >', 'arg0'), param('ns3::TcpHeader const &', 'arg1')], 
                   visibility='protected')
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::PersistTimeout() [member function]
    cls.add_method('PersistTimeout', 
                   'void', 
                   [], 
                   visibility='protected', is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::ProcessClosing(ns3::Ptr<ns3::Packet> arg0, ns3::TcpHeader const & arg1) [member function]
    cls.add_method('ProcessClosing', 
                   'void', 
                   [param('ns3::Ptr< ns3::Packet >', 'arg0'), param('ns3::TcpHeader const &', 'arg1')], 
                   visibility='protected')
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::ProcessEstablished(ns3::Ptr<ns3::Packet> arg0, ns3::TcpHeader const & arg1) [member function]
    cls.add_method('ProcessEstablished', 
                   'void', 
                   [param('ns3::Ptr< ns3::Packet >', 'arg0'), param('ns3::TcpHeader const &', 'arg1')], 
                   visibility='protected')
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::ProcessLastAck(ns3::Ptr<ns3::Packet> arg0, ns3::TcpHeader const & arg1) [member function]
    cls.add_method('ProcessLastAck', 
                   'void', 
                   [param('ns3::Ptr< ns3::Packet >', 'arg0'), param('ns3::TcpHeader const &', 'arg1')], 
                   visibility='protected')
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::ProcessListen(ns3::Ptr<ns3::Packet> arg0, ns3::TcpHeader const & arg1, ns3::Address const & arg2, ns3::Address const & arg3) [member function]
    cls.add_method('ProcessListen', 
                   'void', 
                   [param('ns3::Ptr< ns3::Packet >', 'arg0'), param('ns3::TcpHeader const &', 'arg1'), param('ns3::Address const &', 'arg2'), param('ns3::Address const &', 'arg3')], 
                   visibility='protected')
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::ProcessSynRcvd(ns3::Ptr<ns3::Packet> arg0, ns3::TcpHeader const & arg1, ns3::Address const & arg2, ns3::Address const & arg3) [member function]
    cls.add_method('ProcessSynRcvd', 
                   'void', 
                   [param('ns3::Ptr< ns3::Packet >', 'arg0'), param('ns3::TcpHeader const &', 'arg1'), param('ns3::Address const &', 'arg2'), param('ns3::Address const &', 'arg3')], 
                   visibility='protected')
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::ProcessSynSent(ns3::Ptr<ns3::Packet> arg0, ns3::TcpHeader const & arg1) [member function]
    cls.add_method('ProcessSynSent', 
                   'void', 
                   [param('ns3::Ptr< ns3::Packet >', 'arg0'), param('ns3::TcpHeader const &', 'arg1')], 
                   visibility='protected')
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::ProcessWait(ns3::Ptr<ns3::Packet> arg0, ns3::TcpHeader const & arg1) [member function]
    cls.add_method('ProcessWait', 
                   'void', 
                   [param('ns3::Ptr< ns3::Packet >', 'arg0'), param('ns3::TcpHeader const &', 'arg1')], 
                   visibility='protected')
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::ReTxTimeout() [member function]
    cls.add_method('ReTxTimeout', 
                   'void', 
                   [], 
                   visibility='protected', is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::ReadOptions(ns3::TcpHeader const & arg0) [member function]
    cls.add_method('ReadOptions', 
                   'void', 
                   [param('ns3::TcpHeader const &', 'arg0')], 
                   visibility='protected', is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::ReceivedAck(ns3::Ptr<ns3::Packet> arg0, ns3::TcpHeader const & arg1) [member function]
    cls.add_method('ReceivedAck', 
                   'void', 
                   [param('ns3::Ptr< ns3::Packet >', 'arg0'), param('ns3::TcpHeader const &', 'arg1')], 
                   visibility='protected', is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::ReceivedData(ns3::Ptr<ns3::Packet> arg0, ns3::TcpHeader const & arg1) [member function]
    cls.add_method('ReceivedData', 
                   'void', 
                   [param('ns3::Ptr< ns3::Packet >', 'arg0'), param('ns3::TcpHeader const &', 'arg1')], 
                   visibility='protected', is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::Retransmit() [member function]
    cls.add_method('Retransmit', 
                   'void', 
                   [], 
                   visibility='protected', is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): uint32_t ns3::TcpSocketBase::SendDataPacket(ns3::SequenceNumber32 seq, uint32_t maxSize, bool withAck) [member function]
    cls.add_method('SendDataPacket', 
                   'uint32_t', 
                   [param('ns3::SequenceNumber32', 'seq'), param('uint32_t', 'maxSize'), param('bool', 'withAck')], 
                   visibility='protected')
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::SendEmptyPacket(uint8_t flags) [member function]
    cls.add_method('SendEmptyPacket', 
                   'void', 
                   [param('uint8_t', 'flags')], 
                   visibility='protected')
    ## tcp-socket-base.h (module 'internet'): bool ns3::TcpSocketBase::SendPendingData(bool withAck=false) [member function]
    cls.add_method('SendPendingData', 
                   'bool', 
                   [param('bool', 'withAck', default_value='false')], 
                   visibility='protected')
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::SendRST() [member function]
    cls.add_method('SendRST', 
                   'void', 
                   [], 
                   visibility='protected')
    ## tcp-socket-base.h (module 'internet'): bool ns3::TcpSocketBase::SetAllowBroadcast(bool allowBroadcast) [member function]
    cls.add_method('SetAllowBroadcast', 
                   'bool', 
                   [param('bool', 'allowBroadcast')], 
                   visibility='protected', is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::SetConnCount(uint32_t count) [member function]
    cls.add_method('SetConnCount', 
                   'void', 
                   [param('uint32_t', 'count')], 
                   visibility='protected', is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::SetConnTimeout(ns3::Time timeout) [member function]
    cls.add_method('SetConnTimeout', 
                   'void', 
                   [param('ns3::Time', 'timeout')], 
                   visibility='protected', is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::SetDelAckMaxCount(uint32_t count) [member function]
    cls.add_method('SetDelAckMaxCount', 
                   'void', 
                   [param('uint32_t', 'count')], 
                   visibility='protected', is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::SetDelAckTimeout(ns3::Time timeout) [member function]
    cls.add_method('SetDelAckTimeout', 
                   'void', 
                   [param('ns3::Time', 'timeout')], 
                   visibility='protected', is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::SetInitialCwnd(uint32_t cwnd) [member function]
    cls.add_method('SetInitialCwnd', 
                   'void', 
                   [param('uint32_t', 'cwnd')], 
                   is_pure_virtual=True, visibility='protected', is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::SetPersistTimeout(ns3::Time timeout) [member function]
    cls.add_method('SetPersistTimeout', 
                   'void', 
                   [param('ns3::Time', 'timeout')], 
                   visibility='protected', is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::SetRcvBufSize(uint32_t size) [member function]
    cls.add_method('SetRcvBufSize', 
                   'void', 
                   [param('uint32_t', 'size')], 
                   visibility='protected', is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::SetSSThresh(uint32_t threshold) [member function]
    cls.add_method('SetSSThresh', 
                   'void', 
                   [param('uint32_t', 'threshold')], 
                   is_pure_virtual=True, visibility='protected', is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::SetSegSize(uint32_t size) [member function]
    cls.add_method('SetSegSize', 
                   'void', 
                   [param('uint32_t', 'size')], 
                   visibility='protected', is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::SetSndBufSize(uint32_t size) [member function]
    cls.add_method('SetSndBufSize', 
                   'void', 
                   [param('uint32_t', 'size')], 
                   visibility='protected', is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::SetTcpNoDelay(bool noDelay) [member function]
    cls.add_method('SetTcpNoDelay', 
                   'void', 
                   [param('bool', 'noDelay')], 
                   visibility='protected', is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): int ns3::TcpSocketBase::SetupCallback() [member function]
    cls.add_method('SetupCallback', 
                   'int', 
                   [], 
                   visibility='protected')
    ## tcp-socket-base.h (module 'internet'): int ns3::TcpSocketBase::SetupEndpoint() [member function]
    cls.add_method('SetupEndpoint', 
                   'int', 
                   [], 
                   visibility='protected')
    ## tcp-socket-base.h (module 'internet'): void ns3::TcpSocketBase::TimeWait() [member function]
    cls.add_method('TimeWait', 
                   'void', 
                   [], 
                   visibility='protected')
    ## tcp-socket-base.h (module 'internet'): uint32_t ns3::TcpSocketBase::UnAckDataCount() [member function]
    cls.add_method('UnAckDataCount', 
                   'uint32_t', 
                   [], 
                   visibility='protected', is_virtual=True)
    ## tcp-socket-base.h (module 'internet'): uint32_t ns3::TcpSocketBase::Window() [member function]
    cls.add_method('Window', 
                   'uint32_t', 
                   [], 
                   visibility='protected', is_virtual=True)
    return

def register_Ns3TcpSocketFactory_methods(root_module, cls):
    ## tcp-socket-factory.h (module 'internet'): ns3::TcpSocketFactory::TcpSocketFactory() [constructor]
    cls.add_constructor([])
    ## tcp-socket-factory.h (module 'internet'): ns3::TcpSocketFactory::TcpSocketFactory(ns3::TcpSocketFactory const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::TcpSocketFactory const &', 'arg0')])
    ## tcp-socket-factory.h (module 'internet'): static ns3::TypeId ns3::TcpSocketFactory::GetTypeId() [member function]
    cls.add_method('GetTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_static=True)
    return

def register_Ns3TcpTxBuffer_methods(root_module, cls):
    ## tcp-tx-buffer.h (module 'internet'): ns3::TcpTxBuffer::TcpTxBuffer(ns3::TcpTxBuffer const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::TcpTxBuffer const &', 'arg0')])
    ## tcp-tx-buffer.h (module 'internet'): ns3::TcpTxBuffer::TcpTxBuffer(uint32_t n=0) [constructor]
    cls.add_constructor([param('uint32_t', 'n', default_value='0')])
    ## tcp-tx-buffer.h (module 'internet'): bool ns3::TcpTxBuffer::Add(ns3::Ptr<ns3::Packet> p) [member function]
    cls.add_method('Add', 
                   'bool', 
                   [param('ns3::Ptr< ns3::Packet >', 'p')])
    ## tcp-tx-buffer.h (module 'internet'): uint32_t ns3::TcpTxBuffer::Available() const [member function]
    cls.add_method('Available', 
                   'uint32_t', 
                   [], 
                   is_const=True)
    ## tcp-tx-buffer.h (module 'internet'): ns3::Ptr<ns3::Packet> ns3::TcpTxBuffer::CopyFromSequence(uint32_t numBytes, ns3::SequenceNumber32 const & seq) [member function]
    cls.add_method('CopyFromSequence', 
                   'ns3::Ptr< ns3::Packet >', 
                   [param('uint32_t', 'numBytes'), param('ns3::SequenceNumber32 const &', 'seq')])
    ## tcp-tx-buffer.h (module 'internet'): void ns3::TcpTxBuffer::DiscardUpTo(ns3::SequenceNumber32 const & seq) [member function]
    cls.add_method('DiscardUpTo', 
                   'void', 
                   [param('ns3::SequenceNumber32 const &', 'seq')])
    ## tcp-tx-buffer.h (module 'internet'): static ns3::TypeId ns3::TcpTxBuffer::GetTypeId() [member function]
    cls.add_method('GetTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_static=True)
    ## tcp-tx-buffer.h (module 'internet'): ns3::SequenceNumber32 ns3::TcpTxBuffer::HeadSequence() const [member function]
    cls.add_method('HeadSequence', 
                   'ns3::SequenceNumber32', 
                   [], 
                   is_const=True)
    ## tcp-tx-buffer.h (module 'internet'): uint32_t ns3::TcpTxBuffer::MaxBufferSize() const [member function]
    cls.add_method('MaxBufferSize', 
                   'uint32_t', 
                   [], 
                   is_const=True)
    ## tcp-tx-buffer.h (module 'internet'): void ns3::TcpTxBuffer::SetHeadSequence(ns3::SequenceNumber32 const & seq) [member function]
    cls.add_method('SetHeadSequence', 
                   'void', 
                   [param('ns3::SequenceNumber32 const &', 'seq')])
    ## tcp-tx-buffer.h (module 'internet'): void ns3::TcpTxBuffer::SetMaxBufferSize(uint32_t n) [member function]
    cls.add_method('SetMaxBufferSize', 
                   'void', 
                   [param('uint32_t', 'n')])
    ## tcp-tx-buffer.h (module 'internet'): uint32_t ns3::TcpTxBuffer::Size() const [member function]
    cls.add_method('Size', 
                   'uint32_t', 
                   [], 
                   is_const=True)
    ## tcp-tx-buffer.h (module 'internet'): uint32_t ns3::TcpTxBuffer::SizeFromSequence(ns3::SequenceNumber32 const & seq) const [member function]
    cls.add_method('SizeFromSequence', 
                   'uint32_t', 
                   [param('ns3::SequenceNumber32 const &', 'seq')], 
                   is_const=True)
    ## tcp-tx-buffer.h (module 'internet'): ns3::SequenceNumber32 ns3::TcpTxBuffer::TailSequence() const [member function]
    cls.add_method('TailSequence', 
                   'ns3::SequenceNumber32', 
                   [], 
                   is_const=True)
    return

def register_Ns3Time_methods(root_module, cls):
    cls.add_binary_comparison_operator('!=')
    cls.add_inplace_numeric_operator('+=', param('ns3::Time const &', 'right'))
    cls.add_binary_numeric_operator('+', root_module['ns3::Time'], root_module['ns3::Time'], param('ns3::Time const &', 'right'))
    cls.add_binary_numeric_operator('-', root_module['ns3::Time'], root_module['ns3::Time'], param('ns3::Time const &', 'right'))
    cls.add_binary_comparison_operator('<')
    cls.add_binary_comparison_operator('>')
    cls.add_inplace_numeric_operator('-=', param('ns3::Time const &', 'right'))
    cls.add_output_stream_operator()
    cls.add_binary_comparison_operator('<=')
    cls.add_binary_comparison_operator('==')
    cls.add_binary_comparison_operator('>=')
    ## nstime.h (module 'core'): ns3::Time::Time() [constructor]
    cls.add_constructor([])
    ## nstime.h (module 'core'): ns3::Time::Time(ns3::Time const & o) [copy constructor]
    cls.add_constructor([param('ns3::Time const &', 'o')])
    ## nstime.h (module 'core'): ns3::Time::Time(double v) [constructor]
    cls.add_constructor([param('double', 'v')])
    ## nstime.h (module 'core'): ns3::Time::Time(int v) [constructor]
    cls.add_constructor([param('int', 'v')])
    ## nstime.h (module 'core'): ns3::Time::Time(long int v) [constructor]
    cls.add_constructor([param('long int', 'v')])
    ## nstime.h (module 'core'): ns3::Time::Time(long long int v) [constructor]
    cls.add_constructor([param('long long int', 'v')])
    ## nstime.h (module 'core'): ns3::Time::Time(unsigned int v) [constructor]
    cls.add_constructor([param('unsigned int', 'v')])
    ## nstime.h (module 'core'): ns3::Time::Time(long unsigned int v) [constructor]
    cls.add_constructor([param('long unsigned int', 'v')])
    ## nstime.h (module 'core'): ns3::Time::Time(long long unsigned int v) [constructor]
    cls.add_constructor([param('long long unsigned int', 'v')])
    ## nstime.h (module 'core'): ns3::Time::Time(std::string const & s) [constructor]
    cls.add_constructor([param('std::string const &', 's')])
    ## nstime.h (module 'core'): ns3::Time::Time(ns3::int64x64_t const & value) [constructor]
    cls.add_constructor([param('ns3::int64x64_t const &', 'value')])
    ## nstime.h (module 'core'): int ns3::Time::Compare(ns3::Time const & o) const [member function]
    cls.add_method('Compare', 
                   'int', 
                   [param('ns3::Time const &', 'o')], 
                   is_const=True)
    ## nstime.h (module 'core'): static ns3::Time ns3::Time::From(ns3::int64x64_t const & from, ns3::Time::Unit timeUnit) [member function]
    cls.add_method('From', 
                   'ns3::Time', 
                   [param('ns3::int64x64_t const &', 'from'), param('ns3::Time::Unit', 'timeUnit')], 
                   is_static=True)
    ## nstime.h (module 'core'): static ns3::Time ns3::Time::From(ns3::int64x64_t const & value) [member function]
    cls.add_method('From', 
                   'ns3::Time', 
                   [param('ns3::int64x64_t const &', 'value')], 
                   is_static=True)
    ## nstime.h (module 'core'): static ns3::Time ns3::Time::FromDouble(double value, ns3::Time::Unit timeUnit) [member function]
    cls.add_method('FromDouble', 
                   'ns3::Time', 
                   [param('double', 'value'), param('ns3::Time::Unit', 'timeUnit')], 
                   is_static=True)
    ## nstime.h (module 'core'): static ns3::Time ns3::Time::FromInteger(uint64_t value, ns3::Time::Unit timeUnit) [member function]
    cls.add_method('FromInteger', 
                   'ns3::Time', 
                   [param('uint64_t', 'value'), param('ns3::Time::Unit', 'timeUnit')], 
                   is_static=True)
    ## nstime.h (module 'core'): double ns3::Time::GetDouble() const [member function]
    cls.add_method('GetDouble', 
                   'double', 
                   [], 
                   is_const=True)
    ## nstime.h (module 'core'): int64_t ns3::Time::GetFemtoSeconds() const [member function]
    cls.add_method('GetFemtoSeconds', 
                   'int64_t', 
                   [], 
                   is_const=True)
    ## nstime.h (module 'core'): int64_t ns3::Time::GetInteger() const [member function]
    cls.add_method('GetInteger', 
                   'int64_t', 
                   [], 
                   is_const=True)
    ## nstime.h (module 'core'): int64_t ns3::Time::GetMicroSeconds() const [member function]
    cls.add_method('GetMicroSeconds', 
                   'int64_t', 
                   [], 
                   is_const=True)
    ## nstime.h (module 'core'): int64_t ns3::Time::GetMilliSeconds() const [member function]
    cls.add_method('GetMilliSeconds', 
                   'int64_t', 
                   [], 
                   is_const=True)
    ## nstime.h (module 'core'): int64_t ns3::Time::GetNanoSeconds() const [member function]
    cls.add_method('GetNanoSeconds', 
                   'int64_t', 
                   [], 
                   is_const=True)
    ## nstime.h (module 'core'): int64_t ns3::Time::GetPicoSeconds() const [member function]
    cls.add_method('GetPicoSeconds', 
                   'int64_t', 
                   [], 
                   is_const=True)
    ## nstime.h (module 'core'): static ns3::Time::Unit ns3::Time::GetResolution() [member function]
    cls.add_method('GetResolution', 
                   'ns3::Time::Unit', 
                   [], 
                   is_static=True)
    ## nstime.h (module 'core'): double ns3::Time::GetSeconds() const [member function]
    cls.add_method('GetSeconds', 
                   'double', 
                   [], 
                   is_const=True)
    ## nstime.h (module 'core'): int64_t ns3::Time::GetTimeStep() const [member function]
    cls.add_method('GetTimeStep', 
                   'int64_t', 
                   [], 
                   is_const=True)
    ## nstime.h (module 'core'): bool ns3::Time::IsNegative() const [member function]
    cls.add_method('IsNegative', 
                   'bool', 
                   [], 
                   is_const=True)
    ## nstime.h (module 'core'): bool ns3::Time::IsPositive() const [member function]
    cls.add_method('IsPositive', 
                   'bool', 
                   [], 
                   is_const=True)
    ## nstime.h (module 'core'): bool ns3::Time::IsStrictlyNegative() const [member function]
    cls.add_method('IsStrictlyNegative', 
                   'bool', 
                   [], 
                   is_const=True)
    ## nstime.h (module 'core'): bool ns3::Time::IsStrictlyPositive() const [member function]
    cls.add_method('IsStrictlyPositive', 
                   'bool', 
                   [], 
                   is_const=True)
    ## nstime.h (module 'core'): bool ns3::Time::IsZero() const [member function]
    cls.add_method('IsZero', 
                   'bool', 
                   [], 
                   is_const=True)
    ## nstime.h (module 'core'): static void ns3::Time::SetResolution(ns3::Time::Unit resolution) [member function]
    cls.add_method('SetResolution', 
                   'void', 
                   [param('ns3::Time::Unit', 'resolution')], 
                   is_static=True)
    ## nstime.h (module 'core'): ns3::int64x64_t ns3::Time::To(ns3::Time::Unit timeUnit) const [member function]
    cls.add_method('To', 
                   'ns3::int64x64_t', 
                   [param('ns3::Time::Unit', 'timeUnit')], 
                   is_const=True)
    ## nstime.h (module 'core'): double ns3::Time::ToDouble(ns3::Time::Unit timeUnit) const [member function]
    cls.add_method('ToDouble', 
                   'double', 
                   [param('ns3::Time::Unit', 'timeUnit')], 
                   is_const=True)
    ## nstime.h (module 'core'): int64_t ns3::Time::ToInteger(ns3::Time::Unit timeUnit) const [member function]
    cls.add_method('ToInteger', 
                   'int64_t', 
                   [param('ns3::Time::Unit', 'timeUnit')], 
                   is_const=True)
    return

def register_Ns3TraceSourceAccessor_methods(root_module, cls):
    ## trace-source-accessor.h (module 'core'): ns3::TraceSourceAccessor::TraceSourceAccessor(ns3::TraceSourceAccessor const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::TraceSourceAccessor const &', 'arg0')])
    ## trace-source-accessor.h (module 'core'): ns3::TraceSourceAccessor::TraceSourceAccessor() [constructor]
    cls.add_constructor([])
    ## trace-source-accessor.h (module 'core'): bool ns3::TraceSourceAccessor::Connect(ns3::ObjectBase * obj, std::string context, ns3::CallbackBase const & cb) const [member function]
    cls.add_method('Connect', 
                   'bool', 
                   [param('ns3::ObjectBase *', 'obj', transfer_ownership=False), param('std::string', 'context'), param('ns3::CallbackBase const &', 'cb')], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## trace-source-accessor.h (module 'core'): bool ns3::TraceSourceAccessor::ConnectWithoutContext(ns3::ObjectBase * obj, ns3::CallbackBase const & cb) const [member function]
    cls.add_method('ConnectWithoutContext', 
                   'bool', 
                   [param('ns3::ObjectBase *', 'obj', transfer_ownership=False), param('ns3::CallbackBase const &', 'cb')], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## trace-source-accessor.h (module 'core'): bool ns3::TraceSourceAccessor::Disconnect(ns3::ObjectBase * obj, std::string context, ns3::CallbackBase const & cb) const [member function]
    cls.add_method('Disconnect', 
                   'bool', 
                   [param('ns3::ObjectBase *', 'obj', transfer_ownership=False), param('std::string', 'context'), param('ns3::CallbackBase const &', 'cb')], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## trace-source-accessor.h (module 'core'): bool ns3::TraceSourceAccessor::DisconnectWithoutContext(ns3::ObjectBase * obj, ns3::CallbackBase const & cb) const [member function]
    cls.add_method('DisconnectWithoutContext', 
                   'bool', 
                   [param('ns3::ObjectBase *', 'obj', transfer_ownership=False), param('ns3::CallbackBase const &', 'cb')], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    return

def register_Ns3TracedValue__Ns3Time_methods(root_module, cls):
    ## traced-value.h (module 'core'): ns3::TracedValue<ns3::Time>::TracedValue() [constructor]
    cls.add_constructor([])
    ## traced-value.h (module 'core'): ns3::TracedValue<ns3::Time>::TracedValue(ns3::TracedValue<ns3::Time> const & o) [copy constructor]
    cls.add_constructor([param('ns3::TracedValue< ns3::Time > const &', 'o')])
    ## traced-value.h (module 'core'): ns3::TracedValue<ns3::Time>::TracedValue(ns3::Time const & v) [constructor]
    cls.add_constructor([param('ns3::Time const &', 'v')])
    ## traced-value.h (module 'core'): void ns3::TracedValue<ns3::Time>::Connect(ns3::CallbackBase const & cb, std::basic_string<char,std::char_traits<char>,std::allocator<char> > path) [member function]
    cls.add_method('Connect', 
                   'void', 
                   [param('ns3::CallbackBase const &', 'cb'), param('std::string', 'path')])
    ## traced-value.h (module 'core'): void ns3::TracedValue<ns3::Time>::ConnectWithoutContext(ns3::CallbackBase const & cb) [member function]
    cls.add_method('ConnectWithoutContext', 
                   'void', 
                   [param('ns3::CallbackBase const &', 'cb')])
    ## traced-value.h (module 'core'): void ns3::TracedValue<ns3::Time>::Disconnect(ns3::CallbackBase const & cb, std::basic_string<char,std::char_traits<char>,std::allocator<char> > path) [member function]
    cls.add_method('Disconnect', 
                   'void', 
                   [param('ns3::CallbackBase const &', 'cb'), param('std::string', 'path')])
    ## traced-value.h (module 'core'): void ns3::TracedValue<ns3::Time>::DisconnectWithoutContext(ns3::CallbackBase const & cb) [member function]
    cls.add_method('DisconnectWithoutContext', 
                   'void', 
                   [param('ns3::CallbackBase const &', 'cb')])
    ## traced-value.h (module 'core'): ns3::Time ns3::TracedValue<ns3::Time>::Get() const [member function]
    cls.add_method('Get', 
                   'ns3::Time', 
                   [], 
                   is_const=True)
    ## traced-value.h (module 'core'): void ns3::TracedValue<ns3::Time>::Set(ns3::Time const & v) [member function]
    cls.add_method('Set', 
                   'void', 
                   [param('ns3::Time const &', 'v')])
    return

def register_Ns3Trailer_methods(root_module, cls):
    cls.add_output_stream_operator()
    ## trailer.h (module 'network'): ns3::Trailer::Trailer() [constructor]
    cls.add_constructor([])
    ## trailer.h (module 'network'): ns3::Trailer::Trailer(ns3::Trailer const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::Trailer const &', 'arg0')])
    ## trailer.h (module 'network'): uint32_t ns3::Trailer::Deserialize(ns3::Buffer::Iterator end) [member function]
    cls.add_method('Deserialize', 
                   'uint32_t', 
                   [param('ns3::Buffer::Iterator', 'end')], 
                   is_pure_virtual=True, is_virtual=True)
    ## trailer.h (module 'network'): uint32_t ns3::Trailer::GetSerializedSize() const [member function]
    cls.add_method('GetSerializedSize', 
                   'uint32_t', 
                   [], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## trailer.h (module 'network'): static ns3::TypeId ns3::Trailer::GetTypeId() [member function]
    cls.add_method('GetTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_static=True)
    ## trailer.h (module 'network'): void ns3::Trailer::Print(std::ostream & os) const [member function]
    cls.add_method('Print', 
                   'void', 
                   [param('std::ostream &', 'os')], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## trailer.h (module 'network'): void ns3::Trailer::Serialize(ns3::Buffer::Iterator start) const [member function]
    cls.add_method('Serialize', 
                   'void', 
                   [param('ns3::Buffer::Iterator', 'start')], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    return

def register_Ns3AttributeAccessor_methods(root_module, cls):
    ## attribute.h (module 'core'): ns3::AttributeAccessor::AttributeAccessor(ns3::AttributeAccessor const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::AttributeAccessor const &', 'arg0')])
    ## attribute.h (module 'core'): ns3::AttributeAccessor::AttributeAccessor() [constructor]
    cls.add_constructor([])
    ## attribute.h (module 'core'): bool ns3::AttributeAccessor::Get(ns3::ObjectBase const * object, ns3::AttributeValue & attribute) const [member function]
    cls.add_method('Get', 
                   'bool', 
                   [param('ns3::ObjectBase const *', 'object'), param('ns3::AttributeValue &', 'attribute')], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## attribute.h (module 'core'): bool ns3::AttributeAccessor::HasGetter() const [member function]
    cls.add_method('HasGetter', 
                   'bool', 
                   [], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## attribute.h (module 'core'): bool ns3::AttributeAccessor::HasSetter() const [member function]
    cls.add_method('HasSetter', 
                   'bool', 
                   [], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## attribute.h (module 'core'): bool ns3::AttributeAccessor::Set(ns3::ObjectBase * object, ns3::AttributeValue const & value) const [member function]
    cls.add_method('Set', 
                   'bool', 
                   [param('ns3::ObjectBase *', 'object', transfer_ownership=False), param('ns3::AttributeValue const &', 'value')], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    return

def register_Ns3AttributeChecker_methods(root_module, cls):
    ## attribute.h (module 'core'): ns3::AttributeChecker::AttributeChecker(ns3::AttributeChecker const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::AttributeChecker const &', 'arg0')])
    ## attribute.h (module 'core'): ns3::AttributeChecker::AttributeChecker() [constructor]
    cls.add_constructor([])
    ## attribute.h (module 'core'): bool ns3::AttributeChecker::Check(ns3::AttributeValue const & value) const [member function]
    cls.add_method('Check', 
                   'bool', 
                   [param('ns3::AttributeValue const &', 'value')], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## attribute.h (module 'core'): bool ns3::AttributeChecker::Copy(ns3::AttributeValue const & source, ns3::AttributeValue & destination) const [member function]
    cls.add_method('Copy', 
                   'bool', 
                   [param('ns3::AttributeValue const &', 'source'), param('ns3::AttributeValue &', 'destination')], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## attribute.h (module 'core'): ns3::Ptr<ns3::AttributeValue> ns3::AttributeChecker::Create() const [member function]
    cls.add_method('Create', 
                   'ns3::Ptr< ns3::AttributeValue >', 
                   [], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## attribute.h (module 'core'): ns3::Ptr<ns3::AttributeValue> ns3::AttributeChecker::CreateValidValue(ns3::AttributeValue const & value) const [member function]
    cls.add_method('CreateValidValue', 
                   'ns3::Ptr< ns3::AttributeValue >', 
                   [param('ns3::AttributeValue const &', 'value')], 
                   is_const=True)
    ## attribute.h (module 'core'): std::string ns3::AttributeChecker::GetUnderlyingTypeInformation() const [member function]
    cls.add_method('GetUnderlyingTypeInformation', 
                   'std::string', 
                   [], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## attribute.h (module 'core'): std::string ns3::AttributeChecker::GetValueTypeName() const [member function]
    cls.add_method('GetValueTypeName', 
                   'std::string', 
                   [], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## attribute.h (module 'core'): bool ns3::AttributeChecker::HasUnderlyingTypeInformation() const [member function]
    cls.add_method('HasUnderlyingTypeInformation', 
                   'bool', 
                   [], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    return

def register_Ns3AttributeValue_methods(root_module, cls):
    ## attribute.h (module 'core'): ns3::AttributeValue::AttributeValue(ns3::AttributeValue const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::AttributeValue const &', 'arg0')])
    ## attribute.h (module 'core'): ns3::AttributeValue::AttributeValue() [constructor]
    cls.add_constructor([])
    ## attribute.h (module 'core'): ns3::Ptr<ns3::AttributeValue> ns3::AttributeValue::Copy() const [member function]
    cls.add_method('Copy', 
                   'ns3::Ptr< ns3::AttributeValue >', 
                   [], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## attribute.h (module 'core'): bool ns3::AttributeValue::DeserializeFromString(std::string value, ns3::Ptr<ns3::AttributeChecker const> checker) [member function]
    cls.add_method('DeserializeFromString', 
                   'bool', 
                   [param('std::string', 'value'), param('ns3::Ptr< ns3::AttributeChecker const >', 'checker')], 
                   is_pure_virtual=True, is_virtual=True)
    ## attribute.h (module 'core'): std::string ns3::AttributeValue::SerializeToString(ns3::Ptr<ns3::AttributeChecker const> checker) const [member function]
    cls.add_method('SerializeToString', 
                   'std::string', 
                   [param('ns3::Ptr< ns3::AttributeChecker const >', 'checker')], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    return

def register_Ns3BooleanChecker_methods(root_module, cls):
    ## boolean.h (module 'core'): ns3::BooleanChecker::BooleanChecker() [constructor]
    cls.add_constructor([])
    ## boolean.h (module 'core'): ns3::BooleanChecker::BooleanChecker(ns3::BooleanChecker const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::BooleanChecker const &', 'arg0')])
    return

def register_Ns3BooleanValue_methods(root_module, cls):
    cls.add_output_stream_operator()
    ## boolean.h (module 'core'): ns3::BooleanValue::BooleanValue(ns3::BooleanValue const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::BooleanValue const &', 'arg0')])
    ## boolean.h (module 'core'): ns3::BooleanValue::BooleanValue() [constructor]
    cls.add_constructor([])
    ## boolean.h (module 'core'): ns3::BooleanValue::BooleanValue(bool value) [constructor]
    cls.add_constructor([param('bool', 'value')])
    ## boolean.h (module 'core'): ns3::Ptr<ns3::AttributeValue> ns3::BooleanValue::Copy() const [member function]
    cls.add_method('Copy', 
                   'ns3::Ptr< ns3::AttributeValue >', 
                   [], 
                   is_const=True, is_virtual=True)
    ## boolean.h (module 'core'): bool ns3::BooleanValue::DeserializeFromString(std::string value, ns3::Ptr<ns3::AttributeChecker const> checker) [member function]
    cls.add_method('DeserializeFromString', 
                   'bool', 
                   [param('std::string', 'value'), param('ns3::Ptr< ns3::AttributeChecker const >', 'checker')], 
                   is_virtual=True)
    ## boolean.h (module 'core'): bool ns3::BooleanValue::Get() const [member function]
    cls.add_method('Get', 
                   'bool', 
                   [], 
                   is_const=True)
    ## boolean.h (module 'core'): std::string ns3::BooleanValue::SerializeToString(ns3::Ptr<ns3::AttributeChecker const> checker) const [member function]
    cls.add_method('SerializeToString', 
                   'std::string', 
                   [param('ns3::Ptr< ns3::AttributeChecker const >', 'checker')], 
                   is_const=True, is_virtual=True)
    ## boolean.h (module 'core'): void ns3::BooleanValue::Set(bool value) [member function]
    cls.add_method('Set', 
                   'void', 
                   [param('bool', 'value')])
    return

def register_Ns3CallbackChecker_methods(root_module, cls):
    ## callback.h (module 'core'): ns3::CallbackChecker::CallbackChecker() [constructor]
    cls.add_constructor([])
    ## callback.h (module 'core'): ns3::CallbackChecker::CallbackChecker(ns3::CallbackChecker const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::CallbackChecker const &', 'arg0')])
    return

def register_Ns3CallbackImplBase_methods(root_module, cls):
    ## callback.h (module 'core'): ns3::CallbackImplBase::CallbackImplBase() [constructor]
    cls.add_constructor([])
    ## callback.h (module 'core'): ns3::CallbackImplBase::CallbackImplBase(ns3::CallbackImplBase const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::CallbackImplBase const &', 'arg0')])
    ## callback.h (module 'core'): bool ns3::CallbackImplBase::IsEqual(ns3::Ptr<ns3::CallbackImplBase const> other) const [member function]
    cls.add_method('IsEqual', 
                   'bool', 
                   [param('ns3::Ptr< ns3::CallbackImplBase const >', 'other')], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    return

def register_Ns3CallbackValue_methods(root_module, cls):
    ## callback.h (module 'core'): ns3::CallbackValue::CallbackValue(ns3::CallbackValue const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::CallbackValue const &', 'arg0')])
    ## callback.h (module 'core'): ns3::CallbackValue::CallbackValue() [constructor]
    cls.add_constructor([])
    ## callback.h (module 'core'): ns3::CallbackValue::CallbackValue(ns3::CallbackBase const & base) [constructor]
    cls.add_constructor([param('ns3::CallbackBase const &', 'base')])
    ## callback.h (module 'core'): ns3::Ptr<ns3::AttributeValue> ns3::CallbackValue::Copy() const [member function]
    cls.add_method('Copy', 
                   'ns3::Ptr< ns3::AttributeValue >', 
                   [], 
                   is_const=True, is_virtual=True)
    ## callback.h (module 'core'): bool ns3::CallbackValue::DeserializeFromString(std::string value, ns3::Ptr<ns3::AttributeChecker const> checker) [member function]
    cls.add_method('DeserializeFromString', 
                   'bool', 
                   [param('std::string', 'value'), param('ns3::Ptr< ns3::AttributeChecker const >', 'checker')], 
                   is_virtual=True)
    ## callback.h (module 'core'): std::string ns3::CallbackValue::SerializeToString(ns3::Ptr<ns3::AttributeChecker const> checker) const [member function]
    cls.add_method('SerializeToString', 
                   'std::string', 
                   [param('ns3::Ptr< ns3::AttributeChecker const >', 'checker')], 
                   is_const=True, is_virtual=True)
    ## callback.h (module 'core'): void ns3::CallbackValue::Set(ns3::CallbackBase base) [member function]
    cls.add_method('Set', 
                   'void', 
                   [param('ns3::CallbackBase', 'base')])
    return

def register_Ns3DoubleValue_methods(root_module, cls):
    ## double.h (module 'core'): ns3::DoubleValue::DoubleValue() [constructor]
    cls.add_constructor([])
    ## double.h (module 'core'): ns3::DoubleValue::DoubleValue(ns3::DoubleValue const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::DoubleValue const &', 'arg0')])
    ## double.h (module 'core'): ns3::DoubleValue::DoubleValue(double const & value) [constructor]
    cls.add_constructor([param('double const &', 'value')])
    ## double.h (module 'core'): ns3::Ptr<ns3::AttributeValue> ns3::DoubleValue::Copy() const [member function]
    cls.add_method('Copy', 
                   'ns3::Ptr< ns3::AttributeValue >', 
                   [], 
                   is_const=True, is_virtual=True)
    ## double.h (module 'core'): bool ns3::DoubleValue::DeserializeFromString(std::string value, ns3::Ptr<ns3::AttributeChecker const> checker) [member function]
    cls.add_method('DeserializeFromString', 
                   'bool', 
                   [param('std::string', 'value'), param('ns3::Ptr< ns3::AttributeChecker const >', 'checker')], 
                   is_virtual=True)
    ## double.h (module 'core'): double ns3::DoubleValue::Get() const [member function]
    cls.add_method('Get', 
                   'double', 
                   [], 
                   is_const=True)
    ## double.h (module 'core'): std::string ns3::DoubleValue::SerializeToString(ns3::Ptr<ns3::AttributeChecker const> checker) const [member function]
    cls.add_method('SerializeToString', 
                   'std::string', 
                   [param('ns3::Ptr< ns3::AttributeChecker const >', 'checker')], 
                   is_const=True, is_virtual=True)
    ## double.h (module 'core'): void ns3::DoubleValue::Set(double const & value) [member function]
    cls.add_method('Set', 
                   'void', 
                   [param('double const &', 'value')])
    return

def register_Ns3EmptyAttributeValue_methods(root_module, cls):
    ## attribute.h (module 'core'): ns3::EmptyAttributeValue::EmptyAttributeValue(ns3::EmptyAttributeValue const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::EmptyAttributeValue const &', 'arg0')])
    ## attribute.h (module 'core'): ns3::EmptyAttributeValue::EmptyAttributeValue() [constructor]
    cls.add_constructor([])
    ## attribute.h (module 'core'): ns3::Ptr<ns3::AttributeValue> ns3::EmptyAttributeValue::Copy() const [member function]
    cls.add_method('Copy', 
                   'ns3::Ptr< ns3::AttributeValue >', 
                   [], 
                   is_const=True, visibility='private', is_virtual=True)
    ## attribute.h (module 'core'): bool ns3::EmptyAttributeValue::DeserializeFromString(std::string value, ns3::Ptr<ns3::AttributeChecker const> checker) [member function]
    cls.add_method('DeserializeFromString', 
                   'bool', 
                   [param('std::string', 'value'), param('ns3::Ptr< ns3::AttributeChecker const >', 'checker')], 
                   visibility='private', is_virtual=True)
    ## attribute.h (module 'core'): std::string ns3::EmptyAttributeValue::SerializeToString(ns3::Ptr<ns3::AttributeChecker const> checker) const [member function]
    cls.add_method('SerializeToString', 
                   'std::string', 
                   [param('ns3::Ptr< ns3::AttributeChecker const >', 'checker')], 
                   is_const=True, visibility='private', is_virtual=True)
    return

def register_Ns3EnumChecker_methods(root_module, cls):
    ## enum.h (module 'core'): ns3::EnumChecker::EnumChecker(ns3::EnumChecker const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::EnumChecker const &', 'arg0')])
    ## enum.h (module 'core'): ns3::EnumChecker::EnumChecker() [constructor]
    cls.add_constructor([])
    ## enum.h (module 'core'): void ns3::EnumChecker::Add(int v, std::string name) [member function]
    cls.add_method('Add', 
                   'void', 
                   [param('int', 'v'), param('std::string', 'name')])
    ## enum.h (module 'core'): void ns3::EnumChecker::AddDefault(int v, std::string name) [member function]
    cls.add_method('AddDefault', 
                   'void', 
                   [param('int', 'v'), param('std::string', 'name')])
    ## enum.h (module 'core'): bool ns3::EnumChecker::Check(ns3::AttributeValue const & value) const [member function]
    cls.add_method('Check', 
                   'bool', 
                   [param('ns3::AttributeValue const &', 'value')], 
                   is_const=True, is_virtual=True)
    ## enum.h (module 'core'): bool ns3::EnumChecker::Copy(ns3::AttributeValue const & src, ns3::AttributeValue & dst) const [member function]
    cls.add_method('Copy', 
                   'bool', 
                   [param('ns3::AttributeValue const &', 'src'), param('ns3::AttributeValue &', 'dst')], 
                   is_const=True, is_virtual=True)
    ## enum.h (module 'core'): ns3::Ptr<ns3::AttributeValue> ns3::EnumChecker::Create() const [member function]
    cls.add_method('Create', 
                   'ns3::Ptr< ns3::AttributeValue >', 
                   [], 
                   is_const=True, is_virtual=True)
    ## enum.h (module 'core'): std::string ns3::EnumChecker::GetUnderlyingTypeInformation() const [member function]
    cls.add_method('GetUnderlyingTypeInformation', 
                   'std::string', 
                   [], 
                   is_const=True, is_virtual=True)
    ## enum.h (module 'core'): std::string ns3::EnumChecker::GetValueTypeName() const [member function]
    cls.add_method('GetValueTypeName', 
                   'std::string', 
                   [], 
                   is_const=True, is_virtual=True)
    ## enum.h (module 'core'): bool ns3::EnumChecker::HasUnderlyingTypeInformation() const [member function]
    cls.add_method('HasUnderlyingTypeInformation', 
                   'bool', 
                   [], 
                   is_const=True, is_virtual=True)
    return

def register_Ns3EnumValue_methods(root_module, cls):
    ## enum.h (module 'core'): ns3::EnumValue::EnumValue(ns3::EnumValue const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::EnumValue const &', 'arg0')])
    ## enum.h (module 'core'): ns3::EnumValue::EnumValue() [constructor]
    cls.add_constructor([])
    ## enum.h (module 'core'): ns3::EnumValue::EnumValue(int v) [constructor]
    cls.add_constructor([param('int', 'v')])
    ## enum.h (module 'core'): ns3::Ptr<ns3::AttributeValue> ns3::EnumValue::Copy() const [member function]
    cls.add_method('Copy', 
                   'ns3::Ptr< ns3::AttributeValue >', 
                   [], 
                   is_const=True, is_virtual=True)
    ## enum.h (module 'core'): bool ns3::EnumValue::DeserializeFromString(std::string value, ns3::Ptr<ns3::AttributeChecker const> checker) [member function]
    cls.add_method('DeserializeFromString', 
                   'bool', 
                   [param('std::string', 'value'), param('ns3::Ptr< ns3::AttributeChecker const >', 'checker')], 
                   is_virtual=True)
    ## enum.h (module 'core'): int ns3::EnumValue::Get() const [member function]
    cls.add_method('Get', 
                   'int', 
                   [], 
                   is_const=True)
    ## enum.h (module 'core'): std::string ns3::EnumValue::SerializeToString(ns3::Ptr<ns3::AttributeChecker const> checker) const [member function]
    cls.add_method('SerializeToString', 
                   'std::string', 
                   [param('ns3::Ptr< ns3::AttributeChecker const >', 'checker')], 
                   is_const=True, is_virtual=True)
    ## enum.h (module 'core'): void ns3::EnumValue::Set(int v) [member function]
    cls.add_method('Set', 
                   'void', 
                   [param('int', 'v')])
    return

def register_Ns3EventImpl_methods(root_module, cls):
    ## event-impl.h (module 'core'): ns3::EventImpl::EventImpl(ns3::EventImpl const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::EventImpl const &', 'arg0')])
    ## event-impl.h (module 'core'): ns3::EventImpl::EventImpl() [constructor]
    cls.add_constructor([])
    ## event-impl.h (module 'core'): void ns3::EventImpl::Cancel() [member function]
    cls.add_method('Cancel', 
                   'void', 
                   [])
    ## event-impl.h (module 'core'): void ns3::EventImpl::Invoke() [member function]
    cls.add_method('Invoke', 
                   'void', 
                   [])
    ## event-impl.h (module 'core'): bool ns3::EventImpl::IsCancelled() [member function]
    cls.add_method('IsCancelled', 
                   'bool', 
                   [])
    ## event-impl.h (module 'core'): void ns3::EventImpl::Notify() [member function]
    cls.add_method('Notify', 
                   'void', 
                   [], 
                   is_pure_virtual=True, visibility='protected', is_virtual=True)
    return

def register_Ns3IntegerValue_methods(root_module, cls):
    ## integer.h (module 'core'): ns3::IntegerValue::IntegerValue() [constructor]
    cls.add_constructor([])
    ## integer.h (module 'core'): ns3::IntegerValue::IntegerValue(ns3::IntegerValue const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::IntegerValue const &', 'arg0')])
    ## integer.h (module 'core'): ns3::IntegerValue::IntegerValue(int64_t const & value) [constructor]
    cls.add_constructor([param('int64_t const &', 'value')])
    ## integer.h (module 'core'): ns3::Ptr<ns3::AttributeValue> ns3::IntegerValue::Copy() const [member function]
    cls.add_method('Copy', 
                   'ns3::Ptr< ns3::AttributeValue >', 
                   [], 
                   is_const=True, is_virtual=True)
    ## integer.h (module 'core'): bool ns3::IntegerValue::DeserializeFromString(std::string value, ns3::Ptr<ns3::AttributeChecker const> checker) [member function]
    cls.add_method('DeserializeFromString', 
                   'bool', 
                   [param('std::string', 'value'), param('ns3::Ptr< ns3::AttributeChecker const >', 'checker')], 
                   is_virtual=True)
    ## integer.h (module 'core'): int64_t ns3::IntegerValue::Get() const [member function]
    cls.add_method('Get', 
                   'int64_t', 
                   [], 
                   is_const=True)
    ## integer.h (module 'core'): std::string ns3::IntegerValue::SerializeToString(ns3::Ptr<ns3::AttributeChecker const> checker) const [member function]
    cls.add_method('SerializeToString', 
                   'std::string', 
                   [param('ns3::Ptr< ns3::AttributeChecker const >', 'checker')], 
                   is_const=True, is_virtual=True)
    ## integer.h (module 'core'): void ns3::IntegerValue::Set(int64_t const & value) [member function]
    cls.add_method('Set', 
                   'void', 
                   [param('int64_t const &', 'value')])
    return

def register_Ns3Ipv4_methods(root_module, cls):
    ## ipv4.h (module 'internet'): ns3::Ipv4::Ipv4(ns3::Ipv4 const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::Ipv4 const &', 'arg0')])
    ## ipv4.h (module 'internet'): ns3::Ipv4::Ipv4() [constructor]
    cls.add_constructor([])
    ## ipv4.h (module 'internet'): bool ns3::Ipv4::AddAddress(uint32_t interface, ns3::Ipv4InterfaceAddress address) [member function]
    cls.add_method('AddAddress', 
                   'bool', 
                   [param('uint32_t', 'interface'), param('ns3::Ipv4InterfaceAddress', 'address')], 
                   is_pure_virtual=True, is_virtual=True)
    ## ipv4.h (module 'internet'): uint32_t ns3::Ipv4::AddInterface(ns3::Ptr<ns3::NetDevice> device) [member function]
    cls.add_method('AddInterface', 
                   'uint32_t', 
                   [param('ns3::Ptr< ns3::NetDevice >', 'device')], 
                   is_pure_virtual=True, is_virtual=True)
    ## ipv4.h (module 'internet'): ns3::Ipv4InterfaceAddress ns3::Ipv4::GetAddress(uint32_t interface, uint32_t addressIndex) const [member function]
    cls.add_method('GetAddress', 
                   'ns3::Ipv4InterfaceAddress', 
                   [param('uint32_t', 'interface'), param('uint32_t', 'addressIndex')], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## ipv4.h (module 'internet'): int32_t ns3::Ipv4::GetInterfaceForAddress(ns3::Ipv4Address address) const [member function]
    cls.add_method('GetInterfaceForAddress', 
                   'int32_t', 
                   [param('ns3::Ipv4Address', 'address')], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## ipv4.h (module 'internet'): int32_t ns3::Ipv4::GetInterfaceForDevice(ns3::Ptr<const ns3::NetDevice> device) const [member function]
    cls.add_method('GetInterfaceForDevice', 
                   'int32_t', 
                   [param('ns3::Ptr< ns3::NetDevice const >', 'device')], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## ipv4.h (module 'internet'): int32_t ns3::Ipv4::GetInterfaceForPrefix(ns3::Ipv4Address address, ns3::Ipv4Mask mask) const [member function]
    cls.add_method('GetInterfaceForPrefix', 
                   'int32_t', 
                   [param('ns3::Ipv4Address', 'address'), param('ns3::Ipv4Mask', 'mask')], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## ipv4.h (module 'internet'): uint16_t ns3::Ipv4::GetMetric(uint32_t interface) const [member function]
    cls.add_method('GetMetric', 
                   'uint16_t', 
                   [param('uint32_t', 'interface')], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## ipv4.h (module 'internet'): uint16_t ns3::Ipv4::GetMtu(uint32_t interface) const [member function]
    cls.add_method('GetMtu', 
                   'uint16_t', 
                   [param('uint32_t', 'interface')], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## ipv4.h (module 'internet'): uint32_t ns3::Ipv4::GetNAddresses(uint32_t interface) const [member function]
    cls.add_method('GetNAddresses', 
                   'uint32_t', 
                   [param('uint32_t', 'interface')], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## ipv4.h (module 'internet'): uint32_t ns3::Ipv4::GetNInterfaces() const [member function]
    cls.add_method('GetNInterfaces', 
                   'uint32_t', 
                   [], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## ipv4.h (module 'internet'): ns3::Ptr<ns3::NetDevice> ns3::Ipv4::GetNetDevice(uint32_t interface) [member function]
    cls.add_method('GetNetDevice', 
                   'ns3::Ptr< ns3::NetDevice >', 
                   [param('uint32_t', 'interface')], 
                   is_pure_virtual=True, is_virtual=True)
    ## ipv4.h (module 'internet'): ns3::Ptr<ns3::Ipv4RoutingProtocol> ns3::Ipv4::GetRoutingProtocol() const [member function]
    cls.add_method('GetRoutingProtocol', 
                   'ns3::Ptr< ns3::Ipv4RoutingProtocol >', 
                   [], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## ipv4.h (module 'internet'): static ns3::TypeId ns3::Ipv4::GetTypeId() [member function]
    cls.add_method('GetTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_static=True)
    ## ipv4.h (module 'internet'): void ns3::Ipv4::Insert(ns3::Ptr<ns3::Ipv4L4Protocol> protocol) [member function]
    cls.add_method('Insert', 
                   'void', 
                   [param('ns3::Ptr< ns3::Ipv4L4Protocol >', 'protocol')], 
                   is_pure_virtual=True, is_virtual=True)
    ## ipv4.h (module 'internet'): bool ns3::Ipv4::IsDestinationAddress(ns3::Ipv4Address address, uint32_t iif) const [member function]
    cls.add_method('IsDestinationAddress', 
                   'bool', 
                   [param('ns3::Ipv4Address', 'address'), param('uint32_t', 'iif')], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## ipv4.h (module 'internet'): bool ns3::Ipv4::IsForwarding(uint32_t interface) const [member function]
    cls.add_method('IsForwarding', 
                   'bool', 
                   [param('uint32_t', 'interface')], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## ipv4.h (module 'internet'): bool ns3::Ipv4::IsUp(uint32_t interface) const [member function]
    cls.add_method('IsUp', 
                   'bool', 
                   [param('uint32_t', 'interface')], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## ipv4.h (module 'internet'): bool ns3::Ipv4::RemoveAddress(uint32_t interface, uint32_t addressIndex) [member function]
    cls.add_method('RemoveAddress', 
                   'bool', 
                   [param('uint32_t', 'interface'), param('uint32_t', 'addressIndex')], 
                   is_pure_virtual=True, is_virtual=True)
    ## ipv4.h (module 'internet'): ns3::Ipv4Address ns3::Ipv4::SelectSourceAddress(ns3::Ptr<const ns3::NetDevice> device, ns3::Ipv4Address dst, ns3::Ipv4InterfaceAddress::InterfaceAddressScope_e scope) [member function]
    cls.add_method('SelectSourceAddress', 
                   'ns3::Ipv4Address', 
                   [param('ns3::Ptr< ns3::NetDevice const >', 'device'), param('ns3::Ipv4Address', 'dst'), param('ns3::Ipv4InterfaceAddress::InterfaceAddressScope_e', 'scope')], 
                   is_pure_virtual=True, is_virtual=True)
    ## ipv4.h (module 'internet'): void ns3::Ipv4::Send(ns3::Ptr<ns3::Packet> packet, ns3::Ipv4Address source, ns3::Ipv4Address destination, uint8_t protocol, ns3::Ptr<ns3::Ipv4Route> route) [member function]
    cls.add_method('Send', 
                   'void', 
                   [param('ns3::Ptr< ns3::Packet >', 'packet'), param('ns3::Ipv4Address', 'source'), param('ns3::Ipv4Address', 'destination'), param('uint8_t', 'protocol'), param('ns3::Ptr< ns3::Ipv4Route >', 'route')], 
                   is_pure_virtual=True, is_virtual=True)
    ## ipv4.h (module 'internet'): void ns3::Ipv4::SetDown(uint32_t interface) [member function]
    cls.add_method('SetDown', 
                   'void', 
                   [param('uint32_t', 'interface')], 
                   is_pure_virtual=True, is_virtual=True)
    ## ipv4.h (module 'internet'): void ns3::Ipv4::SetForwarding(uint32_t interface, bool val) [member function]
    cls.add_method('SetForwarding', 
                   'void', 
                   [param('uint32_t', 'interface'), param('bool', 'val')], 
                   is_pure_virtual=True, is_virtual=True)
    ## ipv4.h (module 'internet'): void ns3::Ipv4::SetMetric(uint32_t interface, uint16_t metric) [member function]
    cls.add_method('SetMetric', 
                   'void', 
                   [param('uint32_t', 'interface'), param('uint16_t', 'metric')], 
                   is_pure_virtual=True, is_virtual=True)
    ## ipv4.h (module 'internet'): void ns3::Ipv4::SetRoutingProtocol(ns3::Ptr<ns3::Ipv4RoutingProtocol> routingProtocol) [member function]
    cls.add_method('SetRoutingProtocol', 
                   'void', 
                   [param('ns3::Ptr< ns3::Ipv4RoutingProtocol >', 'routingProtocol')], 
                   is_pure_virtual=True, is_virtual=True)
    ## ipv4.h (module 'internet'): void ns3::Ipv4::SetUp(uint32_t interface) [member function]
    cls.add_method('SetUp', 
                   'void', 
                   [param('uint32_t', 'interface')], 
                   is_pure_virtual=True, is_virtual=True)
    ## ipv4.h (module 'internet'): ns3::Ipv4::IF_ANY [variable]
    cls.add_static_attribute('IF_ANY', 'uint32_t const', is_const=True)
    ## ipv4.h (module 'internet'): bool ns3::Ipv4::GetIpForward() const [member function]
    cls.add_method('GetIpForward', 
                   'bool', 
                   [], 
                   is_pure_virtual=True, is_const=True, visibility='private', is_virtual=True)
    ## ipv4.h (module 'internet'): bool ns3::Ipv4::GetWeakEsModel() const [member function]
    cls.add_method('GetWeakEsModel', 
                   'bool', 
                   [], 
                   is_pure_virtual=True, is_const=True, visibility='private', is_virtual=True)
    ## ipv4.h (module 'internet'): void ns3::Ipv4::SetIpForward(bool forward) [member function]
    cls.add_method('SetIpForward', 
                   'void', 
                   [param('bool', 'forward')], 
                   is_pure_virtual=True, visibility='private', is_virtual=True)
    ## ipv4.h (module 'internet'): void ns3::Ipv4::SetWeakEsModel(bool model) [member function]
    cls.add_method('SetWeakEsModel', 
                   'void', 
                   [param('bool', 'model')], 
                   is_pure_virtual=True, visibility='private', is_virtual=True)
    return

def register_Ns3Ipv4AddressChecker_methods(root_module, cls):
    ## ipv4-address.h (module 'network'): ns3::Ipv4AddressChecker::Ipv4AddressChecker() [constructor]
    cls.add_constructor([])
    ## ipv4-address.h (module 'network'): ns3::Ipv4AddressChecker::Ipv4AddressChecker(ns3::Ipv4AddressChecker const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::Ipv4AddressChecker const &', 'arg0')])
    return

def register_Ns3Ipv4AddressValue_methods(root_module, cls):
    ## ipv4-address.h (module 'network'): ns3::Ipv4AddressValue::Ipv4AddressValue() [constructor]
    cls.add_constructor([])
    ## ipv4-address.h (module 'network'): ns3::Ipv4AddressValue::Ipv4AddressValue(ns3::Ipv4AddressValue const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::Ipv4AddressValue const &', 'arg0')])
    ## ipv4-address.h (module 'network'): ns3::Ipv4AddressValue::Ipv4AddressValue(ns3::Ipv4Address const & value) [constructor]
    cls.add_constructor([param('ns3::Ipv4Address const &', 'value')])
    ## ipv4-address.h (module 'network'): ns3::Ptr<ns3::AttributeValue> ns3::Ipv4AddressValue::Copy() const [member function]
    cls.add_method('Copy', 
                   'ns3::Ptr< ns3::AttributeValue >', 
                   [], 
                   is_const=True, is_virtual=True)
    ## ipv4-address.h (module 'network'): bool ns3::Ipv4AddressValue::DeserializeFromString(std::string value, ns3::Ptr<ns3::AttributeChecker const> checker) [member function]
    cls.add_method('DeserializeFromString', 
                   'bool', 
                   [param('std::string', 'value'), param('ns3::Ptr< ns3::AttributeChecker const >', 'checker')], 
                   is_virtual=True)
    ## ipv4-address.h (module 'network'): ns3::Ipv4Address ns3::Ipv4AddressValue::Get() const [member function]
    cls.add_method('Get', 
                   'ns3::Ipv4Address', 
                   [], 
                   is_const=True)
    ## ipv4-address.h (module 'network'): std::string ns3::Ipv4AddressValue::SerializeToString(ns3::Ptr<ns3::AttributeChecker const> checker) const [member function]
    cls.add_method('SerializeToString', 
                   'std::string', 
                   [param('ns3::Ptr< ns3::AttributeChecker const >', 'checker')], 
                   is_const=True, is_virtual=True)
    ## ipv4-address.h (module 'network'): void ns3::Ipv4AddressValue::Set(ns3::Ipv4Address const & value) [member function]
    cls.add_method('Set', 
                   'void', 
                   [param('ns3::Ipv4Address const &', 'value')])
    return

def register_Ns3Ipv4Interface_methods(root_module, cls):
    ## ipv4-interface.h (module 'internet'): ns3::Ipv4Interface::Ipv4Interface(ns3::Ipv4Interface const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::Ipv4Interface const &', 'arg0')])
    ## ipv4-interface.h (module 'internet'): ns3::Ipv4Interface::Ipv4Interface() [constructor]
    cls.add_constructor([])
    ## ipv4-interface.h (module 'internet'): bool ns3::Ipv4Interface::AddAddress(ns3::Ipv4InterfaceAddress address) [member function]
    cls.add_method('AddAddress', 
                   'bool', 
                   [param('ns3::Ipv4InterfaceAddress', 'address')])
    ## ipv4-interface.h (module 'internet'): ns3::Ipv4InterfaceAddress ns3::Ipv4Interface::GetAddress(uint32_t index) const [member function]
    cls.add_method('GetAddress', 
                   'ns3::Ipv4InterfaceAddress', 
                   [param('uint32_t', 'index')], 
                   is_const=True)
    ## ipv4-interface.h (module 'internet'): ns3::Ptr<ns3::ArpCache> ns3::Ipv4Interface::GetArpCache() const [member function]
    cls.add_method('GetArpCache', 
                   'ns3::Ptr< ns3::ArpCache >', 
                   [], 
                   is_const=True)
    ## ipv4-interface.h (module 'internet'): ns3::Ptr<ns3::NetDevice> ns3::Ipv4Interface::GetDevice() const [member function]
    cls.add_method('GetDevice', 
                   'ns3::Ptr< ns3::NetDevice >', 
                   [], 
                   is_const=True)
    ## ipv4-interface.h (module 'internet'): uint16_t ns3::Ipv4Interface::GetMetric() const [member function]
    cls.add_method('GetMetric', 
                   'uint16_t', 
                   [], 
                   is_const=True)
    ## ipv4-interface.h (module 'internet'): uint32_t ns3::Ipv4Interface::GetNAddresses() const [member function]
    cls.add_method('GetNAddresses', 
                   'uint32_t', 
                   [], 
                   is_const=True)
    ## ipv4-interface.h (module 'internet'): static ns3::TypeId ns3::Ipv4Interface::GetTypeId() [member function]
    cls.add_method('GetTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_static=True)
    ## ipv4-interface.h (module 'internet'): bool ns3::Ipv4Interface::IsDown() const [member function]
    cls.add_method('IsDown', 
                   'bool', 
                   [], 
                   is_const=True)
    ## ipv4-interface.h (module 'internet'): bool ns3::Ipv4Interface::IsForwarding() const [member function]
    cls.add_method('IsForwarding', 
                   'bool', 
                   [], 
                   is_const=True)
    ## ipv4-interface.h (module 'internet'): bool ns3::Ipv4Interface::IsUp() const [member function]
    cls.add_method('IsUp', 
                   'bool', 
                   [], 
                   is_const=True)
    ## ipv4-interface.h (module 'internet'): ns3::Ipv4InterfaceAddress ns3::Ipv4Interface::RemoveAddress(uint32_t index) [member function]
    cls.add_method('RemoveAddress', 
                   'ns3::Ipv4InterfaceAddress', 
                   [param('uint32_t', 'index')])
    ## ipv4-interface.h (module 'internet'): void ns3::Ipv4Interface::Send(ns3::Ptr<ns3::Packet> p, ns3::Ipv4Address dest) [member function]
    cls.add_method('Send', 
                   'void', 
                   [param('ns3::Ptr< ns3::Packet >', 'p'), param('ns3::Ipv4Address', 'dest')])
    ## ipv4-interface.h (module 'internet'): void ns3::Ipv4Interface::SetArpCache(ns3::Ptr<ns3::ArpCache> arg0) [member function]
    cls.add_method('SetArpCache', 
                   'void', 
                   [param('ns3::Ptr< ns3::ArpCache >', 'arg0')])
    ## ipv4-interface.h (module 'internet'): void ns3::Ipv4Interface::SetDevice(ns3::Ptr<ns3::NetDevice> device) [member function]
    cls.add_method('SetDevice', 
                   'void', 
                   [param('ns3::Ptr< ns3::NetDevice >', 'device')])
    ## ipv4-interface.h (module 'internet'): void ns3::Ipv4Interface::SetDown() [member function]
    cls.add_method('SetDown', 
                   'void', 
                   [])
    ## ipv4-interface.h (module 'internet'): void ns3::Ipv4Interface::SetForwarding(bool val) [member function]
    cls.add_method('SetForwarding', 
                   'void', 
                   [param('bool', 'val')])
    ## ipv4-interface.h (module 'internet'): void ns3::Ipv4Interface::SetMetric(uint16_t metric) [member function]
    cls.add_method('SetMetric', 
                   'void', 
                   [param('uint16_t', 'metric')])
    ## ipv4-interface.h (module 'internet'): void ns3::Ipv4Interface::SetNode(ns3::Ptr<ns3::Node> node) [member function]
    cls.add_method('SetNode', 
                   'void', 
                   [param('ns3::Ptr< ns3::Node >', 'node')])
    ## ipv4-interface.h (module 'internet'): void ns3::Ipv4Interface::SetUp() [member function]
    cls.add_method('SetUp', 
                   'void', 
                   [])
    ## ipv4-interface.h (module 'internet'): void ns3::Ipv4Interface::DoDispose() [member function]
    cls.add_method('DoDispose', 
                   'void', 
                   [], 
                   visibility='protected', is_virtual=True)
    return

def register_Ns3Ipv4L3Protocol_methods(root_module, cls):
    ## ipv4-l3-protocol.h (module 'internet'): ns3::Ipv4L3Protocol::Ipv4L3Protocol() [constructor]
    cls.add_constructor([])
    ## ipv4-l3-protocol.h (module 'internet'): bool ns3::Ipv4L3Protocol::AddAddress(uint32_t i, ns3::Ipv4InterfaceAddress address) [member function]
    cls.add_method('AddAddress', 
                   'bool', 
                   [param('uint32_t', 'i'), param('ns3::Ipv4InterfaceAddress', 'address')], 
                   is_virtual=True)
    ## ipv4-l3-protocol.h (module 'internet'): uint32_t ns3::Ipv4L3Protocol::AddInterface(ns3::Ptr<ns3::NetDevice> device) [member function]
    cls.add_method('AddInterface', 
                   'uint32_t', 
                   [param('ns3::Ptr< ns3::NetDevice >', 'device')], 
                   is_virtual=True)
    ## ipv4-l3-protocol.h (module 'internet'): ns3::Ptr<ns3::Socket> ns3::Ipv4L3Protocol::CreateRawSocket() [member function]
    cls.add_method('CreateRawSocket', 
                   'ns3::Ptr< ns3::Socket >', 
                   [])
    ## ipv4-l3-protocol.h (module 'internet'): void ns3::Ipv4L3Protocol::DeleteRawSocket(ns3::Ptr<ns3::Socket> socket) [member function]
    cls.add_method('DeleteRawSocket', 
                   'void', 
                   [param('ns3::Ptr< ns3::Socket >', 'socket')])
    ## ipv4-l3-protocol.h (module 'internet'): ns3::Ipv4InterfaceAddress ns3::Ipv4L3Protocol::GetAddress(uint32_t interfaceIndex, uint32_t addressIndex) const [member function]
    cls.add_method('GetAddress', 
                   'ns3::Ipv4InterfaceAddress', 
                   [param('uint32_t', 'interfaceIndex'), param('uint32_t', 'addressIndex')], 
                   is_const=True, is_virtual=True)
    ## ipv4-l3-protocol.h (module 'internet'): ns3::Ptr<ns3::Ipv4Interface> ns3::Ipv4L3Protocol::GetInterface(uint32_t i) const [member function]
    cls.add_method('GetInterface', 
                   'ns3::Ptr< ns3::Ipv4Interface >', 
                   [param('uint32_t', 'i')], 
                   is_const=True)
    ## ipv4-l3-protocol.h (module 'internet'): int32_t ns3::Ipv4L3Protocol::GetInterfaceForAddress(ns3::Ipv4Address addr) const [member function]
    cls.add_method('GetInterfaceForAddress', 
                   'int32_t', 
                   [param('ns3::Ipv4Address', 'addr')], 
                   is_const=True, is_virtual=True)
    ## ipv4-l3-protocol.h (module 'internet'): int32_t ns3::Ipv4L3Protocol::GetInterfaceForDevice(ns3::Ptr<const ns3::NetDevice> device) const [member function]
    cls.add_method('GetInterfaceForDevice', 
                   'int32_t', 
                   [param('ns3::Ptr< ns3::NetDevice const >', 'device')], 
                   is_const=True, is_virtual=True)
    ## ipv4-l3-protocol.h (module 'internet'): int32_t ns3::Ipv4L3Protocol::GetInterfaceForPrefix(ns3::Ipv4Address addr, ns3::Ipv4Mask mask) const [member function]
    cls.add_method('GetInterfaceForPrefix', 
                   'int32_t', 
                   [param('ns3::Ipv4Address', 'addr'), param('ns3::Ipv4Mask', 'mask')], 
                   is_const=True, is_virtual=True)
    ## ipv4-l3-protocol.h (module 'internet'): uint16_t ns3::Ipv4L3Protocol::GetMetric(uint32_t i) const [member function]
    cls.add_method('GetMetric', 
                   'uint16_t', 
                   [param('uint32_t', 'i')], 
                   is_const=True, is_virtual=True)
    ## ipv4-l3-protocol.h (module 'internet'): uint16_t ns3::Ipv4L3Protocol::GetMtu(uint32_t i) const [member function]
    cls.add_method('GetMtu', 
                   'uint16_t', 
                   [param('uint32_t', 'i')], 
                   is_const=True, is_virtual=True)
    ## ipv4-l3-protocol.h (module 'internet'): uint32_t ns3::Ipv4L3Protocol::GetNAddresses(uint32_t interface) const [member function]
    cls.add_method('GetNAddresses', 
                   'uint32_t', 
                   [param('uint32_t', 'interface')], 
                   is_const=True, is_virtual=True)
    ## ipv4-l3-protocol.h (module 'internet'): uint32_t ns3::Ipv4L3Protocol::GetNInterfaces() const [member function]
    cls.add_method('GetNInterfaces', 
                   'uint32_t', 
                   [], 
                   is_const=True, is_virtual=True)
    ## ipv4-l3-protocol.h (module 'internet'): ns3::Ptr<ns3::NetDevice> ns3::Ipv4L3Protocol::GetNetDevice(uint32_t i) [member function]
    cls.add_method('GetNetDevice', 
                   'ns3::Ptr< ns3::NetDevice >', 
                   [param('uint32_t', 'i')], 
                   is_virtual=True)
    ## ipv4-l3-protocol.h (module 'internet'): ns3::Ptr<ns3::Ipv4L4Protocol> ns3::Ipv4L3Protocol::GetProtocol(int protocolNumber) const [member function]
    cls.add_method('GetProtocol', 
                   'ns3::Ptr< ns3::Ipv4L4Protocol >', 
                   [param('int', 'protocolNumber')], 
                   is_const=True)
    ## ipv4-l3-protocol.h (module 'internet'): ns3::Ptr<ns3::Ipv4RoutingProtocol> ns3::Ipv4L3Protocol::GetRoutingProtocol() const [member function]
    cls.add_method('GetRoutingProtocol', 
                   'ns3::Ptr< ns3::Ipv4RoutingProtocol >', 
                   [], 
                   is_const=True, is_virtual=True)
    ## ipv4-l3-protocol.h (module 'internet'): static ns3::TypeId ns3::Ipv4L3Protocol::GetTypeId() [member function]
    cls.add_method('GetTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_static=True)
    ## ipv4-l3-protocol.h (module 'internet'): void ns3::Ipv4L3Protocol::Insert(ns3::Ptr<ns3::Ipv4L4Protocol> protocol) [member function]
    cls.add_method('Insert', 
                   'void', 
                   [param('ns3::Ptr< ns3::Ipv4L4Protocol >', 'protocol')], 
                   is_virtual=True)
    ## ipv4-l3-protocol.h (module 'internet'): bool ns3::Ipv4L3Protocol::IsDestinationAddress(ns3::Ipv4Address address, uint32_t iif) const [member function]
    cls.add_method('IsDestinationAddress', 
                   'bool', 
                   [param('ns3::Ipv4Address', 'address'), param('uint32_t', 'iif')], 
                   is_const=True, is_virtual=True)
    ## ipv4-l3-protocol.h (module 'internet'): bool ns3::Ipv4L3Protocol::IsForwarding(uint32_t i) const [member function]
    cls.add_method('IsForwarding', 
                   'bool', 
                   [param('uint32_t', 'i')], 
                   is_const=True, is_virtual=True)
    ## ipv4-l3-protocol.h (module 'internet'): bool ns3::Ipv4L3Protocol::IsUp(uint32_t i) const [member function]
    cls.add_method('IsUp', 
                   'bool', 
                   [param('uint32_t', 'i')], 
                   is_const=True, is_virtual=True)
    ## ipv4-l3-protocol.h (module 'internet'): void ns3::Ipv4L3Protocol::Receive(ns3::Ptr<ns3::NetDevice> device, ns3::Ptr<const ns3::Packet> p, uint16_t protocol, ns3::Address const & from, ns3::Address const & to, ns3::NetDevice::PacketType packetType) [member function]
    cls.add_method('Receive', 
                   'void', 
                   [param('ns3::Ptr< ns3::NetDevice >', 'device'), param('ns3::Ptr< ns3::Packet const >', 'p'), param('uint16_t', 'protocol'), param('ns3::Address const &', 'from'), param('ns3::Address const &', 'to'), param('ns3::NetDevice::PacketType', 'packetType')])
    ## ipv4-l3-protocol.h (module 'internet'): void ns3::Ipv4L3Protocol::Remove(ns3::Ptr<ns3::Ipv4L4Protocol> protocol) [member function]
    cls.add_method('Remove', 
                   'void', 
                   [param('ns3::Ptr< ns3::Ipv4L4Protocol >', 'protocol')])
    ## ipv4-l3-protocol.h (module 'internet'): bool ns3::Ipv4L3Protocol::RemoveAddress(uint32_t interfaceIndex, uint32_t addressIndex) [member function]
    cls.add_method('RemoveAddress', 
                   'bool', 
                   [param('uint32_t', 'interfaceIndex'), param('uint32_t', 'addressIndex')], 
                   is_virtual=True)
    ## ipv4-l3-protocol.h (module 'internet'): ns3::Ipv4Address ns3::Ipv4L3Protocol::SelectSourceAddress(ns3::Ptr<const ns3::NetDevice> device, ns3::Ipv4Address dst, ns3::Ipv4InterfaceAddress::InterfaceAddressScope_e scope) [member function]
    cls.add_method('SelectSourceAddress', 
                   'ns3::Ipv4Address', 
                   [param('ns3::Ptr< ns3::NetDevice const >', 'device'), param('ns3::Ipv4Address', 'dst'), param('ns3::Ipv4InterfaceAddress::InterfaceAddressScope_e', 'scope')], 
                   is_virtual=True)
    ## ipv4-l3-protocol.h (module 'internet'): void ns3::Ipv4L3Protocol::Send(ns3::Ptr<ns3::Packet> packet, ns3::Ipv4Address source, ns3::Ipv4Address destination, uint8_t protocol, ns3::Ptr<ns3::Ipv4Route> route) [member function]
    cls.add_method('Send', 
                   'void', 
                   [param('ns3::Ptr< ns3::Packet >', 'packet'), param('ns3::Ipv4Address', 'source'), param('ns3::Ipv4Address', 'destination'), param('uint8_t', 'protocol'), param('ns3::Ptr< ns3::Ipv4Route >', 'route')], 
                   is_virtual=True)
    ## ipv4-l3-protocol.h (module 'internet'): void ns3::Ipv4L3Protocol::SendRealOutHook(ns3::Ptr<ns3::Ipv4Route> route, ns3::Ptr<ns3::Packet> packet, ns3::Ipv4Header const & ipHeader) [member function]
    cls.add_method('SendRealOutHook', 
                   'void', 
                   [param('ns3::Ptr< ns3::Ipv4Route >', 'route'), param('ns3::Ptr< ns3::Packet >', 'packet'), param('ns3::Ipv4Header const &', 'ipHeader')])
    ## ipv4-l3-protocol.h (module 'internet'): void ns3::Ipv4L3Protocol::SendWithHeader(ns3::Ptr<ns3::Packet> packet, ns3::Ipv4Header ipHeader, ns3::Ptr<ns3::Ipv4Route> route) [member function]
    cls.add_method('SendWithHeader', 
                   'void', 
                   [param('ns3::Ptr< ns3::Packet >', 'packet'), param('ns3::Ipv4Header', 'ipHeader'), param('ns3::Ptr< ns3::Ipv4Route >', 'route')])
    ## ipv4-l3-protocol.h (module 'internet'): void ns3::Ipv4L3Protocol::SetDefaultTtl(uint8_t ttl) [member function]
    cls.add_method('SetDefaultTtl', 
                   'void', 
                   [param('uint8_t', 'ttl')])
    ## ipv4-l3-protocol.h (module 'internet'): void ns3::Ipv4L3Protocol::SetDown(uint32_t i) [member function]
    cls.add_method('SetDown', 
                   'void', 
                   [param('uint32_t', 'i')], 
                   is_virtual=True)
    ## ipv4-l3-protocol.h (module 'internet'): void ns3::Ipv4L3Protocol::SetForwarding(uint32_t i, bool val) [member function]
    cls.add_method('SetForwarding', 
                   'void', 
                   [param('uint32_t', 'i'), param('bool', 'val')], 
                   is_virtual=True)
    ## ipv4-l3-protocol.h (module 'internet'): void ns3::Ipv4L3Protocol::SetIpForwardCallback(ns3::Callback<void, ns3::Ptr<ns3::Ipv4Route>, ns3::Ptr<ns3::Packet const>, ns3::Ipv4Header const&, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty> callback) [member function]
    cls.add_method('SetIpForwardCallback', 
                   'void', 
                   [param('ns3::Callback< void, ns3::Ptr< ns3::Ipv4Route >, ns3::Ptr< ns3::Packet const >, ns3::Ipv4Header const &, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty >', 'callback')])
    ## ipv4-l3-protocol.h (module 'internet'): void ns3::Ipv4L3Protocol::SetMetric(uint32_t i, uint16_t metric) [member function]
    cls.add_method('SetMetric', 
                   'void', 
                   [param('uint32_t', 'i'), param('uint16_t', 'metric')], 
                   is_virtual=True)
    ## ipv4-l3-protocol.h (module 'internet'): void ns3::Ipv4L3Protocol::SetNode(ns3::Ptr<ns3::Node> node) [member function]
    cls.add_method('SetNode', 
                   'void', 
                   [param('ns3::Ptr< ns3::Node >', 'node')])
    ## ipv4-l3-protocol.h (module 'internet'): void ns3::Ipv4L3Protocol::SetRoutingProtocol(ns3::Ptr<ns3::Ipv4RoutingProtocol> routingProtocol) [member function]
    cls.add_method('SetRoutingProtocol', 
                   'void', 
                   [param('ns3::Ptr< ns3::Ipv4RoutingProtocol >', 'routingProtocol')], 
                   is_virtual=True)
    ## ipv4-l3-protocol.h (module 'internet'): void ns3::Ipv4L3Protocol::SetUp(uint32_t i) [member function]
    cls.add_method('SetUp', 
                   'void', 
                   [param('uint32_t', 'i')], 
                   is_virtual=True)
    ## ipv4-l3-protocol.h (module 'internet'): ns3::Ipv4L3Protocol::PROT_NUMBER [variable]
    cls.add_static_attribute('PROT_NUMBER', 'uint16_t const', is_const=True)
    ## ipv4-l3-protocol.h (module 'internet'): void ns3::Ipv4L3Protocol::DoDispose() [member function]
    cls.add_method('DoDispose', 
                   'void', 
                   [], 
                   visibility='protected', is_virtual=True)
    ## ipv4-l3-protocol.h (module 'internet'): void ns3::Ipv4L3Protocol::NotifyNewAggregate() [member function]
    cls.add_method('NotifyNewAggregate', 
                   'void', 
                   [], 
                   visibility='protected', is_virtual=True)
    ## ipv4-l3-protocol.h (module 'internet'): bool ns3::Ipv4L3Protocol::GetIpForward() const [member function]
    cls.add_method('GetIpForward', 
                   'bool', 
                   [], 
                   is_const=True, visibility='private', is_virtual=True)
    ## ipv4-l3-protocol.h (module 'internet'): bool ns3::Ipv4L3Protocol::GetWeakEsModel() const [member function]
    cls.add_method('GetWeakEsModel', 
                   'bool', 
                   [], 
                   is_const=True, visibility='private', is_virtual=True)
    ## ipv4-l3-protocol.h (module 'internet'): void ns3::Ipv4L3Protocol::SetIpForward(bool forward) [member function]
    cls.add_method('SetIpForward', 
                   'void', 
                   [param('bool', 'forward')], 
                   visibility='private', is_virtual=True)
    ## ipv4-l3-protocol.h (module 'internet'): void ns3::Ipv4L3Protocol::SetWeakEsModel(bool model) [member function]
    cls.add_method('SetWeakEsModel', 
                   'void', 
                   [param('bool', 'model')], 
                   visibility='private', is_virtual=True)
    return

def register_Ns3Ipv4L4Protocol_methods(root_module, cls):
    ## ipv4-l4-protocol.h (module 'internet'): ns3::Ipv4L4Protocol::Ipv4L4Protocol() [constructor]
    cls.add_constructor([])
    ## ipv4-l4-protocol.h (module 'internet'): ns3::Ipv4L4Protocol::Ipv4L4Protocol(ns3::Ipv4L4Protocol const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::Ipv4L4Protocol const &', 'arg0')])
    ## ipv4-l4-protocol.h (module 'internet'): ns3::Callback<void, ns3::Ptr<ns3::Packet>, ns3::Ipv4Address, ns3::Ipv4Address, unsigned char, ns3::Ptr<ns3::Ipv4Route>, ns3::empty, ns3::empty, ns3::empty, ns3::empty> ns3::Ipv4L4Protocol::GetDownTarget() const [member function]
    cls.add_method('GetDownTarget', 
                   'ns3::Callback< void, ns3::Ptr< ns3::Packet >, ns3::Ipv4Address, ns3::Ipv4Address, unsigned char, ns3::Ptr< ns3::Ipv4Route >, ns3::empty, ns3::empty, ns3::empty, ns3::empty >', 
                   [], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## ipv4-l4-protocol.h (module 'internet'): int ns3::Ipv4L4Protocol::GetProtocolNumber() const [member function]
    cls.add_method('GetProtocolNumber', 
                   'int', 
                   [], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## ipv4-l4-protocol.h (module 'internet'): static ns3::TypeId ns3::Ipv4L4Protocol::GetTypeId() [member function]
    cls.add_method('GetTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_static=True)
    ## ipv4-l4-protocol.h (module 'internet'): ns3::Ipv4L4Protocol::RxStatus ns3::Ipv4L4Protocol::Receive(ns3::Ptr<ns3::Packet> p, ns3::Ipv4Header const & header, ns3::Ptr<ns3::Ipv4Interface> incomingInterface) [member function]
    cls.add_method('Receive', 
                   'ns3::Ipv4L4Protocol::RxStatus', 
                   [param('ns3::Ptr< ns3::Packet >', 'p'), param('ns3::Ipv4Header const &', 'header'), param('ns3::Ptr< ns3::Ipv4Interface >', 'incomingInterface')], 
                   is_pure_virtual=True, is_virtual=True)
    ## ipv4-l4-protocol.h (module 'internet'): void ns3::Ipv4L4Protocol::ReceiveIcmp(ns3::Ipv4Address icmpSource, uint8_t icmpTtl, uint8_t icmpType, uint8_t icmpCode, uint32_t icmpInfo, ns3::Ipv4Address payloadSource, ns3::Ipv4Address payloadDestination, uint8_t const * payload) [member function]
    cls.add_method('ReceiveIcmp', 
                   'void', 
                   [param('ns3::Ipv4Address', 'icmpSource'), param('uint8_t', 'icmpTtl'), param('uint8_t', 'icmpType'), param('uint8_t', 'icmpCode'), param('uint32_t', 'icmpInfo'), param('ns3::Ipv4Address', 'payloadSource'), param('ns3::Ipv4Address', 'payloadDestination'), param('uint8_t const *', 'payload')], 
                   is_virtual=True)
    ## ipv4-l4-protocol.h (module 'internet'): void ns3::Ipv4L4Protocol::SetDownTarget(ns3::Callback<void, ns3::Ptr<ns3::Packet>, ns3::Ipv4Address, ns3::Ipv4Address, unsigned char, ns3::Ptr<ns3::Ipv4Route>, ns3::empty, ns3::empty, ns3::empty, ns3::empty> cb) [member function]
    cls.add_method('SetDownTarget', 
                   'void', 
                   [param('ns3::Callback< void, ns3::Ptr< ns3::Packet >, ns3::Ipv4Address, ns3::Ipv4Address, unsigned char, ns3::Ptr< ns3::Ipv4Route >, ns3::empty, ns3::empty, ns3::empty, ns3::empty >', 'cb')], 
                   is_pure_virtual=True, is_virtual=True)
    return

def register_Ns3Ipv4MaskChecker_methods(root_module, cls):
    ## ipv4-address.h (module 'network'): ns3::Ipv4MaskChecker::Ipv4MaskChecker() [constructor]
    cls.add_constructor([])
    ## ipv4-address.h (module 'network'): ns3::Ipv4MaskChecker::Ipv4MaskChecker(ns3::Ipv4MaskChecker const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::Ipv4MaskChecker const &', 'arg0')])
    return

def register_Ns3Ipv4MaskValue_methods(root_module, cls):
    ## ipv4-address.h (module 'network'): ns3::Ipv4MaskValue::Ipv4MaskValue() [constructor]
    cls.add_constructor([])
    ## ipv4-address.h (module 'network'): ns3::Ipv4MaskValue::Ipv4MaskValue(ns3::Ipv4MaskValue const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::Ipv4MaskValue const &', 'arg0')])
    ## ipv4-address.h (module 'network'): ns3::Ipv4MaskValue::Ipv4MaskValue(ns3::Ipv4Mask const & value) [constructor]
    cls.add_constructor([param('ns3::Ipv4Mask const &', 'value')])
    ## ipv4-address.h (module 'network'): ns3::Ptr<ns3::AttributeValue> ns3::Ipv4MaskValue::Copy() const [member function]
    cls.add_method('Copy', 
                   'ns3::Ptr< ns3::AttributeValue >', 
                   [], 
                   is_const=True, is_virtual=True)
    ## ipv4-address.h (module 'network'): bool ns3::Ipv4MaskValue::DeserializeFromString(std::string value, ns3::Ptr<ns3::AttributeChecker const> checker) [member function]
    cls.add_method('DeserializeFromString', 
                   'bool', 
                   [param('std::string', 'value'), param('ns3::Ptr< ns3::AttributeChecker const >', 'checker')], 
                   is_virtual=True)
    ## ipv4-address.h (module 'network'): ns3::Ipv4Mask ns3::Ipv4MaskValue::Get() const [member function]
    cls.add_method('Get', 
                   'ns3::Ipv4Mask', 
                   [], 
                   is_const=True)
    ## ipv4-address.h (module 'network'): std::string ns3::Ipv4MaskValue::SerializeToString(ns3::Ptr<ns3::AttributeChecker const> checker) const [member function]
    cls.add_method('SerializeToString', 
                   'std::string', 
                   [param('ns3::Ptr< ns3::AttributeChecker const >', 'checker')], 
                   is_const=True, is_virtual=True)
    ## ipv4-address.h (module 'network'): void ns3::Ipv4MaskValue::Set(ns3::Ipv4Mask const & value) [member function]
    cls.add_method('Set', 
                   'void', 
                   [param('ns3::Ipv4Mask const &', 'value')])
    return

def register_Ns3Ipv4MulticastRoute_methods(root_module, cls):
    ## ipv4-route.h (module 'internet'): ns3::Ipv4MulticastRoute::Ipv4MulticastRoute(ns3::Ipv4MulticastRoute const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::Ipv4MulticastRoute const &', 'arg0')])
    ## ipv4-route.h (module 'internet'): ns3::Ipv4MulticastRoute::Ipv4MulticastRoute() [constructor]
    cls.add_constructor([])
    ## ipv4-route.h (module 'internet'): ns3::Ipv4Address ns3::Ipv4MulticastRoute::GetGroup() const [member function]
    cls.add_method('GetGroup', 
                   'ns3::Ipv4Address', 
                   [], 
                   is_const=True)
    ## ipv4-route.h (module 'internet'): ns3::Ipv4Address ns3::Ipv4MulticastRoute::GetOrigin() const [member function]
    cls.add_method('GetOrigin', 
                   'ns3::Ipv4Address', 
                   [], 
                   is_const=True)
    ## ipv4-route.h (module 'internet'): uint32_t ns3::Ipv4MulticastRoute::GetOutputTtl(uint32_t oif) [member function]
    cls.add_method('GetOutputTtl', 
                   'uint32_t', 
                   [param('uint32_t', 'oif')], 
                   deprecated=True)
    ## ipv4-route.h (module 'internet'): std::map<unsigned int, unsigned int, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned int> > > ns3::Ipv4MulticastRoute::GetOutputTtlMap() const [member function]
    cls.add_method('GetOutputTtlMap', 
                   'std::map< unsigned int, unsigned int >', 
                   [], 
                   is_const=True)
    ## ipv4-route.h (module 'internet'): uint32_t ns3::Ipv4MulticastRoute::GetParent() const [member function]
    cls.add_method('GetParent', 
                   'uint32_t', 
                   [], 
                   is_const=True)
    ## ipv4-route.h (module 'internet'): void ns3::Ipv4MulticastRoute::SetGroup(ns3::Ipv4Address const group) [member function]
    cls.add_method('SetGroup', 
                   'void', 
                   [param('ns3::Ipv4Address const', 'group')])
    ## ipv4-route.h (module 'internet'): void ns3::Ipv4MulticastRoute::SetOrigin(ns3::Ipv4Address const origin) [member function]
    cls.add_method('SetOrigin', 
                   'void', 
                   [param('ns3::Ipv4Address const', 'origin')])
    ## ipv4-route.h (module 'internet'): void ns3::Ipv4MulticastRoute::SetOutputTtl(uint32_t oif, uint32_t ttl) [member function]
    cls.add_method('SetOutputTtl', 
                   'void', 
                   [param('uint32_t', 'oif'), param('uint32_t', 'ttl')])
    ## ipv4-route.h (module 'internet'): void ns3::Ipv4MulticastRoute::SetParent(uint32_t iif) [member function]
    cls.add_method('SetParent', 
                   'void', 
                   [param('uint32_t', 'iif')])
    ## ipv4-route.h (module 'internet'): ns3::Ipv4MulticastRoute::MAX_INTERFACES [variable]
    cls.add_static_attribute('MAX_INTERFACES', 'uint32_t const', is_const=True)
    ## ipv4-route.h (module 'internet'): ns3::Ipv4MulticastRoute::MAX_TTL [variable]
    cls.add_static_attribute('MAX_TTL', 'uint32_t const', is_const=True)
    return

def register_Ns3Ipv4Route_methods(root_module, cls):
    cls.add_output_stream_operator()
    ## ipv4-route.h (module 'internet'): ns3::Ipv4Route::Ipv4Route(ns3::Ipv4Route const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::Ipv4Route const &', 'arg0')])
    ## ipv4-route.h (module 'internet'): ns3::Ipv4Route::Ipv4Route() [constructor]
    cls.add_constructor([])
    ## ipv4-route.h (module 'internet'): ns3::Ipv4Address ns3::Ipv4Route::GetDestination() const [member function]
    cls.add_method('GetDestination', 
                   'ns3::Ipv4Address', 
                   [], 
                   is_const=True)
    ## ipv4-route.h (module 'internet'): ns3::Ipv4Address ns3::Ipv4Route::GetGateway() const [member function]
    cls.add_method('GetGateway', 
                   'ns3::Ipv4Address', 
                   [], 
                   is_const=True)
    ## ipv4-route.h (module 'internet'): ns3::Ptr<ns3::NetDevice> ns3::Ipv4Route::GetOutputDevice() const [member function]
    cls.add_method('GetOutputDevice', 
                   'ns3::Ptr< ns3::NetDevice >', 
                   [], 
                   is_const=True)
    ## ipv4-route.h (module 'internet'): ns3::Ipv4Address ns3::Ipv4Route::GetSource() const [member function]
    cls.add_method('GetSource', 
                   'ns3::Ipv4Address', 
                   [], 
                   is_const=True)
    ## ipv4-route.h (module 'internet'): void ns3::Ipv4Route::SetDestination(ns3::Ipv4Address dest) [member function]
    cls.add_method('SetDestination', 
                   'void', 
                   [param('ns3::Ipv4Address', 'dest')])
    ## ipv4-route.h (module 'internet'): void ns3::Ipv4Route::SetGateway(ns3::Ipv4Address gw) [member function]
    cls.add_method('SetGateway', 
                   'void', 
                   [param('ns3::Ipv4Address', 'gw')])
    ## ipv4-route.h (module 'internet'): void ns3::Ipv4Route::SetOutputDevice(ns3::Ptr<ns3::NetDevice> outputDevice) [member function]
    cls.add_method('SetOutputDevice', 
                   'void', 
                   [param('ns3::Ptr< ns3::NetDevice >', 'outputDevice')])
    ## ipv4-route.h (module 'internet'): void ns3::Ipv4Route::SetSource(ns3::Ipv4Address src) [member function]
    cls.add_method('SetSource', 
                   'void', 
                   [param('ns3::Ipv4Address', 'src')])
    return

def register_Ns3Ipv4RoutingProtocol_methods(root_module, cls):
    ## ipv4-routing-protocol.h (module 'internet'): ns3::Ipv4RoutingProtocol::Ipv4RoutingProtocol() [constructor]
    cls.add_constructor([])
    ## ipv4-routing-protocol.h (module 'internet'): ns3::Ipv4RoutingProtocol::Ipv4RoutingProtocol(ns3::Ipv4RoutingProtocol const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::Ipv4RoutingProtocol const &', 'arg0')])
    ## ipv4-routing-protocol.h (module 'internet'): static ns3::TypeId ns3::Ipv4RoutingProtocol::GetTypeId() [member function]
    cls.add_method('GetTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_static=True)
    ## ipv4-routing-protocol.h (module 'internet'): void ns3::Ipv4RoutingProtocol::NotifyAddAddress(uint32_t interface, ns3::Ipv4InterfaceAddress address) [member function]
    cls.add_method('NotifyAddAddress', 
                   'void', 
                   [param('uint32_t', 'interface'), param('ns3::Ipv4InterfaceAddress', 'address')], 
                   is_pure_virtual=True, is_virtual=True)
    ## ipv4-routing-protocol.h (module 'internet'): void ns3::Ipv4RoutingProtocol::NotifyInterfaceDown(uint32_t interface) [member function]
    cls.add_method('NotifyInterfaceDown', 
                   'void', 
                   [param('uint32_t', 'interface')], 
                   is_pure_virtual=True, is_virtual=True)
    ## ipv4-routing-protocol.h (module 'internet'): void ns3::Ipv4RoutingProtocol::NotifyInterfaceUp(uint32_t interface) [member function]
    cls.add_method('NotifyInterfaceUp', 
                   'void', 
                   [param('uint32_t', 'interface')], 
                   is_pure_virtual=True, is_virtual=True)
    ## ipv4-routing-protocol.h (module 'internet'): void ns3::Ipv4RoutingProtocol::NotifyRemoveAddress(uint32_t interface, ns3::Ipv4InterfaceAddress address) [member function]
    cls.add_method('NotifyRemoveAddress', 
                   'void', 
                   [param('uint32_t', 'interface'), param('ns3::Ipv4InterfaceAddress', 'address')], 
                   is_pure_virtual=True, is_virtual=True)
    ## ipv4-routing-protocol.h (module 'internet'): void ns3::Ipv4RoutingProtocol::PrintRoutingTable(ns3::Ptr<ns3::OutputStreamWrapper> stream) const [member function]
    cls.add_method('PrintRoutingTable', 
                   'void', 
                   [param('ns3::Ptr< ns3::OutputStreamWrapper >', 'stream')], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## ipv4-routing-protocol.h (module 'internet'): bool ns3::Ipv4RoutingProtocol::RouteInput(ns3::Ptr<const ns3::Packet> p, ns3::Ipv4Header const & header, ns3::Ptr<const ns3::NetDevice> idev, ns3::Callback<void, ns3::Ptr<ns3::Ipv4Route>, ns3::Ptr<ns3::Packet const>, ns3::Ipv4Header const&, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty> ucb, ns3::Callback<void,ns3::Ptr<ns3::Ipv4MulticastRoute>,ns3::Ptr<const ns3::Packet>,const ns3::Ipv4Header&,ns3::empty,ns3::empty,ns3::empty,ns3::empty,ns3::empty,ns3::empty> mcb, ns3::Callback<void,ns3::Ptr<const ns3::Packet>,const ns3::Ipv4Header&,unsigned int,ns3::empty,ns3::empty,ns3::empty,ns3::empty,ns3::empty,ns3::empty> lcb, ns3::Callback<void,ns3::Ptr<const ns3::Packet>,const ns3::Ipv4Header&,ns3::Socket::SocketErrno,ns3::empty,ns3::empty,ns3::empty,ns3::empty,ns3::empty,ns3::empty> ecb) [member function]
    cls.add_method('RouteInput', 
                   'bool', 
                   [param('ns3::Ptr< ns3::Packet const >', 'p'), param('ns3::Ipv4Header const &', 'header'), param('ns3::Ptr< ns3::NetDevice const >', 'idev'), param('ns3::Callback< void, ns3::Ptr< ns3::Ipv4Route >, ns3::Ptr< ns3::Packet const >, ns3::Ipv4Header const &, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty >', 'ucb'), param('ns3::Callback< void, ns3::Ptr< ns3::Ipv4MulticastRoute >, ns3::Ptr< ns3::Packet const >, ns3::Ipv4Header const &, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty >', 'mcb'), param('ns3::Callback< void, ns3::Ptr< ns3::Packet const >, ns3::Ipv4Header const &, unsigned int, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty >', 'lcb'), param('ns3::Callback< void, ns3::Ptr< ns3::Packet const >, ns3::Ipv4Header const &, ns3::Socket::SocketErrno, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty >', 'ecb')], 
                   is_pure_virtual=True, is_virtual=True)
    ## ipv4-routing-protocol.h (module 'internet'): ns3::Ptr<ns3::Ipv4Route> ns3::Ipv4RoutingProtocol::RouteOutput(ns3::Ptr<ns3::Packet> p, ns3::Ipv4Header const & header, ns3::Ptr<ns3::NetDevice> oif, ns3::Socket::SocketErrno & sockerr) [member function]
    cls.add_method('RouteOutput', 
                   'ns3::Ptr< ns3::Ipv4Route >', 
                   [param('ns3::Ptr< ns3::Packet >', 'p'), param('ns3::Ipv4Header const &', 'header'), param('ns3::Ptr< ns3::NetDevice >', 'oif'), param('ns3::Socket::SocketErrno &', 'sockerr')], 
                   is_pure_virtual=True, is_virtual=True)
    ## ipv4-routing-protocol.h (module 'internet'): void ns3::Ipv4RoutingProtocol::SetIpv4(ns3::Ptr<ns3::Ipv4> ipv4) [member function]
    cls.add_method('SetIpv4', 
                   'void', 
                   [param('ns3::Ptr< ns3::Ipv4 >', 'ipv4')], 
                   is_pure_virtual=True, is_virtual=True)
    return

def register_Ns3Ipv6_methods(root_module, cls):
    ## ipv6.h (module 'internet'): ns3::Ipv6::Ipv6(ns3::Ipv6 const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::Ipv6 const &', 'arg0')])
    ## ipv6.h (module 'internet'): ns3::Ipv6::Ipv6() [constructor]
    cls.add_constructor([])
    ## ipv6.h (module 'internet'): bool ns3::Ipv6::AddAddress(uint32_t interface, ns3::Ipv6InterfaceAddress address) [member function]
    cls.add_method('AddAddress', 
                   'bool', 
                   [param('uint32_t', 'interface'), param('ns3::Ipv6InterfaceAddress', 'address')], 
                   is_pure_virtual=True, is_virtual=True)
    ## ipv6.h (module 'internet'): uint32_t ns3::Ipv6::AddInterface(ns3::Ptr<ns3::NetDevice> device) [member function]
    cls.add_method('AddInterface', 
                   'uint32_t', 
                   [param('ns3::Ptr< ns3::NetDevice >', 'device')], 
                   is_pure_virtual=True, is_virtual=True)
    ## ipv6.h (module 'internet'): ns3::Ipv6InterfaceAddress ns3::Ipv6::GetAddress(uint32_t interface, uint32_t addressIndex) const [member function]
    cls.add_method('GetAddress', 
                   'ns3::Ipv6InterfaceAddress', 
                   [param('uint32_t', 'interface'), param('uint32_t', 'addressIndex')], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## ipv6.h (module 'internet'): int32_t ns3::Ipv6::GetInterfaceForAddress(ns3::Ipv6Address address) const [member function]
    cls.add_method('GetInterfaceForAddress', 
                   'int32_t', 
                   [param('ns3::Ipv6Address', 'address')], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## ipv6.h (module 'internet'): int32_t ns3::Ipv6::GetInterfaceForDevice(ns3::Ptr<const ns3::NetDevice> device) const [member function]
    cls.add_method('GetInterfaceForDevice', 
                   'int32_t', 
                   [param('ns3::Ptr< ns3::NetDevice const >', 'device')], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## ipv6.h (module 'internet'): int32_t ns3::Ipv6::GetInterfaceForPrefix(ns3::Ipv6Address address, ns3::Ipv6Prefix mask) const [member function]
    cls.add_method('GetInterfaceForPrefix', 
                   'int32_t', 
                   [param('ns3::Ipv6Address', 'address'), param('ns3::Ipv6Prefix', 'mask')], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## ipv6.h (module 'internet'): uint16_t ns3::Ipv6::GetMetric(uint32_t interface) const [member function]
    cls.add_method('GetMetric', 
                   'uint16_t', 
                   [param('uint32_t', 'interface')], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## ipv6.h (module 'internet'): uint16_t ns3::Ipv6::GetMtu(uint32_t interface) const [member function]
    cls.add_method('GetMtu', 
                   'uint16_t', 
                   [param('uint32_t', 'interface')], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## ipv6.h (module 'internet'): uint32_t ns3::Ipv6::GetNAddresses(uint32_t interface) const [member function]
    cls.add_method('GetNAddresses', 
                   'uint32_t', 
                   [param('uint32_t', 'interface')], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## ipv6.h (module 'internet'): uint32_t ns3::Ipv6::GetNInterfaces() const [member function]
    cls.add_method('GetNInterfaces', 
                   'uint32_t', 
                   [], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## ipv6.h (module 'internet'): ns3::Ptr<ns3::NetDevice> ns3::Ipv6::GetNetDevice(uint32_t interface) [member function]
    cls.add_method('GetNetDevice', 
                   'ns3::Ptr< ns3::NetDevice >', 
                   [param('uint32_t', 'interface')], 
                   is_pure_virtual=True, is_virtual=True)
    ## ipv6.h (module 'internet'): ns3::Ptr<ns3::Ipv6RoutingProtocol> ns3::Ipv6::GetRoutingProtocol() const [member function]
    cls.add_method('GetRoutingProtocol', 
                   'ns3::Ptr< ns3::Ipv6RoutingProtocol >', 
                   [], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## ipv6.h (module 'internet'): static ns3::TypeId ns3::Ipv6::GetTypeId() [member function]
    cls.add_method('GetTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_static=True)
    ## ipv6.h (module 'internet'): bool ns3::Ipv6::IsForwarding(uint32_t interface) const [member function]
    cls.add_method('IsForwarding', 
                   'bool', 
                   [param('uint32_t', 'interface')], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## ipv6.h (module 'internet'): bool ns3::Ipv6::IsUp(uint32_t interface) const [member function]
    cls.add_method('IsUp', 
                   'bool', 
                   [param('uint32_t', 'interface')], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## ipv6.h (module 'internet'): void ns3::Ipv6::RegisterExtensions() [member function]
    cls.add_method('RegisterExtensions', 
                   'void', 
                   [], 
                   is_pure_virtual=True, is_virtual=True)
    ## ipv6.h (module 'internet'): void ns3::Ipv6::RegisterOptions() [member function]
    cls.add_method('RegisterOptions', 
                   'void', 
                   [], 
                   is_pure_virtual=True, is_virtual=True)
    ## ipv6.h (module 'internet'): bool ns3::Ipv6::RemoveAddress(uint32_t interface, uint32_t addressIndex) [member function]
    cls.add_method('RemoveAddress', 
                   'bool', 
                   [param('uint32_t', 'interface'), param('uint32_t', 'addressIndex')], 
                   is_pure_virtual=True, is_virtual=True)
    ## ipv6.h (module 'internet'): void ns3::Ipv6::SetDown(uint32_t interface) [member function]
    cls.add_method('SetDown', 
                   'void', 
                   [param('uint32_t', 'interface')], 
                   is_pure_virtual=True, is_virtual=True)
    ## ipv6.h (module 'internet'): void ns3::Ipv6::SetForwarding(uint32_t interface, bool val) [member function]
    cls.add_method('SetForwarding', 
                   'void', 
                   [param('uint32_t', 'interface'), param('bool', 'val')], 
                   is_pure_virtual=True, is_virtual=True)
    ## ipv6.h (module 'internet'): void ns3::Ipv6::SetMetric(uint32_t interface, uint16_t metric) [member function]
    cls.add_method('SetMetric', 
                   'void', 
                   [param('uint32_t', 'interface'), param('uint16_t', 'metric')], 
                   is_pure_virtual=True, is_virtual=True)
    ## ipv6.h (module 'internet'): void ns3::Ipv6::SetRoutingProtocol(ns3::Ptr<ns3::Ipv6RoutingProtocol> routingProtocol) [member function]
    cls.add_method('SetRoutingProtocol', 
                   'void', 
                   [param('ns3::Ptr< ns3::Ipv6RoutingProtocol >', 'routingProtocol')], 
                   is_pure_virtual=True, is_virtual=True)
    ## ipv6.h (module 'internet'): void ns3::Ipv6::SetUp(uint32_t interface) [member function]
    cls.add_method('SetUp', 
                   'void', 
                   [param('uint32_t', 'interface')], 
                   is_pure_virtual=True, is_virtual=True)
    ## ipv6.h (module 'internet'): ns3::Ipv6::IF_ANY [variable]
    cls.add_static_attribute('IF_ANY', 'uint32_t const', is_const=True)
    ## ipv6.h (module 'internet'): bool ns3::Ipv6::GetIpForward() const [member function]
    cls.add_method('GetIpForward', 
                   'bool', 
                   [], 
                   is_pure_virtual=True, is_const=True, visibility='private', is_virtual=True)
    ## ipv6.h (module 'internet'): void ns3::Ipv6::SetIpForward(bool forward) [member function]
    cls.add_method('SetIpForward', 
                   'void', 
                   [param('bool', 'forward')], 
                   is_pure_virtual=True, visibility='private', is_virtual=True)
    return

def register_Ns3Ipv6AddressChecker_methods(root_module, cls):
    ## ipv6-address.h (module 'network'): ns3::Ipv6AddressChecker::Ipv6AddressChecker() [constructor]
    cls.add_constructor([])
    ## ipv6-address.h (module 'network'): ns3::Ipv6AddressChecker::Ipv6AddressChecker(ns3::Ipv6AddressChecker const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::Ipv6AddressChecker const &', 'arg0')])
    return

def register_Ns3Ipv6AddressValue_methods(root_module, cls):
    ## ipv6-address.h (module 'network'): ns3::Ipv6AddressValue::Ipv6AddressValue() [constructor]
    cls.add_constructor([])
    ## ipv6-address.h (module 'network'): ns3::Ipv6AddressValue::Ipv6AddressValue(ns3::Ipv6AddressValue const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::Ipv6AddressValue const &', 'arg0')])
    ## ipv6-address.h (module 'network'): ns3::Ipv6AddressValue::Ipv6AddressValue(ns3::Ipv6Address const & value) [constructor]
    cls.add_constructor([param('ns3::Ipv6Address const &', 'value')])
    ## ipv6-address.h (module 'network'): ns3::Ptr<ns3::AttributeValue> ns3::Ipv6AddressValue::Copy() const [member function]
    cls.add_method('Copy', 
                   'ns3::Ptr< ns3::AttributeValue >', 
                   [], 
                   is_const=True, is_virtual=True)
    ## ipv6-address.h (module 'network'): bool ns3::Ipv6AddressValue::DeserializeFromString(std::string value, ns3::Ptr<ns3::AttributeChecker const> checker) [member function]
    cls.add_method('DeserializeFromString', 
                   'bool', 
                   [param('std::string', 'value'), param('ns3::Ptr< ns3::AttributeChecker const >', 'checker')], 
                   is_virtual=True)
    ## ipv6-address.h (module 'network'): ns3::Ipv6Address ns3::Ipv6AddressValue::Get() const [member function]
    cls.add_method('Get', 
                   'ns3::Ipv6Address', 
                   [], 
                   is_const=True)
    ## ipv6-address.h (module 'network'): std::string ns3::Ipv6AddressValue::SerializeToString(ns3::Ptr<ns3::AttributeChecker const> checker) const [member function]
    cls.add_method('SerializeToString', 
                   'std::string', 
                   [param('ns3::Ptr< ns3::AttributeChecker const >', 'checker')], 
                   is_const=True, is_virtual=True)
    ## ipv6-address.h (module 'network'): void ns3::Ipv6AddressValue::Set(ns3::Ipv6Address const & value) [member function]
    cls.add_method('Set', 
                   'void', 
                   [param('ns3::Ipv6Address const &', 'value')])
    return

def register_Ns3Ipv6L3Protocol_methods(root_module, cls):
    ## ipv6-l3-protocol.h (module 'internet'): ns3::Ipv6L3Protocol::PROT_NUMBER [variable]
    cls.add_static_attribute('PROT_NUMBER', 'uint16_t const', is_const=True)
    ## ipv6-l3-protocol.h (module 'internet'): static ns3::TypeId ns3::Ipv6L3Protocol::GetTypeId() [member function]
    cls.add_method('GetTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_static=True)
    ## ipv6-l3-protocol.h (module 'internet'): ns3::Ipv6L3Protocol::Ipv6L3Protocol() [constructor]
    cls.add_constructor([])
    ## ipv6-l3-protocol.h (module 'internet'): void ns3::Ipv6L3Protocol::SetNode(ns3::Ptr<ns3::Node> node) [member function]
    cls.add_method('SetNode', 
                   'void', 
                   [param('ns3::Ptr< ns3::Node >', 'node')])
    ## ipv6-l3-protocol.h (module 'internet'): void ns3::Ipv6L3Protocol::Insert(ns3::Ptr<ns3::Ipv6L4Protocol> protocol) [member function]
    cls.add_method('Insert', 
                   'void', 
                   [param('ns3::Ptr< ns3::Ipv6L4Protocol >', 'protocol')])
    ## ipv6-l3-protocol.h (module 'internet'): void ns3::Ipv6L3Protocol::Remove(ns3::Ptr<ns3::Ipv6L4Protocol> protocol) [member function]
    cls.add_method('Remove', 
                   'void', 
                   [param('ns3::Ptr< ns3::Ipv6L4Protocol >', 'protocol')])
    ## ipv6-l3-protocol.h (module 'internet'): ns3::Ptr<ns3::Ipv6L4Protocol> ns3::Ipv6L3Protocol::GetProtocol(int protocolNumber) const [member function]
    cls.add_method('GetProtocol', 
                   'ns3::Ptr< ns3::Ipv6L4Protocol >', 
                   [param('int', 'protocolNumber')], 
                   is_const=True)
    ## ipv6-l3-protocol.h (module 'internet'): ns3::Ptr<ns3::Socket> ns3::Ipv6L3Protocol::CreateRawSocket() [member function]
    cls.add_method('CreateRawSocket', 
                   'ns3::Ptr< ns3::Socket >', 
                   [])
    ## ipv6-l3-protocol.h (module 'internet'): void ns3::Ipv6L3Protocol::DeleteRawSocket(ns3::Ptr<ns3::Socket> socket) [member function]
    cls.add_method('DeleteRawSocket', 
                   'void', 
                   [param('ns3::Ptr< ns3::Socket >', 'socket')])
    ## ipv6-l3-protocol.h (module 'internet'): void ns3::Ipv6L3Protocol::SetDefaultTtl(uint8_t ttl) [member function]
    cls.add_method('SetDefaultTtl', 
                   'void', 
                   [param('uint8_t', 'ttl')])
    ## ipv6-l3-protocol.h (module 'internet'): void ns3::Ipv6L3Protocol::Receive(ns3::Ptr<ns3::NetDevice> device, ns3::Ptr<const ns3::Packet> p, uint16_t protocol, ns3::Address const & from, ns3::Address const & to, ns3::NetDevice::PacketType packetType) [member function]
    cls.add_method('Receive', 
                   'void', 
                   [param('ns3::Ptr< ns3::NetDevice >', 'device'), param('ns3::Ptr< ns3::Packet const >', 'p'), param('uint16_t', 'protocol'), param('ns3::Address const &', 'from'), param('ns3::Address const &', 'to'), param('ns3::NetDevice::PacketType', 'packetType')])
    ## ipv6-l3-protocol.h (module 'internet'): void ns3::Ipv6L3Protocol::Send(ns3::Ptr<ns3::Packet> packet, ns3::Ipv6Address source, ns3::Ipv6Address destination, uint8_t protocol, ns3::Ptr<ns3::Ipv6Route> route) [member function]
    cls.add_method('Send', 
                   'void', 
                   [param('ns3::Ptr< ns3::Packet >', 'packet'), param('ns3::Ipv6Address', 'source'), param('ns3::Ipv6Address', 'destination'), param('uint8_t', 'protocol'), param('ns3::Ptr< ns3::Ipv6Route >', 'route')])
    ## ipv6-l3-protocol.h (module 'internet'): void ns3::Ipv6L3Protocol::SetRoutingProtocol(ns3::Ptr<ns3::Ipv6RoutingProtocol> routingProtocol) [member function]
    cls.add_method('SetRoutingProtocol', 
                   'void', 
                   [param('ns3::Ptr< ns3::Ipv6RoutingProtocol >', 'routingProtocol')], 
                   is_virtual=True)
    ## ipv6-l3-protocol.h (module 'internet'): ns3::Ptr<ns3::Ipv6RoutingProtocol> ns3::Ipv6L3Protocol::GetRoutingProtocol() const [member function]
    cls.add_method('GetRoutingProtocol', 
                   'ns3::Ptr< ns3::Ipv6RoutingProtocol >', 
                   [], 
                   is_const=True, is_virtual=True)
    ## ipv6-l3-protocol.h (module 'internet'): uint32_t ns3::Ipv6L3Protocol::AddInterface(ns3::Ptr<ns3::NetDevice> device) [member function]
    cls.add_method('AddInterface', 
                   'uint32_t', 
                   [param('ns3::Ptr< ns3::NetDevice >', 'device')], 
                   is_virtual=True)
    ## ipv6-l3-protocol.h (module 'internet'): ns3::Ptr<ns3::Ipv6Interface> ns3::Ipv6L3Protocol::GetInterface(uint32_t i) const [member function]
    cls.add_method('GetInterface', 
                   'ns3::Ptr< ns3::Ipv6Interface >', 
                   [param('uint32_t', 'i')], 
                   is_const=True)
    ## ipv6-l3-protocol.h (module 'internet'): uint32_t ns3::Ipv6L3Protocol::GetNInterfaces() const [member function]
    cls.add_method('GetNInterfaces', 
                   'uint32_t', 
                   [], 
                   is_const=True, is_virtual=True)
    ## ipv6-l3-protocol.h (module 'internet'): int32_t ns3::Ipv6L3Protocol::GetInterfaceForAddress(ns3::Ipv6Address addr) const [member function]
    cls.add_method('GetInterfaceForAddress', 
                   'int32_t', 
                   [param('ns3::Ipv6Address', 'addr')], 
                   is_const=True, is_virtual=True)
    ## ipv6-l3-protocol.h (module 'internet'): int32_t ns3::Ipv6L3Protocol::GetInterfaceForPrefix(ns3::Ipv6Address addr, ns3::Ipv6Prefix mask) const [member function]
    cls.add_method('GetInterfaceForPrefix', 
                   'int32_t', 
                   [param('ns3::Ipv6Address', 'addr'), param('ns3::Ipv6Prefix', 'mask')], 
                   is_const=True, is_virtual=True)
    ## ipv6-l3-protocol.h (module 'internet'): int32_t ns3::Ipv6L3Protocol::GetInterfaceForDevice(ns3::Ptr<const ns3::NetDevice> device) const [member function]
    cls.add_method('GetInterfaceForDevice', 
                   'int32_t', 
                   [param('ns3::Ptr< ns3::NetDevice const >', 'device')], 
                   is_const=True, is_virtual=True)
    ## ipv6-l3-protocol.h (module 'internet'): bool ns3::Ipv6L3Protocol::AddAddress(uint32_t i, ns3::Ipv6InterfaceAddress address) [member function]
    cls.add_method('AddAddress', 
                   'bool', 
                   [param('uint32_t', 'i'), param('ns3::Ipv6InterfaceAddress', 'address')], 
                   is_virtual=True)
    ## ipv6-l3-protocol.h (module 'internet'): ns3::Ipv6InterfaceAddress ns3::Ipv6L3Protocol::GetAddress(uint32_t interfaceIndex, uint32_t addressIndex) const [member function]
    cls.add_method('GetAddress', 
                   'ns3::Ipv6InterfaceAddress', 
                   [param('uint32_t', 'interfaceIndex'), param('uint32_t', 'addressIndex')], 
                   is_const=True, is_virtual=True)
    ## ipv6-l3-protocol.h (module 'internet'): uint32_t ns3::Ipv6L3Protocol::GetNAddresses(uint32_t interface) const [member function]
    cls.add_method('GetNAddresses', 
                   'uint32_t', 
                   [param('uint32_t', 'interface')], 
                   is_const=True, is_virtual=True)
    ## ipv6-l3-protocol.h (module 'internet'): bool ns3::Ipv6L3Protocol::RemoveAddress(uint32_t interfaceIndex, uint32_t addressIndex) [member function]
    cls.add_method('RemoveAddress', 
                   'bool', 
                   [param('uint32_t', 'interfaceIndex'), param('uint32_t', 'addressIndex')], 
                   is_virtual=True)
    ## ipv6-l3-protocol.h (module 'internet'): void ns3::Ipv6L3Protocol::SetMetric(uint32_t i, uint16_t metric) [member function]
    cls.add_method('SetMetric', 
                   'void', 
                   [param('uint32_t', 'i'), param('uint16_t', 'metric')], 
                   is_virtual=True)
    ## ipv6-l3-protocol.h (module 'internet'): uint16_t ns3::Ipv6L3Protocol::GetMetric(uint32_t i) const [member function]
    cls.add_method('GetMetric', 
                   'uint16_t', 
                   [param('uint32_t', 'i')], 
                   is_const=True, is_virtual=True)
    ## ipv6-l3-protocol.h (module 'internet'): uint16_t ns3::Ipv6L3Protocol::GetMtu(uint32_t i) const [member function]
    cls.add_method('GetMtu', 
                   'uint16_t', 
                   [param('uint32_t', 'i')], 
                   is_const=True, is_virtual=True)
    ## ipv6-l3-protocol.h (module 'internet'): bool ns3::Ipv6L3Protocol::IsUp(uint32_t i) const [member function]
    cls.add_method('IsUp', 
                   'bool', 
                   [param('uint32_t', 'i')], 
                   is_const=True, is_virtual=True)
    ## ipv6-l3-protocol.h (module 'internet'): void ns3::Ipv6L3Protocol::SetUp(uint32_t i) [member function]
    cls.add_method('SetUp', 
                   'void', 
                   [param('uint32_t', 'i')], 
                   is_virtual=True)
    ## ipv6-l3-protocol.h (module 'internet'): void ns3::Ipv6L3Protocol::SetDown(uint32_t i) [member function]
    cls.add_method('SetDown', 
                   'void', 
                   [param('uint32_t', 'i')], 
                   is_virtual=True)
    ## ipv6-l3-protocol.h (module 'internet'): bool ns3::Ipv6L3Protocol::IsForwarding(uint32_t i) const [member function]
    cls.add_method('IsForwarding', 
                   'bool', 
                   [param('uint32_t', 'i')], 
                   is_const=True, is_virtual=True)
    ## ipv6-l3-protocol.h (module 'internet'): void ns3::Ipv6L3Protocol::SetForwarding(uint32_t i, bool val) [member function]
    cls.add_method('SetForwarding', 
                   'void', 
                   [param('uint32_t', 'i'), param('bool', 'val')], 
                   is_virtual=True)
    ## ipv6-l3-protocol.h (module 'internet'): ns3::Ptr<ns3::NetDevice> ns3::Ipv6L3Protocol::GetNetDevice(uint32_t i) [member function]
    cls.add_method('GetNetDevice', 
                   'ns3::Ptr< ns3::NetDevice >', 
                   [param('uint32_t', 'i')], 
                   is_virtual=True)
    ## ipv6-l3-protocol.h (module 'internet'): ns3::Ptr<ns3::Icmpv6L4Protocol> ns3::Ipv6L3Protocol::GetIcmpv6() const [member function]
    cls.add_method('GetIcmpv6', 
                   'ns3::Ptr< ns3::Icmpv6L4Protocol >', 
                   [], 
                   is_const=True)
    ## ipv6-l3-protocol.h (module 'internet'): void ns3::Ipv6L3Protocol::AddAutoconfiguredAddress(uint32_t interface, ns3::Ipv6Address network, ns3::Ipv6Prefix mask, uint8_t flags, uint32_t validTime, uint32_t preferredTime, ns3::Ipv6Address defaultRouter=ns3::Ipv6Address::GetZero( )) [member function]
    cls.add_method('AddAutoconfiguredAddress', 
                   'void', 
                   [param('uint32_t', 'interface'), param('ns3::Ipv6Address', 'network'), param('ns3::Ipv6Prefix', 'mask'), param('uint8_t', 'flags'), param('uint32_t', 'validTime'), param('uint32_t', 'preferredTime'), param('ns3::Ipv6Address', 'defaultRouter', default_value='ns3::Ipv6Address::GetZero( )')])
    ## ipv6-l3-protocol.h (module 'internet'): void ns3::Ipv6L3Protocol::RemoveAutoconfiguredAddress(uint32_t interface, ns3::Ipv6Address network, ns3::Ipv6Prefix mask, ns3::Ipv6Address defaultRouter) [member function]
    cls.add_method('RemoveAutoconfiguredAddress', 
                   'void', 
                   [param('uint32_t', 'interface'), param('ns3::Ipv6Address', 'network'), param('ns3::Ipv6Prefix', 'mask'), param('ns3::Ipv6Address', 'defaultRouter')])
    ## ipv6-l3-protocol.h (module 'internet'): void ns3::Ipv6L3Protocol::RegisterExtensions() [member function]
    cls.add_method('RegisterExtensions', 
                   'void', 
                   [], 
                   is_virtual=True)
    ## ipv6-l3-protocol.h (module 'internet'): void ns3::Ipv6L3Protocol::RegisterOptions() [member function]
    cls.add_method('RegisterOptions', 
                   'void', 
                   [], 
                   is_virtual=True)
    ## ipv6-l3-protocol.h (module 'internet'): void ns3::Ipv6L3Protocol::DoDispose() [member function]
    cls.add_method('DoDispose', 
                   'void', 
                   [], 
                   visibility='protected', is_virtual=True)
    ## ipv6-l3-protocol.h (module 'internet'): void ns3::Ipv6L3Protocol::NotifyNewAggregate() [member function]
    cls.add_method('NotifyNewAggregate', 
                   'void', 
                   [], 
                   visibility='protected', is_virtual=True)
    ## ipv6-l3-protocol.h (module 'internet'): void ns3::Ipv6L3Protocol::SetIpForward(bool forward) [member function]
    cls.add_method('SetIpForward', 
                   'void', 
                   [param('bool', 'forward')], 
                   visibility='private', is_virtual=True)
    ## ipv6-l3-protocol.h (module 'internet'): bool ns3::Ipv6L3Protocol::GetIpForward() const [member function]
    cls.add_method('GetIpForward', 
                   'bool', 
                   [], 
                   is_const=True, visibility='private', is_virtual=True)
    return

def register_Ns3Ipv6PrefixChecker_methods(root_module, cls):
    ## ipv6-address.h (module 'network'): ns3::Ipv6PrefixChecker::Ipv6PrefixChecker() [constructor]
    cls.add_constructor([])
    ## ipv6-address.h (module 'network'): ns3::Ipv6PrefixChecker::Ipv6PrefixChecker(ns3::Ipv6PrefixChecker const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::Ipv6PrefixChecker const &', 'arg0')])
    return

def register_Ns3Ipv6PrefixValue_methods(root_module, cls):
    ## ipv6-address.h (module 'network'): ns3::Ipv6PrefixValue::Ipv6PrefixValue() [constructor]
    cls.add_constructor([])
    ## ipv6-address.h (module 'network'): ns3::Ipv6PrefixValue::Ipv6PrefixValue(ns3::Ipv6PrefixValue const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::Ipv6PrefixValue const &', 'arg0')])
    ## ipv6-address.h (module 'network'): ns3::Ipv6PrefixValue::Ipv6PrefixValue(ns3::Ipv6Prefix const & value) [constructor]
    cls.add_constructor([param('ns3::Ipv6Prefix const &', 'value')])
    ## ipv6-address.h (module 'network'): ns3::Ptr<ns3::AttributeValue> ns3::Ipv6PrefixValue::Copy() const [member function]
    cls.add_method('Copy', 
                   'ns3::Ptr< ns3::AttributeValue >', 
                   [], 
                   is_const=True, is_virtual=True)
    ## ipv6-address.h (module 'network'): bool ns3::Ipv6PrefixValue::DeserializeFromString(std::string value, ns3::Ptr<ns3::AttributeChecker const> checker) [member function]
    cls.add_method('DeserializeFromString', 
                   'bool', 
                   [param('std::string', 'value'), param('ns3::Ptr< ns3::AttributeChecker const >', 'checker')], 
                   is_virtual=True)
    ## ipv6-address.h (module 'network'): ns3::Ipv6Prefix ns3::Ipv6PrefixValue::Get() const [member function]
    cls.add_method('Get', 
                   'ns3::Ipv6Prefix', 
                   [], 
                   is_const=True)
    ## ipv6-address.h (module 'network'): std::string ns3::Ipv6PrefixValue::SerializeToString(ns3::Ptr<ns3::AttributeChecker const> checker) const [member function]
    cls.add_method('SerializeToString', 
                   'std::string', 
                   [param('ns3::Ptr< ns3::AttributeChecker const >', 'checker')], 
                   is_const=True, is_virtual=True)
    ## ipv6-address.h (module 'network'): void ns3::Ipv6PrefixValue::Set(ns3::Ipv6Prefix const & value) [member function]
    cls.add_method('Set', 
                   'void', 
                   [param('ns3::Ipv6Prefix const &', 'value')])
    return

def register_Ns3Mac48AddressChecker_methods(root_module, cls):
    ## mac48-address.h (module 'network'): ns3::Mac48AddressChecker::Mac48AddressChecker() [constructor]
    cls.add_constructor([])
    ## mac48-address.h (module 'network'): ns3::Mac48AddressChecker::Mac48AddressChecker(ns3::Mac48AddressChecker const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::Mac48AddressChecker const &', 'arg0')])
    return

def register_Ns3Mac48AddressValue_methods(root_module, cls):
    ## mac48-address.h (module 'network'): ns3::Mac48AddressValue::Mac48AddressValue() [constructor]
    cls.add_constructor([])
    ## mac48-address.h (module 'network'): ns3::Mac48AddressValue::Mac48AddressValue(ns3::Mac48AddressValue const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::Mac48AddressValue const &', 'arg0')])
    ## mac48-address.h (module 'network'): ns3::Mac48AddressValue::Mac48AddressValue(ns3::Mac48Address const & value) [constructor]
    cls.add_constructor([param('ns3::Mac48Address const &', 'value')])
    ## mac48-address.h (module 'network'): ns3::Ptr<ns3::AttributeValue> ns3::Mac48AddressValue::Copy() const [member function]
    cls.add_method('Copy', 
                   'ns3::Ptr< ns3::AttributeValue >', 
                   [], 
                   is_const=True, is_virtual=True)
    ## mac48-address.h (module 'network'): bool ns3::Mac48AddressValue::DeserializeFromString(std::string value, ns3::Ptr<ns3::AttributeChecker const> checker) [member function]
    cls.add_method('DeserializeFromString', 
                   'bool', 
                   [param('std::string', 'value'), param('ns3::Ptr< ns3::AttributeChecker const >', 'checker')], 
                   is_virtual=True)
    ## mac48-address.h (module 'network'): ns3::Mac48Address ns3::Mac48AddressValue::Get() const [member function]
    cls.add_method('Get', 
                   'ns3::Mac48Address', 
                   [], 
                   is_const=True)
    ## mac48-address.h (module 'network'): std::string ns3::Mac48AddressValue::SerializeToString(ns3::Ptr<ns3::AttributeChecker const> checker) const [member function]
    cls.add_method('SerializeToString', 
                   'std::string', 
                   [param('ns3::Ptr< ns3::AttributeChecker const >', 'checker')], 
                   is_const=True, is_virtual=True)
    ## mac48-address.h (module 'network'): void ns3::Mac48AddressValue::Set(ns3::Mac48Address const & value) [member function]
    cls.add_method('Set', 
                   'void', 
                   [param('ns3::Mac48Address const &', 'value')])
    return

def register_Ns3MpTcpHeader_methods(root_module, cls):
    ## mp-tcp-header.h (module 'mptcp'): ns3::MpTcpHeader::MpTcpHeader() [constructor]
    cls.add_constructor([])
    ## mp-tcp-header.h (module 'mptcp'): ns3::MpTcpHeader::MpTcpHeader(ns3::MpTcpHeader const & res) [copy constructor]
    cls.add_constructor([param('ns3::MpTcpHeader const &', 'res')])
    ## mp-tcp-header.h (module 'mptcp'): bool ns3::MpTcpHeader::AddOptADDR(ns3::TcpOption_t optName, uint8_t addrID, ns3::Ipv4Address addr) [member function]
    cls.add_method('AddOptADDR', 
                   'bool', 
                   [param('ns3::TcpOption_t', 'optName'), param('uint8_t', 'addrID'), param('ns3::Ipv4Address', 'addr')])
    ## mp-tcp-header.h (module 'mptcp'): bool ns3::MpTcpHeader::AddOptDSACK(ns3::TcpOption_t optName, ns3::OptDSACK * opt) [member function]
    cls.add_method('AddOptDSACK', 
                   'bool', 
                   [param('ns3::TcpOption_t', 'optName'), param('ns3::OptDSACK *', 'opt')])
    ## mp-tcp-header.h (module 'mptcp'): bool ns3::MpTcpHeader::AddOptDSN(ns3::TcpOption_t optName, uint64_t dSeqNum, uint16_t dLevelLength, uint32_t sfSeqNum) [member function]
    cls.add_method('AddOptDSN', 
                   'bool', 
                   [param('ns3::TcpOption_t', 'optName'), param('uint64_t', 'dSeqNum'), param('uint16_t', 'dLevelLength'), param('uint32_t', 'sfSeqNum')])
    ## mp-tcp-header.h (module 'mptcp'): bool ns3::MpTcpHeader::AddOptJOIN(ns3::TcpOption_t optName, uint32_t RxToken, uint8_t addrID) [member function]
    cls.add_method('AddOptJOIN', 
                   'bool', 
                   [param('ns3::TcpOption_t', 'optName'), param('uint32_t', 'RxToken'), param('uint8_t', 'addrID')])
    ## mp-tcp-header.h (module 'mptcp'): bool ns3::MpTcpHeader::AddOptMPC(ns3::TcpOption_t optName, uint32_t TxToken) [member function]
    cls.add_method('AddOptMPC', 
                   'bool', 
                   [param('ns3::TcpOption_t', 'optName'), param('uint32_t', 'TxToken')])
    ## mp-tcp-header.h (module 'mptcp'): bool ns3::MpTcpHeader::AddOptREMADR(ns3::TcpOption_t optName, uint8_t addrID) [member function]
    cls.add_method('AddOptREMADR', 
                   'bool', 
                   [param('ns3::TcpOption_t', 'optName'), param('uint8_t', 'addrID')])
    ## mp-tcp-header.h (module 'mptcp'): bool ns3::MpTcpHeader::AddOptTT(ns3::TcpOption_t optName, uint64_t tsval, uint64_t tsecr) [member function]
    cls.add_method('AddOptTT', 
                   'bool', 
                   [param('ns3::TcpOption_t', 'optName'), param('uint64_t', 'tsval'), param('uint64_t', 'tsecr')])
    ## mp-tcp-header.h (module 'mptcp'): ns3::MpTcpHeader ns3::MpTcpHeader::Copy() [member function]
    cls.add_method('Copy', 
                   'ns3::MpTcpHeader', 
                   [])
    ## mp-tcp-header.h (module 'mptcp'): uint32_t ns3::MpTcpHeader::Deserialize(ns3::Buffer::Iterator start) [member function]
    cls.add_method('Deserialize', 
                   'uint32_t', 
                   [param('ns3::Buffer::Iterator', 'start')], 
                   is_virtual=True)
    ## mp-tcp-header.h (module 'mptcp'): ns3::TypeId ns3::MpTcpHeader::GetInstanceTypeId() const [member function]
    cls.add_method('GetInstanceTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_const=True, is_virtual=True)
    ## mp-tcp-header.h (module 'mptcp'): std::vector<ns3::TcpOptions*, std::allocator<ns3::TcpOptions*> > ns3::MpTcpHeader::GetOptions() const [member function]
    cls.add_method('GetOptions', 
                   'std::vector< ns3::TcpOptions * >', 
                   [], 
                   is_const=True)
    ## mp-tcp-header.h (module 'mptcp'): uint8_t ns3::MpTcpHeader::GetOptionsLength() const [member function]
    cls.add_method('GetOptionsLength', 
                   'uint8_t', 
                   [], 
                   is_const=True)
    ## mp-tcp-header.h (module 'mptcp'): uint8_t ns3::MpTcpHeader::GetPaddingLength() const [member function]
    cls.add_method('GetPaddingLength', 
                   'uint8_t', 
                   [], 
                   is_const=True)
    ## mp-tcp-header.h (module 'mptcp'): uint32_t ns3::MpTcpHeader::GetSerializedSize() const [member function]
    cls.add_method('GetSerializedSize', 
                   'uint32_t', 
                   [], 
                   is_const=True, is_virtual=True)
    ## mp-tcp-header.h (module 'mptcp'): static ns3::TypeId ns3::MpTcpHeader::GetTypeId() [member function]
    cls.add_method('GetTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_static=True)
    ## mp-tcp-header.h (module 'mptcp'): void ns3::MpTcpHeader::Print(std::ostream & os) [member function]
    cls.add_method('Print', 
                   'void', 
                   [param('std::ostream &', 'os')], 
                   is_virtual=True)
    ## mp-tcp-header.h (module 'mptcp'): void ns3::MpTcpHeader::Serialize(ns3::Buffer::Iterator start) const [member function]
    cls.add_method('Serialize', 
                   'void', 
                   [param('ns3::Buffer::Iterator', 'start')], 
                   is_const=True, is_virtual=True)
    ## mp-tcp-header.h (module 'mptcp'): void ns3::MpTcpHeader::SetOptions(std::vector<ns3::TcpOptions*, std::allocator<ns3::TcpOptions*> > opt) [member function]
    cls.add_method('SetOptions', 
                   'void', 
                   [param('std::vector< ns3::TcpOptions * >', 'opt')])
    ## mp-tcp-header.h (module 'mptcp'): void ns3::MpTcpHeader::SetOptionsLength(uint8_t length) [member function]
    cls.add_method('SetOptionsLength', 
                   'void', 
                   [param('uint8_t', 'length')])
    ## mp-tcp-header.h (module 'mptcp'): void ns3::MpTcpHeader::SetPaddingLength(uint8_t length) [member function]
    cls.add_method('SetPaddingLength', 
                   'void', 
                   [param('uint8_t', 'length')])
    ## mp-tcp-header.h (module 'mptcp'): uint8_t ns3::MpTcpHeader::TcpOptionToUint(ns3::TcpOption_t opt) const [member function]
    cls.add_method('TcpOptionToUint', 
                   'uint8_t', 
                   [param('ns3::TcpOption_t', 'opt')], 
                   is_const=True)
    ## mp-tcp-header.h (module 'mptcp'): ns3::TcpOption_t ns3::MpTcpHeader::UintToTcpOption(uint8_t kind) const [member function]
    cls.add_method('UintToTcpOption', 
                   'ns3::TcpOption_t', 
                   [param('uint8_t', 'kind')], 
                   is_const=True)
    return

def register_Ns3MpTcpSocketBase_methods(root_module, cls):
    ## mp-tcp-socket-base.h (module 'mptcp'): ns3::MpTcpSocketBase::MpTcpSocketBase(ns3::MpTcpSocketBase const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::MpTcpSocketBase const &', 'arg0')])
    ## mp-tcp-socket-base.h (module 'mptcp'): ns3::MpTcpSocketBase::MpTcpSocketBase() [constructor]
    cls.add_constructor([])
    ## mp-tcp-socket-base.h (module 'mptcp'): ns3::MpTcpSocketBase::MpTcpSocketBase(ns3::Ptr<ns3::Node> node) [constructor]
    cls.add_constructor([param('ns3::Ptr< ns3::Node >', 'node')])
    ## mp-tcp-socket-base.h (module 'mptcp'): void ns3::MpTcpSocketBase::AdvertiseAvailableAddresses() [member function]
    cls.add_method('AdvertiseAvailableAddresses', 
                   'void', 
                   [])
    ## mp-tcp-socket-base.h (module 'mptcp'): uint32_t ns3::MpTcpSocketBase::AvailableWindow(uint8_t sFlowIdx) [member function]
    cls.add_method('AvailableWindow', 
                   'uint32_t', 
                   [param('uint8_t', 'sFlowIdx')], 
                   is_virtual=True)
    ## mp-tcp-socket-base.h (module 'mptcp'): int ns3::MpTcpSocketBase::Bind() [member function]
    cls.add_method('Bind', 
                   'int', 
                   [], 
                   is_virtual=True)
    ## mp-tcp-socket-base.h (module 'mptcp'): int ns3::MpTcpSocketBase::Bind(ns3::Address const & address) [member function]
    cls.add_method('Bind', 
                   'int', 
                   [param('ns3::Address const &', 'address')], 
                   is_virtual=True)
    ## mp-tcp-socket-base.h (module 'mptcp'): int ns3::MpTcpSocketBase::Close() [member function]
    cls.add_method('Close', 
                   'int', 
                   [], 
                   is_virtual=True)
    ## mp-tcp-socket-base.h (module 'mptcp'): int ns3::MpTcpSocketBase::Connect(ns3::Address & address) [member function]
    cls.add_method('Connect', 
                   'int', 
                   [param('ns3::Address &', 'address')], 
                   is_virtual=True)
    ## mp-tcp-socket-base.h (module 'mptcp'): int ns3::MpTcpSocketBase::Connect(ns3::Ipv4Address servAddr, uint16_t servPort) [member function]
    cls.add_method('Connect', 
                   'int', 
                   [param('ns3::Ipv4Address', 'servAddr'), param('uint16_t', 'servPort')], 
                   is_virtual=True)
    ## mp-tcp-socket-base.h (module 'mptcp'): int ns3::MpTcpSocketBase::FillBuffer(uint8_t * buf, uint32_t size) [member function]
    cls.add_method('FillBuffer', 
                   'int', 
                   [param('uint8_t *', 'buf'), param('uint32_t', 'size')])
    ## mp-tcp-socket-base.h (module 'mptcp'): uint8_t ns3::MpTcpSocketBase::GetMaxSubFlowNumber() [member function]
    cls.add_method('GetMaxSubFlowNumber', 
                   'uint8_t', 
                   [])
    ## mp-tcp-socket-base.h (module 'mptcp'): uint8_t ns3::MpTcpSocketBase::GetMinSubFlowNumber() [member function]
    cls.add_method('GetMinSubFlowNumber', 
                   'uint8_t', 
                   [])
    ## mp-tcp-socket-base.h (module 'mptcp'): ns3::Ptr<ns3::Node> ns3::MpTcpSocketBase::GetNode() [member function]
    cls.add_method('GetNode', 
                   'ns3::Ptr< ns3::Node >', 
                   [])
    ## mp-tcp-socket-base.h (module 'mptcp'): uint32_t ns3::MpTcpSocketBase::GetOutputInf(ns3::Ipv4Address addr) [member function]
    cls.add_method('GetOutputInf', 
                   'uint32_t', 
                   [param('ns3::Ipv4Address', 'addr')])
    ## mp-tcp-socket-base.h (module 'mptcp'): ns3::Ipv4Address ns3::MpTcpSocketBase::GetSourceAddress() [member function]
    cls.add_method('GetSourceAddress', 
                   'ns3::Ipv4Address', 
                   [])
    ## mp-tcp-socket-base.h (module 'mptcp'): ns3::MpTcpSubFlow * ns3::MpTcpSocketBase::GetSubflow(uint8_t sFlowIdx) [member function]
    cls.add_method('GetSubflow', 
                   'ns3::MpTcpSubFlow *', 
                   [param('uint8_t', 'sFlowIdx')])
    ## mp-tcp-socket-base.h (module 'mptcp'): uint32_t ns3::MpTcpSocketBase::GetTxAvailable() [member function]
    cls.add_method('GetTxAvailable', 
                   'uint32_t', 
                   [])
    ## mp-tcp-socket-base.h (module 'mptcp'): static ns3::TypeId ns3::MpTcpSocketBase::GetTypeId() [member function]
    cls.add_method('GetTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_static=True)
    ## mp-tcp-socket-base.h (module 'mptcp'): bool ns3::MpTcpSocketBase::InitiateSubflows() [member function]
    cls.add_method('InitiateSubflows', 
                   'bool', 
                   [])
    ## mp-tcp-socket-base.h (module 'mptcp'): int ns3::MpTcpSocketBase::Listen() [member function]
    cls.add_method('Listen', 
                   'int', 
                   [], 
                   is_virtual=True)
    ## mp-tcp-socket-base.h (module 'mptcp'): uint32_t ns3::MpTcpSocketBase::Recv(uint8_t * buf, uint32_t size) [member function]
    cls.add_method('Recv', 
                   'uint32_t', 
                   [param('uint8_t *', 'buf'), param('uint32_t', 'size')], 
                   is_virtual=True)
    ## mp-tcp-socket-base.h (module 'mptcp'): bool ns3::MpTcpSocketBase::SendBufferedData() [member function]
    cls.add_method('SendBufferedData', 
                   'bool', 
                   [])
    ## mp-tcp-socket-base.h (module 'mptcp'): void ns3::MpTcpSocketBase::SetCongestionCtrlAlgo(ns3::CongestionCtrl_t ccalgo) [member function]
    cls.add_method('SetCongestionCtrlAlgo', 
                   'void', 
                   [param('ns3::CongestionCtrl_t', 'ccalgo')])
    ## mp-tcp-socket-base.h (module 'mptcp'): void ns3::MpTcpSocketBase::SetDataDistribAlgo(ns3::DataDistribAlgo_t ddalgo) [member function]
    cls.add_method('SetDataDistribAlgo', 
                   'void', 
                   [param('ns3::DataDistribAlgo_t', 'ddalgo')])
    ## mp-tcp-socket-base.h (module 'mptcp'): bool ns3::MpTcpSocketBase::SetLossThreshold(uint8_t sFlowIdx, double lossThreshold) [member function]
    cls.add_method('SetLossThreshold', 
                   'bool', 
                   [param('uint8_t', 'sFlowIdx'), param('double', 'lossThreshold')])
    ## mp-tcp-socket-base.h (module 'mptcp'): void ns3::MpTcpSocketBase::SetMaxSubFlowNumber(uint8_t num) [member function]
    cls.add_method('SetMaxSubFlowNumber', 
                   'void', 
                   [param('uint8_t', 'num')])
    ## mp-tcp-socket-base.h (module 'mptcp'): void ns3::MpTcpSocketBase::SetMinSubFlowNumber(uint8_t num) [member function]
    cls.add_method('SetMinSubFlowNumber', 
                   'void', 
                   [param('uint8_t', 'num')])
    ## mp-tcp-socket-base.h (module 'mptcp'): void ns3::MpTcpSocketBase::SetMpTcp(ns3::Ptr<ns3::MpTcpL4Protocol> mptcp) [member function]
    cls.add_method('SetMpTcp', 
                   'void', 
                   [param('ns3::Ptr< ns3::MpTcpL4Protocol >', 'mptcp')])
    ## mp-tcp-socket-base.h (module 'mptcp'): void ns3::MpTcpSocketBase::SetMpWindowTraceCallback(ns3::Callback<void, unsigned char, double, ns3::Ipv4Address, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty> callback) [member function]
    cls.add_method('SetMpWindowTraceCallback', 
                   'void', 
                   [param('ns3::Callback< void, unsigned char, double, ns3::Ipv4Address, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty >', 'callback')])
    ## mp-tcp-socket-base.h (module 'mptcp'): void ns3::MpTcpSocketBase::SetNode(ns3::Ptr<ns3::Node> node) [member function]
    cls.add_method('SetNode', 
                   'void', 
                   [param('ns3::Ptr< ns3::Node >', 'node')], 
                   is_virtual=True)
    ## mp-tcp-socket-base.h (module 'mptcp'): void ns3::MpTcpSocketBase::SetPacketReorderAlgo(ns3::PacketReorder_t pralgo) [member function]
    cls.add_method('SetPacketReorderAlgo', 
                   'void', 
                   [param('ns3::PacketReorder_t', 'pralgo')])
    ## mp-tcp-socket-base.h (module 'mptcp'): void ns3::MpTcpSocketBase::SetSegmentSize(uint32_t size) [member function]
    cls.add_method('SetSegmentSize', 
                   'void', 
                   [param('uint32_t', 'size')])
    ## mp-tcp-socket-base.h (module 'mptcp'): void ns3::MpTcpSocketBase::SetSourceAddress(ns3::Ipv4Address src) [member function]
    cls.add_method('SetSourceAddress', 
                   'void', 
                   [param('ns3::Ipv4Address', 'src')])
    ## mp-tcp-socket-base.h (module 'mptcp'): void ns3::MpTcpSocketBase::SetunOrdBufMaxSize(uint32_t size) [member function]
    cls.add_method('SetunOrdBufMaxSize', 
                   'void', 
                   [param('uint32_t', 'size')])
    ## mp-tcp-socket-base.h (module 'mptcp'): void ns3::MpTcpSocketBase::allocateRecvingBuffer(uint32_t size) [member function]
    cls.add_method('allocateRecvingBuffer', 
                   'void', 
                   [param('uint32_t', 'size')])
    ## mp-tcp-socket-base.h (module 'mptcp'): void ns3::MpTcpSocketBase::allocateSendingBuffer(uint32_t size) [member function]
    cls.add_method('allocateSendingBuffer', 
                   'void', 
                   [param('uint32_t', 'size')])
    ## mp-tcp-socket-base.h (module 'mptcp'): double ns3::MpTcpSocketBase::getConnectionEfficiency() [member function]
    cls.add_method('getConnectionEfficiency', 
                   'double', 
                   [])
    ## mp-tcp-socket-base.h (module 'mptcp'): uint64_t ns3::MpTcpSocketBase::getPathBandwidth(uint8_t idxPath) [member function]
    cls.add_method('getPathBandwidth', 
                   'uint64_t', 
                   [param('uint8_t', 'idxPath')])
    ## mp-tcp-socket-base.h (module 'mptcp'): double ns3::MpTcpSocketBase::getPathDelay(uint8_t idxPath) [member function]
    cls.add_method('getPathDelay', 
                   'double', 
                   [param('uint8_t', 'idxPath')])
    ## mp-tcp-socket-base.h (module 'mptcp'): bool ns3::MpTcpSocketBase::isMultipath() [member function]
    cls.add_method('isMultipath', 
                   'bool', 
                   [])
    ## mp-tcp-socket-base.h (module 'mptcp'): bool ns3::MpTcpSocketBase::rejectPacket(double threshold) [member function]
    cls.add_method('rejectPacket', 
                   'bool', 
                   [param('double', 'threshold')])
    ## mp-tcp-socket-base.h (module 'mptcp'): ns3::MpTcpSocketBase::m_stateMachine [variable]
    cls.add_instance_attribute('m_stateMachine', 'ns3::MpTcpStateMachine *', is_const=False)
    ## mp-tcp-socket-base.h (module 'mptcp'): void ns3::MpTcpSocketBase::DupAck(ns3::TcpHeader const & t, uint32_t count) [member function]
    cls.add_method('DupAck', 
                   'void', 
                   [param('ns3::TcpHeader const &', 't'), param('uint32_t', 'count')], 
                   visibility='protected', is_virtual=True)
    ## mp-tcp-socket-base.h (module 'mptcp'): ns3::Ptr<ns3::TcpSocketBase> ns3::MpTcpSocketBase::Fork() [member function]
    cls.add_method('Fork', 
                   'ns3::Ptr< ns3::TcpSocketBase >', 
                   [], 
                   visibility='protected', is_virtual=True)
    ## mp-tcp-socket-base.h (module 'mptcp'): void ns3::MpTcpSocketBase::GenerateRTTPlot() [member function]
    cls.add_method('GenerateRTTPlot', 
                   'void', 
                   [], 
                   visibility='protected')
    ## mp-tcp-socket-base.h (module 'mptcp'): uint32_t ns3::MpTcpSocketBase::GetInitialCwnd() const [member function]
    cls.add_method('GetInitialCwnd', 
                   'uint32_t', 
                   [], 
                   is_const=True, visibility='protected', is_virtual=True)
    ## mp-tcp-socket-base.h (module 'mptcp'): uint32_t ns3::MpTcpSocketBase::GetSSThresh() const [member function]
    cls.add_method('GetSSThresh', 
                   'uint32_t', 
                   [], 
                   is_const=True, visibility='protected', is_virtual=True)
    ## mp-tcp-socket-base.h (module 'mptcp'): void ns3::MpTcpSocketBase::OpenCWND(uint8_t sFlowIdx, uint32_t ackedBytes) [member function]
    cls.add_method('OpenCWND', 
                   'void', 
                   [param('uint8_t', 'sFlowIdx'), param('uint32_t', 'ackedBytes')], 
                   visibility='protected')
    ## mp-tcp-socket-base.h (module 'mptcp'): ns3::Actions_t ns3::MpTcpSocketBase::ProcessHeaderOptions(uint8_t sFlowIdx, ns3::Ptr<ns3::Packet> pkt, uint32_t * dataLen, ns3::MpTcpHeader mptcpHeader) [member function]
    cls.add_method('ProcessHeaderOptions', 
                   'ns3::Actions_t', 
                   [param('uint8_t', 'sFlowIdx'), param('ns3::Ptr< ns3::Packet >', 'pkt'), param('uint32_t *', 'dataLen'), param('ns3::MpTcpHeader', 'mptcpHeader')], 
                   visibility='protected')
    ## mp-tcp-socket-base.h (module 'mptcp'): void ns3::MpTcpSocketBase::ProcessMultipathState() [member function]
    cls.add_method('ProcessMultipathState', 
                   'void', 
                   [], 
                   visibility='protected')
    ## mp-tcp-socket-base.h (module 'mptcp'): void ns3::MpTcpSocketBase::ReadUnOrderedData() [member function]
    cls.add_method('ReadUnOrderedData', 
                   'void', 
                   [], 
                   visibility='protected')
    ## mp-tcp-socket-base.h (module 'mptcp'): void ns3::MpTcpSocketBase::SetInitialCwnd(uint32_t cwnd) [member function]
    cls.add_method('SetInitialCwnd', 
                   'void', 
                   [param('uint32_t', 'cwnd')], 
                   visibility='protected', is_virtual=True)
    ## mp-tcp-socket-base.h (module 'mptcp'): void ns3::MpTcpSocketBase::SetSSThresh(uint32_t threshold) [member function]
    cls.add_method('SetSSThresh', 
                   'void', 
                   [param('uint32_t', 'threshold')], 
                   visibility='protected', is_virtual=True)
    ## mp-tcp-socket-base.h (module 'mptcp'): bool ns3::MpTcpSocketBase::StoreUnOrderedData(ns3::DSNMapping * ptr1) [member function]
    cls.add_method('StoreUnOrderedData', 
                   'bool', 
                   [param('ns3::DSNMapping *', 'ptr1')], 
                   visibility='protected')
    ## mp-tcp-socket-base.h (module 'mptcp'): void ns3::MpTcpSocketBase::calculateSmoothedCWND(uint8_t sFlowIdx) [member function]
    cls.add_method('calculateSmoothedCWND', 
                   'void', 
                   [param('uint8_t', 'sFlowIdx')], 
                   visibility='protected')
    ## mp-tcp-socket-base.h (module 'mptcp'): void ns3::MpTcpSocketBase::calculateTotalCWND() [member function]
    cls.add_method('calculateTotalCWND', 
                   'void', 
                   [], 
                   visibility='protected')
    ## mp-tcp-socket-base.h (module 'mptcp'): void ns3::MpTcpSocketBase::calculate_alpha() [member function]
    cls.add_method('calculate_alpha', 
                   'void', 
                   [], 
                   visibility='protected')
    ## mp-tcp-socket-base.h (module 'mptcp'): ns3::DSNMapping * ns3::MpTcpSocketBase::getAckedSegment(uint8_t sFlowIdx, uint32_t ack) [member function]
    cls.add_method('getAckedSegment', 
                   'ns3::DSNMapping *', 
                   [param('uint8_t', 'sFlowIdx'), param('uint32_t', 'ack')], 
                   visibility='protected')
    ## mp-tcp-socket-base.h (module 'mptcp'): ns3::DSNMapping * ns3::MpTcpSocketBase::getAckedSegment(uint64_t lEdge, uint64_t rEdge) [member function]
    cls.add_method('getAckedSegment', 
                   'ns3::DSNMapping *', 
                   [param('uint64_t', 'lEdge'), param('uint64_t', 'rEdge')], 
                   visibility='protected')
    ## mp-tcp-socket-base.h (module 'mptcp'): double ns3::MpTcpSocketBase::getGlobalThroughput() [member function]
    cls.add_method('getGlobalThroughput', 
                   'double', 
                   [], 
                   visibility='protected')
    ## mp-tcp-socket-base.h (module 'mptcp'): uint8_t ns3::MpTcpSocketBase::getSubflowToUse() [member function]
    cls.add_method('getSubflowToUse', 
                   'uint8_t', 
                   [], 
                   visibility='protected')
    ## mp-tcp-socket-base.h (module 'mptcp'): void ns3::MpTcpSocketBase::reduceCWND(uint8_t sFlowIdx) [member function]
    cls.add_method('reduceCWND', 
                   'void', 
                   [param('uint8_t', 'sFlowIdx')], 
                   visibility='protected')
    ## mp-tcp-socket-base.h (module 'mptcp'): uint16_t ns3::MpTcpSocketBase::AdvertisedWindowSize() [member function]
    cls.add_method('AdvertisedWindowSize', 
                   'uint16_t', 
                   [], 
                   visibility='private', is_virtual=True)
    ## mp-tcp-socket-base.h (module 'mptcp'): uint32_t ns3::MpTcpSocketBase::BytesInFlight() [member function]
    cls.add_method('BytesInFlight', 
                   'uint32_t', 
                   [], 
                   visibility='private', is_virtual=True)
    ## mp-tcp-socket-base.h (module 'mptcp'): bool ns3::MpTcpSocketBase::CloseMultipathConnection() [member function]
    cls.add_method('CloseMultipathConnection', 
                   'bool', 
                   [], 
                   visibility='private', is_virtual=True)
    ## mp-tcp-socket-base.h (module 'mptcp'): bool ns3::MpTcpSocketBase::IsLocalAddress(ns3::Ipv4Address addr) [member function]
    cls.add_method('IsLocalAddress', 
                   'bool', 
                   [param('ns3::Ipv4Address', 'addr')], 
                   visibility='private', is_virtual=True)
    ## mp-tcp-socket-base.h (module 'mptcp'): bool ns3::MpTcpSocketBase::IsThereRoute(ns3::Ipv4Address src, ns3::Ipv4Address dst) [member function]
    cls.add_method('IsThereRoute', 
                   'bool', 
                   [param('ns3::Ipv4Address', 'src'), param('ns3::Ipv4Address', 'dst')], 
                   visibility='private', is_virtual=True)
    return

def register_Ns3MpTcpSubFlow_methods(root_module, cls):
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpSubFlow::MpTcpSubFlow(ns3::MpTcpSubFlow const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::MpTcpSubFlow const &', 'arg0')])
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpSubFlow::MpTcpSubFlow() [constructor]
    cls.add_constructor([])
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpSubFlow::MpTcpSubFlow(uint32_t TxSeqNb) [constructor]
    cls.add_constructor([param('uint32_t', 'TxSeqNb')])
    ## mp-tcp-typedefs.h (module 'mptcp'): void ns3::MpTcpSubFlow::AddDSNMapping(uint8_t sFlowIdx, uint64_t dSeqNum, uint16_t dLvlLen, uint32_t sflowSeqNum, uint32_t ack, ns3::Ptr<ns3::Packet> pkt) [member function]
    cls.add_method('AddDSNMapping', 
                   'void', 
                   [param('uint8_t', 'sFlowIdx'), param('uint64_t', 'dSeqNum'), param('uint16_t', 'dLvlLen'), param('uint32_t', 'sflowSeqNum'), param('uint32_t', 'ack'), param('ns3::Ptr< ns3::Packet >', 'pkt')])
    ## mp-tcp-typedefs.h (module 'mptcp'): void ns3::MpTcpSubFlow::CwndTracer(double oldval, double newval) [member function]
    cls.add_method('CwndTracer', 
                   'void', 
                   [param('double', 'oldval'), param('double', 'newval')])
    ## mp-tcp-typedefs.h (module 'mptcp'): static ns3::TypeId ns3::MpTcpSubFlow::GetTypeId() [member function]
    cls.add_method('GetTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_static=True)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::DSNMapping * ns3::MpTcpSubFlow::GetunAckPkt(uint32_t awnd) [member function]
    cls.add_method('GetunAckPkt', 
                   'ns3::DSNMapping *', 
                   [param('uint32_t', 'awnd')])
    ## mp-tcp-typedefs.h (module 'mptcp'): void ns3::MpTcpSubFlow::StartTracing(std::string traced) [member function]
    cls.add_method('StartTracing', 
                   'void', 
                   [param('std::string', 'traced')])
    ## mp-tcp-typedefs.h (module 'mptcp'): void ns3::MpTcpSubFlow::updateRTT(uint32_t ack, ns3::Time current) [member function]
    cls.add_method('updateRTT', 
                   'void', 
                   [param('uint32_t', 'ack'), param('ns3::Time', 'current')])
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpSubFlow::CanDrop [variable]
    cls.add_instance_attribute('CanDrop', 'bool', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpSubFlow::DropedPktCount [variable]
    cls.add_instance_attribute('DropedPktCount', 'uint32_t', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpSubFlow::LostThreshold [variable]
    cls.add_instance_attribute('LostThreshold', 'double', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpSubFlow::MSS [variable]
    cls.add_instance_attribute('MSS', 'uint32_t', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpSubFlow::MaxDropedPktCount [variable]
    cls.add_instance_attribute('MaxDropedPktCount', 'uint32_t', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpSubFlow::MaxPktCount [variable]
    cls.add_instance_attribute('MaxPktCount', 'uint64_t', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpSubFlow::PktCount [variable]
    cls.add_instance_attribute('PktCount', 'uint64_t', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpSubFlow::ReTxSeqNumber [variable]
    cls.add_instance_attribute('ReTxSeqNumber', 'uint32_t', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpSubFlow::RxSeqNumber [variable]
    cls.add_instance_attribute('RxSeqNumber', 'uint32_t', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpSubFlow::SpuriousRecovery [variable]
    cls.add_instance_attribute('SpuriousRecovery', 'bool', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpSubFlow::TxSeqNumber [variable]
    cls.add_instance_attribute('TxSeqNumber', 'uint32_t', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpSubFlow::ackCount [variable]
    cls.add_instance_attribute('ackCount', 'uint8_t', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpSubFlow::bandwidth [variable]
    cls.add_instance_attribute('bandwidth', 'uint64_t', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpSubFlow::connected [variable]
    cls.add_instance_attribute('connected', 'bool', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpSubFlow::cwnd [variable]
    cls.add_instance_attribute('cwnd', 'ns3::TracedValue< double >', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpSubFlow::dAddr [variable]
    cls.add_instance_attribute('dAddr', 'ns3::Ipv4Address', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpSubFlow::dPort [variable]
    cls.add_instance_attribute('dPort', 'uint16_t', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpSubFlow::highestAck [variable]
    cls.add_instance_attribute('highestAck', 'uint32_t', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpSubFlow::lastMeasuredRtt [variable]
    cls.add_instance_attribute('lastMeasuredRtt', 'ns3::Time', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpSubFlow::mapDSN [variable]
    cls.add_instance_attribute('mapDSN', 'std::list< ns3::DSNMapping * >', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpSubFlow::maxSeqNb [variable]
    cls.add_instance_attribute('maxSeqNb', 'uint32_t', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpSubFlow::measuredRTT [variable]
    cls.add_instance_attribute('measuredRTT', 'std::multiset< double >', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpSubFlow::nbRecvAck [variable]
    cls.add_instance_attribute('nbRecvAck', 'int', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpSubFlow::oif [variable]
    cls.add_instance_attribute('oif', 'uint32_t', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpSubFlow::phase [variable]
    cls.add_instance_attribute('phase', 'ns3::Phase_t', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpSubFlow::recover [variable]
    cls.add_instance_attribute('recover', 'uint32_t', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpSubFlow::retxEvent [variable]
    cls.add_instance_attribute('retxEvent', 'ns3::EventId', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpSubFlow::routeId [variable]
    cls.add_instance_attribute('routeId', 'uint16_t', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpSubFlow::rtt [variable]
    cls.add_instance_attribute('rtt', 'ns3::Ptr< ns3::RttMeanDeviation >', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpSubFlow::sAddr [variable]
    cls.add_instance_attribute('sAddr', 'ns3::Ipv4Address', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpSubFlow::sPort [variable]
    cls.add_instance_attribute('sPort', 'uint16_t', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpSubFlow::savedCWND [variable]
    cls.add_instance_attribute('savedCWND', 'double', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpSubFlow::savedSSThresh [variable]
    cls.add_instance_attribute('savedSSThresh', 'uint32_t', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpSubFlow::scwnd [variable]
    cls.add_instance_attribute('scwnd', 'double', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpSubFlow::ssthresh [variable]
    cls.add_instance_attribute('ssthresh', 'uint32_t', is_const=False)
    ## mp-tcp-typedefs.h (module 'mptcp'): ns3::MpTcpSubFlow::state [variable]
    cls.add_instance_attribute('state', 'ns3::TcpStates_t', is_const=False)
    return

def register_Ns3NetDevice_methods(root_module, cls):
    ## net-device.h (module 'network'): ns3::NetDevice::NetDevice() [constructor]
    cls.add_constructor([])
    ## net-device.h (module 'network'): ns3::NetDevice::NetDevice(ns3::NetDevice const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::NetDevice const &', 'arg0')])
    ## net-device.h (module 'network'): void ns3::NetDevice::AddLinkChangeCallback(ns3::Callback<void,ns3::empty,ns3::empty,ns3::empty,ns3::empty,ns3::empty,ns3::empty,ns3::empty,ns3::empty,ns3::empty> callback) [member function]
    cls.add_method('AddLinkChangeCallback', 
                   'void', 
                   [param('ns3::Callback< void, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty >', 'callback')], 
                   is_pure_virtual=True, is_virtual=True)
    ## net-device.h (module 'network'): ns3::Address ns3::NetDevice::GetAddress() const [member function]
    cls.add_method('GetAddress', 
                   'ns3::Address', 
                   [], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## net-device.h (module 'network'): ns3::Address ns3::NetDevice::GetBroadcast() const [member function]
    cls.add_method('GetBroadcast', 
                   'ns3::Address', 
                   [], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## net-device.h (module 'network'): ns3::Ptr<ns3::Channel> ns3::NetDevice::GetChannel() const [member function]
    cls.add_method('GetChannel', 
                   'ns3::Ptr< ns3::Channel >', 
                   [], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## net-device.h (module 'network'): uint32_t ns3::NetDevice::GetIfIndex() const [member function]
    cls.add_method('GetIfIndex', 
                   'uint32_t', 
                   [], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## net-device.h (module 'network'): uint16_t ns3::NetDevice::GetMtu() const [member function]
    cls.add_method('GetMtu', 
                   'uint16_t', 
                   [], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## net-device.h (module 'network'): ns3::Address ns3::NetDevice::GetMulticast(ns3::Ipv4Address multicastGroup) const [member function]
    cls.add_method('GetMulticast', 
                   'ns3::Address', 
                   [param('ns3::Ipv4Address', 'multicastGroup')], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## net-device.h (module 'network'): ns3::Address ns3::NetDevice::GetMulticast(ns3::Ipv6Address addr) const [member function]
    cls.add_method('GetMulticast', 
                   'ns3::Address', 
                   [param('ns3::Ipv6Address', 'addr')], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## net-device.h (module 'network'): ns3::Ptr<ns3::Node> ns3::NetDevice::GetNode() const [member function]
    cls.add_method('GetNode', 
                   'ns3::Ptr< ns3::Node >', 
                   [], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## net-device.h (module 'network'): static ns3::TypeId ns3::NetDevice::GetTypeId() [member function]
    cls.add_method('GetTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_static=True)
    ## net-device.h (module 'network'): bool ns3::NetDevice::IsBridge() const [member function]
    cls.add_method('IsBridge', 
                   'bool', 
                   [], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## net-device.h (module 'network'): bool ns3::NetDevice::IsBroadcast() const [member function]
    cls.add_method('IsBroadcast', 
                   'bool', 
                   [], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## net-device.h (module 'network'): bool ns3::NetDevice::IsLinkUp() const [member function]
    cls.add_method('IsLinkUp', 
                   'bool', 
                   [], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## net-device.h (module 'network'): bool ns3::NetDevice::IsMulticast() const [member function]
    cls.add_method('IsMulticast', 
                   'bool', 
                   [], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## net-device.h (module 'network'): bool ns3::NetDevice::IsPointToPoint() const [member function]
    cls.add_method('IsPointToPoint', 
                   'bool', 
                   [], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## net-device.h (module 'network'): bool ns3::NetDevice::NeedsArp() const [member function]
    cls.add_method('NeedsArp', 
                   'bool', 
                   [], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    ## net-device.h (module 'network'): bool ns3::NetDevice::Send(ns3::Ptr<ns3::Packet> packet, ns3::Address const & dest, uint16_t protocolNumber) [member function]
    cls.add_method('Send', 
                   'bool', 
                   [param('ns3::Ptr< ns3::Packet >', 'packet'), param('ns3::Address const &', 'dest'), param('uint16_t', 'protocolNumber')], 
                   is_pure_virtual=True, is_virtual=True)
    ## net-device.h (module 'network'): bool ns3::NetDevice::SendFrom(ns3::Ptr<ns3::Packet> packet, ns3::Address const & source, ns3::Address const & dest, uint16_t protocolNumber) [member function]
    cls.add_method('SendFrom', 
                   'bool', 
                   [param('ns3::Ptr< ns3::Packet >', 'packet'), param('ns3::Address const &', 'source'), param('ns3::Address const &', 'dest'), param('uint16_t', 'protocolNumber')], 
                   is_pure_virtual=True, is_virtual=True)
    ## net-device.h (module 'network'): void ns3::NetDevice::SetAddress(ns3::Address address) [member function]
    cls.add_method('SetAddress', 
                   'void', 
                   [param('ns3::Address', 'address')], 
                   is_pure_virtual=True, is_virtual=True)
    ## net-device.h (module 'network'): void ns3::NetDevice::SetIfIndex(uint32_t const index) [member function]
    cls.add_method('SetIfIndex', 
                   'void', 
                   [param('uint32_t const', 'index')], 
                   is_pure_virtual=True, is_virtual=True)
    ## net-device.h (module 'network'): bool ns3::NetDevice::SetMtu(uint16_t const mtu) [member function]
    cls.add_method('SetMtu', 
                   'bool', 
                   [param('uint16_t const', 'mtu')], 
                   is_pure_virtual=True, is_virtual=True)
    ## net-device.h (module 'network'): void ns3::NetDevice::SetNode(ns3::Ptr<ns3::Node> node) [member function]
    cls.add_method('SetNode', 
                   'void', 
                   [param('ns3::Ptr< ns3::Node >', 'node')], 
                   is_pure_virtual=True, is_virtual=True)
    ## net-device.h (module 'network'): void ns3::NetDevice::SetPromiscReceiveCallback(ns3::Callback<bool,ns3::Ptr<ns3::NetDevice>,ns3::Ptr<const ns3::Packet>,short unsigned int,const ns3::Address&,const ns3::Address&,ns3::NetDevice::PacketType,ns3::empty,ns3::empty,ns3::empty> cb) [member function]
    cls.add_method('SetPromiscReceiveCallback', 
                   'void', 
                   [param('ns3::Callback< bool, ns3::Ptr< ns3::NetDevice >, ns3::Ptr< ns3::Packet const >, short unsigned int, ns3::Address const &, ns3::Address const &, ns3::NetDevice::PacketType, ns3::empty, ns3::empty, ns3::empty >', 'cb')], 
                   is_pure_virtual=True, is_virtual=True)
    ## net-device.h (module 'network'): void ns3::NetDevice::SetReceiveCallback(ns3::Callback<bool,ns3::Ptr<ns3::NetDevice>,ns3::Ptr<const ns3::Packet>,short unsigned int,const ns3::Address&,ns3::empty,ns3::empty,ns3::empty,ns3::empty,ns3::empty> cb) [member function]
    cls.add_method('SetReceiveCallback', 
                   'void', 
                   [param('ns3::Callback< bool, ns3::Ptr< ns3::NetDevice >, ns3::Ptr< ns3::Packet const >, short unsigned int, ns3::Address const &, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty >', 'cb')], 
                   is_pure_virtual=True, is_virtual=True)
    ## net-device.h (module 'network'): bool ns3::NetDevice::SupportsSendFrom() const [member function]
    cls.add_method('SupportsSendFrom', 
                   'bool', 
                   [], 
                   is_pure_virtual=True, is_const=True, is_virtual=True)
    return

def register_Ns3NixVector_methods(root_module, cls):
    cls.add_output_stream_operator()
    ## nix-vector.h (module 'network'): ns3::NixVector::NixVector() [constructor]
    cls.add_constructor([])
    ## nix-vector.h (module 'network'): ns3::NixVector::NixVector(ns3::NixVector const & o) [copy constructor]
    cls.add_constructor([param('ns3::NixVector const &', 'o')])
    ## nix-vector.h (module 'network'): void ns3::NixVector::AddNeighborIndex(uint32_t newBits, uint32_t numberOfBits) [member function]
    cls.add_method('AddNeighborIndex', 
                   'void', 
                   [param('uint32_t', 'newBits'), param('uint32_t', 'numberOfBits')])
    ## nix-vector.h (module 'network'): uint32_t ns3::NixVector::BitCount(uint32_t numberOfNeighbors) const [member function]
    cls.add_method('BitCount', 
                   'uint32_t', 
                   [param('uint32_t', 'numberOfNeighbors')], 
                   is_const=True)
    ## nix-vector.h (module 'network'): ns3::Ptr<ns3::NixVector> ns3::NixVector::Copy() const [member function]
    cls.add_method('Copy', 
                   'ns3::Ptr< ns3::NixVector >', 
                   [], 
                   is_const=True)
    ## nix-vector.h (module 'network'): uint32_t ns3::NixVector::Deserialize(uint32_t const * buffer, uint32_t size) [member function]
    cls.add_method('Deserialize', 
                   'uint32_t', 
                   [param('uint32_t const *', 'buffer'), param('uint32_t', 'size')])
    ## nix-vector.h (module 'network'): uint32_t ns3::NixVector::ExtractNeighborIndex(uint32_t numberOfBits) [member function]
    cls.add_method('ExtractNeighborIndex', 
                   'uint32_t', 
                   [param('uint32_t', 'numberOfBits')])
    ## nix-vector.h (module 'network'): uint32_t ns3::NixVector::GetRemainingBits() [member function]
    cls.add_method('GetRemainingBits', 
                   'uint32_t', 
                   [])
    ## nix-vector.h (module 'network'): uint32_t ns3::NixVector::GetSerializedSize() const [member function]
    cls.add_method('GetSerializedSize', 
                   'uint32_t', 
                   [], 
                   is_const=True)
    ## nix-vector.h (module 'network'): uint32_t ns3::NixVector::Serialize(uint32_t * buffer, uint32_t maxSize) const [member function]
    cls.add_method('Serialize', 
                   'uint32_t', 
                   [param('uint32_t *', 'buffer'), param('uint32_t', 'maxSize')], 
                   is_const=True)
    return

def register_Ns3Node_methods(root_module, cls):
    ## node.h (module 'network'): ns3::Node::Node(ns3::Node const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::Node const &', 'arg0')])
    ## node.h (module 'network'): ns3::Node::Node() [constructor]
    cls.add_constructor([])
    ## node.h (module 'network'): ns3::Node::Node(uint32_t systemId) [constructor]
    cls.add_constructor([param('uint32_t', 'systemId')])
    ## node.h (module 'network'): uint32_t ns3::Node::AddApplication(ns3::Ptr<ns3::Application> application) [member function]
    cls.add_method('AddApplication', 
                   'uint32_t', 
                   [param('ns3::Ptr< ns3::Application >', 'application')])
    ## node.h (module 'network'): uint32_t ns3::Node::AddDevice(ns3::Ptr<ns3::NetDevice> device) [member function]
    cls.add_method('AddDevice', 
                   'uint32_t', 
                   [param('ns3::Ptr< ns3::NetDevice >', 'device')])
    ## node.h (module 'network'): static bool ns3::Node::ChecksumEnabled() [member function]
    cls.add_method('ChecksumEnabled', 
                   'bool', 
                   [], 
                   is_static=True)
    ## node.h (module 'network'): ns3::Ptr<ns3::Application> ns3::Node::GetApplication(uint32_t index) const [member function]
    cls.add_method('GetApplication', 
                   'ns3::Ptr< ns3::Application >', 
                   [param('uint32_t', 'index')], 
                   is_const=True)
    ## node.h (module 'network'): ns3::Ptr<ns3::NetDevice> ns3::Node::GetDevice(uint32_t index) const [member function]
    cls.add_method('GetDevice', 
                   'ns3::Ptr< ns3::NetDevice >', 
                   [param('uint32_t', 'index')], 
                   is_const=True)
    ## node.h (module 'network'): uint32_t ns3::Node::GetId() const [member function]
    cls.add_method('GetId', 
                   'uint32_t', 
                   [], 
                   is_const=True)
    ## node.h (module 'network'): uint32_t ns3::Node::GetNApplications() const [member function]
    cls.add_method('GetNApplications', 
                   'uint32_t', 
                   [], 
                   is_const=True)
    ## node.h (module 'network'): uint32_t ns3::Node::GetNDevices() const [member function]
    cls.add_method('GetNDevices', 
                   'uint32_t', 
                   [], 
                   is_const=True)
    ## node.h (module 'network'): uint32_t ns3::Node::GetSystemId() const [member function]
    cls.add_method('GetSystemId', 
                   'uint32_t', 
                   [], 
                   is_const=True)
    ## node.h (module 'network'): static ns3::TypeId ns3::Node::GetTypeId() [member function]
    cls.add_method('GetTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_static=True)
    ## node.h (module 'network'): void ns3::Node::RegisterDeviceAdditionListener(ns3::Callback<void,ns3::Ptr<ns3::NetDevice>,ns3::empty,ns3::empty,ns3::empty,ns3::empty,ns3::empty,ns3::empty,ns3::empty,ns3::empty> listener) [member function]
    cls.add_method('RegisterDeviceAdditionListener', 
                   'void', 
                   [param('ns3::Callback< void, ns3::Ptr< ns3::NetDevice >, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty >', 'listener')])
    ## node.h (module 'network'): void ns3::Node::RegisterProtocolHandler(ns3::Callback<void, ns3::Ptr<ns3::NetDevice>, ns3::Ptr<ns3::Packet const>, unsigned short, ns3::Address const&, ns3::Address const&, ns3::NetDevice::PacketType, ns3::empty, ns3::empty, ns3::empty> handler, uint16_t protocolType, ns3::Ptr<ns3::NetDevice> device, bool promiscuous=false) [member function]
    cls.add_method('RegisterProtocolHandler', 
                   'void', 
                   [param('ns3::Callback< void, ns3::Ptr< ns3::NetDevice >, ns3::Ptr< ns3::Packet const >, unsigned short, ns3::Address const &, ns3::Address const &, ns3::NetDevice::PacketType, ns3::empty, ns3::empty, ns3::empty >', 'handler'), param('uint16_t', 'protocolType'), param('ns3::Ptr< ns3::NetDevice >', 'device'), param('bool', 'promiscuous', default_value='false')])
    ## node.h (module 'network'): void ns3::Node::UnregisterDeviceAdditionListener(ns3::Callback<void,ns3::Ptr<ns3::NetDevice>,ns3::empty,ns3::empty,ns3::empty,ns3::empty,ns3::empty,ns3::empty,ns3::empty,ns3::empty> listener) [member function]
    cls.add_method('UnregisterDeviceAdditionListener', 
                   'void', 
                   [param('ns3::Callback< void, ns3::Ptr< ns3::NetDevice >, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty >', 'listener')])
    ## node.h (module 'network'): void ns3::Node::UnregisterProtocolHandler(ns3::Callback<void, ns3::Ptr<ns3::NetDevice>, ns3::Ptr<ns3::Packet const>, unsigned short, ns3::Address const&, ns3::Address const&, ns3::NetDevice::PacketType, ns3::empty, ns3::empty, ns3::empty> handler) [member function]
    cls.add_method('UnregisterProtocolHandler', 
                   'void', 
                   [param('ns3::Callback< void, ns3::Ptr< ns3::NetDevice >, ns3::Ptr< ns3::Packet const >, unsigned short, ns3::Address const &, ns3::Address const &, ns3::NetDevice::PacketType, ns3::empty, ns3::empty, ns3::empty >', 'handler')])
    ## node.h (module 'network'): void ns3::Node::DoDispose() [member function]
    cls.add_method('DoDispose', 
                   'void', 
                   [], 
                   visibility='protected', is_virtual=True)
    ## node.h (module 'network'): void ns3::Node::DoStart() [member function]
    cls.add_method('DoStart', 
                   'void', 
                   [], 
                   visibility='protected', is_virtual=True)
    return

def register_Ns3ObjectFactoryChecker_methods(root_module, cls):
    ## object-factory.h (module 'core'): ns3::ObjectFactoryChecker::ObjectFactoryChecker() [constructor]
    cls.add_constructor([])
    ## object-factory.h (module 'core'): ns3::ObjectFactoryChecker::ObjectFactoryChecker(ns3::ObjectFactoryChecker const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::ObjectFactoryChecker const &', 'arg0')])
    return

def register_Ns3ObjectFactoryValue_methods(root_module, cls):
    ## object-factory.h (module 'core'): ns3::ObjectFactoryValue::ObjectFactoryValue() [constructor]
    cls.add_constructor([])
    ## object-factory.h (module 'core'): ns3::ObjectFactoryValue::ObjectFactoryValue(ns3::ObjectFactoryValue const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::ObjectFactoryValue const &', 'arg0')])
    ## object-factory.h (module 'core'): ns3::ObjectFactoryValue::ObjectFactoryValue(ns3::ObjectFactory const & value) [constructor]
    cls.add_constructor([param('ns3::ObjectFactory const &', 'value')])
    ## object-factory.h (module 'core'): ns3::Ptr<ns3::AttributeValue> ns3::ObjectFactoryValue::Copy() const [member function]
    cls.add_method('Copy', 
                   'ns3::Ptr< ns3::AttributeValue >', 
                   [], 
                   is_const=True, is_virtual=True)
    ## object-factory.h (module 'core'): bool ns3::ObjectFactoryValue::DeserializeFromString(std::string value, ns3::Ptr<ns3::AttributeChecker const> checker) [member function]
    cls.add_method('DeserializeFromString', 
                   'bool', 
                   [param('std::string', 'value'), param('ns3::Ptr< ns3::AttributeChecker const >', 'checker')], 
                   is_virtual=True)
    ## object-factory.h (module 'core'): ns3::ObjectFactory ns3::ObjectFactoryValue::Get() const [member function]
    cls.add_method('Get', 
                   'ns3::ObjectFactory', 
                   [], 
                   is_const=True)
    ## object-factory.h (module 'core'): std::string ns3::ObjectFactoryValue::SerializeToString(ns3::Ptr<ns3::AttributeChecker const> checker) const [member function]
    cls.add_method('SerializeToString', 
                   'std::string', 
                   [param('ns3::Ptr< ns3::AttributeChecker const >', 'checker')], 
                   is_const=True, is_virtual=True)
    ## object-factory.h (module 'core'): void ns3::ObjectFactoryValue::Set(ns3::ObjectFactory const & value) [member function]
    cls.add_method('Set', 
                   'void', 
                   [param('ns3::ObjectFactory const &', 'value')])
    return

def register_Ns3OutputStreamWrapper_methods(root_module, cls):
    ## output-stream-wrapper.h (module 'network'): ns3::OutputStreamWrapper::OutputStreamWrapper(ns3::OutputStreamWrapper const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::OutputStreamWrapper const &', 'arg0')])
    ## output-stream-wrapper.h (module 'network'): ns3::OutputStreamWrapper::OutputStreamWrapper(std::string filename, std::_Ios_Openmode filemode) [constructor]
    cls.add_constructor([param('std::string', 'filename'), param('std::_Ios_Openmode', 'filemode')])
    ## output-stream-wrapper.h (module 'network'): ns3::OutputStreamWrapper::OutputStreamWrapper(std::ostream * os) [constructor]
    cls.add_constructor([param('std::ostream *', 'os')])
    ## output-stream-wrapper.h (module 'network'): std::ostream * ns3::OutputStreamWrapper::GetStream() [member function]
    cls.add_method('GetStream', 
                   'std::ostream *', 
                   [])
    return

def register_Ns3Packet_methods(root_module, cls):
    cls.add_output_stream_operator()
    ## packet.h (module 'network'): ns3::Packet::Packet() [constructor]
    cls.add_constructor([])
    ## packet.h (module 'network'): ns3::Packet::Packet(ns3::Packet const & o) [copy constructor]
    cls.add_constructor([param('ns3::Packet const &', 'o')])
    ## packet.h (module 'network'): ns3::Packet::Packet(uint32_t size) [constructor]
    cls.add_constructor([param('uint32_t', 'size')])
    ## packet.h (module 'network'): ns3::Packet::Packet(uint8_t const * buffer, uint32_t size, bool magic) [constructor]
    cls.add_constructor([param('uint8_t const *', 'buffer'), param('uint32_t', 'size'), param('bool', 'magic')])
    ## packet.h (module 'network'): ns3::Packet::Packet(uint8_t const * buffer, uint32_t size) [constructor]
    cls.add_constructor([param('uint8_t const *', 'buffer'), param('uint32_t', 'size')])
    ## packet.h (module 'network'): void ns3::Packet::AddAtEnd(ns3::Ptr<const ns3::Packet> packet) [member function]
    cls.add_method('AddAtEnd', 
                   'void', 
                   [param('ns3::Ptr< ns3::Packet const >', 'packet')])
    ## packet.h (module 'network'): void ns3::Packet::AddByteTag(ns3::Tag const & tag) const [member function]
    cls.add_method('AddByteTag', 
                   'void', 
                   [param('ns3::Tag const &', 'tag')], 
                   is_const=True)
    ## packet.h (module 'network'): void ns3::Packet::AddHeader(ns3::Header const & header) [member function]
    cls.add_method('AddHeader', 
                   'void', 
                   [param('ns3::Header const &', 'header')])
    ## packet.h (module 'network'): void ns3::Packet::AddPacketTag(ns3::Tag const & tag) const [member function]
    cls.add_method('AddPacketTag', 
                   'void', 
                   [param('ns3::Tag const &', 'tag')], 
                   is_const=True)
    ## packet.h (module 'network'): void ns3::Packet::AddPaddingAtEnd(uint32_t size) [member function]
    cls.add_method('AddPaddingAtEnd', 
                   'void', 
                   [param('uint32_t', 'size')])
    ## packet.h (module 'network'): void ns3::Packet::AddTrailer(ns3::Trailer const & trailer) [member function]
    cls.add_method('AddTrailer', 
                   'void', 
                   [param('ns3::Trailer const &', 'trailer')])
    ## packet.h (module 'network'): ns3::PacketMetadata::ItemIterator ns3::Packet::BeginItem() const [member function]
    cls.add_method('BeginItem', 
                   'ns3::PacketMetadata::ItemIterator', 
                   [], 
                   is_const=True)
    ## packet.h (module 'network'): ns3::Ptr<ns3::Packet> ns3::Packet::Copy() const [member function]
    cls.add_method('Copy', 
                   'ns3::Ptr< ns3::Packet >', 
                   [], 
                   is_const=True)
    ## packet.h (module 'network'): uint32_t ns3::Packet::CopyData(uint8_t * buffer, uint32_t size) const [member function]
    cls.add_method('CopyData', 
                   'uint32_t', 
                   [param('uint8_t *', 'buffer'), param('uint32_t', 'size')], 
                   is_const=True)
    ## packet.h (module 'network'): void ns3::Packet::CopyData(std::ostream * os, uint32_t size) const [member function]
    cls.add_method('CopyData', 
                   'void', 
                   [param('std::ostream *', 'os'), param('uint32_t', 'size')], 
                   is_const=True)
    ## packet.h (module 'network'): ns3::Ptr<ns3::Packet> ns3::Packet::CreateFragment(uint32_t start, uint32_t length) const [member function]
    cls.add_method('CreateFragment', 
                   'ns3::Ptr< ns3::Packet >', 
                   [param('uint32_t', 'start'), param('uint32_t', 'length')], 
                   is_const=True)
    ## packet.h (module 'network'): static void ns3::Packet::EnableChecking() [member function]
    cls.add_method('EnableChecking', 
                   'void', 
                   [], 
                   is_static=True)
    ## packet.h (module 'network'): static void ns3::Packet::EnablePrinting() [member function]
    cls.add_method('EnablePrinting', 
                   'void', 
                   [], 
                   is_static=True)
    ## packet.h (module 'network'): bool ns3::Packet::FindFirstMatchingByteTag(ns3::Tag & tag) const [member function]
    cls.add_method('FindFirstMatchingByteTag', 
                   'bool', 
                   [param('ns3::Tag &', 'tag')], 
                   is_const=True)
    ## packet.h (module 'network'): ns3::ByteTagIterator ns3::Packet::GetByteTagIterator() const [member function]
    cls.add_method('GetByteTagIterator', 
                   'ns3::ByteTagIterator', 
                   [], 
                   is_const=True)
    ## packet.h (module 'network'): ns3::Ptr<ns3::NixVector> ns3::Packet::GetNixVector() const [member function]
    cls.add_method('GetNixVector', 
                   'ns3::Ptr< ns3::NixVector >', 
                   [], 
                   is_const=True)
    ## packet.h (module 'network'): ns3::PacketTagIterator ns3::Packet::GetPacketTagIterator() const [member function]
    cls.add_method('GetPacketTagIterator', 
                   'ns3::PacketTagIterator', 
                   [], 
                   is_const=True)
    ## packet.h (module 'network'): uint32_t ns3::Packet::GetSerializedSize() const [member function]
    cls.add_method('GetSerializedSize', 
                   'uint32_t', 
                   [], 
                   is_const=True)
    ## packet.h (module 'network'): uint32_t ns3::Packet::GetSize() const [member function]
    cls.add_method('GetSize', 
                   'uint32_t', 
                   [], 
                   is_const=True)
    ## packet.h (module 'network'): uint64_t ns3::Packet::GetUid() const [member function]
    cls.add_method('GetUid', 
                   'uint64_t', 
                   [], 
                   is_const=True)
    ## packet.h (module 'network'): uint8_t const * ns3::Packet::PeekData() const [member function]
    cls.add_method('PeekData', 
                   'uint8_t const *', 
                   [], 
                   deprecated=True, is_const=True)
    ## packet.h (module 'network'): uint32_t ns3::Packet::PeekHeader(ns3::Header & header) const [member function]
    cls.add_method('PeekHeader', 
                   'uint32_t', 
                   [param('ns3::Header &', 'header')], 
                   is_const=True)
    ## packet.h (module 'network'): bool ns3::Packet::PeekPacketTag(ns3::Tag & tag) const [member function]
    cls.add_method('PeekPacketTag', 
                   'bool', 
                   [param('ns3::Tag &', 'tag')], 
                   is_const=True)
    ## packet.h (module 'network'): uint32_t ns3::Packet::PeekTrailer(ns3::Trailer & trailer) [member function]
    cls.add_method('PeekTrailer', 
                   'uint32_t', 
                   [param('ns3::Trailer &', 'trailer')])
    ## packet.h (module 'network'): void ns3::Packet::Print(std::ostream & os) const [member function]
    cls.add_method('Print', 
                   'void', 
                   [param('std::ostream &', 'os')], 
                   is_const=True)
    ## packet.h (module 'network'): void ns3::Packet::PrintByteTags(std::ostream & os) const [member function]
    cls.add_method('PrintByteTags', 
                   'void', 
                   [param('std::ostream &', 'os')], 
                   is_const=True)
    ## packet.h (module 'network'): void ns3::Packet::PrintPacketTags(std::ostream & os) const [member function]
    cls.add_method('PrintPacketTags', 
                   'void', 
                   [param('std::ostream &', 'os')], 
                   is_const=True)
    ## packet.h (module 'network'): void ns3::Packet::RemoveAllByteTags() [member function]
    cls.add_method('RemoveAllByteTags', 
                   'void', 
                   [])
    ## packet.h (module 'network'): void ns3::Packet::RemoveAllPacketTags() [member function]
    cls.add_method('RemoveAllPacketTags', 
                   'void', 
                   [])
    ## packet.h (module 'network'): void ns3::Packet::RemoveAtEnd(uint32_t size) [member function]
    cls.add_method('RemoveAtEnd', 
                   'void', 
                   [param('uint32_t', 'size')])
    ## packet.h (module 'network'): void ns3::Packet::RemoveAtStart(uint32_t size) [member function]
    cls.add_method('RemoveAtStart', 
                   'void', 
                   [param('uint32_t', 'size')])
    ## packet.h (module 'network'): uint32_t ns3::Packet::RemoveHeader(ns3::Header & header) [member function]
    cls.add_method('RemoveHeader', 
                   'uint32_t', 
                   [param('ns3::Header &', 'header')])
    ## packet.h (module 'network'): bool ns3::Packet::RemovePacketTag(ns3::Tag & tag) [member function]
    cls.add_method('RemovePacketTag', 
                   'bool', 
                   [param('ns3::Tag &', 'tag')])
    ## packet.h (module 'network'): uint32_t ns3::Packet::RemoveTrailer(ns3::Trailer & trailer) [member function]
    cls.add_method('RemoveTrailer', 
                   'uint32_t', 
                   [param('ns3::Trailer &', 'trailer')])
    ## packet.h (module 'network'): uint32_t ns3::Packet::Serialize(uint8_t * buffer, uint32_t maxSize) const [member function]
    cls.add_method('Serialize', 
                   'uint32_t', 
                   [param('uint8_t *', 'buffer'), param('uint32_t', 'maxSize')], 
                   is_const=True)
    ## packet.h (module 'network'): void ns3::Packet::SetNixVector(ns3::Ptr<ns3::NixVector> arg0) [member function]
    cls.add_method('SetNixVector', 
                   'void', 
                   [param('ns3::Ptr< ns3::NixVector >', 'arg0')])
    return

def register_Ns3TcpL4Protocol_methods(root_module, cls):
    ## tcp-l4-protocol.h (module 'internet'): ns3::TcpL4Protocol::PROT_NUMBER [variable]
    cls.add_static_attribute('PROT_NUMBER', 'uint8_t const', is_const=True)
    ## tcp-l4-protocol.h (module 'internet'): static ns3::TypeId ns3::TcpL4Protocol::GetTypeId() [member function]
    cls.add_method('GetTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_static=True)
    ## tcp-l4-protocol.h (module 'internet'): ns3::TcpL4Protocol::TcpL4Protocol() [constructor]
    cls.add_constructor([])
    ## tcp-l4-protocol.h (module 'internet'): void ns3::TcpL4Protocol::SetNode(ns3::Ptr<ns3::Node> node) [member function]
    cls.add_method('SetNode', 
                   'void', 
                   [param('ns3::Ptr< ns3::Node >', 'node')])
    ## tcp-l4-protocol.h (module 'internet'): int ns3::TcpL4Protocol::GetProtocolNumber() const [member function]
    cls.add_method('GetProtocolNumber', 
                   'int', 
                   [], 
                   is_const=True, is_virtual=True)
    ## tcp-l4-protocol.h (module 'internet'): ns3::Ptr<ns3::Socket> ns3::TcpL4Protocol::CreateSocket() [member function]
    cls.add_method('CreateSocket', 
                   'ns3::Ptr< ns3::Socket >', 
                   [])
    ## tcp-l4-protocol.h (module 'internet'): ns3::Ptr<ns3::Socket> ns3::TcpL4Protocol::CreateSocket(ns3::TypeId socketTypeId) [member function]
    cls.add_method('CreateSocket', 
                   'ns3::Ptr< ns3::Socket >', 
                   [param('ns3::TypeId', 'socketTypeId')])
    ## tcp-l4-protocol.h (module 'internet'): ns3::Ipv4EndPoint * ns3::TcpL4Protocol::Allocate() [member function]
    cls.add_method('Allocate', 
                   'ns3::Ipv4EndPoint *', 
                   [])
    ## tcp-l4-protocol.h (module 'internet'): ns3::Ipv4EndPoint * ns3::TcpL4Protocol::Allocate(ns3::Ipv4Address address) [member function]
    cls.add_method('Allocate', 
                   'ns3::Ipv4EndPoint *', 
                   [param('ns3::Ipv4Address', 'address')])
    ## tcp-l4-protocol.h (module 'internet'): ns3::Ipv4EndPoint * ns3::TcpL4Protocol::Allocate(uint16_t port) [member function]
    cls.add_method('Allocate', 
                   'ns3::Ipv4EndPoint *', 
                   [param('uint16_t', 'port')])
    ## tcp-l4-protocol.h (module 'internet'): ns3::Ipv4EndPoint * ns3::TcpL4Protocol::Allocate(ns3::Ipv4Address address, uint16_t port) [member function]
    cls.add_method('Allocate', 
                   'ns3::Ipv4EndPoint *', 
                   [param('ns3::Ipv4Address', 'address'), param('uint16_t', 'port')])
    ## tcp-l4-protocol.h (module 'internet'): ns3::Ipv4EndPoint * ns3::TcpL4Protocol::Allocate(ns3::Ipv4Address localAddress, uint16_t localPort, ns3::Ipv4Address peerAddress, uint16_t peerPort) [member function]
    cls.add_method('Allocate', 
                   'ns3::Ipv4EndPoint *', 
                   [param('ns3::Ipv4Address', 'localAddress'), param('uint16_t', 'localPort'), param('ns3::Ipv4Address', 'peerAddress'), param('uint16_t', 'peerPort')])
    ## tcp-l4-protocol.h (module 'internet'): void ns3::TcpL4Protocol::DeAllocate(ns3::Ipv4EndPoint * endPoint) [member function]
    cls.add_method('DeAllocate', 
                   'void', 
                   [param('ns3::Ipv4EndPoint *', 'endPoint')])
    ## tcp-l4-protocol.h (module 'internet'): void ns3::TcpL4Protocol::Send(ns3::Ptr<ns3::Packet> packet, ns3::Ipv4Address saddr, ns3::Ipv4Address daddr, uint16_t sport, uint16_t dport, ns3::Ptr<ns3::NetDevice> oif=0) [member function]
    cls.add_method('Send', 
                   'void', 
                   [param('ns3::Ptr< ns3::Packet >', 'packet'), param('ns3::Ipv4Address', 'saddr'), param('ns3::Ipv4Address', 'daddr'), param('uint16_t', 'sport'), param('uint16_t', 'dport'), param('ns3::Ptr< ns3::NetDevice >', 'oif', default_value='0')])
    ## tcp-l4-protocol.h (module 'internet'): ns3::Ipv4L4Protocol::RxStatus ns3::TcpL4Protocol::Receive(ns3::Ptr<ns3::Packet> p, ns3::Ipv4Header const & header, ns3::Ptr<ns3::Ipv4Interface> incomingInterface) [member function]
    cls.add_method('Receive', 
                   'ns3::Ipv4L4Protocol::RxStatus', 
                   [param('ns3::Ptr< ns3::Packet >', 'p'), param('ns3::Ipv4Header const &', 'header'), param('ns3::Ptr< ns3::Ipv4Interface >', 'incomingInterface')], 
                   is_virtual=True)
    ## tcp-l4-protocol.h (module 'internet'): void ns3::TcpL4Protocol::SetDownTarget(ns3::Callback<void, ns3::Ptr<ns3::Packet>, ns3::Ipv4Address, ns3::Ipv4Address, unsigned char, ns3::Ptr<ns3::Ipv4Route>, ns3::empty, ns3::empty, ns3::empty, ns3::empty> cb) [member function]
    cls.add_method('SetDownTarget', 
                   'void', 
                   [param('ns3::Callback< void, ns3::Ptr< ns3::Packet >, ns3::Ipv4Address, ns3::Ipv4Address, unsigned char, ns3::Ptr< ns3::Ipv4Route >, ns3::empty, ns3::empty, ns3::empty, ns3::empty >', 'cb')], 
                   is_virtual=True)
    ## tcp-l4-protocol.h (module 'internet'): ns3::Callback<void, ns3::Ptr<ns3::Packet>, ns3::Ipv4Address, ns3::Ipv4Address, unsigned char, ns3::Ptr<ns3::Ipv4Route>, ns3::empty, ns3::empty, ns3::empty, ns3::empty> ns3::TcpL4Protocol::GetDownTarget() const [member function]
    cls.add_method('GetDownTarget', 
                   'ns3::Callback< void, ns3::Ptr< ns3::Packet >, ns3::Ipv4Address, ns3::Ipv4Address, unsigned char, ns3::Ptr< ns3::Ipv4Route >, ns3::empty, ns3::empty, ns3::empty, ns3::empty >', 
                   [], 
                   is_const=True, is_virtual=True)
    ## tcp-l4-protocol.h (module 'internet'): void ns3::TcpL4Protocol::SetTcpTraceCallback(ns3::Callback<void, ns3::Ptr<ns3::Packet>, ns3::Ipv4Header, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty> callback) [member function]
    cls.add_method('SetTcpTraceCallback', 
                   'void', 
                   [param('ns3::Callback< void, ns3::Ptr< ns3::Packet >, ns3::Ipv4Header, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty >', 'callback')])
    ## tcp-l4-protocol.h (module 'internet'): void ns3::TcpL4Protocol::DoDispose() [member function]
    cls.add_method('DoDispose', 
                   'void', 
                   [], 
                   visibility='protected', is_virtual=True)
    ## tcp-l4-protocol.h (module 'internet'): void ns3::TcpL4Protocol::NotifyNewAggregate() [member function]
    cls.add_method('NotifyNewAggregate', 
                   'void', 
                   [], 
                   visibility='protected', is_virtual=True)
    return

def register_Ns3TimeChecker_methods(root_module, cls):
    ## nstime.h (module 'core'): ns3::TimeChecker::TimeChecker() [constructor]
    cls.add_constructor([])
    ## nstime.h (module 'core'): ns3::TimeChecker::TimeChecker(ns3::TimeChecker const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::TimeChecker const &', 'arg0')])
    return

def register_Ns3TimeValue_methods(root_module, cls):
    ## nstime.h (module 'core'): ns3::TimeValue::TimeValue() [constructor]
    cls.add_constructor([])
    ## nstime.h (module 'core'): ns3::TimeValue::TimeValue(ns3::TimeValue const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::TimeValue const &', 'arg0')])
    ## nstime.h (module 'core'): ns3::TimeValue::TimeValue(ns3::Time const & value) [constructor]
    cls.add_constructor([param('ns3::Time const &', 'value')])
    ## nstime.h (module 'core'): ns3::Ptr<ns3::AttributeValue> ns3::TimeValue::Copy() const [member function]
    cls.add_method('Copy', 
                   'ns3::Ptr< ns3::AttributeValue >', 
                   [], 
                   is_const=True, is_virtual=True)
    ## nstime.h (module 'core'): bool ns3::TimeValue::DeserializeFromString(std::string value, ns3::Ptr<ns3::AttributeChecker const> checker) [member function]
    cls.add_method('DeserializeFromString', 
                   'bool', 
                   [param('std::string', 'value'), param('ns3::Ptr< ns3::AttributeChecker const >', 'checker')], 
                   is_virtual=True)
    ## nstime.h (module 'core'): ns3::Time ns3::TimeValue::Get() const [member function]
    cls.add_method('Get', 
                   'ns3::Time', 
                   [], 
                   is_const=True)
    ## nstime.h (module 'core'): std::string ns3::TimeValue::SerializeToString(ns3::Ptr<ns3::AttributeChecker const> checker) const [member function]
    cls.add_method('SerializeToString', 
                   'std::string', 
                   [param('ns3::Ptr< ns3::AttributeChecker const >', 'checker')], 
                   is_const=True, is_virtual=True)
    ## nstime.h (module 'core'): void ns3::TimeValue::Set(ns3::Time const & value) [member function]
    cls.add_method('Set', 
                   'void', 
                   [param('ns3::Time const &', 'value')])
    return

def register_Ns3TypeIdChecker_methods(root_module, cls):
    ## type-id.h (module 'core'): ns3::TypeIdChecker::TypeIdChecker() [constructor]
    cls.add_constructor([])
    ## type-id.h (module 'core'): ns3::TypeIdChecker::TypeIdChecker(ns3::TypeIdChecker const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::TypeIdChecker const &', 'arg0')])
    return

def register_Ns3TypeIdValue_methods(root_module, cls):
    ## type-id.h (module 'core'): ns3::TypeIdValue::TypeIdValue() [constructor]
    cls.add_constructor([])
    ## type-id.h (module 'core'): ns3::TypeIdValue::TypeIdValue(ns3::TypeIdValue const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::TypeIdValue const &', 'arg0')])
    ## type-id.h (module 'core'): ns3::TypeIdValue::TypeIdValue(ns3::TypeId const & value) [constructor]
    cls.add_constructor([param('ns3::TypeId const &', 'value')])
    ## type-id.h (module 'core'): ns3::Ptr<ns3::AttributeValue> ns3::TypeIdValue::Copy() const [member function]
    cls.add_method('Copy', 
                   'ns3::Ptr< ns3::AttributeValue >', 
                   [], 
                   is_const=True, is_virtual=True)
    ## type-id.h (module 'core'): bool ns3::TypeIdValue::DeserializeFromString(std::string value, ns3::Ptr<ns3::AttributeChecker const> checker) [member function]
    cls.add_method('DeserializeFromString', 
                   'bool', 
                   [param('std::string', 'value'), param('ns3::Ptr< ns3::AttributeChecker const >', 'checker')], 
                   is_virtual=True)
    ## type-id.h (module 'core'): ns3::TypeId ns3::TypeIdValue::Get() const [member function]
    cls.add_method('Get', 
                   'ns3::TypeId', 
                   [], 
                   is_const=True)
    ## type-id.h (module 'core'): std::string ns3::TypeIdValue::SerializeToString(ns3::Ptr<ns3::AttributeChecker const> checker) const [member function]
    cls.add_method('SerializeToString', 
                   'std::string', 
                   [param('ns3::Ptr< ns3::AttributeChecker const >', 'checker')], 
                   is_const=True, is_virtual=True)
    ## type-id.h (module 'core'): void ns3::TypeIdValue::Set(ns3::TypeId const & value) [member function]
    cls.add_method('Set', 
                   'void', 
                   [param('ns3::TypeId const &', 'value')])
    return

def register_Ns3UintegerValue_methods(root_module, cls):
    ## uinteger.h (module 'core'): ns3::UintegerValue::UintegerValue() [constructor]
    cls.add_constructor([])
    ## uinteger.h (module 'core'): ns3::UintegerValue::UintegerValue(ns3::UintegerValue const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::UintegerValue const &', 'arg0')])
    ## uinteger.h (module 'core'): ns3::UintegerValue::UintegerValue(uint64_t const & value) [constructor]
    cls.add_constructor([param('uint64_t const &', 'value')])
    ## uinteger.h (module 'core'): ns3::Ptr<ns3::AttributeValue> ns3::UintegerValue::Copy() const [member function]
    cls.add_method('Copy', 
                   'ns3::Ptr< ns3::AttributeValue >', 
                   [], 
                   is_const=True, is_virtual=True)
    ## uinteger.h (module 'core'): bool ns3::UintegerValue::DeserializeFromString(std::string value, ns3::Ptr<ns3::AttributeChecker const> checker) [member function]
    cls.add_method('DeserializeFromString', 
                   'bool', 
                   [param('std::string', 'value'), param('ns3::Ptr< ns3::AttributeChecker const >', 'checker')], 
                   is_virtual=True)
    ## uinteger.h (module 'core'): uint64_t ns3::UintegerValue::Get() const [member function]
    cls.add_method('Get', 
                   'uint64_t', 
                   [], 
                   is_const=True)
    ## uinteger.h (module 'core'): std::string ns3::UintegerValue::SerializeToString(ns3::Ptr<ns3::AttributeChecker const> checker) const [member function]
    cls.add_method('SerializeToString', 
                   'std::string', 
                   [param('ns3::Ptr< ns3::AttributeChecker const >', 'checker')], 
                   is_const=True, is_virtual=True)
    ## uinteger.h (module 'core'): void ns3::UintegerValue::Set(uint64_t const & value) [member function]
    cls.add_method('Set', 
                   'void', 
                   [param('uint64_t const &', 'value')])
    return

def register_Ns3AddressChecker_methods(root_module, cls):
    ## address.h (module 'network'): ns3::AddressChecker::AddressChecker() [constructor]
    cls.add_constructor([])
    ## address.h (module 'network'): ns3::AddressChecker::AddressChecker(ns3::AddressChecker const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::AddressChecker const &', 'arg0')])
    return

def register_Ns3AddressValue_methods(root_module, cls):
    ## address.h (module 'network'): ns3::AddressValue::AddressValue() [constructor]
    cls.add_constructor([])
    ## address.h (module 'network'): ns3::AddressValue::AddressValue(ns3::AddressValue const & arg0) [copy constructor]
    cls.add_constructor([param('ns3::AddressValue const &', 'arg0')])
    ## address.h (module 'network'): ns3::AddressValue::AddressValue(ns3::Address const & value) [constructor]
    cls.add_constructor([param('ns3::Address const &', 'value')])
    ## address.h (module 'network'): ns3::Ptr<ns3::AttributeValue> ns3::AddressValue::Copy() const [member function]
    cls.add_method('Copy', 
                   'ns3::Ptr< ns3::AttributeValue >', 
                   [], 
                   is_const=True, is_virtual=True)
    ## address.h (module 'network'): bool ns3::AddressValue::DeserializeFromString(std::string value, ns3::Ptr<ns3::AttributeChecker const> checker) [member function]
    cls.add_method('DeserializeFromString', 
                   'bool', 
                   [param('std::string', 'value'), param('ns3::Ptr< ns3::AttributeChecker const >', 'checker')], 
                   is_virtual=True)
    ## address.h (module 'network'): ns3::Address ns3::AddressValue::Get() const [member function]
    cls.add_method('Get', 
                   'ns3::Address', 
                   [], 
                   is_const=True)
    ## address.h (module 'network'): std::string ns3::AddressValue::SerializeToString(ns3::Ptr<ns3::AttributeChecker const> checker) const [member function]
    cls.add_method('SerializeToString', 
                   'std::string', 
                   [param('ns3::Ptr< ns3::AttributeChecker const >', 'checker')], 
                   is_const=True, is_virtual=True)
    ## address.h (module 'network'): void ns3::AddressValue::Set(ns3::Address const & value) [member function]
    cls.add_method('Set', 
                   'void', 
                   [param('ns3::Address const &', 'value')])
    return

def register_Ns3MpTcpL4Protocol_methods(root_module, cls):
    ## mp-tcp-l4-protocol.h (module 'mptcp'): ns3::MpTcpL4Protocol::PROT_NUMBER [variable]
    cls.add_static_attribute('PROT_NUMBER', 'uint8_t const', is_const=True)
    ## mp-tcp-l4-protocol.h (module 'mptcp'): static ns3::TypeId ns3::MpTcpL4Protocol::GetTypeId() [member function]
    cls.add_method('GetTypeId', 
                   'ns3::TypeId', 
                   [], 
                   is_static=True)
    ## mp-tcp-l4-protocol.h (module 'mptcp'): ns3::MpTcpL4Protocol::MpTcpL4Protocol() [constructor]
    cls.add_constructor([])
    ## mp-tcp-l4-protocol.h (module 'mptcp'): int ns3::MpTcpL4Protocol::GetProtocolNumber() const [member function]
    cls.add_method('GetProtocolNumber', 
                   'int', 
                   [], 
                   is_const=True, is_virtual=True)
    ## mp-tcp-l4-protocol.h (module 'mptcp'): ns3::Ipv4L4Protocol::RxStatus ns3::MpTcpL4Protocol::Receive(ns3::Ptr<ns3::Packet> packet, ns3::Ipv4Header const & ipHeader, ns3::Ptr<ns3::Ipv4Interface> incomingInterface) [member function]
    cls.add_method('Receive', 
                   'ns3::Ipv4L4Protocol::RxStatus', 
                   [param('ns3::Ptr< ns3::Packet >', 'packet'), param('ns3::Ipv4Header const &', 'ipHeader'), param('ns3::Ptr< ns3::Ipv4Interface >', 'incomingInterface')], 
                   is_virtual=True)
    ## mp-tcp-l4-protocol.h (module 'mptcp'): void ns3::MpTcpL4Protocol::SendPacket(ns3::Ptr<ns3::Packet> p, ns3::MpTcpHeader l4Header, ns3::Ipv4Address src, ns3::Ipv4Address dst) [member function]
    cls.add_method('SendPacket', 
                   'void', 
                   [param('ns3::Ptr< ns3::Packet >', 'p'), param('ns3::MpTcpHeader', 'l4Header'), param('ns3::Ipv4Address', 'src'), param('ns3::Ipv4Address', 'dst')])
    ## mp-tcp-l4-protocol.h (module 'mptcp'): void ns3::MpTcpL4Protocol::SetMpTraceCallback(ns3::Callback<void, ns3::Ptr<ns3::Packet>, ns3::Ipv4Header, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty> callback) [member function]
    cls.add_method('SetMpTraceCallback', 
                   'void', 
                   [param('ns3::Callback< void, ns3::Ptr< ns3::Packet >, ns3::Ipv4Header, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty >', 'callback')])
    ## mp-tcp-l4-protocol.h (module 'mptcp'): void ns3::MpTcpL4Protocol::DoDispose() [member function]
    cls.add_method('DoDispose', 
                   'void', 
                   [], 
                   visibility='protected', is_virtual=True)
    ## mp-tcp-l4-protocol.h (module 'mptcp'): void ns3::MpTcpL4Protocol::NotifyNewAggregate() [member function]
    cls.add_method('NotifyNewAggregate', 
                   'void', 
                   [], 
                   visibility='protected', is_virtual=True)
    return

def register_functions(root_module):
    module = root_module
    register_functions_ns3_FatalImpl(module.get_submodule('FatalImpl'), root_module)
    register_functions_ns3_addressUtils(module.get_submodule('addressUtils'), root_module)
    register_functions_ns3_internal(module.get_submodule('internal'), root_module)
    return

def register_functions_ns3_FatalImpl(module, root_module):
    return

def register_functions_ns3_addressUtils(module, root_module):
    return

def register_functions_ns3_internal(module, root_module):
    return

def main():
    out = FileCodeSink(sys.stdout)
    root_module = module_init()
    register_types(root_module)
    register_methods(root_module)
    register_functions(root_module)
    root_module.generate(out)

if __name__ == '__main__':
    main()

