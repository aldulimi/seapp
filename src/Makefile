#
# OMNeT++/OMNEST Makefile for libinet
#
# This file was generated with the command:
#  opp_makemake -f --deep --make-so -o inet -O out -pINET -Xapplications/voipstream -Xtransport/tcp_lwip -Xtransport/tcp_nsc -DWITH_TCP_COMMON -DWITH_TCP_INET -DWITH_IPv4 -DWITH_IPv6 -DWITH_UDP -DWITH_RTP -DWITH_SCTP -DWITH_NETPERFMETER -DWITH_DHCP -DWITH_ETHERNET -DWITH_PPP -DWITH_EXT_IF -DWITH_MPLS -DWITH_OSPFv2 -DWITH_BGPv4 -DWITH_TRACI -DWITH_MANET -DWITH_xMIPv6 -DWITH_AODV -DWITH_RIP -DWITH_RADIO -DWITH_IEEE80211 -I/usr/include/libxml2 -I/usr/include/glibmm-2.4 -I/usr/lib/x86_64-linux-gnu/glibmm-2.4/include -I/usr/include/sigc++-2.0 -I/usr/lib/x86_64-linux-gnu/sigc++-2.0/include -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I/usr/include/libxml++-2.6 -I/usr/lib/libxml++-2.6/include -lxml++-2.6 -lxml2 -lglibmm-2.4 -lgobject-2.0 -lsigc-2.0 -lglib-2.0
#

# Name of target to be created (-o option)
TARGET = libinet$(SHARED_LIB_SUFFIX)

# C++ include paths (with -I)
INCLUDE_PATH = \
    -I/usr/include/libxml2 \
    -I/usr/include/glibmm-2.4 \
    -I/usr/lib/x86_64-linux-gnu/glibmm-2.4/include \
    -I/usr/include/sigc++-2.0 \
    -I/usr/lib/x86_64-linux-gnu/sigc++-2.0/include \
    -I/usr/include/glib-2.0 \
    -I/usr/lib/x86_64-linux-gnu/glib-2.0/include \
    -I/usr/include/libxml++-2.6 \
    -I/usr/lib/libxml++-2.6/include \
    -I. \
    -Iactions \
    -Iactions/actionbase \
    -Iactions/change \
    -Iactions/clone \
    -Iactions/create \
    -Iactions/destroy \
    -Iactions/disable \
    -Iactions/drop \
    -Iactions/move \
    -Iactions/put \
    -Iactions/retrieve \
    -Iactions/seappexpression \
    -Iactions/send \
    -Iapplications \
    -Iapplications/common \
    -Iapplications/dhcp \
    -Iapplications/ethernet \
    -Iapplications/generic \
    -Iapplications/httptools \
    -Iapplications/netperfmeter \
    -Iapplications/pingapp \
    -Iapplications/rtpapp \
    -Iapplications/sctpapp \
    -Iapplications/tcpapp \
    -Iapplications/traci \
    -Iapplications/trafficlightapp \
    -Iapplications/udpapp \
    -Iapplications/voip \
    -Iattacks \
    -Iattacks/attackbase \
    -Iattacks/attackentry \
    -Iattacks/conditionalattack \
    -Iattacks/conditionalattack/conditionalattack \
    -Iattacks/conditionalattack/packetfilter \
    -Iattacks/physicalattack \
    -Iattacks/unconditionalattack \
    -Ibase \
    -Ibattery \
    -Ibattery/models \
    -Iexmachina \
    -Iglobalfilter \
    -Iglobalfilter/putmessages \
    -Ilinklayer \
    -Ilinklayer/common \
    -Ilinklayer/configurator \
    -Ilinklayer/contract \
    -Ilinklayer/ethernet \
    -Ilinklayer/ethernet/switch \
    -Ilinklayer/ext \
    -Ilinklayer/idealwireless \
    -Ilinklayer/ieee80211 \
    -Ilinklayer/ieee80211/mac \
    -Ilinklayer/ieee80211/mgmt \
    -Ilinklayer/ieee80211/radio \
    -Ilinklayer/ieee80211/radio/errormodel \
    -Ilinklayer/ieee8021d \
    -Ilinklayer/ieee8021d/common \
    -Ilinklayer/ieee8021d/relay \
    -Ilinklayer/ieee8021d/rstp \
    -Ilinklayer/ieee8021d/stp \
    -Ilinklayer/ieee8021d/tester \
    -Ilinklayer/loopback \
    -Ilinklayer/ppp \
    -Ilinklayer/queue \
    -Ilinklayer/radio \
    -Ilinklayer/radio/propagation \
    -Ilocalfilter \
    -Imobility \
    -Imobility/common \
    -Imobility/contract \
    -Imobility/group \
    -Imobility/single \
    -Imobility/static \
    -Inetworklayer \
    -Inetworklayer/arp \
    -Inetworklayer/autorouting \
    -Inetworklayer/autorouting/ipv4 \
    -Inetworklayer/autorouting/ipv6 \
    -Inetworklayer/bgpv4 \
    -Inetworklayer/bgpv4/BGPMessage \
    -Inetworklayer/common \
    -Inetworklayer/contract \
    -Inetworklayer/diffserv \
    -Inetworklayer/icmpv6 \
    -Inetworklayer/internetcloud \
    -Inetworklayer/ipv4 \
    -Inetworklayer/ipv6 \
    -Inetworklayer/ipv6tunneling \
    -Inetworklayer/ldp \
    -Inetworklayer/manetrouting \
    -Inetworklayer/manetrouting/aodv-uu \
    -Inetworklayer/manetrouting/aodv-uu/aodv-uu \
    -Inetworklayer/manetrouting/base \
    -Inetworklayer/manetrouting/batman \
    -Inetworklayer/manetrouting/batman/batmand \
    -Inetworklayer/manetrouting/batman/batmand/orig \
    -Inetworklayer/manetrouting/dsdv \
    -Inetworklayer/manetrouting/dsr \
    -Inetworklayer/manetrouting/dsr/dsr-uu \
    -Inetworklayer/manetrouting/dymo \
    -Inetworklayer/manetrouting/dymo/dymoum \
    -Inetworklayer/manetrouting/dymo_fau \
    -Inetworklayer/manetrouting/olsr \
    -Inetworklayer/mpls \
    -Inetworklayer/ospfv2 \
    -Inetworklayer/ospfv2/interface \
    -Inetworklayer/ospfv2/messagehandler \
    -Inetworklayer/ospfv2/neighbor \
    -Inetworklayer/ospfv2/router \
    -Inetworklayer/routing \
    -Inetworklayer/routing/aodv \
    -Inetworklayer/routing/dymo \
    -Inetworklayer/routing/gpsr \
    -Inetworklayer/routing/rip \
    -Inetworklayer/rsvp_te \
    -Inetworklayer/ted \
    -Inetworklayer/xmipv6 \
    -Inodes \
    -Inodes/aodv \
    -Inodes/bgp \
    -Inodes/dymo \
    -Inodes/ethernet \
    -Inodes/gpsr \
    -Inodes/httptools \
    -Inodes/inet \
    -Inodes/internetcloud \
    -Inodes/ipv6 \
    -Inodes/mpls \
    -Inodes/ospfv2 \
    -Inodes/rip \
    -Inodes/rtp \
    -Inodes/wireless \
    -Inodes/xmipv6 \
    -Iparser \
    -Istatus \
    -Itransport \
    -Itransport/contract \
    -Itransport/rtp \
    -Itransport/rtp/profiles \
    -Itransport/rtp/profiles/avprofile \
    -Itransport/sctp \
    -Itransport/tcp \
    -Itransport/tcp/flavours \
    -Itransport/tcp/queues \
    -Itransport/tcp_common \
    -Itransport/udp \
    -Iutil \
    -Iutil/headerserializers \
    -Iutil/headerserializers/headers \
    -Iutil/headerserializers/ipv4 \
    -Iutil/headerserializers/ipv4/headers \
    -Iutil/headerserializers/ipv6 \
    -Iutil/headerserializers/ipv6/headers \
    -Iutil/headerserializers/sctp \
    -Iutil/headerserializers/sctp/headers \
    -Iutil/headerserializers/tcp \
    -Iutil/headerserializers/tcp/headers \
    -Iutil/headerserializers/udp \
    -Iutil/headerserializers/udp/headers \
    -Iutil/messageprinters \
    -Iutil/seapputils \
    -Ivariable \
    -Iworld \
    -Iworld/annotations \
    -Iworld/httptools \
    -Iworld/obstacles \
    -Iworld/radio \
    -Iworld/scenario \
    -Iworld/traci

# Additional object and library files to link with
EXTRA_OBJS =

# Additional libraries (-L, -l options)
LIBS =  -lxml++-2.6 -lxml2 -lglibmm-2.4 -lgobject-2.0 -lsigc-2.0 -lglib-2.0

# Output directory
PROJECT_OUTPUT_DIR = out
PROJECTRELATIVE_PATH =
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc and .msg files
OBJS = \
    $O/actions/actionbase/ActionBase.o \
    $O/actions/change/Change.o \
    $O/actions/clone/Clone.o \
    $O/actions/create/Create.o \
    $O/actions/destroy/Destroy.o \
    $O/actions/disable/Disable.o \
    $O/actions/drop/Drop.o \
    $O/actions/move/Move.o \
    $O/actions/put/Put.o \
    $O/actions/retrieve/Retrieve.o \
    $O/actions/seappexpression/SEAPPExpression.o \
    $O/actions/send/Send.o \
    $O/applications/common/ApplicationBase.o \
    $O/applications/dhcp/DHCPClient.o \
    $O/applications/dhcp/DHCPServer.o \
    $O/applications/ethernet/EtherAppCli.o \
    $O/applications/ethernet/EtherAppSrv.o \
    $O/applications/ethernet/EthernetApplication.o \
    $O/applications/ethernet/EtherTrafGen.o \
    $O/applications/generic/IPvXTrafGen.o \
    $O/applications/generic/IPvXTrafSink.o \
    $O/applications/httptools/HttpBrowser.o \
    $O/applications/httptools/HttpBrowserBase.o \
    $O/applications/httptools/HttpBrowserDirect.o \
    $O/applications/httptools/HttpNodeBase.o \
    $O/applications/httptools/HttpRandom.o \
    $O/applications/httptools/HttpServer.o \
    $O/applications/httptools/HttpServerBase.o \
    $O/applications/httptools/HttpServerDirect.o \
    $O/applications/httptools/HttpServerDirectEvilA.o \
    $O/applications/httptools/HttpServerDirectEvilB.o \
    $O/applications/httptools/HttpServerEvilA.o \
    $O/applications/httptools/HttpServerEvilB.o \
    $O/applications/httptools/HttpUtils.o \
    $O/applications/netperfmeter/NetPerfMeter.o \
    $O/applications/pingapp/PingApp.o \
    $O/applications/pingapp/PingTestApp.o \
    $O/applications/rtpapp/RTPApplication.o \
    $O/applications/sctpapp/SCTPClient.o \
    $O/applications/sctpapp/SCTPNatPeer.o \
    $O/applications/sctpapp/SCTPNatServer.o \
    $O/applications/sctpapp/SCTPPeer.o \
    $O/applications/sctpapp/SCTPServer.o \
    $O/applications/tcpapp/TCPAppBase.o \
    $O/applications/tcpapp/TCPBasicClientApp.o \
    $O/applications/tcpapp/TCPEchoApp.o \
    $O/applications/tcpapp/TCPGenericSrvApp.o \
    $O/applications/tcpapp/TCPGenericSrvThread.o \
    $O/applications/tcpapp/TCPSessionApp.o \
    $O/applications/tcpapp/TCPSinkApp.o \
    $O/applications/tcpapp/TCPSrvHostApp.o \
    $O/applications/tcpapp/TelnetApp.o \
    $O/applications/traci/TraCIDemo.o \
    $O/applications/traci/TraCITestApp.o \
    $O/applications/trafficlightapp/CommandNodeBasicApp.o \
    $O/applications/trafficlightapp/CommandNodeSinkApp.o \
    $O/applications/trafficlightapp/TrafficLightBasicApp.o \
    $O/applications/trafficlightapp/TrafficLightSinkApp.o \
    $O/applications/trafficlightapp/TrafficLightUpdateStatusApp.o \
    $O/applications/udpapp/UDPBasicApp.o \
    $O/applications/udpapp/UDPBasicBurst.o \
    $O/applications/udpapp/UDPEchoApp.o \
    $O/applications/udpapp/UDPSink.o \
    $O/applications/udpapp/UDPVideoStreamCli.o \
    $O/applications/udpapp/UDPVideoStreamSvr.o \
    $O/applications/voip/SimpleVoIPReceiver.o \
    $O/applications/voip/SimpleVoIPSender.o \
    $O/attacks/attackbase/AttackBase.o \
    $O/attacks/attackentry/AttackEntry.o \
    $O/attacks/conditionalattack/conditionalattack/ConditionalAttack.o \
    $O/attacks/conditionalattack/packetfilter/CompoundBlock.o \
    $O/attacks/conditionalattack/packetfilter/ElementaryBlock.o \
    $O/attacks/conditionalattack/packetfilter/FilterBlock.o \
    $O/attacks/conditionalattack/packetfilter/PacketFilter.o \
    $O/attacks/physicalattack/PhysicalAttack.o \
    $O/attacks/unconditionalattack/UnconditionalAttack.o \
    $O/base/AbstractQueue.o \
    $O/base/BasicModule.o \
    $O/base/ByteArray.o \
    $O/base/ByteArrayBuffer.o \
    $O/base/ByteArrayMessage.o \
    $O/base/Compat.o \
    $O/base/Coord.o \
    $O/base/erfc.o \
    $O/base/InterfaceOperations.o \
    $O/base/Join.o \
    $O/base/LifecycleController.o \
    $O/base/ModuleAccess.o \
    $O/base/NedFunctions.o \
    $O/base/NodeOperations.o \
    $O/base/NotificationBoard.o \
    $O/base/NotifierConsts.o \
    $O/base/OperationalBase.o \
    $O/base/PassiveQueueBase.o \
    $O/base/ProtocolMap.o \
    $O/base/QueueBase.o \
    $O/base/ReassemblyBuffer.o \
    $O/base/ResultFilters.o \
    $O/base/Sink.o \
    $O/base/Topology.o \
    $O/base/UnimplementedModule.o \
    $O/battery/models/BasicBattery.o \
    $O/battery/models/InetSimpleBattery.o \
    $O/exmachina/ExMachina.o \
    $O/globalfilter/GlobalFilter.o \
    $O/globalfilter/putmessages/PutMessages.o \
    $O/linklayer/common/MACBase.o \
    $O/linklayer/common/WirelessMacBase.o \
    $O/linklayer/configurator/Ieee8021dInterfaceData.o \
    $O/linklayer/configurator/L2NetworkConfigurator.o \
    $O/linklayer/configurator/L2NodeConfigurator.o \
    $O/linklayer/contract/MACAddress.o \
    $O/linklayer/ethernet/EtherBus.o \
    $O/linklayer/ethernet/EtherEncap.o \
    $O/linklayer/ethernet/EtherFrameClassifier.o \
    $O/linklayer/ethernet/EtherHub.o \
    $O/linklayer/ethernet/EtherLLC.o \
    $O/linklayer/ethernet/EtherMAC.o \
    $O/linklayer/ethernet/EtherMACBase.o \
    $O/linklayer/ethernet/EtherMACFullDuplex.o \
    $O/linklayer/ethernet/switch/MACAddressTable.o \
    $O/linklayer/ethernet/switch/MACRelayUnit.o \
    $O/linklayer/ext/cSocketRTScheduler.o \
    $O/linklayer/ext/ExtInterface.o \
    $O/linklayer/idealwireless/IdealWirelessMac.o \
    $O/linklayer/ieee80211/mac/Ieee80211DataRate.o \
    $O/linklayer/ieee80211/mac/Ieee80211eClassifier.o \
    $O/linklayer/ieee80211/mac/Ieee80211Mac.o \
    $O/linklayer/ieee80211/mac/WifiMode.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211AgentSTA.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtAP.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.o \
    $O/linklayer/ieee80211/radio/BerParseFile.o \
    $O/linklayer/ieee80211/radio/Ieee80211RadioModel.o \
    $O/linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.o \
    $O/linklayer/ieee80211/radio/errormodel/nist-error-rate-model.o \
    $O/linklayer/ieee80211/radio/errormodel/yans-error-rate-model.o \
    $O/linklayer/ieee8021d/common/STPBase.o \
    $O/linklayer/ieee8021d/relay/Ieee8021dRelay.o \
    $O/linklayer/ieee8021d/rstp/RSTP.o \
    $O/linklayer/ieee8021d/stp/STP.o \
    $O/linklayer/ieee8021d/tester/STPTester.o \
    $O/linklayer/loopback/Loopback.o \
    $O/linklayer/ppp/PPP.o \
    $O/linklayer/queue/AlgorithmicDropperBase.o \
    $O/linklayer/queue/DropTailQueue.o \
    $O/linklayer/queue/FIFOQueue.o \
    $O/linklayer/queue/PriorityScheduler.o \
    $O/linklayer/queue/REDDropper.o \
    $O/linklayer/queue/SchedulerBase.o \
    $O/linklayer/queue/ThresholdDropper.o \
    $O/linklayer/queue/WRRScheduler.o \
    $O/linklayer/radio/GenericRadioModel.o \
    $O/linklayer/radio/IdealRadio.o \
    $O/linklayer/radio/Modulation.o \
    $O/linklayer/radio/Radio.o \
    $O/linklayer/radio/propagation/FreeSpaceModel.o \
    $O/linklayer/radio/propagation/LogNormalShadowingModel.o \
    $O/linklayer/radio/propagation/NakagamiModel.o \
    $O/linklayer/radio/propagation/RayleighModel.o \
    $O/linklayer/radio/propagation/RiceModel.o \
    $O/linklayer/radio/propagation/SUIModel.o \
    $O/linklayer/radio/propagation/TwoRayGroundModel.o \
    $O/localfilter/LocalFilter.o \
    $O/mobility/common/LineSegmentsMobilityBase.o \
    $O/mobility/common/MobilityAccess.o \
    $O/mobility/common/MobilityBase.o \
    $O/mobility/common/MovingMobilityBase.o \
    $O/mobility/contract/IMobility.o \
    $O/mobility/group/MoBANCoordinator.o \
    $O/mobility/group/MoBANLocal.o \
    $O/mobility/group/Posture.o \
    $O/mobility/group/PostureTransition.o \
    $O/mobility/single/ANSimMobility.o \
    $O/mobility/single/BonnMotionFileCache.o \
    $O/mobility/single/BonnMotionMobility.o \
    $O/mobility/single/ChiangMobility.o \
    $O/mobility/single/CircleMobility.o \
    $O/mobility/single/ConstSpeedMobility.o \
    $O/mobility/single/GaussMarkovMobility.o \
    $O/mobility/single/LinearMobility.o \
    $O/mobility/single/LinearNodeDistributionMobility.o \
    $O/mobility/single/MassMobility.o \
    $O/mobility/single/Ns2MotionMobility.o \
    $O/mobility/single/RandomWPMobility.o \
    $O/mobility/single/RectangleMobility.o \
    $O/mobility/single/TraCIMobility.o \
    $O/mobility/single/TractorMobility.o \
    $O/mobility/single/TurtleMobility.o \
    $O/mobility/static/StaticGridMobility.o \
    $O/mobility/static/StationaryMobility.o \
    $O/networklayer/arp/ARP.o \
    $O/networklayer/arp/IARPCache.o \
    $O/networklayer/autorouting/ipv4/FlatNetworkConfigurator.o \
    $O/networklayer/autorouting/ipv4/HostAutoConfigurator.o \
    $O/networklayer/autorouting/ipv4/IPv4NetworkConfigurator.o \
    $O/networklayer/autorouting/ipv4/IPv4NodeConfigurator.o \
    $O/networklayer/autorouting/ipv6/FlatNetworkConfigurator6.o \
    $O/networklayer/bgpv4/BGPFSM.o \
    $O/networklayer/bgpv4/BGPRouting.o \
    $O/networklayer/bgpv4/BGPSession.o \
    $O/networklayer/bgpv4/BGPMessage/BGPUpdate.o \
    $O/networklayer/common/InterfaceEntry.o \
    $O/networklayer/common/InterfaceMatcher.o \
    $O/networklayer/common/InterfaceTable.o \
    $O/networklayer/contract/IPSocket.o \
    $O/networklayer/contract/IPv4Address.o \
    $O/networklayer/contract/IPv4ControlInfo.o \
    $O/networklayer/contract/IPv6Address.o \
    $O/networklayer/contract/IPv6ControlInfo.o \
    $O/networklayer/contract/IPvXAddress.o \
    $O/networklayer/contract/IPvXAddressResolver.o \
    $O/networklayer/diffserv/BehaviorAggregateClassifier.o \
    $O/networklayer/diffserv/DiffservUtil.o \
    $O/networklayer/diffserv/DSCPMarker.o \
    $O/networklayer/diffserv/MultiFieldClassifier.o \
    $O/networklayer/diffserv/SingleRateThreeColorMeter.o \
    $O/networklayer/diffserv/TokenBucketMeter.o \
    $O/networklayer/diffserv/TwoRateThreeColorMeter.o \
    $O/networklayer/icmpv6/ICMPv6.o \
    $O/networklayer/icmpv6/IPv6NeighbourCache.o \
    $O/networklayer/icmpv6/IPv6NeighbourDiscovery.o \
    $O/networklayer/internetcloud/CloudDelayerBase.o \
    $O/networklayer/internetcloud/MatrixCloudDelayer.o \
    $O/networklayer/ipv4/ErrorHandling.o \
    $O/networklayer/ipv4/ICMP.o \
    $O/networklayer/ipv4/IGMPv2.o \
    $O/networklayer/ipv4/IPv4.o \
    $O/networklayer/ipv4/IPv4Datagram.o \
    $O/networklayer/ipv4/IPv4FragBuf.o \
    $O/networklayer/ipv4/IPv4InterfaceData.o \
    $O/networklayer/ipv4/IPv4Route.o \
    $O/networklayer/ipv4/NetworkInfo.o \
    $O/networklayer/ipv4/RoutingTable.o \
    $O/networklayer/ipv4/RoutingTableParser.o \
    $O/networklayer/ipv4/RoutingTableRecorder.o \
    $O/networklayer/ipv6/IPv6.o \
    $O/networklayer/ipv6/IPv6Datagram.o \
    $O/networklayer/ipv6/IPv6ErrorHandling.o \
    $O/networklayer/ipv6/IPv6ExtensionHeaders.o \
    $O/networklayer/ipv6/IPv6FragBuf.o \
    $O/networklayer/ipv6/IPv6InterfaceData.o \
    $O/networklayer/ipv6/RoutingTable6.o \
    $O/networklayer/ipv6tunneling/IPv6Tunneling.o \
    $O/networklayer/ldp/LDP.o \
    $O/networklayer/manetrouting/aodv-uu/aodv_msg_struct.o \
    $O/networklayer/manetrouting/aodv-uu/aodv_uu_omnet.o \
    $O/networklayer/manetrouting/aodv-uu/packet_queue_omnet.o \
    $O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.o \
    $O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.o \
    $O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.o \
    $O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.o \
    $O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.o \
    $O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.o \
    $O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.o \
    $O/networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.o \
    $O/networklayer/manetrouting/aodv-uu/aodv-uu/list.o \
    $O/networklayer/manetrouting/aodv-uu/aodv-uu/locality.o \
    $O/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.o \
    $O/networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.o \
    $O/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.o \
    $O/networklayer/manetrouting/base/ManetAddress.o \
    $O/networklayer/manetrouting/base/ManetNetfilterHook.o \
    $O/networklayer/manetrouting/base/ManetRoutingBase.o \
    $O/networklayer/manetrouting/batman/BatmanMain.o \
    $O/networklayer/manetrouting/batman/batmand/batman.o \
    $O/networklayer/manetrouting/batman/batmand/bitarray.o \
    $O/networklayer/manetrouting/batman/batmand/hna.o \
    $O/networklayer/manetrouting/batman/batmand/originator.o \
    $O/networklayer/manetrouting/batman/batmand/os.o \
    $O/networklayer/manetrouting/batman/batmand/ring_buffer.o \
    $O/networklayer/manetrouting/batman/batmand/schedule.o \
    $O/networklayer/manetrouting/dsdv/DSDV_2.o \
    $O/networklayer/manetrouting/dsr/dsr-pkt_omnet.o \
    $O/networklayer/manetrouting/dsr/dsr-uu-omnetpp.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-io.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/link-cache.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/maint-buf.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/neigh.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/path-cache.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/send-buf.o \
    $O/networklayer/manetrouting/dymo/dymo_msg_struct.o \
    $O/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.o \
    $O/networklayer/manetrouting/dymo/dymo_um_omnet.o \
    $O/networklayer/manetrouting/dymo/dymoum/blacklist.o \
    $O/networklayer/manetrouting/dymo/dymoum/debug_dymo.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_generic.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_hello.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_nb.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_re.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_rerr.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_socket.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_timeout.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_uerr.o \
    $O/networklayer/manetrouting/dymo/dymoum/icmp_socket.o \
    $O/networklayer/manetrouting/dymo/dymoum/pending_rreq.o \
    $O/networklayer/manetrouting/dymo/dymoum/rtable.o \
    $O/networklayer/manetrouting/dymo/dymoum/timer_queue.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_DataQueue.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_Timer.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.o \
    $O/networklayer/manetrouting/dymo_fau/InspectorHelpers.o \
    $O/networklayer/manetrouting/olsr/OLSR.o \
    $O/networklayer/manetrouting/olsr/OLSR_ETX.o \
    $O/networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.o \
    $O/networklayer/manetrouting/olsr/OLSR_ETX_state.o \
    $O/networklayer/manetrouting/olsr/OLSR_rtable.o \
    $O/networklayer/manetrouting/olsr/OLSR_state.o \
    $O/networklayer/manetrouting/olsr/OLSROPT.o \
    $O/networklayer/mpls/LIBTable.o \
    $O/networklayer/mpls/MPLS.o \
    $O/networklayer/mpls/MPLSPacket.o \
    $O/networklayer/ospfv2/OSPFConfigReader.o \
    $O/networklayer/ospfv2/OSPFRouting.o \
    $O/networklayer/ospfv2/interface/OSPFInterface.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceState.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateBackup.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateDown.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.o \
    $O/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.o \
    $O/networklayer/ospfv2/messagehandler/HelloHandler.o \
    $O/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.o \
    $O/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.o \
    $O/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.o \
    $O/networklayer/ospfv2/messagehandler/MessageHandler.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighbor.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborState.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateDown.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateFull.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateInit.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.o \
    $O/networklayer/ospfv2/router/ASExternalLSA.o \
    $O/networklayer/ospfv2/router/LSA.o \
    $O/networklayer/ospfv2/router/NetworkLSA.o \
    $O/networklayer/ospfv2/router/OSPFArea.o \
    $O/networklayer/ospfv2/router/OSPFRouter.o \
    $O/networklayer/ospfv2/router/OSPFRoutingTableEntry.o \
    $O/networklayer/ospfv2/router/RouterLSA.o \
    $O/networklayer/ospfv2/router/SummaryLSA.o \
    $O/networklayer/routing/aodv/AODVRouteData.o \
    $O/networklayer/routing/aodv/AODVRouting.o \
    $O/networklayer/routing/dymo/DYMORouteData.o \
    $O/networklayer/routing/dymo/xDYMO.o \
    $O/networklayer/routing/gpsr/GPSR.o \
    $O/networklayer/routing/gpsr/PositionTable.o \
    $O/networklayer/routing/rip/RIPRouting.o \
    $O/networklayer/rsvp_te/RSVP.o \
    $O/networklayer/rsvp_te/SimpleClassifier.o \
    $O/networklayer/rsvp_te/Utils.o \
    $O/networklayer/ted/LinkStateRouting.o \
    $O/networklayer/ted/TED.o \
    $O/networklayer/xmipv6/BindingCache.o \
    $O/networklayer/xmipv6/BindingUpdateList.o \
    $O/networklayer/xmipv6/MobilityHeader.o \
    $O/networklayer/xmipv6/xMIPv6.o \
    $O/parser/Parser.o \
    $O/status/NodeStatus.o \
    $O/transport/contract/SCTPSocket.o \
    $O/transport/contract/TCPSocket.o \
    $O/transport/contract/TCPSocketMap.o \
    $O/transport/contract/UDPSocket.o \
    $O/transport/rtp/reports.o \
    $O/transport/rtp/RTCP.o \
    $O/transport/rtp/RTCPPacket.o \
    $O/transport/rtp/RTP.o \
    $O/transport/rtp/RTPInnerPacket.o \
    $O/transport/rtp/RTPPacket.o \
    $O/transport/rtp/RTPParticipantInfo.o \
    $O/transport/rtp/RTPPayloadReceiver.o \
    $O/transport/rtp/RTPPayloadSender.o \
    $O/transport/rtp/RTPProfile.o \
    $O/transport/rtp/RTPReceiverInfo.o \
    $O/transport/rtp/RTPSenderInfo.o \
    $O/transport/rtp/sdes.o \
    $O/transport/rtp/profiles/avprofile/RTPAVProfile.o \
    $O/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.o \
    $O/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.o \
    $O/transport/sctp/SCTP.o \
    $O/transport/sctp/SCTPAlg.o \
    $O/transport/sctp/SCTPAssociationAddIP.o \
    $O/transport/sctp/SCTPAssociationBase.o \
    $O/transport/sctp/SCTPAssociationEventProc.o \
    $O/transport/sctp/SCTPAssociationRcvMessage.o \
    $O/transport/sctp/SCTPAssociationSendAll.o \
    $O/transport/sctp/SCTPAssociationStreamReset.o \
    $O/transport/sctp/SCTPAssociationUtil.o \
    $O/transport/sctp/SCTPCCFunctions.o \
    $O/transport/sctp/SCTPGapList.o \
    $O/transport/sctp/SCTPMessage.o \
    $O/transport/sctp/SCTPNatHook.o \
    $O/transport/sctp/SCTPNatTable.o \
    $O/transport/sctp/SCTPQueue.o \
    $O/transport/sctp/SCTPReceiveStream.o \
    $O/transport/sctp/SCTPSendStream.o \
    $O/transport/sctp/SCTPSSFunctions.o \
    $O/transport/tcp/TCP.o \
    $O/transport/tcp/TCPConnectionBase.o \
    $O/transport/tcp/TCPConnectionEventProc.o \
    $O/transport/tcp/TCPConnectionRcvSegment.o \
    $O/transport/tcp/TCPConnectionSackUtil.o \
    $O/transport/tcp/TCPConnectionUtil.o \
    $O/transport/tcp/TCPSACKRexmitQueue.o \
    $O/transport/tcp/flavours/DumbTCP.o \
    $O/transport/tcp/flavours/TCPBaseAlg.o \
    $O/transport/tcp/flavours/TCPNewReno.o \
    $O/transport/tcp/flavours/TCPNoCongestionControl.o \
    $O/transport/tcp/flavours/TCPReno.o \
    $O/transport/tcp/flavours/TCPSegmentTransmitInfoList.o \
    $O/transport/tcp/flavours/TCPTahoe.o \
    $O/transport/tcp/flavours/TCPTahoeRenoFamily.o \
    $O/transport/tcp/flavours/TCPVegas.o \
    $O/transport/tcp/flavours/TCPWestwood.o \
    $O/transport/tcp/queues/TCPByteStreamRcvQueue.o \
    $O/transport/tcp/queues/TCPByteStreamSendQueue.o \
    $O/transport/tcp/queues/TCPMsgBasedRcvQueue.o \
    $O/transport/tcp/queues/TCPMsgBasedSendQueue.o \
    $O/transport/tcp/queues/TCPVirtualDataRcvQueue.o \
    $O/transport/tcp/queues/TCPVirtualDataSendQueue.o \
    $O/transport/tcp_common/TCPSegment.o \
    $O/transport/tcp_common/TCPSpoof.o \
    $O/transport/udp/UDP.o \
    $O/util/common.o \
    $O/util/Delayer.o \
    $O/util/int128.o \
    $O/util/Macho.o \
    $O/util/MessageChecker.o \
    $O/util/NetAnimTrace.o \
    $O/util/opp_utils.o \
    $O/util/OrdinalBasedDropper.o \
    $O/util/OrdinalBasedDuplicator.o \
    $O/util/PacketDump.o \
    $O/util/PatternMatcher.o \
    $O/util/PcapDump.o \
    $O/util/PcapRecorder.o \
    $O/util/TCPDump.o \
    $O/util/ThruputMeter.o \
    $O/util/ThruputMeteringChannel.o \
    $O/util/XMLUtils.o \
    $O/util/headerserializers/TCPIPchecksum.o \
    $O/util/headerserializers/ipv4/ICMPSerializer.o \
    $O/util/headerserializers/ipv4/IGMPSerializer.o \
    $O/util/headerserializers/ipv4/IPv4Serializer.o \
    $O/util/headerserializers/ipv6/IPv6Serializer.o \
    $O/util/headerserializers/sctp/SCTPSerializer.o \
    $O/util/headerserializers/tcp/TCPSerializer.o \
    $O/util/headerserializers/udp/UDPSerializer.o \
    $O/util/messageprinters/InetPacketBytesPrinter.o \
    $O/util/messageprinters/InetPacketPrinter.o \
    $O/util/messageprinters/InetPacketPrinter2.o \
    $O/util/seapputils/seapputils.o \
    $O/variable/Variable.o \
    $O/world/annotations/AnnotationDummy.o \
    $O/world/annotations/AnnotationManager.o \
    $O/world/httptools/HttpController.o \
    $O/world/obstacles/Obstacle.o \
    $O/world/obstacles/ObstacleControl.o \
    $O/world/radio/ChannelAccess.o \
    $O/world/radio/ChannelControl.o \
    $O/world/radio/IdealChannelModel.o \
    $O/world/radio/IdealChannelModelAccess.o \
    $O/world/scenario/ScenarioManager.o \
    $O/world/traci/TraCIScenarioManager.o \
    $O/world/traci/TraCIScenarioManagerLaunchd.o \
    $O/applications/dhcp/DHCPMessage_m.o \
    $O/applications/ethernet/EtherApp_m.o \
    $O/applications/httptools/HttpEventMessages_m.o \
    $O/applications/httptools/HttpMessages_m.o \
    $O/applications/netperfmeter/NetPerfMeter_m.o \
    $O/applications/pingapp/PingPayload_m.o \
    $O/applications/tcpapp/GenericAppMsg_m.o \
    $O/applications/trafficlightapp/TrafficLightPacket_m.o \
    $O/applications/voip/SimpleVoIPPacket_m.o \
    $O/base/ByteArray_m.o \
    $O/base/ByteArrayMessage_m.o \
    $O/linklayer/contract/Ieee802Ctrl_m.o \
    $O/linklayer/contract/PhyControlInfo_m.o \
    $O/linklayer/ethernet/EtherFrame_m.o \
    $O/linklayer/ext/ExtFrame_m.o \
    $O/linklayer/idealwireless/IdealWirelessFrame_m.o \
    $O/linklayer/ieee80211/mac/Ieee80211Frame_m.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211Primitives_m.o \
    $O/linklayer/ieee8021d/common/Ieee8021dBPDU_m.o \
    $O/linklayer/ppp/PPPFrame_m.o \
    $O/linklayer/radio/AirFrame_m.o \
    $O/linklayer/radio/IdealAirFrame_m.o \
    $O/linklayer/radio/Radio80211aControlInfo_m.o \
    $O/networklayer/arp/ARPPacket_m.o \
    $O/networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.o \
    $O/networklayer/bgpv4/BGPMessage/BGPHeader_m.o \
    $O/networklayer/bgpv4/BGPMessage/BGPKeepAlive_m.o \
    $O/networklayer/bgpv4/BGPMessage/BGPOpen_m.o \
    $O/networklayer/bgpv4/BGPMessage/BGPUpdate_m.o \
    $O/networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.o \
    $O/networklayer/contract/IPProtocolId_m.o \
    $O/networklayer/contract/IPv4ControlInfo_m.o \
    $O/networklayer/contract/IPv6ControlInfo_m.o \
    $O/networklayer/diffserv/DSCP_m.o \
    $O/networklayer/icmpv6/ICMPv6Message_m.o \
    $O/networklayer/icmpv6/IPv6NDMessage_m.o \
    $O/networklayer/ipv4/ICMPMessage_m.o \
    $O/networklayer/ipv4/IGMPMessage_m.o \
    $O/networklayer/ipv4/IPv4Datagram_m.o \
    $O/networklayer/ipv6/IPv6Datagram_m.o \
    $O/networklayer/ipv6/IPv6ExtensionHeaders_m.o \
    $O/networklayer/ldp/LDPPacket_m.o \
    $O/networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.o \
    $O/networklayer/manetrouting/base/ControlInfoBreakLink_m.o \
    $O/networklayer/manetrouting/base/ControlManetRouting_m.o \
    $O/networklayer/manetrouting/base/MeshControlInfo_m.o \
    $O/networklayer/manetrouting/batman/BatmanMsg_m.o \
    $O/networklayer/manetrouting/dsdv/DSDVhello_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_Packet_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_RERR_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_RM_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_RREP_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_UERR_m.o \
    $O/networklayer/manetrouting/olsr/OLSRpkt_m.o \
    $O/networklayer/ospfv2/OSPFPacket_m.o \
    $O/networklayer/routing/aodv/AODVControlPackets_m.o \
    $O/networklayer/routing/dymo/DYMO_m.o \
    $O/networklayer/routing/gpsr/GPSR_m.o \
    $O/networklayer/routing/rip/RIPPacket_m.o \
    $O/networklayer/rsvp_te/IntServ_m.o \
    $O/networklayer/rsvp_te/RSVPHello_m.o \
    $O/networklayer/rsvp_te/RSVPPacket_m.o \
    $O/networklayer/rsvp_te/RSVPPathMsg_m.o \
    $O/networklayer/rsvp_te/RSVPResvMsg_m.o \
    $O/networklayer/rsvp_te/SignallingMsg_m.o \
    $O/networklayer/ted/LinkStatePacket_m.o \
    $O/networklayer/ted/TED_m.o \
    $O/networklayer/xmipv6/MobilityHeader_m.o \
    $O/transport/contract/SCTPCommand_m.o \
    $O/transport/contract/TCPCommand_m.o \
    $O/transport/contract/UDPControlInfo_m.o \
    $O/transport/rtp/reports_m.o \
    $O/transport/rtp/RTCPPacket1_m.o \
    $O/transport/rtp/RTCPPacket2_m.o \
    $O/transport/rtp/RTCPPacket3_m.o \
    $O/transport/rtp/RTPInnerPacket_m.o \
    $O/transport/rtp/RTPInterfacePacket_m.o \
    $O/transport/rtp/RTPPacket_m.o \
    $O/transport/rtp/RTPParticipantInfo_m.o \
    $O/transport/rtp/RTPSenderControlMessage_m.o \
    $O/transport/rtp/RTPSenderStatusMessage_m.o \
    $O/transport/rtp/profiles/avprofile/RTPMpegPacket_m.o \
    $O/transport/sctp/SCTPMessage_m.o \
    $O/transport/tcp_common/TCPSegment_m.o \
    $O/transport/udp/UDPPacket_m.o

# Message files
MSGFILES = \
    applications/dhcp/DHCPMessage.msg \
    applications/ethernet/EtherApp.msg \
    applications/httptools/HttpEventMessages.msg \
    applications/httptools/HttpMessages.msg \
    applications/netperfmeter/NetPerfMeter.msg \
    applications/pingapp/PingPayload.msg \
    applications/tcpapp/GenericAppMsg.msg \
    applications/trafficlightapp/TrafficLightPacket.msg \
    applications/voip/SimpleVoIPPacket.msg \
    base/ByteArray.msg \
    base/ByteArrayMessage.msg \
    linklayer/contract/Ieee802Ctrl.msg \
    linklayer/contract/PhyControlInfo.msg \
    linklayer/ethernet/EtherFrame.msg \
    linklayer/ext/ExtFrame.msg \
    linklayer/idealwireless/IdealWirelessFrame.msg \
    linklayer/ieee80211/mac/Ieee80211Frame.msg \
    linklayer/ieee80211/mgmt/Ieee80211MgmtFrames.msg \
    linklayer/ieee80211/mgmt/Ieee80211Primitives.msg \
    linklayer/ieee8021d/common/Ieee8021dBPDU.msg \
    linklayer/ppp/PPPFrame.msg \
    linklayer/radio/AirFrame.msg \
    linklayer/radio/IdealAirFrame.msg \
    linklayer/radio/Radio80211aControlInfo.msg \
    networklayer/arp/ARPPacket.msg \
    networklayer/bgpv4/BGPMessage/BGPASPathSegment.msg \
    networklayer/bgpv4/BGPMessage/BGPHeader.msg \
    networklayer/bgpv4/BGPMessage/BGPKeepAlive.msg \
    networklayer/bgpv4/BGPMessage/BGPOpen.msg \
    networklayer/bgpv4/BGPMessage/BGPUpdate.msg \
    networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes.msg \
    networklayer/contract/IPProtocolId.msg \
    networklayer/contract/IPv4ControlInfo.msg \
    networklayer/contract/IPv6ControlInfo.msg \
    networklayer/diffserv/DSCP.msg \
    networklayer/icmpv6/ICMPv6Message.msg \
    networklayer/icmpv6/IPv6NDMessage.msg \
    networklayer/ipv4/ICMPMessage.msg \
    networklayer/ipv4/IGMPMessage.msg \
    networklayer/ipv4/IPv4Datagram.msg \
    networklayer/ipv6/IPv6Datagram.msg \
    networklayer/ipv6/IPv6ExtensionHeaders.msg \
    networklayer/ldp/LDPPacket.msg \
    networklayer/manetrouting/aodv-uu/aodv_msg_struct.msg \
    networklayer/manetrouting/base/ControlInfoBreakLink.msg \
    networklayer/manetrouting/base/ControlManetRouting.msg \
    networklayer/manetrouting/base/MeshControlInfo.msg \
    networklayer/manetrouting/batman/BatmanMsg.msg \
    networklayer/manetrouting/dsdv/DSDVhello.msg \
    networklayer/manetrouting/dymo_fau/DYMO_Packet.msg \
    networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage.msg \
    networklayer/manetrouting/dymo_fau/DYMO_RERR.msg \
    networklayer/manetrouting/dymo_fau/DYMO_RM.msg \
    networklayer/manetrouting/dymo_fau/DYMO_RREP.msg \
    networklayer/manetrouting/dymo_fau/DYMO_RREQ.msg \
    networklayer/manetrouting/dymo_fau/DYMO_Timeout.msg \
    networklayer/manetrouting/dymo_fau/DYMO_UERR.msg \
    networklayer/manetrouting/olsr/OLSRpkt.msg \
    networklayer/ospfv2/OSPFPacket.msg \
    networklayer/routing/aodv/AODVControlPackets.msg \
    networklayer/routing/dymo/DYMO.msg \
    networklayer/routing/gpsr/GPSR.msg \
    networklayer/routing/rip/RIPPacket.msg \
    networklayer/rsvp_te/IntServ.msg \
    networklayer/rsvp_te/RSVPHello.msg \
    networklayer/rsvp_te/RSVPPacket.msg \
    networklayer/rsvp_te/RSVPPathMsg.msg \
    networklayer/rsvp_te/RSVPResvMsg.msg \
    networklayer/rsvp_te/SignallingMsg.msg \
    networklayer/ted/LinkStatePacket.msg \
    networklayer/ted/TED.msg \
    networklayer/xmipv6/MobilityHeader.msg \
    transport/contract/SCTPCommand.msg \
    transport/contract/TCPCommand.msg \
    transport/contract/UDPControlInfo.msg \
    transport/rtp/reports.msg \
    transport/rtp/RTCPPacket1.msg \
    transport/rtp/RTCPPacket2.msg \
    transport/rtp/RTCPPacket3.msg \
    transport/rtp/RTPInnerPacket.msg \
    transport/rtp/RTPInterfacePacket.msg \
    transport/rtp/RTPPacket.msg \
    transport/rtp/RTPParticipantInfo.msg \
    transport/rtp/RTPSenderControlMessage.msg \
    transport/rtp/RTPSenderStatusMessage.msg \
    transport/rtp/profiles/avprofile/RTPMpegPacket.msg \
    transport/sctp/SCTPMessage.msg \
    transport/tcp_common/TCPSegment.msg \
    transport/udp/UDPPacket.msg

#------------------------------------------------------------------------------

# Pull in OMNeT++ configuration (Makefile.inc or configuser.vc)

ifneq ("$(OMNETPP_CONFIGFILE)","")
CONFIGFILE = $(OMNETPP_CONFIGFILE)
else
ifneq ("$(OMNETPP_ROOT)","")
CONFIGFILE = $(OMNETPP_ROOT)/Makefile.inc
else
CONFIGFILE = $(shell opp_configfilepath)
endif
endif

ifeq ("$(wildcard $(CONFIGFILE))","")
$(error Config file '$(CONFIGFILE)' does not exist -- add the OMNeT++ bin directory to the path so that opp_configfilepath can be found, or set the OMNETPP_CONFIGFILE variable to point to Makefile.inc)
endif

include $(CONFIGFILE)

# Simulation kernel and user interface libraries
OMNETPP_LIB_SUBDIR = $(OMNETPP_LIB_DIR)/$(TOOLCHAIN_NAME)
OMNETPP_LIBS = -L"$(OMNETPP_LIB_SUBDIR)" -L"$(OMNETPP_LIB_DIR)" -loppenvir$D $(KERNEL_LIBS) $(SYS_LIBS)

COPTS = $(CFLAGS) \
    -DWITH_TCP_COMMON \
    -DWITH_TCP_INET \
    -DWITH_IPv4 \
    -DWITH_IPv6 \
    -DWITH_UDP \
    -DWITH_RTP \
    -DWITH_SCTP \
    -DWITH_NETPERFMETER \
    -DWITH_DHCP \
    -DWITH_ETHERNET \
    -DWITH_PPP \
    -DWITH_EXT_IF \
    -DWITH_MPLS \
    -DWITH_OSPFv2 \
    -DWITH_BGPv4 \
    -DWITH_TRACI \
    -DWITH_MANET \
    -DWITH_xMIPv6 \
    -DWITH_AODV \
    -DWITH_RIP \
    -DWITH_RADIO \
    -DWITH_IEEE80211 \
    -DINET_EXPORT $(INCLUDE_PATH) -I$(OMNETPP_INCL_DIR)
MSGCOPTS = $(INCLUDE_PATH) -PINET_API

# we want to recompile everything if COPTS changes,
# so we store COPTS into $COPTS_FILE and have object
# files depend on it (except when "make depend" was called)
COPTS_FILE = $O/.last-copts
ifneq ($(MAKECMDGOALS),depend)
ifneq ("$(COPTS)","$(shell cat $(COPTS_FILE) 2>/dev/null || echo '')")
$(shell $(MKPATH) "$O" && echo "$(COPTS)" >$(COPTS_FILE))
endif
endif

#------------------------------------------------------------------------------
# User-supplied makefile fragment(s)
# >>>
# inserted from file 'makefrag':
# if you want to use external interfaces with inet, you should install
# winpcap (on windows) or libpcap-dev (on linux) and re-run ./configure in
# the omnetpp root directory and comment out the following line:
HAVE_PCAP=no

ifeq ($(HAVE_PCAP),yes)
  # link with PCAP libs too
  LIBS += $(PCAP_LIBS)
else
  # remove the HAVE_PCAP define if we do not need PCAP
  CFLAGS := $(filter-out -DHAVE_PCAP,$(CFLAGS))
endif

#
# TCP implementaion using the Network Simulation Cradle (TCP_NSC feature)
#
ifneq (,$(findstring -DWITH_TCP_NSC,$(COPTS)))
  NSC_VERSION= $(shell ls -d ../3rdparty/nsc* 2>/dev/null | sed 's/^.*-//')
  ifneq ($(NSC_VERSION),)
    CFLAGS += -I../3rdparty/nsc-$(NSC_VERSION)/sim -DHAVE_NSC
    LIBS += -Wl,-rpath,`abspath ../3rdparty/nsc-$(NSC_VERSION)`
  endif
endif

#
# pkg-config:
#
HAVE_PKGCFG := $(shell pkg-config --version 2>/dev/null)
ifeq ($(strip $(HAVE_PKGCFG)),)
  HAVE_PKGCFG := no
else
  HAVE_PKGCFG := yes
  PKGCFG := $(shell which pkg-config)
endif

#
# VoipStream feature:
#
ifneq (,$(findstring -DWITH_VOIPSTREAM,$(COPTS)))
  ifeq ($(HAVE_PKGCFG), yes)
    HAVE_FFMPEG := $(shell $(PKGCFG) --exists libavcodec libavformat libavutil && echo yes || echo no)
    ifeq ($(HAVE_FFMPEG), yes)
      LIBS += $(shell $(PKGCFG) --libs libavcodec libavformat libavutil)
      CFLAGS += $(shell $(PKGCFG) --cflags libavcodec libavformat libavutil) -DHAVE_FFMPEG
    endif
    HAVE_FFMPEG_AVRESAMPLE := $(shell $(PKGCFG) --exists libavresample && echo yes || echo no)
    ifeq ($(HAVE_FFMPEG_AVRESAMPLE), yes)
      LIBS += $(shell $(PKGCFG) --libs libavresample)
      CFLAGS += $(shell $(PKGCFG) --cflags libavresample) -DHAVE_FFMPEG_AVRESAMPLE
    endif
  endif
endif

# disable anoying "... hides overloaded virtual function" warning
CFLAGS += -Wno-overloaded-virtual

# <<<
#------------------------------------------------------------------------------

# Main target
all: $O/$(TARGET)
	$(Q)$(LN) $O/$(TARGET) .

$O/$(TARGET): $(OBJS)  $(wildcard $(EXTRA_OBJS)) Makefile
	@$(MKPATH) $O
	@echo Creating shared library: $@
	$(Q)$(SHLIB_LD) -o $O/$(TARGET)  $(OBJS) $(EXTRA_OBJS) $(AS_NEEDED_OFF) $(WHOLE_ARCHIVE_ON) $(LIBS) $(WHOLE_ARCHIVE_OFF) $(OMNETPP_LIBS) $(LDFLAGS)
	$(Q)$(SHLIB_POSTPROCESS) $O/$(TARGET)

.PHONY: all clean cleanall depend msgheaders

.SUFFIXES: .cc

$O/%.o: %.cc $(COPTS_FILE)
	@$(MKPATH) $(dir $@)
	$(qecho) "$<"
	$(Q)$(CXX) -c $(CXXFLAGS) $(COPTS) -o $@ $<

%_m.cc %_m.h: %.msg
	$(qecho) MSGC: $<
	$(Q)$(MSGC) -s _m.cc $(MSGCOPTS) $?

msgheaders: $(MSGFILES:.msg=_m.h)

clean:
	$(qecho) Cleaning...
	$(Q)-rm -rf $O
	$(Q)-rm -f inet inet.exe libinet.so libinet.a libinet.dll libinet.dylib
	$(Q)-rm -f ./*_m.cc ./*_m.h
	$(Q)-rm -f actions/*_m.cc actions/*_m.h
	$(Q)-rm -f actions/actionbase/*_m.cc actions/actionbase/*_m.h
	$(Q)-rm -f actions/change/*_m.cc actions/change/*_m.h
	$(Q)-rm -f actions/clone/*_m.cc actions/clone/*_m.h
	$(Q)-rm -f actions/create/*_m.cc actions/create/*_m.h
	$(Q)-rm -f actions/destroy/*_m.cc actions/destroy/*_m.h
	$(Q)-rm -f actions/disable/*_m.cc actions/disable/*_m.h
	$(Q)-rm -f actions/drop/*_m.cc actions/drop/*_m.h
	$(Q)-rm -f actions/move/*_m.cc actions/move/*_m.h
	$(Q)-rm -f actions/put/*_m.cc actions/put/*_m.h
	$(Q)-rm -f actions/retrieve/*_m.cc actions/retrieve/*_m.h
	$(Q)-rm -f actions/seappexpression/*_m.cc actions/seappexpression/*_m.h
	$(Q)-rm -f actions/send/*_m.cc actions/send/*_m.h
	$(Q)-rm -f applications/*_m.cc applications/*_m.h
	$(Q)-rm -f applications/common/*_m.cc applications/common/*_m.h
	$(Q)-rm -f applications/dhcp/*_m.cc applications/dhcp/*_m.h
	$(Q)-rm -f applications/ethernet/*_m.cc applications/ethernet/*_m.h
	$(Q)-rm -f applications/generic/*_m.cc applications/generic/*_m.h
	$(Q)-rm -f applications/httptools/*_m.cc applications/httptools/*_m.h
	$(Q)-rm -f applications/netperfmeter/*_m.cc applications/netperfmeter/*_m.h
	$(Q)-rm -f applications/pingapp/*_m.cc applications/pingapp/*_m.h
	$(Q)-rm -f applications/rtpapp/*_m.cc applications/rtpapp/*_m.h
	$(Q)-rm -f applications/sctpapp/*_m.cc applications/sctpapp/*_m.h
	$(Q)-rm -f applications/tcpapp/*_m.cc applications/tcpapp/*_m.h
	$(Q)-rm -f applications/traci/*_m.cc applications/traci/*_m.h
	$(Q)-rm -f applications/trafficlightapp/*_m.cc applications/trafficlightapp/*_m.h
	$(Q)-rm -f applications/udpapp/*_m.cc applications/udpapp/*_m.h
	$(Q)-rm -f applications/voip/*_m.cc applications/voip/*_m.h
	$(Q)-rm -f attacks/*_m.cc attacks/*_m.h
	$(Q)-rm -f attacks/attackbase/*_m.cc attacks/attackbase/*_m.h
	$(Q)-rm -f attacks/attackentry/*_m.cc attacks/attackentry/*_m.h
	$(Q)-rm -f attacks/conditionalattack/*_m.cc attacks/conditionalattack/*_m.h
	$(Q)-rm -f attacks/conditionalattack/conditionalattack/*_m.cc attacks/conditionalattack/conditionalattack/*_m.h
	$(Q)-rm -f attacks/conditionalattack/packetfilter/*_m.cc attacks/conditionalattack/packetfilter/*_m.h
	$(Q)-rm -f attacks/physicalattack/*_m.cc attacks/physicalattack/*_m.h
	$(Q)-rm -f attacks/unconditionalattack/*_m.cc attacks/unconditionalattack/*_m.h
	$(Q)-rm -f base/*_m.cc base/*_m.h
	$(Q)-rm -f battery/*_m.cc battery/*_m.h
	$(Q)-rm -f battery/models/*_m.cc battery/models/*_m.h
	$(Q)-rm -f exmachina/*_m.cc exmachina/*_m.h
	$(Q)-rm -f globalfilter/*_m.cc globalfilter/*_m.h
	$(Q)-rm -f globalfilter/putmessages/*_m.cc globalfilter/putmessages/*_m.h
	$(Q)-rm -f linklayer/*_m.cc linklayer/*_m.h
	$(Q)-rm -f linklayer/common/*_m.cc linklayer/common/*_m.h
	$(Q)-rm -f linklayer/configurator/*_m.cc linklayer/configurator/*_m.h
	$(Q)-rm -f linklayer/contract/*_m.cc linklayer/contract/*_m.h
	$(Q)-rm -f linklayer/ethernet/*_m.cc linklayer/ethernet/*_m.h
	$(Q)-rm -f linklayer/ethernet/switch/*_m.cc linklayer/ethernet/switch/*_m.h
	$(Q)-rm -f linklayer/ext/*_m.cc linklayer/ext/*_m.h
	$(Q)-rm -f linklayer/idealwireless/*_m.cc linklayer/idealwireless/*_m.h
	$(Q)-rm -f linklayer/ieee80211/*_m.cc linklayer/ieee80211/*_m.h
	$(Q)-rm -f linklayer/ieee80211/mac/*_m.cc linklayer/ieee80211/mac/*_m.h
	$(Q)-rm -f linklayer/ieee80211/mgmt/*_m.cc linklayer/ieee80211/mgmt/*_m.h
	$(Q)-rm -f linklayer/ieee80211/radio/*_m.cc linklayer/ieee80211/radio/*_m.h
	$(Q)-rm -f linklayer/ieee80211/radio/errormodel/*_m.cc linklayer/ieee80211/radio/errormodel/*_m.h
	$(Q)-rm -f linklayer/ieee8021d/*_m.cc linklayer/ieee8021d/*_m.h
	$(Q)-rm -f linklayer/ieee8021d/common/*_m.cc linklayer/ieee8021d/common/*_m.h
	$(Q)-rm -f linklayer/ieee8021d/relay/*_m.cc linklayer/ieee8021d/relay/*_m.h
	$(Q)-rm -f linklayer/ieee8021d/rstp/*_m.cc linklayer/ieee8021d/rstp/*_m.h
	$(Q)-rm -f linklayer/ieee8021d/stp/*_m.cc linklayer/ieee8021d/stp/*_m.h
	$(Q)-rm -f linklayer/ieee8021d/tester/*_m.cc linklayer/ieee8021d/tester/*_m.h
	$(Q)-rm -f linklayer/loopback/*_m.cc linklayer/loopback/*_m.h
	$(Q)-rm -f linklayer/ppp/*_m.cc linklayer/ppp/*_m.h
	$(Q)-rm -f linklayer/queue/*_m.cc linklayer/queue/*_m.h
	$(Q)-rm -f linklayer/radio/*_m.cc linklayer/radio/*_m.h
	$(Q)-rm -f linklayer/radio/propagation/*_m.cc linklayer/radio/propagation/*_m.h
	$(Q)-rm -f localfilter/*_m.cc localfilter/*_m.h
	$(Q)-rm -f mobility/*_m.cc mobility/*_m.h
	$(Q)-rm -f mobility/common/*_m.cc mobility/common/*_m.h
	$(Q)-rm -f mobility/contract/*_m.cc mobility/contract/*_m.h
	$(Q)-rm -f mobility/group/*_m.cc mobility/group/*_m.h
	$(Q)-rm -f mobility/single/*_m.cc mobility/single/*_m.h
	$(Q)-rm -f mobility/static/*_m.cc mobility/static/*_m.h
	$(Q)-rm -f networklayer/*_m.cc networklayer/*_m.h
	$(Q)-rm -f networklayer/arp/*_m.cc networklayer/arp/*_m.h
	$(Q)-rm -f networklayer/autorouting/*_m.cc networklayer/autorouting/*_m.h
	$(Q)-rm -f networklayer/autorouting/ipv4/*_m.cc networklayer/autorouting/ipv4/*_m.h
	$(Q)-rm -f networklayer/autorouting/ipv6/*_m.cc networklayer/autorouting/ipv6/*_m.h
	$(Q)-rm -f networklayer/bgpv4/*_m.cc networklayer/bgpv4/*_m.h
	$(Q)-rm -f networklayer/bgpv4/BGPMessage/*_m.cc networklayer/bgpv4/BGPMessage/*_m.h
	$(Q)-rm -f networklayer/common/*_m.cc networklayer/common/*_m.h
	$(Q)-rm -f networklayer/contract/*_m.cc networklayer/contract/*_m.h
	$(Q)-rm -f networklayer/diffserv/*_m.cc networklayer/diffserv/*_m.h
	$(Q)-rm -f networklayer/icmpv6/*_m.cc networklayer/icmpv6/*_m.h
	$(Q)-rm -f networklayer/internetcloud/*_m.cc networklayer/internetcloud/*_m.h
	$(Q)-rm -f networklayer/ipv4/*_m.cc networklayer/ipv4/*_m.h
	$(Q)-rm -f networklayer/ipv6/*_m.cc networklayer/ipv6/*_m.h
	$(Q)-rm -f networklayer/ipv6tunneling/*_m.cc networklayer/ipv6tunneling/*_m.h
	$(Q)-rm -f networklayer/ldp/*_m.cc networklayer/ldp/*_m.h
	$(Q)-rm -f networklayer/manetrouting/*_m.cc networklayer/manetrouting/*_m.h
	$(Q)-rm -f networklayer/manetrouting/aodv-uu/*_m.cc networklayer/manetrouting/aodv-uu/*_m.h
	$(Q)-rm -f networklayer/manetrouting/aodv-uu/aodv-uu/*_m.cc networklayer/manetrouting/aodv-uu/aodv-uu/*_m.h
	$(Q)-rm -f networklayer/manetrouting/base/*_m.cc networklayer/manetrouting/base/*_m.h
	$(Q)-rm -f networklayer/manetrouting/batman/*_m.cc networklayer/manetrouting/batman/*_m.h
	$(Q)-rm -f networklayer/manetrouting/batman/batmand/*_m.cc networklayer/manetrouting/batman/batmand/*_m.h
	$(Q)-rm -f networklayer/manetrouting/batman/batmand/orig/*_m.cc networklayer/manetrouting/batman/batmand/orig/*_m.h
	$(Q)-rm -f networklayer/manetrouting/dsdv/*_m.cc networklayer/manetrouting/dsdv/*_m.h
	$(Q)-rm -f networklayer/manetrouting/dsr/*_m.cc networklayer/manetrouting/dsr/*_m.h
	$(Q)-rm -f networklayer/manetrouting/dsr/dsr-uu/*_m.cc networklayer/manetrouting/dsr/dsr-uu/*_m.h
	$(Q)-rm -f networklayer/manetrouting/dymo/*_m.cc networklayer/manetrouting/dymo/*_m.h
	$(Q)-rm -f networklayer/manetrouting/dymo/dymoum/*_m.cc networklayer/manetrouting/dymo/dymoum/*_m.h
	$(Q)-rm -f networklayer/manetrouting/dymo_fau/*_m.cc networklayer/manetrouting/dymo_fau/*_m.h
	$(Q)-rm -f networklayer/manetrouting/olsr/*_m.cc networklayer/manetrouting/olsr/*_m.h
	$(Q)-rm -f networklayer/mpls/*_m.cc networklayer/mpls/*_m.h
	$(Q)-rm -f networklayer/ospfv2/*_m.cc networklayer/ospfv2/*_m.h
	$(Q)-rm -f networklayer/ospfv2/interface/*_m.cc networklayer/ospfv2/interface/*_m.h
	$(Q)-rm -f networklayer/ospfv2/messagehandler/*_m.cc networklayer/ospfv2/messagehandler/*_m.h
	$(Q)-rm -f networklayer/ospfv2/neighbor/*_m.cc networklayer/ospfv2/neighbor/*_m.h
	$(Q)-rm -f networklayer/ospfv2/router/*_m.cc networklayer/ospfv2/router/*_m.h
	$(Q)-rm -f networklayer/routing/*_m.cc networklayer/routing/*_m.h
	$(Q)-rm -f networklayer/routing/aodv/*_m.cc networklayer/routing/aodv/*_m.h
	$(Q)-rm -f networklayer/routing/dymo/*_m.cc networklayer/routing/dymo/*_m.h
	$(Q)-rm -f networklayer/routing/gpsr/*_m.cc networklayer/routing/gpsr/*_m.h
	$(Q)-rm -f networklayer/routing/rip/*_m.cc networklayer/routing/rip/*_m.h
	$(Q)-rm -f networklayer/rsvp_te/*_m.cc networklayer/rsvp_te/*_m.h
	$(Q)-rm -f networklayer/ted/*_m.cc networklayer/ted/*_m.h
	$(Q)-rm -f networklayer/xmipv6/*_m.cc networklayer/xmipv6/*_m.h
	$(Q)-rm -f nodes/*_m.cc nodes/*_m.h
	$(Q)-rm -f nodes/aodv/*_m.cc nodes/aodv/*_m.h
	$(Q)-rm -f nodes/bgp/*_m.cc nodes/bgp/*_m.h
	$(Q)-rm -f nodes/dymo/*_m.cc nodes/dymo/*_m.h
	$(Q)-rm -f nodes/ethernet/*_m.cc nodes/ethernet/*_m.h
	$(Q)-rm -f nodes/gpsr/*_m.cc nodes/gpsr/*_m.h
	$(Q)-rm -f nodes/httptools/*_m.cc nodes/httptools/*_m.h
	$(Q)-rm -f nodes/inet/*_m.cc nodes/inet/*_m.h
	$(Q)-rm -f nodes/internetcloud/*_m.cc nodes/internetcloud/*_m.h
	$(Q)-rm -f nodes/ipv6/*_m.cc nodes/ipv6/*_m.h
	$(Q)-rm -f nodes/mpls/*_m.cc nodes/mpls/*_m.h
	$(Q)-rm -f nodes/ospfv2/*_m.cc nodes/ospfv2/*_m.h
	$(Q)-rm -f nodes/rip/*_m.cc nodes/rip/*_m.h
	$(Q)-rm -f nodes/rtp/*_m.cc nodes/rtp/*_m.h
	$(Q)-rm -f nodes/wireless/*_m.cc nodes/wireless/*_m.h
	$(Q)-rm -f nodes/xmipv6/*_m.cc nodes/xmipv6/*_m.h
	$(Q)-rm -f parser/*_m.cc parser/*_m.h
	$(Q)-rm -f status/*_m.cc status/*_m.h
	$(Q)-rm -f transport/*_m.cc transport/*_m.h
	$(Q)-rm -f transport/contract/*_m.cc transport/contract/*_m.h
	$(Q)-rm -f transport/rtp/*_m.cc transport/rtp/*_m.h
	$(Q)-rm -f transport/rtp/profiles/*_m.cc transport/rtp/profiles/*_m.h
	$(Q)-rm -f transport/rtp/profiles/avprofile/*_m.cc transport/rtp/profiles/avprofile/*_m.h
	$(Q)-rm -f transport/sctp/*_m.cc transport/sctp/*_m.h
	$(Q)-rm -f transport/tcp/*_m.cc transport/tcp/*_m.h
	$(Q)-rm -f transport/tcp/flavours/*_m.cc transport/tcp/flavours/*_m.h
	$(Q)-rm -f transport/tcp/queues/*_m.cc transport/tcp/queues/*_m.h
	$(Q)-rm -f transport/tcp_common/*_m.cc transport/tcp_common/*_m.h
	$(Q)-rm -f transport/udp/*_m.cc transport/udp/*_m.h
	$(Q)-rm -f util/*_m.cc util/*_m.h
	$(Q)-rm -f util/headerserializers/*_m.cc util/headerserializers/*_m.h
	$(Q)-rm -f util/headerserializers/headers/*_m.cc util/headerserializers/headers/*_m.h
	$(Q)-rm -f util/headerserializers/ipv4/*_m.cc util/headerserializers/ipv4/*_m.h
	$(Q)-rm -f util/headerserializers/ipv4/headers/*_m.cc util/headerserializers/ipv4/headers/*_m.h
	$(Q)-rm -f util/headerserializers/ipv6/*_m.cc util/headerserializers/ipv6/*_m.h
	$(Q)-rm -f util/headerserializers/ipv6/headers/*_m.cc util/headerserializers/ipv6/headers/*_m.h
	$(Q)-rm -f util/headerserializers/sctp/*_m.cc util/headerserializers/sctp/*_m.h
	$(Q)-rm -f util/headerserializers/sctp/headers/*_m.cc util/headerserializers/sctp/headers/*_m.h
	$(Q)-rm -f util/headerserializers/tcp/*_m.cc util/headerserializers/tcp/*_m.h
	$(Q)-rm -f util/headerserializers/tcp/headers/*_m.cc util/headerserializers/tcp/headers/*_m.h
	$(Q)-rm -f util/headerserializers/udp/*_m.cc util/headerserializers/udp/*_m.h
	$(Q)-rm -f util/headerserializers/udp/headers/*_m.cc util/headerserializers/udp/headers/*_m.h
	$(Q)-rm -f util/messageprinters/*_m.cc util/messageprinters/*_m.h
	$(Q)-rm -f util/seapputils/*_m.cc util/seapputils/*_m.h
	$(Q)-rm -f variable/*_m.cc variable/*_m.h
	$(Q)-rm -f world/*_m.cc world/*_m.h
	$(Q)-rm -f world/annotations/*_m.cc world/annotations/*_m.h
	$(Q)-rm -f world/httptools/*_m.cc world/httptools/*_m.h
	$(Q)-rm -f world/obstacles/*_m.cc world/obstacles/*_m.h
	$(Q)-rm -f world/radio/*_m.cc world/radio/*_m.h
	$(Q)-rm -f world/scenario/*_m.cc world/scenario/*_m.h
	$(Q)-rm -f world/traci/*_m.cc world/traci/*_m.h

cleanall: clean
	$(Q)-rm -rf $(PROJECT_OUTPUT_DIR)

depend:
	$(qecho) Creating dependencies...
	$(Q)$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc actions/*.cc actions/actionbase/*.cc actions/change/*.cc actions/clone/*.cc actions/create/*.cc actions/destroy/*.cc actions/disable/*.cc actions/drop/*.cc actions/move/*.cc actions/put/*.cc actions/retrieve/*.cc actions/seappexpression/*.cc actions/send/*.cc applications/*.cc applications/common/*.cc applications/dhcp/*.cc applications/ethernet/*.cc applications/generic/*.cc applications/httptools/*.cc applications/netperfmeter/*.cc applications/pingapp/*.cc applications/rtpapp/*.cc applications/sctpapp/*.cc applications/tcpapp/*.cc applications/traci/*.cc applications/trafficlightapp/*.cc applications/udpapp/*.cc applications/voip/*.cc attacks/*.cc attacks/attackbase/*.cc attacks/attackentry/*.cc attacks/conditionalattack/*.cc attacks/conditionalattack/conditionalattack/*.cc attacks/conditionalattack/packetfilter/*.cc attacks/physicalattack/*.cc attacks/unconditionalattack/*.cc base/*.cc battery/*.cc battery/models/*.cc exmachina/*.cc globalfilter/*.cc globalfilter/putmessages/*.cc linklayer/*.cc linklayer/common/*.cc linklayer/configurator/*.cc linklayer/contract/*.cc linklayer/ethernet/*.cc linklayer/ethernet/switch/*.cc linklayer/ext/*.cc linklayer/idealwireless/*.cc linklayer/ieee80211/*.cc linklayer/ieee80211/mac/*.cc linklayer/ieee80211/mgmt/*.cc linklayer/ieee80211/radio/*.cc linklayer/ieee80211/radio/errormodel/*.cc linklayer/ieee8021d/*.cc linklayer/ieee8021d/common/*.cc linklayer/ieee8021d/relay/*.cc linklayer/ieee8021d/rstp/*.cc linklayer/ieee8021d/stp/*.cc linklayer/ieee8021d/tester/*.cc linklayer/loopback/*.cc linklayer/ppp/*.cc linklayer/queue/*.cc linklayer/radio/*.cc linklayer/radio/propagation/*.cc localfilter/*.cc mobility/*.cc mobility/common/*.cc mobility/contract/*.cc mobility/group/*.cc mobility/single/*.cc mobility/static/*.cc networklayer/*.cc networklayer/arp/*.cc networklayer/autorouting/*.cc networklayer/autorouting/ipv4/*.cc networklayer/autorouting/ipv6/*.cc networklayer/bgpv4/*.cc networklayer/bgpv4/BGPMessage/*.cc networklayer/common/*.cc networklayer/contract/*.cc networklayer/diffserv/*.cc networklayer/icmpv6/*.cc networklayer/internetcloud/*.cc networklayer/ipv4/*.cc networklayer/ipv6/*.cc networklayer/ipv6tunneling/*.cc networklayer/ldp/*.cc networklayer/manetrouting/*.cc networklayer/manetrouting/aodv-uu/*.cc networklayer/manetrouting/aodv-uu/aodv-uu/*.cc networklayer/manetrouting/base/*.cc networklayer/manetrouting/batman/*.cc networklayer/manetrouting/batman/batmand/*.cc networklayer/manetrouting/batman/batmand/orig/*.cc networklayer/manetrouting/dsdv/*.cc networklayer/manetrouting/dsr/*.cc networklayer/manetrouting/dsr/dsr-uu/*.cc networklayer/manetrouting/dymo/*.cc networklayer/manetrouting/dymo/dymoum/*.cc networklayer/manetrouting/dymo_fau/*.cc networklayer/manetrouting/olsr/*.cc networklayer/mpls/*.cc networklayer/ospfv2/*.cc networklayer/ospfv2/interface/*.cc networklayer/ospfv2/messagehandler/*.cc networklayer/ospfv2/neighbor/*.cc networklayer/ospfv2/router/*.cc networklayer/routing/*.cc networklayer/routing/aodv/*.cc networklayer/routing/dymo/*.cc networklayer/routing/gpsr/*.cc networklayer/routing/rip/*.cc networklayer/rsvp_te/*.cc networklayer/ted/*.cc networklayer/xmipv6/*.cc nodes/*.cc nodes/aodv/*.cc nodes/bgp/*.cc nodes/dymo/*.cc nodes/ethernet/*.cc nodes/gpsr/*.cc nodes/httptools/*.cc nodes/inet/*.cc nodes/internetcloud/*.cc nodes/ipv6/*.cc nodes/mpls/*.cc nodes/ospfv2/*.cc nodes/rip/*.cc nodes/rtp/*.cc nodes/wireless/*.cc nodes/xmipv6/*.cc parser/*.cc status/*.cc transport/*.cc transport/contract/*.cc transport/rtp/*.cc transport/rtp/profiles/*.cc transport/rtp/profiles/avprofile/*.cc transport/sctp/*.cc transport/tcp/*.cc transport/tcp/flavours/*.cc transport/tcp/queues/*.cc transport/tcp_common/*.cc transport/udp/*.cc util/*.cc util/headerserializers/*.cc util/headerserializers/headers/*.cc util/headerserializers/ipv4/*.cc util/headerserializers/ipv4/headers/*.cc util/headerserializers/ipv6/*.cc util/headerserializers/ipv6/headers/*.cc util/headerserializers/sctp/*.cc util/headerserializers/sctp/headers/*.cc util/headerserializers/tcp/*.cc util/headerserializers/tcp/headers/*.cc util/headerserializers/udp/*.cc util/headerserializers/udp/headers/*.cc util/messageprinters/*.cc util/seapputils/*.cc variable/*.cc world/*.cc world/annotations/*.cc world/httptools/*.cc world/obstacles/*.cc world/radio/*.cc world/scenario/*.cc world/traci/*.cc

# DO NOT DELETE THIS LINE -- make depend depends on it.
$O/actions/actionbase/ActionBase.o: actions/actionbase/ActionBase.cc \
  base/INETDefs.h \
  base/Compat.h \
  actions/actionbase/ActionBase.h
$O/actions/change/Change.o: actions/change/Change.cc \
  base/INETDefs.h \
  actions/actionbase/ActionBase.h \
  actions/change/Change.h \
  util/seapputils/seapputils.h \
  base/Compat.h
$O/actions/clone/Clone.o: actions/clone/Clone.cc \
  actions/clone/Clone.h \
  base/INETDefs.h \
  base/Compat.h \
  actions/actionbase/ActionBase.h \
  util/seapputils/seapputils.h
$O/actions/create/Create.o: actions/create/Create.cc \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/ted/TED_m.h \
  networklayer/ipv4/IGMPMessage_m.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  linklayer/contract/PhyControlInfo_m.h \
  linklayer/radio/IdealAirFrame_m.h \
  base/Compat.h \
  networklayer/rsvp_te/IntServ_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  transport/udp/UDPPacket.h \
  networklayer/xmipv6/MobilityHeader_m.h \
  networklayer/manetrouting/base/ManetAddress.h \
  util/seapputils/seapputils.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/rsvp_te/RSVPResvMsg.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  transport/udp/UDPPacket_m.h \
  applications/netperfmeter/NetPerfMeter_m.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/rsvp_te/RSVPHello_m.h \
  base/Coord.h \
  networklayer/manetrouting/base/ControlInfoBreakLink_m.h \
  linklayer/idealwireless/IdealWirelessFrame_m.h \
  applications/dhcp/DHCPMessage_m.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/contract/TCPCommand_m.h \
  networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
  networklayer/manetrouting/dsdv/DSDVhello_m.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  applications/httptools/HttpEventMessages_m.h \
  networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
  util/FWMath.h \
  linklayer/ext/ExtFrame_m.h \
  networklayer/manetrouting/batman/BatmanMsg_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  applications/voip/SimpleVoIPPacket_m.h \
  networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.h \
  networklayer/manetrouting/base/MeshControlInfo_m.h \
  networklayer/rsvp_te/IntServ.h \
  networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
  networklayer/arp/ARPPacket_m.h \
  networklayer/rsvp_te/RSVPPacket.h \
  linklayer/ethernet/EtherFrame_m.h \
  networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
  applications/ethernet/EtherApp_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  applications/tcpapp/GenericAppMsg_m.h \
  transport/sctp/SCTPMessage.h \
  linklayer/ethernet/Ethernet.h \
  networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
  networklayer/contract/IPv6Address.h \
  networklayer/bgpv4/BGPMessage/BGPUpdate.h \
  networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
  networklayer/rsvp_te/RSVPPathMsg.h \
  linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
  networklayer/rsvp_te/RSVPPathMsg_m.h \
  networklayer/rsvp_te/RSVPHelloMsg.h \
  networklayer/bgpv4/BGPMessage/BGPUpdate_m.h \
  networklayer/ipv6/IPv6ExtensionHeaders.h \
  linklayer/radio/ModulationType.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
  networklayer/rsvp_te/RSVPResvMsg_m.h \
  networklayer/ipv6/IPv6Datagram.h \
  transport/contract/SCTPCommand_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  linklayer/radio/Radio80211aControlInfo_m.h \
  networklayer/routing/gpsr/GPSR_m.h \
  applications/pingapp/PingPayload_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  linklayer/radio/AirFrame_m.h \
  transport/contract/SCTPCommand.h \
  networklayer/routing/rip/RIPPacket_m.h \
  transport/tcp_common/TCPSegment.h \
  networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/bgpv4/BGPMessage/BGPKeepAlive_m.h \
  applications/trafficlightapp/TrafficLightPacket_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPv4ControlInfo.h \
  linklayer/contract/MACAddress.h \
  networklayer/xmipv6/MobilityHeader.h \
  networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
  networklayer/ted/LinkStatePacket_m.h \
  networklayer/icmpv6/IPv6NDMessage_m.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/routing/aodv/AODVControlPackets_m.h \
  networklayer/routing/gpsr/GPSRDefs.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ByteArray_m.h \
  networklayer/bgpv4/BGPMessage/BGPOpen_m.h \
  base/INETDefs.h \
  actions/create/Create.h \
  base/ByteArray.h \
  actions/actionbase/ActionBase.h \
  linklayer/ieee8021d/common/Ieee8021dBPDU_m.h \
  applications/httptools/HttpMessages_m.h \
  linklayer/ppp/PPPFrame_m.h \
  networklayer/ldp/LDPPacket_m.h \
  networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
  networklayer/rsvp_te/RSVPPacket_m.h
$O/actions/destroy/Destroy.o: actions/destroy/Destroy.cc \
  attacks/conditionalattack/packetfilter/FilterBlock.h \
  base/Compat.h \
  variable/Variable.h \
  attacks/attackbase/AttackBase.h \
  attacks/conditionalattack/conditionalattack/ConditionalAttack.h \
  actions/destroy/Destroy.h \
  base/INETDefs.h \
  actions/actionbase/ActionBase.h \
  localfilter/LocalFilter.h \
  attacks/conditionalattack/packetfilter/PacketFilter.h
$O/actions/disable/Disable.o: actions/disable/Disable.cc \
  localfilter/LocalFilter.h \
  actions/actionbase/ActionBase.h \
  base/INETDefs.h \
  attacks/conditionalattack/packetfilter/PacketFilter.h \
  attacks/conditionalattack/packetfilter/FilterBlock.h \
  base/Compat.h \
  actions/disable/Disable.h \
  attacks/conditionalattack/conditionalattack/ConditionalAttack.h \
  attacks/attackbase/AttackBase.h \
  variable/Variable.h
$O/actions/drop/Drop.o: actions/drop/Drop.cc \
  actions/actionbase/ActionBase.h \
  actions/drop/Drop.h \
  base/INETDefs.h \
  base/Compat.h
$O/actions/move/Move.o: actions/move/Move.cc \
  mobility/contract/IMobility.h \
  actions/actionbase/ActionBase.h \
  base/INETDefs.h \
  mobility/common/MobilityBase.h \
  actions/move/Move.h \
  util/FWMath.h \
  base/ModuleAccess.h \
  base/Compat.h \
  base/Coord.h
$O/actions/put/Put.o: actions/put/Put.cc \
  base/INETDefs.h \
  actions/actionbase/ActionBase.h \
  actions/put/Put.h \
  globalfilter/putmessages/PutMessages.h \
  base/Compat.h
$O/actions/retrieve/Retrieve.o: actions/retrieve/Retrieve.cc \
  util/seapputils/seapputils.h \
  base/Compat.h \
  actions/retrieve/Retrieve.h \
  variable/Variable.h \
  base/INETDefs.h \
  actions/actionbase/ActionBase.h
$O/actions/seappexpression/SEAPPExpression.o: actions/seappexpression/SEAPPExpression.cc \
  actions/seappexpression/SEAPPExpression.h \
  base/Compat.h \
  variable/Variable.h \
  base/INETDefs.h \
  actions/actionbase/ActionBase.h
$O/actions/send/Send.o: actions/send/Send.cc \
  actions/actionbase/ActionBase.h \
  base/INETDefs.h \
  actions/send/Send.h \
  util/seapputils/seapputils.h \
  base/Compat.h
$O/applications/common/ApplicationBase.o: applications/common/ApplicationBase.cc \
  base/NodeOperations.h \
  base/OperationalBase.h \
  base/ILifecycle.h \
  applications/common/ApplicationBase.h \
  base/INETDefs.h \
  base/Compat.h \
  base/LifecycleOperation.h
$O/applications/dhcp/DHCPClient.o: applications/dhcp/DHCPClient.cc \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h \
  transport/contract/UDPSocket.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  base/NodeOperations.h \
  networklayer/ipv4/RoutingTable.h \
  applications/dhcp/DHCPClient.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  applications/dhcp/DHCPLease.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  base/LifecycleOperation.h \
  base/Compat.h \
  applications/dhcp/DHCPMessage_m.h \
  base/NotificationBoard.h \
  base/INotifiable.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h
$O/applications/dhcp/DHCPServer.o: applications/dhcp/DHCPServer.cc \
  transport/contract/UDPControlInfo_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTable.h \
  applications/dhcp/DHCPLease.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  applications/dhcp/DHCPMessage_m.h \
  base/NotificationBoard.h \
  base/INotifiable.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/arp/IARPCache.h \
  networklayer/common/IInterfaceTable.h \
  base/LifecycleOperation.h \
  base/Compat.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  transport/contract/UDPSocket.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  applications/dhcp/DHCPServer.h \
  networklayer/contract/IPv6Address.h \
  base/NodeOperations.h
$O/applications/ethernet/EtherAppCli.o: applications/ethernet/EtherAppCli.cc \
  base/NodeOperations.h \
  applications/ethernet/EtherAppCli.h \
  applications/ethernet/EtherApp_m.h \
  status/NodeStatus.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  base/LifecycleOperation.h \
  base/Compat.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/ModuleAccess.h
$O/applications/ethernet/EtherAppSrv.o: applications/ethernet/EtherAppSrv.cc \
  base/ModuleAccess.h \
  applications/ethernet/EtherAppSrv.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/LifecycleOperation.h \
  base/Compat.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h \
  status/NodeStatus.h \
  base/NodeOperations.h \
  applications/ethernet/EtherApp_m.h
$O/applications/ethernet/EtherTrafGen.o: applications/ethernet/EtherTrafGen.cc \
  base/NodeOperations.h \
  status/NodeStatus.h \
  applications/ethernet/EtherTrafGen.h \
  linklayer/contract/MACAddress.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  base/Compat.h \
  base/LifecycleOperation.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/ModuleAccess.h
$O/applications/ethernet/EthernetApplication.o: applications/ethernet/EthernetApplication.cc \
  base/Compat.h \
  applications/ethernet/EthernetApplication.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  applications/ethernet/EtherApp_m.h \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h
$O/applications/generic/IPvXTrafGen.o: applications/generic/IPvXTrafGen.cc \
  base/LifecycleOperation.h \
  base/Compat.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  applications/generic/IPvXTrafGen.h \
  networklayer/contract/IPSocket.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/NodeOperations.h \
  networklayer/contract/IPv6Address.h \
  applications/generic/IPvXTrafSink.h \
  status/NodeStatus.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv6ControlInfo.h \
  base/INETDefs.h \
  base/ILifecycle.h
$O/applications/generic/IPvXTrafSink.o: applications/generic/IPvXTrafSink.cc \
  applications/generic/IPvXTrafSink.h \
  status/NodeStatus.h \
  base/NodeOperations.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  networklayer/contract/IPv4ControlInfo.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv6ControlInfo.h \
  applications/generic/IPvXTrafGen.h \
  networklayer/contract/IPSocket.h \
  base/LifecycleOperation.h \
  base/Compat.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddressResolver.h
$O/applications/httptools/HttpBrowser.o: applications/httptools/HttpBrowser.cc \
  applications/httptools/HttpRandom.h \
  transport/contract/TCPSocket.h \
  applications/httptools/HttpUtils.h \
  applications/httptools/HttpBrowser.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  applications/httptools/HttpMessages_m.h \
  transport/contract/TCPCommand_m.h \
  base/LifecycleOperation.h \
  base/Compat.h \
  transport/contract/TCPSocketMap.h \
  applications/httptools/HttpNodeBase.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPvXAddressResolver.h \
  applications/httptools/HttpBrowserBase.h \
  world/httptools/HttpController.h \
  applications/httptools/HttpEventMessages_m.h
$O/applications/httptools/HttpBrowserBase.o: applications/httptools/HttpBrowserBase.cc \
  world/httptools/HttpController.h \
  applications/httptools/HttpEventMessages_m.h \
  applications/httptools/HttpNodeBase.h \
  base/ModuleAccess.h \
  applications/httptools/HttpBrowserBase.h \
  base/LifecycleOperation.h \
  base/Compat.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  applications/httptools/HttpMessages_m.h \
  applications/httptools/HttpUtils.h \
  status/NodeStatus.h \
  applications/httptools/HttpRandom.h
$O/applications/httptools/HttpBrowserDirect.o: applications/httptools/HttpBrowserDirect.cc \
  applications/httptools/HttpUtils.h \
  applications/httptools/HttpRandom.h \
  applications/httptools/HttpMessages_m.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  applications/httptools/HttpServerBase.h \
  base/LifecycleOperation.h \
  base/Compat.h \
  applications/httptools/HttpBrowserDirect.h \
  applications/httptools/HttpEventMessages_m.h \
  world/httptools/HttpController.h \
  applications/httptools/HttpBrowserBase.h \
  applications/httptools/HttpNodeBase.h
$O/applications/httptools/HttpNodeBase.o: applications/httptools/HttpNodeBase.cc \
  base/LifecycleOperation.h \
  base/Compat.h \
  world/httptools/HttpController.h \
  applications/httptools/HttpEventMessages_m.h \
  applications/httptools/HttpNodeBase.h \
  applications/httptools/HttpUtils.h \
  applications/httptools/HttpRandom.h \
  base/ILifecycle.h \
  applications/httptools/HttpMessages_m.h \
  base/INETDefs.h
$O/applications/httptools/HttpRandom.o: applications/httptools/HttpRandom.cc \
  applications/httptools/HttpRandom.h \
  applications/httptools/HttpUtils.h \
  base/INETDefs.h \
  applications/httptools/HttpMessages_m.h \
  base/Compat.h
$O/applications/httptools/HttpServer.o: applications/httptools/HttpServer.cc \
  base/INETDefs.h \
  applications/httptools/HttpMessages_m.h \
  applications/httptools/HttpServer.h \
  base/ILifecycle.h \
  applications/httptools/HttpRandom.h \
  applications/httptools/HttpUtils.h \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPv6Address.h \
  applications/httptools/HttpNodeBase.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  applications/httptools/HttpEventMessages_m.h \
  world/httptools/HttpController.h \
  transport/contract/TCPCommand_m.h \
  applications/httptools/HttpServerBase.h \
  transport/contract/TCPSocketMap.h \
  base/LifecycleOperation.h \
  base/Compat.h
$O/applications/httptools/HttpServerBase.o: applications/httptools/HttpServerBase.cc \
  base/LifecycleOperation.h \
  base/Compat.h \
  applications/httptools/HttpServerBase.h \
  world/httptools/HttpController.h \
  applications/httptools/HttpEventMessages_m.h \
  base/ModuleAccess.h \
  applications/httptools/HttpNodeBase.h \
  applications/httptools/HttpUtils.h \
  applications/httptools/HttpRandom.h \
  status/NodeStatus.h \
  base/ILifecycle.h \
  applications/httptools/HttpMessages_m.h \
  base/INETDefs.h
$O/applications/httptools/HttpServerDirect.o: applications/httptools/HttpServerDirect.cc \
  base/ILifecycle.h \
  applications/httptools/HttpMessages_m.h \
  base/INETDefs.h \
  applications/httptools/HttpUtils.h \
  applications/httptools/HttpRandom.h \
  world/httptools/HttpController.h \
  applications/httptools/HttpEventMessages_m.h \
  applications/httptools/HttpNodeBase.h \
  applications/httptools/HttpServerDirect.h \
  base/LifecycleOperation.h \
  base/Compat.h \
  applications/httptools/HttpServerBase.h
$O/applications/httptools/HttpServerDirectEvilA.o: applications/httptools/HttpServerDirectEvilA.cc \
  applications/httptools/HttpUtils.h \
  applications/httptools/HttpServerDirectEvilA.h \
  applications/httptools/HttpRandom.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  applications/httptools/HttpMessages_m.h \
  base/LifecycleOperation.h \
  applications/httptools/HttpServerDirect.h \
  base/Compat.h \
  applications/httptools/HttpServerBase.h \
  world/httptools/HttpController.h \
  applications/httptools/HttpEventMessages_m.h \
  applications/httptools/HttpNodeBase.h
$O/applications/httptools/HttpServerDirectEvilB.o: applications/httptools/HttpServerDirectEvilB.cc \
  applications/httptools/HttpServerBase.h \
  base/Compat.h \
  base/LifecycleOperation.h \
  applications/httptools/HttpServerDirect.h \
  applications/httptools/HttpNodeBase.h \
  applications/httptools/HttpEventMessages_m.h \
  applications/httptools/HttpServerDirectEvilB.h \
  world/httptools/HttpController.h \
  applications/httptools/HttpRandom.h \
  applications/httptools/HttpUtils.h \
  applications/httptools/HttpMessages_m.h \
  base/ILifecycle.h \
  base/INETDefs.h
$O/applications/httptools/HttpServerEvilA.o: applications/httptools/HttpServerEvilA.cc \
  base/INETDefs.h \
  applications/httptools/HttpMessages_m.h \
  applications/httptools/HttpServer.h \
  base/ILifecycle.h \
  applications/httptools/HttpServerEvilA.h \
  applications/httptools/HttpRandom.h \
  applications/httptools/HttpUtils.h \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPv6Address.h \
  applications/httptools/HttpNodeBase.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  applications/httptools/HttpEventMessages_m.h \
  world/httptools/HttpController.h \
  transport/contract/TCPCommand_m.h \
  applications/httptools/HttpServerBase.h \
  transport/contract/TCPSocketMap.h \
  base/LifecycleOperation.h \
  base/Compat.h
$O/applications/httptools/HttpServerEvilB.o: applications/httptools/HttpServerEvilB.cc \
  world/httptools/HttpController.h \
  applications/httptools/HttpEventMessages_m.h \
  applications/httptools/HttpNodeBase.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  base/LifecycleOperation.h \
  base/Compat.h \
  transport/contract/TCPSocketMap.h \
  applications/httptools/HttpServerBase.h \
  applications/httptools/HttpServerEvilB.h \
  transport/contract/TCPCommand_m.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  applications/httptools/HttpMessages_m.h \
  applications/httptools/HttpServer.h \
  transport/contract/TCPSocket.h \
  applications/httptools/HttpUtils.h \
  networklayer/contract/IPv6Address.h \
  applications/httptools/HttpRandom.h
$O/applications/httptools/HttpUtils.o: applications/httptools/HttpUtils.cc \
  applications/httptools/HttpMessages_m.h \
  applications/httptools/HttpUtils.h
$O/applications/netperfmeter/NetPerfMeter.o: applications/netperfmeter/NetPerfMeter.cc \
  networklayer/contract/IPv6Address.h \
  transport/contract/SCTPCommand_m.h \
  transport/sctp/SCTPGapList.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPSendStream.h \
  transport/contract/TCPSocket.h \
  transport/sctp/SCTPMessage_m.h \
  transport/contract/SCTPCommand.h \
  transport/sctp/SCTP.h \
  networklayer/common/InterfaceToken.h \
  transport/sctp/SCTPAssociation.h \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h \
  transport/contract/UDPSocket.h \
  applications/netperfmeter/NetPerfMeter.h \
  transport/sctp/SCTPReceiveStream.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  networklayer/common/IInterfaceTable.h \
  base/Compat.h \
  base/NotificationBoard.h \
  transport/contract/TCPCommand_m.h \
  networklayer/common/InterfaceEntry.h \
  applications/netperfmeter/NetPerfMeter_m.h \
  networklayer/common/InterfaceTableAccess.h \
  transport/sctp/SCTPQueue.h \
  base/INotifiable.h \
  transport/contract/SCTPSocket.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPvXAddressResolver.h
$O/applications/pingapp/PingApp.o: applications/pingapp/PingApp.cc \
  applications/pingapp/PingApp.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  base/Compat.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPv4ControlInfo.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPProtocolId_m.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  base/NodeOperations.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPv6Address.h \
  status/NodeStatus.h \
  applications/pingapp/PingPayload_m.h
$O/applications/pingapp/PingTestApp.o: applications/pingapp/PingTestApp.cc \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/NotifierConsts.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv6ControlInfo.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  applications/pingapp/PingPayload_m.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  applications/pingapp/PingTestApp.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/LifecycleOperation.h \
  base/Compat.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/common/IInterfaceTable.h \
  base/INotifiable.h \
  networklayer/common/InterfaceEntry.h \
  base/NotificationBoard.h
$O/applications/rtpapp/RTPApplication.o: applications/rtpapp/RTPApplication.cc \
  transport/rtp/RTPSenderStatusMessage_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  applications/rtpapp/RTPApplication.h \
  base/Compat.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  transport/rtp/RTPInterfacePacket_m.h \
  status/NodeStatus.h \
  networklayer/contract/IPv6Address.h
$O/applications/sctpapp/SCTPClient.o: applications/sctpapp/SCTPClient.cc \
  transport/contract/SCTPSocket.h \
  networklayer/common/InterfaceTable.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/IInterfaceTable.h \
  applications/sctpapp/SCTPClient.h \
  base/Compat.h \
  base/LifecycleOperation.h \
  base/NotificationBoard.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  base/INotifiable.h \
  transport/sctp/SCTPQueue.h \
  transport/sctp/SCTPAssociation.h \
  transport/contract/UDPSocket.h \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h \
  transport/sctp/SCTPReceiveStream.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  transport/contract/SCTPCommand_m.h \
  transport/sctp/SCTPGapList.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPMessage.h \
  transport/contract/SCTPCommand.h \
  transport/sctp/SCTPMessage_m.h \
  status/NodeStatus.h \
  transport/sctp/SCTP.h \
  networklayer/common/InterfaceToken.h
$O/applications/sctpapp/SCTPNatPeer.o: applications/sctpapp/SCTPNatPeer.cc \
  base/Compat.h \
  applications/sctpapp/SCTPNatPeer.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  base/INotifiable.h \
  transport/sctp/SCTPQueue.h \
  base/NotificationBoard.h \
  transport/contract/SCTPSocket.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTable.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPvXAddressResolver.h \
  transport/sctp/SCTPGapList.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPMessage.h \
  networklayer/contract/IPv6Address.h \
  transport/contract/SCTPCommand_m.h \
  status/NodeStatus.h \
  transport/sctp/SCTP.h \
  networklayer/common/InterfaceToken.h \
  transport/contract/SCTPCommand.h \
  transport/sctp/SCTPMessage_m.h \
  transport/contract/UDPSocket.h \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h \
  transport/sctp/SCTPAssociation.h \
  base/INETDefs.h \
  transport/sctp/SCTPReceiveStream.h \
  base/ILifecycle.h
$O/applications/sctpapp/SCTPNatServer.o: applications/sctpapp/SCTPNatServer.cc \
  base/INETDefs.h \
  transport/sctp/SCTPReceiveStream.h \
  base/ILifecycle.h \
  transport/contract/UDPSocket.h \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTP.h \
  networklayer/common/InterfaceToken.h \
  transport/contract/SCTPCommand.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPGapList.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPMessage.h \
  transport/contract/SCTPCommand_m.h \
  networklayer/contract/IPv6Address.h \
  applications/sctpapp/SCTPNatServer.h \
  transport/sctp/SCTPNatTable.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPvXAddressResolver.h \
  transport/contract/SCTPSocket.h \
  base/INotifiable.h \
  transport/sctp/SCTPQueue.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  base/NotificationBoard.h \
  base/Compat.h \
  networklayer/common/IInterfaceTable.h
$O/applications/sctpapp/SCTPPeer.o: applications/sctpapp/SCTPPeer.cc \
  transport/sctp/SCTPGapList.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPMessage.h \
  transport/contract/SCTPCommand_m.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTP.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  transport/sctp/SCTPMessage_m.h \
  transport/contract/SCTPCommand.h \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h \
  transport/contract/UDPSocket.h \
  transport/sctp/SCTPAssociation.h \
  base/INETDefs.h \
  transport/sctp/SCTPReceiveStream.h \
  base/ILifecycle.h \
  base/LifecycleOperation.h \
  base/Compat.h \
  networklayer/common/IInterfaceTable.h \
  transport/sctp/SCTPQueue.h \
  base/INotifiable.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  base/NotificationBoard.h \
  transport/contract/SCTPSocket.h \
  applications/sctpapp/SCTPPeer.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddressResolver.h
$O/applications/sctpapp/SCTPServer.o: applications/sctpapp/SCTPServer.cc \
  transport/sctp/SCTPReceiveStream.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  transport/sctp/SCTPAssociation.h \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h \
  transport/contract/UDPSocket.h \
  transport/sctp/SCTPMessage_m.h \
  transport/contract/SCTPCommand.h \
  applications/sctpapp/SCTPServer.h \
  transport/sctp/SCTP.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  transport/contract/SCTPCommand_m.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTPGapList.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPMessage.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPvXAddressResolver.h \
  transport/contract/SCTPSocket.h \
  base/NotificationBoard.h \
  transport/sctp/SCTPQueue.h \
  base/INotifiable.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/IInterfaceTable.h \
  base/LifecycleOperation.h \
  base/Compat.h
$O/applications/tcpapp/TCPAppBase.o: applications/tcpapp/TCPAppBase.cc \
  base/Compat.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPv6Address.h \
  applications/tcpapp/TCPAppBase.h \
  transport/contract/TCPSocket.h \
  base/INETDefs.h
$O/applications/tcpapp/TCPBasicClientApp.o: applications/tcpapp/TCPBasicClientApp.cc \
  transport/contract/TCPCommand_m.h \
  base/LifecycleOperation.h \
  base/Compat.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  applications/tcpapp/TCPBasicClientApp.h \
  status/NodeStatus.h \
  applications/tcpapp/GenericAppMsg_m.h \
  transport/contract/TCPSocket.h \
  base/NodeOperations.h \
  applications/tcpapp/TCPAppBase.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  base/ILifecycle.h
$O/applications/tcpapp/TCPEchoApp.o: applications/tcpapp/TCPEchoApp.cc \
  base/ByteArray_m.h \
  base/INETDefs.h \
  base/ByteArray.h \
  base/ILifecycle.h \
  status/NodeStatus.h \
  base/NodeOperations.h \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPv6Address.h \
  base/ByteArrayMessage.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  base/ByteArrayMessage_m.h \
  transport/contract/TCPCommand_m.h \
  base/Compat.h \
  base/LifecycleOperation.h \
  applications/tcpapp/TCPEchoApp.h
$O/applications/tcpapp/TCPGenericSrvApp.o: applications/tcpapp/TCPGenericSrvApp.cc \
  applications/tcpapp/TCPGenericSrvApp.h \
  networklayer/contract/IPv6Address.h \
  applications/tcpapp/GenericAppMsg_m.h \
  transport/contract/TCPSocket.h \
  status/NodeStatus.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  base/Compat.h \
  base/LifecycleOperation.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h
$O/applications/tcpapp/TCPGenericSrvThread.o: applications/tcpapp/TCPGenericSrvThread.cc \
  transport/contract/TCPSocket.h \
  applications/tcpapp/GenericAppMsg_m.h \
  networklayer/contract/IPv6Address.h \
  applications/tcpapp/TCPGenericSrvThread.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  transport/contract/TCPSocketMap.h \
  base/Compat.h \
  base/LifecycleOperation.h \
  transport/contract/TCPCommand_m.h \
  applications/tcpapp/TCPSrvHostApp.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h
$O/applications/tcpapp/TCPSessionApp.o: applications/tcpapp/TCPSessionApp.cc \
  base/LifecycleOperation.h \
  base/Compat.h \
  transport/contract/TCPCommand_m.h \
  base/ByteArrayMessage_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  base/ByteArrayMessage.h \
  networklayer/contract/IPv6Address.h \
  applications/tcpapp/TCPAppBase.h \
  applications/tcpapp/TCPSessionApp.h \
  base/NodeOperations.h \
  transport/contract/TCPSocket.h \
  status/NodeStatus.h \
  base/ILifecycle.h \
  base/ByteArray.h \
  base/INETDefs.h \
  base/ByteArray_m.h
$O/applications/tcpapp/TCPSinkApp.o: applications/tcpapp/TCPSinkApp.cc \
  networklayer/contract/IPv6Address.h \
  transport/contract/TCPSocket.h \
  status/NodeStatus.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  applications/tcpapp/TCPSinkApp.h \
  base/LifecycleOperation.h \
  base/Compat.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h
$O/applications/tcpapp/TCPSrvHostApp.o: applications/tcpapp/TCPSrvHostApp.cc \
  status/NodeStatus.h \
  networklayer/contract/IPv6Address.h \
  transport/contract/TCPSocket.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  applications/tcpapp/TCPSrvHostApp.h \
  transport/contract/TCPCommand_m.h \
  base/Compat.h \
  base/LifecycleOperation.h \
  transport/contract/TCPSocketMap.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h
$O/applications/tcpapp/TelnetApp.o: applications/tcpapp/TelnetApp.cc \
  status/NodeStatus.h \
  base/NodeOperations.h \
  transport/contract/TCPSocket.h \
  applications/tcpapp/GenericAppMsg_m.h \
  networklayer/contract/IPv6Address.h \
  applications/tcpapp/TCPAppBase.h \
  base/INETDefs.h \
  applications/tcpapp/TelnetApp.h \
  base/ILifecycle.h \
  transport/contract/TCPCommand_m.h \
  base/LifecycleOperation.h \
  base/Compat.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h
$O/applications/traci/TraCIDemo.o: applications/traci/TraCIDemo.cc \
  mobility/common/MobilityBase.h \
  networklayer/contract/IPv6Address.h \
  status/NodeStatus.h \
  mobility/contract/IMobility.h \
  transport/contract/UDPSocket.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  ./mobility/single/TraCIMobility.h \
  ./applications/traci/TraCIDemo.h \
  base/LifecycleOperation.h \
  base/Compat.h \
  base/Coord.h \
  util/FWMath.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  ./world/traci/TraCIScenarioManager.h
$O/applications/traci/TraCITestApp.o: applications/traci/TraCITestApp.cc \
  base/Coord.h \
  base/Compat.h \
  base/LifecycleOperation.h \
  base/ModuleAccess.h \
  ./world/traci/TraCIScenarioManager.h \
  util/FWMath.h \
  status/NodeStatus.h \
  mobility/common/MobilityBase.h \
  base/ILifecycle.h \
  ./applications/traci/TraCITestApp.h \
  ./mobility/single/TraCIMobility.h \
  base/INETDefs.h \
  mobility/contract/IMobility.h
$O/applications/trafficlightapp/CommandNodeBasicApp.o: applications/trafficlightapp/CommandNodeBasicApp.cc \
  applications/common/ApplicationBase.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  transport/contract/UDPSocket.h \
  applications/trafficlightapp/TrafficLightPacket_m.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  applications/trafficlightapp/CommandNodeBasicApp.h \
  networklayer/common/InterfaceToken.h \
  base/OperationalBase.h \
  base/NodeOperations.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  base/Compat.h \
  base/LifecycleOperation.h \
  networklayer/common/IInterfaceTable.h
$O/applications/trafficlightapp/CommandNodeSinkApp.o: applications/trafficlightapp/CommandNodeSinkApp.cc \
  base/Compat.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/UDPControlInfo_m.h \
  applications/trafficlightapp/CommandNodeSinkApp.h \
  base/OperationalBase.h \
  networklayer/contract/IPv6Address.h \
  base/NodeOperations.h \
  base/ILifecycle.h \
  applications/common/ApplicationBase.h \
  base/INETDefs.h \
  applications/trafficlightapp/TrafficLightPacket_m.h \
  transport/contract/UDPSocket.h
$O/applications/trafficlightapp/TrafficLightBasicApp.o: applications/trafficlightapp/TrafficLightBasicApp.cc \
  transport/contract/UDPControlInfo_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  base/LifecycleOperation.h \
  applications/trafficlightapp/TrafficLightBasicApp.h \
  base/Compat.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  applications/common/ApplicationBase.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  applications/trafficlightapp/TrafficLightPacket_m.h \
  transport/contract/UDPSocket.h \
  networklayer/common/InterfaceToken.h \
  base/OperationalBase.h \
  base/NodeOperations.h \
  networklayer/contract/IPv6Address.h
$O/applications/trafficlightapp/TrafficLightSinkApp.o: applications/trafficlightapp/TrafficLightSinkApp.cc \
  applications/trafficlightapp/TrafficLightPacket_m.h \
  transport/contract/UDPSocket.h \
  base/ILifecycle.h \
  applications/common/ApplicationBase.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  base/NodeOperations.h \
  base/OperationalBase.h \
  applications/trafficlightapp/TrafficLightSinkApp.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  transport/contract/UDPControlInfo_m.h \
  base/Compat.h \
  base/LifecycleOperation.h
$O/applications/trafficlightapp/TrafficLightUpdateStatusApp.o: applications/trafficlightapp/TrafficLightUpdateStatusApp.cc \
  base/INETDefs.h \
  applications/trafficlightapp/TrafficLightUpdateStatusApp.h \
  base/Compat.h
$O/applications/udpapp/UDPBasicApp.o: applications/udpapp/UDPBasicApp.cc \
  networklayer/contract/IPvXAddressResolver.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/UDPControlInfo_m.h \
  applications/udpapp/UDPBasicApp.h \
  networklayer/common/IInterfaceTable.h \
  base/Compat.h \
  base/LifecycleOperation.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  transport/contract/UDPSocket.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  base/ILifecycle.h \
  applications/common/ApplicationBase.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  base/NodeOperations.h \
  base/OperationalBase.h \
  networklayer/common/InterfaceToken.h
$O/applications/udpapp/UDPBasicBurst.o: applications/udpapp/UDPBasicBurst.cc \
  base/NodeOperations.h \
  networklayer/contract/IPv6Address.h \
  base/OperationalBase.h \
  transport/contract/UDPSocket.h \
  base/NotifierConsts.h \
  applications/common/ApplicationBase.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  base/Compat.h \
  networklayer/ipv6/RoutingTable6Access.h \
  base/LifecycleOperation.h \
  networklayer/ipv4/IPv4Route.h \
  base/INotifiable.h \
  base/NotificationBoard.h \
  applications/udpapp/UDPBasicBurst.h \
  networklayer/ipv6/RoutingTable6.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  transport/contract/UDPControlInfo_m.h
$O/applications/udpapp/UDPEchoApp.o: applications/udpapp/UDPEchoApp.cc \
  transport/contract/UDPSocket.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  applications/common/ApplicationBase.h \
  networklayer/contract/IPv6Address.h \
  base/NodeOperations.h \
  base/OperationalBase.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  base/LifecycleOperation.h \
  base/Compat.h \
  applications/udpapp/UDPEchoApp.h
$O/applications/udpapp/UDPSink.o: applications/udpapp/UDPSink.cc \
  applications/udpapp/UDPSink.h \
  base/NodeOperations.h \
  networklayer/contract/IPv6Address.h \
  base/OperationalBase.h \
  transport/contract/UDPSocket.h \
  base/INETDefs.h \
  applications/common/ApplicationBase.h \
  base/ILifecycle.h \
  base/LifecycleOperation.h \
  base/Compat.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h
$O/applications/udpapp/UDPVideoStreamCli.o: applications/udpapp/UDPVideoStreamCli.cc \
  transport/contract/UDPControlInfo_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPvXAddressResolver.h \
  applications/udpapp/UDPVideoStreamCli.h \
  base/LifecycleOperation.h \
  base/Compat.h \
  transport/contract/UDPSocket.h \
  base/INETDefs.h \
  applications/common/ApplicationBase.h \
  base/ILifecycle.h \
  base/NodeOperations.h \
  networklayer/contract/IPv6Address.h \
  base/OperationalBase.h
$O/applications/udpapp/UDPVideoStreamSvr.o: applications/udpapp/UDPVideoStreamSvr.cc \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  transport/contract/UDPControlInfo_m.h \
  base/Compat.h \
  base/LifecycleOperation.h \
  base/ILifecycle.h \
  applications/common/ApplicationBase.h \
  base/INETDefs.h \
  transport/contract/UDPSocket.h \
  base/OperationalBase.h \
  applications/udpapp/UDPVideoStreamSvr.h \
  networklayer/contract/IPv6Address.h \
  base/NodeOperations.h
$O/applications/voip/SimpleVoIPReceiver.o: applications/voip/SimpleVoIPReceiver.cc \
  status/NodeStatus.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  applications/voip/SimpleVoIPReceiver.h \
  base/ILifecycle.h \
  transport/contract/UDPSocket.h \
  base/LifecycleOperation.h \
  base/Compat.h \
  applications/voip/SimpleVoIPPacket_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddressResolver.h
$O/applications/voip/SimpleVoIPSender.o: applications/voip/SimpleVoIPSender.cc \
  applications/voip/SimpleVoIPSender.h \
  applications/voip/SimpleVoIPPacket_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  base/LifecycleOperation.h \
  transport/contract/UDPSocket.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  networklayer/contract/IPv6Address.h \
  status/NodeStatus.h
$O/attacks/attackbase/AttackBase.o: attacks/attackbase/AttackBase.cc \
  actions/actionbase/ActionBase.h \
  base/INETDefs.h \
  attacks/attackbase/AttackBase.h \
  variable/Variable.h \
  base/Compat.h
$O/attacks/attackentry/AttackEntry.o: attacks/attackentry/AttackEntry.cc \
  actions/actionbase/ActionBase.h \
  base/INETDefs.h \
  attacks/attackbase/AttackBase.h \
  variable/Variable.h \
  attacks/attackentry/AttackEntry.h \
  base/Compat.h
$O/attacks/conditionalattack/conditionalattack/ConditionalAttack.o: attacks/conditionalattack/conditionalattack/ConditionalAttack.cc \
  actions/create/Create.h \
  actions/actionbase/ActionBase.h \
  base/INETDefs.h \
  actions/drop/Drop.h \
  actions/change/Change.h \
  globalfilter/putmessages/PutMessages.h \
  attacks/conditionalattack/packetfilter/PacketFilter.h \
  actions/put/Put.h \
  actions/clone/Clone.h \
  attacks/conditionalattack/packetfilter/FilterBlock.h \
  actions/seappexpression/SEAPPExpression.h \
  actions/send/Send.h \
  attacks/attackbase/AttackBase.h \
  variable/Variable.h \
  attacks/conditionalattack/conditionalattack/ConditionalAttack.h \
  actions/retrieve/Retrieve.h \
  base/Compat.h \
  util/seapputils/seapputils.h
$O/attacks/conditionalattack/packetfilter/CompoundBlock.o: attacks/conditionalattack/packetfilter/CompoundBlock.cc \
  attacks/conditionalattack/packetfilter/CompoundBlock.h \
  util/seapputils/seapputils.h \
  attacks/conditionalattack/packetfilter/FilterBlock.h
$O/attacks/conditionalattack/packetfilter/ElementaryBlock.o: attacks/conditionalattack/packetfilter/ElementaryBlock.cc \
  attacks/conditionalattack/packetfilter/ElementaryBlock.h \
  attacks/conditionalattack/packetfilter/FilterBlock.h \
  util/seapputils/seapputils.h
$O/attacks/conditionalattack/packetfilter/FilterBlock.o: attacks/conditionalattack/packetfilter/FilterBlock.cc \
  attacks/conditionalattack/packetfilter/FilterBlock.h
$O/attacks/conditionalattack/packetfilter/PacketFilter.o: attacks/conditionalattack/packetfilter/PacketFilter.cc \
  util/seapputils/seapputils.h \
  attacks/conditionalattack/packetfilter/CompoundBlock.h \
  attacks/conditionalattack/packetfilter/FilterBlock.h \
  attacks/conditionalattack/packetfilter/ElementaryBlock.h \
  attacks/conditionalattack/packetfilter/PacketFilter.h
$O/attacks/physicalattack/PhysicalAttack.o: attacks/physicalattack/PhysicalAttack.cc \
  util/FWMath.h \
  base/Compat.h \
  base/Coord.h \
  variable/Variable.h \
  attacks/attackbase/AttackBase.h \
  attacks/physicalattack/PhysicalAttack.h \
  actions/destroy/Destroy.h \
  base/INETDefs.h \
  actions/actionbase/ActionBase.h \
  actions/move/Move.h
$O/attacks/unconditionalattack/UnconditionalAttack.o: attacks/unconditionalattack/UnconditionalAttack.cc \
  attacks/unconditionalattack/UnconditionalAttack.h \
  globalfilter/putmessages/PutMessages.h \
  actions/put/Put.h \
  actions/clone/Clone.h \
  actions/drop/Drop.h \
  base/INETDefs.h \
  actions/create/Create.h \
  actions/actionbase/ActionBase.h \
  actions/change/Change.h \
  variable/Variable.h \
  attacks/attackbase/AttackBase.h \
  base/Compat.h \
  actions/retrieve/Retrieve.h \
  util/seapputils/seapputils.h \
  actions/seappexpression/SEAPPExpression.h
$O/base/AbstractQueue.o: base/AbstractQueue.cc \
  base/INETDefs.h \
  base/AbstractQueue.h \
  base/Compat.h
$O/base/BasicModule.o: base/BasicModule.cc \
  base/ModuleAccess.h \
  base/NotificationBoard.h \
  base/INotifiable.h \
  base/Compat.h \
  base/BasicModule.h \
  base/INETDefs.h \
  base/NotifierConsts.h
$O/base/ByteArray.o: base/ByteArray.cc \
  base/ByteArray_m.h \
  base/INETDefs.h \
  base/ByteArray.h \
  base/Compat.h
$O/base/ByteArrayBuffer.o: base/ByteArrayBuffer.cc \
  base/ByteArray.h \
  base/ByteArray_m.h \
  base/INETDefs.h \
  base/Compat.h \
  base/ByteArrayBuffer.h
$O/base/ByteArrayMessage.o: base/ByteArrayMessage.cc \
  base/ByteArrayMessage.h \
  base/ByteArrayMessage_m.h \
  base/Compat.h \
  base/ByteArray.h \
  base/INETDefs.h \
  base/ByteArray_m.h
$O/base/Compat.o: base/Compat.cc \
  base/Compat.h
$O/base/Coord.o: base/Coord.cc \
  util/FWMath.h \
  base/Compat.h \
  base/Coord.h \
  base/INETDefs.h
$O/base/InterfaceOperations.o: base/InterfaceOperations.cc
$O/base/Join.o: base/Join.cc \
  base/Compat.h \
  base/INETDefs.h
$O/base/LifecycleController.o: base/LifecycleController.cc \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  base/LifecycleOperation.h \
  base/Compat.h \
  base/LifecycleController.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceEntry.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  base/IScriptable.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceToken.h
$O/base/ModuleAccess.o: base/ModuleAccess.cc \
  base/Compat.h \
  base/ModuleAccess.h \
  base/INETDefs.h
$O/base/NedFunctions.o: base/NedFunctions.cc \
  base/Compat.h \
  base/INETDefs.h
$O/base/NodeOperations.o: base/NodeOperations.cc \
  base/NodeOperations.h \
  base/INETDefs.h \
  base/Compat.h \
  base/LifecycleOperation.h \
  base/ModuleAccess.h
$O/base/NotificationBoard.o: base/NotificationBoard.cc \
  base/NotifierConsts.h \
  base/INETDefs.h \
  base/Compat.h \
  base/NotificationBoard.h \
  base/INotifiable.h \
  base/ModuleAccess.h
$O/base/NotifierConsts.o: base/NotifierConsts.cc \
  base/Compat.h \
  base/NotifierConsts.h \
  base/INETDefs.h
$O/base/OperationalBase.o: base/OperationalBase.cc \
  base/NodeOperations.h \
  base/OperationalBase.h \
  status/NodeStatus.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  base/LifecycleOperation.h \
  base/Compat.h \
  base/ModuleAccess.h
$O/base/PassiveQueueBase.o: base/PassiveQueueBase.cc \
  base/PassiveQueueBase.h \
  base/IPassiveQueue.h \
  base/INETDefs.h \
  base/Compat.h
$O/base/ProtocolMap.o: base/ProtocolMap.cc \
  base/Compat.h \
  base/ProtocolMap.h \
  base/INETDefs.h
$O/base/QueueBase.o: base/QueueBase.cc \
  base/Compat.h \
  base/AbstractQueue.h \
  base/INETDefs.h \
  base/QueueBase.h
$O/base/ReassemblyBuffer.o: base/ReassemblyBuffer.cc \
  base/Compat.h \
  base/INETDefs.h \
  base/ReassemblyBuffer.h
$O/base/ResultFilters.o: base/ResultFilters.cc \
  base/Coord.h \
  base/Compat.h \
  base/ResultFilters.h \
  util/FWMath.h \
  base/INETDefs.h \
  mobility/contract/IMobility.h
$O/base/Sink.o: base/Sink.cc \
  base/INETDefs.h \
  base/Sink.h \
  base/Compat.h
$O/base/Topology.o: base/Topology.cc \
  base/INETDefs.h \
  base/Compat.h \
  util/PatternMatcher.h \
  base/Topology.h \
  util/stlutils.h
$O/base/UnimplementedModule.o: base/UnimplementedModule.cc \
  base/UnimplementedModule.h \
  base/Compat.h \
  base/INETDefs.h
$O/base/erfc.o: base/erfc.cc \
  base/Compat.h \
  base/INETDefs.h
$O/battery/models/BasicBattery.o: battery/models/BasicBattery.cc \
  base/ModuleAccess.h \
  base/INotifiable.h \
  base/NotificationBoard.h \
  base/Compat.h \
  base/INETDefs.h \
  base/NotifierConsts.h \
  battery/models/BasicBattery.h
$O/battery/models/InetSimpleBattery.o: battery/models/InetSimpleBattery.cc \
  base/INotifiable.h \
  base/NotificationBoard.h \
  base/Compat.h \
  base/ModuleAccess.h \
  battery/models/Energy.h \
  linklayer/contract/RadioState.h \
  base/INETDefs.h \
  battery/models/InetSimpleBattery.h \
  base/NotifierConsts.h \
  battery/models/BasicBattery.h
$O/exmachina/ExMachina.o: exmachina/ExMachina.cc \
  attacks/attackentry/AttackEntry.h \
  base/Compat.h \
  variable/Variable.h \
  attacks/attackbase/AttackBase.h \
  exmachina/ExMachina.h \
  base/INETDefs.h \
  actions/actionbase/ActionBase.h
$O/globalfilter/GlobalFilter.o: globalfilter/GlobalFilter.cc \
  /usr/include/glibmm-2.4/glibmm/ustring.h \
  /usr/include/glib-2.0/glib/gquark.h \
  /usr/include/glib-2.0/glib/glist.h \
  /usr/include/glib-2.0/glib/deprecated/gmain.h \
  /usr/include/libxml++-2.6/libxml++/document.h \
  /usr/include/glib-2.0/glib/gurifuncs.h \
  /usr/include/libxml++-2.6/libxml++/nodes/cdatanode.h \
  /usr/include/glib-2.0/glib/ghash.h \
  /usr/include/glib-2.0/glib/gdir.h \
  /usr/include/glib-2.0/glib/gtypes.h \
  /usr/include/glib-2.0/glib/grand.h \
  /usr/include/libxml++-2.6/libxml++/parsers/domparser.h \
  /usr/include/glib-2.0/glib/gwin32.h \
  /usr/include/glibmm-2.4/glibmm/unicode.h \
  /usr/include/glib-2.0/glib/gtimezone.h \
  /usr/include/glib-2.0/glib/gdate.h \
  /usr/include/glib-2.0/glib/gmessages.h \
  /usr/include/libxml++-2.6/libxml++/validators/dtdvalidator.h \
  /usr/include/glib-2.0/glib/deprecated/gcache.h \
  /usr/include/glib-2.0/glib/ghook.h \
  /usr/include/glib-2.0/glib/gsequence.h \
  /usr/include/glib-2.0/glib/gmacros.h \
  /usr/include/glib-2.0/glib/gtree.h \
  /usr/include/glib-2.0/glib/galloca.h \
  /usr/include/glib-2.0/glib/gpoll.h \
  /usr/include/glib-2.0/glib/giochannel.h \
  /usr/include/libxml++-2.6/libxml++/libxml++.h \
  base/Compat.h \
  parser/Parser.h \
  /usr/include/glib-2.0/glib/gbacktrace.h \
  /usr/include/glib-2.0/glib/gstring.h \
  attacks/attackentry/AttackEntry.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/internal_error.h \
  /usr/include/glib-2.0/glib/gunicode.h \
  /usr/include/glib-2.0/glib/gscanner.h \
  /usr/include/glib-2.0/glib/deprecated/gallocator.h \
  /usr/include/glib-2.0/glib/gmarkup.h \
  /usr/include/glib-2.0/glib/gbitlock.h \
  /usr/include/glib-2.0/glib/gasyncqueue.h \
  /usr/include/libxml++-2.6/libxml++/schema.h \
  /usr/include/glib-2.0/glib/gslice.h \
  util/seapputils/seapputils.h \
  variable/Variable.h \
  /usr/lib/x86_64-linux-gnu/glib-2.0/include/glibconfig.h \
  /usr/include/glib-2.0/glib/gnode.h \
  /usr/include/libxml++-2.6/libxml++/parsers/saxparser.h \
  /usr/include/libxml++-2.6/libxml++/attributedeclaration.h \
  attacks/attackbase/AttackBase.h \
  /usr/include/glib-2.0/glib/gvariant.h \
  /usr/include/glib-2.0/glib/gstringchunk.h \
  /usr/include/glib-2.0/glib/deprecated/gcompletion.h \
  /usr/include/libxml++-2.6/libxml++/nodes/contentnode.h \
  /usr/include/glib-2.0/glib/gqueue.h \
  /usr/include/glib-2.0/glib/garray.h \
  /usr/include/glib-2.0/glib/gthread.h \
  /usr/include/glib-2.0/glib/gconvert.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/exception.h \
  /usr/include/glib-2.0/glib/gthreadpool.h \
  /usr/include/glib-2.0/glib/gerror.h \
  /usr/include/glib-2.0/glib/gdataset.h \
  /usr/include/libxml++-2.6/libxml++/attributenode.h \
  /usr/include/glib-2.0/glib/gstrfuncs.h \
  /usr/include/glib-2.0/glib/gtestutils.h \
  /usr/include/libxml++-2.6/libxml++/nodes/element.h \
  /usr/include/glib-2.0/glib/gcharset.h \
  /usr/include/glib-2.0/glib/gslist.h \
  /usr/include/glib-2.0/glib/gtimer.h \
  /usr/include/glib-2.0/glib/gmain.h \
  /usr/include/libxml++-2.6/libxml++/nodes/processinginstructionnode.h \
  /usr/include/glib-2.0/glib/gversion.h \
  /usr/include/libxml++-2.6/libxml++/noncopyable.h \
  /usr/lib/libxml++-2.6/include/libxml++config.h \
  /usr/include/glib-2.0/glib/gchecksum.h \
  /usr/include/libxml++-2.6/libxml++/validators/schemavalidator.h \
  base/INETDefs.h \
  /usr/include/libxml++-2.6/libxml++/nodes/commentnode.h \
  /usr/include/glib-2.0/glib/gutils.h \
  /usr/include/glib-2.0/glib/gdatetime.h \
  /usr/lib/x86_64-linux-gnu/glibmm-2.4/include/glibmmconfig.h \
  actions/actionbase/ActionBase.h \
  /usr/include/glib-2.0/glib.h \
  /usr/include/libxml++-2.6/libxml++/nodes/entitydeclaration.h \
  /usr/include/glib-2.0/glib/gbase64.h \
  /usr/include/glib-2.0/glib/deprecated/gthread.h \
  /usr/include/glib-2.0/glib/gtrashstack.h \
  /usr/include/libxml++-2.6/libxml++/nodes/node.h \
  /usr/include/glib-2.0/glib/gqsort.h \
  /usr/include/glib-2.0/glib/deprecated/grel.h \
  /usr/include/glib-2.0/glib/goption.h \
  /usr/include/glib-2.0/glib/gfileutils.h \
  /usr/include/libxml++-2.6/libxml++/parsers/parser.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/validity_error.h \
  /usr/include/glib-2.0/glib/gvarianttype.h \
  /usr/include/glib-2.0/glib/gprimes.h \
  /usr/include/glib-2.0/glib/gmappedfile.h \
  /usr/include/libxml++-2.6/libxml++/nodes/entityreference.h \
  /usr/include/libxml++-2.6/libxml++/nodes/xincludeend.h \
  /usr/include/glib-2.0/glib/ghostutils.h \
  /usr/include/glib-2.0/glib/gversionmacros.h \
  /usr/include/glib-2.0/glib/gpattern.h \
  /usr/include/libxml++-2.6/libxml++/attribute.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/parse_error.h \
  /usr/include/glib-2.0/glib/gbytes.h \
  /usr/include/glib-2.0/glib/gkeyfile.h \
  /usr/include/glib-2.0/glib/gbookmarkfile.h \
  attacks/unconditionalattack/UnconditionalAttack.h \
  /usr/include/glib-2.0/glib/gregex.h \
  /usr/include/glib-2.0/glib/ghmac.h \
  /usr/include/glib-2.0/glib/gmem.h \
  /usr/include/libxml++-2.6/libxml++/dtd.h \
  /usr/include/glib-2.0/glib/gshell.h \
  /usr/include/glib-2.0/glib/ggettext.h \
  /usr/include/glib-2.0/glib/genviron.h \
  /usr/include/libxml++-2.6/libxml++/validators/validator.h \
  /usr/include/libxml++-2.6/libxml++/parsers/textreader.h \
  /usr/include/glib-2.0/glib/gspawn.h \
  /usr/include/glib-2.0/glib/gatomic.h \
  /usr/include/libxml++-2.6/libxml++/nodes/textnode.h \
  /usr/include/libxml++-2.6/libxml++/nodes/xincludestart.h \
  globalfilter/GlobalFilter.h \
  globalfilter/putmessages/PutMessages.h
$O/globalfilter/putmessages/PutMessages.o: globalfilter/putmessages/PutMessages.cc \
  globalfilter/putmessages/PutMessages.h \
  util/seapputils/seapputils.h
$O/linklayer/common/MACBase.o: linklayer/common/MACBase.cc \
  base/NotificationBoard.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  base/INotifiable.h \
  networklayer/common/IInterfaceTable.h \
  base/LifecycleOperation.h \
  base/Compat.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  status/NodeStatus.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPv6Address.h \
  base/NodeOperations.h \
  linklayer/common/MACBase.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h
$O/linklayer/common/WirelessMacBase.o: linklayer/common/WirelessMacBase.cc \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  linklayer/common/MACBase.h \
  linklayer/common/WirelessMacBase.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  base/NodeOperations.h \
  status/NodeStatus.h \
  networklayer/common/InterfaceToken.h \
  base/ModuleAccess.h \
  base/LifecycleOperation.h \
  base/Compat.h \
  base/NotificationBoard.h \
  networklayer/common/InterfaceEntry.h \
  base/INotifiable.h
$O/linklayer/configurator/Ieee8021dInterfaceData.o: linklayer/configurator/Ieee8021dInterfaceData.cc \
  base/Compat.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/configurator/Ieee8021dInterfaceData.h \
  networklayer/common/InterfaceToken.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h
$O/linklayer/configurator/L2NetworkConfigurator.o: linklayer/configurator/L2NetworkConfigurator.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceToken.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  networklayer/common/IInterfaceTable.h \
  util/PatternMatcher.h \
  base/Compat.h \
  linklayer/configurator/L2NetworkConfigurator.h \
  networklayer/common/InterfaceEntry.h \
  base/Topology.h \
  linklayer/configurator/Ieee8021dInterfaceData.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  util/stlutils.h
$O/linklayer/configurator/L2NodeConfigurator.o: linklayer/configurator/L2NodeConfigurator.cc \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  base/Topology.h \
  linklayer/configurator/Ieee8021dInterfaceData.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/configurator/L2NetworkConfigurator.h \
  base/Compat.h \
  util/PatternMatcher.h \
  base/LifecycleOperation.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  linklayer/configurator/L2NodeConfigurator.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  status/NodeStatus.h \
  networklayer/common/InterfaceToken.h \
  base/NodeOperations.h \
  networklayer/contract/IPv6Address.h
$O/linklayer/contract/MACAddress.o: linklayer/contract/MACAddress.cc \
  networklayer/common/InterfaceToken.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h
$O/linklayer/ethernet/EtherBus.o: linklayer/ethernet/EtherBus.cc \
  linklayer/ethernet/EtherBus.h \
  base/Compat.h \
  base/INETDefs.h
$O/linklayer/ethernet/EtherEncap.o: linklayer/ethernet/EtherEncap.cc \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/common/InterfaceEntry.h \
  base/Compat.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  linklayer/ethernet/EtherFrame.h \
  linklayer/ethernet/EtherEncap.h \
  networklayer/common/InterfaceToken.h \
  linklayer/ethernet/Ethernet.h \
  networklayer/contract/IPv6Address.h
$O/linklayer/ethernet/EtherFrameClassifier.o: linklayer/ethernet/EtherFrameClassifier.cc \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/Compat.h \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h \
  linklayer/ethernet/EtherFrame.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/ethernet/EtherFrameClassifier.h
$O/linklayer/ethernet/EtherHub.o: linklayer/ethernet/EtherHub.cc \
  base/Compat.h \
  base/INETDefs.h \
  linklayer/ethernet/EtherHub.h
$O/linklayer/ethernet/EtherLLC.o: linklayer/ethernet/EtherLLC.cc \
  linklayer/ethernet/Ethernet.h \
  base/NodeOperations.h \
  status/NodeStatus.h \
  linklayer/contract/MACAddress.h \
  linklayer/ethernet/EtherFrame.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  base/LifecycleOperation.h \
  base/Compat.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ethernet/EtherLLC.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/ModuleAccess.h
$O/linklayer/ethernet/EtherMAC.o: linklayer/ethernet/EtherMAC.cc \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/Compat.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ethernet/EtherMACBase.h \
  base/INotifiable.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  linklayer/ethernet/EtherFrame.h \
  base/IPassiveQueue.h \
  base/INETDefs.h \
  linklayer/common/MACBase.h \
  base/ILifecycle.h \
  linklayer/ethernet/Ethernet.h \
  status/NodeStatus.h \
  linklayer/ethernet/EtherMAC.h \
  networklayer/common/InterfaceToken.h
$O/linklayer/ethernet/EtherMACBase.o: linklayer/ethernet/EtherMACBase.cc \
  base/Compat.h \
  base/LifecycleOperation.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  base/INotifiable.h \
  linklayer/ethernet/EtherMACBase.h \
  base/NotificationBoard.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  util/opp_utils.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  base/NodeOperations.h \
  linklayer/ethernet/Ethernet.h \
  networklayer/contract/IPv6Address.h \
  status/NodeStatus.h \
  networklayer/common/InterfaceToken.h \
  linklayer/ethernet/EtherFrame.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  base/IPassiveQueue.h \
  base/INETDefs.h \
  linklayer/common/MACBase.h \
  base/ILifecycle.h
$O/linklayer/ethernet/EtherMACFullDuplex.o: linklayer/ethernet/EtherMACFullDuplex.cc \
  base/ILifecycle.h \
  linklayer/common/MACBase.h \
  base/IPassiveQueue.h \
  base/INETDefs.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  linklayer/ethernet/EtherFrame.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  linklayer/ethernet/EtherMACFullDuplex.h \
  linklayer/ethernet/Ethernet.h \
  base/ModuleAccess.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/NotificationBoard.h \
  linklayer/ethernet/EtherMACBase.h \
  base/INotifiable.h \
  networklayer/common/InterfaceEntry.h \
  base/Compat.h
$O/linklayer/ethernet/switch/MACAddressTable.o: linklayer/ethernet/switch/MACAddressTable.cc \
  base/Compat.h \
  linklayer/ethernet/switch/MACAddressTable.h \
  linklayer/ethernet/switch/IMACAddressTable.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h
$O/linklayer/ethernet/switch/MACRelayUnit.o: linklayer/ethernet/switch/MACRelayUnit.cc \
  status/NodeStatus.h \
  base/NodeOperations.h \
  linklayer/ethernet/Ethernet.h \
  base/IPassiveQueue.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  linklayer/common/MACBase.h \
  linklayer/ethernet/EtherFrame.h \
  linklayer/contract/MACAddress.h \
  base/INotifiable.h \
  linklayer/ethernet/EtherMACBase.h \
  base/Compat.h \
  base/LifecycleOperation.h \
  linklayer/ethernet/switch/IMACAddressTable.h \
  linklayer/ethernet/switch/MACRelayUnit.h \
  base/ModuleAccess.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/contract/Ieee802Ctrl_m.h
$O/linklayer/ext/ExtInterface.o: linklayer/ext/ExtInterface.cc \
  networklayer/common/IInterfaceTable.h \
  base/Compat.h \
  base/NotificationBoard.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  base/INotifiable.h \
  util/headerserializers/ipv4/IPv4Serializer.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPv4Address.h \
  linklayer/ext/ExtInterface.h \
  util/opp_utils.h \
  linklayer/ext/ExtFrame_m.h \
  linklayer/ext/cSocketRTScheduler.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/NotifierConsts.h \
  util/headerserializers/headers/bsdint.h \
  linklayer/common/MACBase.h \
  base/ILifecycle.h \
  base/INETDefs.h
$O/linklayer/ext/cSocketRTScheduler.o: linklayer/ext/cSocketRTScheduler.cc \
  linklayer/ext/ExtFrame_m.h \
  linklayer/ext/cSocketRTScheduler.h \
  base/Compat.h \
  util/headerserializers/headers/ethernet.h \
  base/INETDefs.h \
  util/headerserializers/headers/bsdint.h
$O/linklayer/idealwireless/IdealWirelessMac.o: linklayer/idealwireless/IdealWirelessMac.cc \
  world/radio/IdealChannelModel.h \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/BasicModule.h \
  linklayer/common/MACBase.h \
  linklayer/common/WirelessMacBase.h \
  base/INETDefs.h \
  base/IPassiveQueue.h \
  networklayer/contract/IPv6Address.h \
  base/NodeOperations.h \
  linklayer/contract/RadioState.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  util/FWMath.h \
  linklayer/idealwireless/IdealWirelessMac.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPvXAddress.h \
  world/radio/IdealChannelModelAccess.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  util/opp_utils.h \
  linklayer/radio/IdealRadio.h \
  networklayer/common/IInterfaceTable.h \
  base/LifecycleOperation.h \
  base/Compat.h \
  linklayer/radio/IdealAirFrame_m.h \
  linklayer/idealwireless/IdealWirelessFrame_m.h \
  base/Coord.h \
  base/NotificationBoard.h \
  base/INotifiable.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h
$O/linklayer/ieee80211/mac/Ieee80211DataRate.o: linklayer/ieee80211/mac/Ieee80211DataRate.cc \
  linklayer/radio/ModulationType.h \
  linklayer/ieee80211/radio/WifiPreambleType.h \
  linklayer/ieee80211/mac/WifiMode.h \
  base/INETDefs.h \
  base/Compat.h \
  linklayer/ieee80211/mac/Ieee80211DataRate.h
$O/linklayer/ieee80211/mac/Ieee80211Mac.o: linklayer/ieee80211/mac/Ieee80211Mac.cc \
  base/INotifiable.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/common/InterfaceEntry.h \
  base/NotificationBoard.h \
  base/Coord.h \
  base/Compat.h \
  base/LifecycleOperation.h \
  linklayer/contract/PhyControlInfo_m.h \
  networklayer/common/IInterfaceTable.h \
  util/opp_utils.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  base/FSMA.h \
  linklayer/ieee80211/mac/Ieee80211DataRate.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211eClassifier.h \
  util/FWMath.h \
  networklayer/common/InterfaceToken.h \
  linklayer/radio/Radio80211aControlInfo_m.h \
  status/NodeStatus.h \
  linklayer/radio/AirFrame_m.h \
  linklayer/ieee80211/mac/IQoSClassifier.h \
  linklayer/contract/RadioState.h \
  linklayer/ieee80211/radio/WifiPreambleType.h \
  base/NodeOperations.h \
  linklayer/radio/ModulationType.h \
  networklayer/contract/IPv6Address.h \
  linklayer/ieee80211/mac/Ieee80211Mac.h \
  base/IPassiveQueue.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  linklayer/common/WirelessMacBase.h \
  linklayer/common/MACBase.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  linklayer/ieee80211/mac/WifiMode.h
$O/linklayer/ieee80211/mac/Ieee80211eClassifier.o: linklayer/ieee80211/mac/Ieee80211eClassifier.cc \
  base/Compat.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/udp/UDPPacket_m.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/ipv4/ICMPMessage_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211eClassifier.h \
  networklayer/contract/IPv4Address.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPv6Address.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  transport/tcp_common/TCPSegment.h \
  linklayer/ieee80211/mac/IQoSClassifier.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/ByteArray.h \
  base/INETDefs.h \
  base/ByteArray_m.h
$O/linklayer/ieee80211/mac/WifiMode.o: linklayer/ieee80211/mac/WifiMode.cc \
  base/INETDefs.h \
  linklayer/ieee80211/mac/WifiMode.h \
  linklayer/ieee80211/radio/WifiPreambleType.h \
  linklayer/radio/ModulationType.h \
  linklayer/ieee80211/mac/Ieee80211DataRate.h \
  base/Compat.h
$O/linklayer/ieee80211/mgmt/Ieee80211AgentSTA.o: linklayer/ieee80211/mgmt/Ieee80211AgentSTA.cc \
  base/Compat.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/common/InterfaceTableAccess.h \
  base/INotifiable.h \
  base/NotificationBoard.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  util/opp_utils.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
  networklayer/contract/IPv6Address.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  networklayer/common/InterfaceToken.h \
  linklayer/ieee80211/mgmt/Ieee80211AgentSTA.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  base/ILifecycle.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAP.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAP.cc \
  base/INotifiable.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/NotificationBoard.h \
  base/Compat.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  base/ModuleAccess.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  linklayer/contract/RadioState.h \
  linklayer/ethernet/Ethernet.h \
  base/IPassiveQueue.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAP.h \
  linklayer/ethernet/EtherFrame.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  base/PassiveQueueBase.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.cc \
  base/ILifecycle.h \
  base/INETDefs.h \
  base/IPassiveQueue.h \
  base/PassiveQueueBase.h \
  linklayer/ethernet/EtherFrame.h \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  linklayer/ethernet/Ethernet.h \
  base/ModuleAccess.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
  base/NotificationBoard.h \
  base/INotifiable.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/Compat.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.cc \
  base/PassiveQueueBase.h \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h \
  linklayer/ethernet/EtherFrame.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  base/IPassiveQueue.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
  base/ModuleAccess.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  base/Compat.h \
  base/NotificationBoard.h \
  base/INotifiable.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.cc \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  base/ILifecycle.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.h \
  base/IPassiveQueue.h \
  base/INETDefs.h \
  base/PassiveQueueBase.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  base/NotificationBoard.h \
  base/INotifiable.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/Compat.h \
  base/ModuleAccess.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  linklayer/contract/Ieee802Ctrl_m.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.o: linklayer/ieee80211/mgmt/Ieee80211MgmtBase.cc \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  base/PassiveQueueBase.h \
  base/IPassiveQueue.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  base/NodeOperations.h \
  status/NodeStatus.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  base/ModuleAccess.h \
  base/LifecycleOperation.h \
  base/Compat.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/INotifiable.h \
  base/NotificationBoard.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.o: linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.cc \
  base/IPassiveQueue.h \
  base/INETDefs.h \
  base/BasicModule.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  base/PassiveQueueBase.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  networklayer/common/InterfaceToken.h \
  linklayer/radio/Radio80211aControlInfo_m.h \
  linklayer/contract/RadioState.h \
  networklayer/contract/IPv6Address.h \
  linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
  linklayer/radio/ModulationType.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  util/opp_utils.h \
  world/radio/ChannelAccess.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  world/radio/IChannelControl.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.h \
  util/FWMath.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/INotifiable.h \
  base/NotificationBoard.h \
  base/Coord.h \
  linklayer/contract/PhyControlInfo_m.h \
  base/Compat.h \
  networklayer/common/IInterfaceTable.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.o: linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.cc \
  base/Compat.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.h \
  base/INotifiable.h \
  base/NotificationBoard.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  base/ModuleAccess.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  base/PassiveQueueBase.h \
  base/IPassiveQueue.h \
  base/INETDefs.h \
  base/ILifecycle.h
$O/linklayer/ieee80211/radio/BerParseFile.o: linklayer/ieee80211/radio/BerParseFile.cc \
  base/Compat.h \
  linklayer/ieee80211/radio/BerParseFile.h \
  base/INETDefs.h
$O/linklayer/ieee80211/radio/Ieee80211RadioModel.o: linklayer/ieee80211/radio/Ieee80211RadioModel.cc \
  linklayer/ieee80211/radio/errormodel/nist-error-rate-model.h \
  base/Compat.h \
  linklayer/contract/PhyControlInfo_m.h \
  linklayer/ieee80211/radio/errormodel/yans-error-rate-model.h \
  linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.h \
  base/Coord.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  util/FWMath.h \
  linklayer/radio/ModulationType.h \
  linklayer/radio/SnrList.h \
  linklayer/radio/IRadioModel.h \
  linklayer/ieee80211/radio/Ieee80211RadioModel.h \
  linklayer/ieee80211/radio/BerParseFile.h \
  linklayer/radio/AirFrame_m.h \
  linklayer/ieee80211/radio/WifiPreambleType.h \
  linklayer/ieee80211/mac/WifiMode.h \
  base/INETDefs.h \
  linklayer/ieee80211/radio/errormodel/IErrorModel.h
$O/linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.o: linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.cc \
  base/INETDefs.h \
  base/Compat.h \
  linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.h
$O/linklayer/ieee80211/radio/errormodel/nist-error-rate-model.o: linklayer/ieee80211/radio/errormodel/nist-error-rate-model.cc \
  linklayer/ieee80211/radio/errormodel/nist-error-rate-model.h \
  base/Compat.h \
  linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.h \
  linklayer/radio/ModulationType.h \
  linklayer/ieee80211/radio/WifiPreambleType.h \
  linklayer/ieee80211/mac/WifiMode.h \
  base/INETDefs.h \
  linklayer/ieee80211/radio/errormodel/IErrorModel.h
$O/linklayer/ieee80211/radio/errormodel/yans-error-rate-model.o: linklayer/ieee80211/radio/errormodel/yans-error-rate-model.cc \
  linklayer/ieee80211/radio/errormodel/yans-error-rate-model.h \
  base/Compat.h \
  linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.h \
  linklayer/ieee80211/mac/WifiMode.h \
  base/INETDefs.h \
  linklayer/ieee80211/radio/errormodel/IErrorModel.h \
  linklayer/radio/ModulationType.h \
  linklayer/ieee80211/radio/WifiPreambleType.h
$O/linklayer/ieee8021d/common/STPBase.o: linklayer/ieee8021d/common/STPBase.cc \
  base/NodeOperations.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  linklayer/ieee8021d/common/STPBase.h \
  base/LifecycleOperation.h \
  base/Compat.h \
  networklayer/common/IInterfaceTable.h \
  base/INotifiable.h \
  networklayer/common/InterfaceEntry.h \
  base/NotificationBoard.h \
  linklayer/configurator/Ieee8021dInterfaceData.h \
  linklayer/ethernet/switch/IMACAddressTable.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h
$O/linklayer/ieee8021d/relay/Ieee8021dRelay.o: linklayer/ieee8021d/relay/Ieee8021dRelay.cc \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h \
  base/INETDefs.h \
  linklayer/ieee8021d/common/Ieee8021dBPDU_m.h \
  base/ILifecycle.h \
  linklayer/ethernet/Ethernet.h \
  base/NodeOperations.h \
  networklayer/contract/IPv6Address.h \
  status/NodeStatus.h \
  networklayer/common/InterfaceToken.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/configurator/Ieee8021dInterfaceData.h \
  linklayer/ethernet/switch/IMACAddressTable.h \
  linklayer/ethernet/EtherFrame_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  base/LifecycleOperation.h \
  linklayer/ieee8021d/relay/Ieee8021dRelay.h \
  base/Compat.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceEntry.h \
  base/INotifiable.h \
  base/NotificationBoard.h
$O/linklayer/ieee8021d/rstp/RSTP.o: linklayer/ieee8021d/rstp/RSTP.cc \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  base/NodeOperations.h \
  linklayer/ethernet/Ethernet.h \
  networklayer/contract/IPv6Address.h \
  linklayer/ieee8021d/common/Ieee8021dBPDU_m.h \
  base/INETDefs.h \
  linklayer/ieee8021d/common/STPBase.h \
  base/ILifecycle.h \
  linklayer/ieee8021d/rstp/RSTP.h \
  linklayer/ethernet/EtherFrame.h \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  networklayer/common/InterfaceEntry.h \
  base/NotificationBoard.h \
  base/Compat.h \
  base/LifecycleOperation.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/ethernet/switch/IMACAddressTable.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTable.h \
  base/ModuleAccess.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/ethernet/switch/MACAddressTable.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/configurator/Ieee8021dInterfaceData.h
$O/linklayer/ieee8021d/stp/STP.o: linklayer/ieee8021d/stp/STP.cc \
  base/INETDefs.h \
  linklayer/ieee8021d/common/Ieee8021dBPDU_m.h \
  linklayer/ieee8021d/common/STPBase.h \
  base/ILifecycle.h \
  linklayer/ethernet/EtherFrame.h \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h \
  status/NodeStatus.h \
  linklayer/ieee8021d/stp/STP.h \
  networklayer/common/InterfaceToken.h \
  base/NodeOperations.h \
  linklayer/ethernet/Ethernet.h \
  networklayer/contract/IPv6Address.h \
  linklayer/ethernet/switch/IMACAddressTable.h \
  linklayer/ethernet/EtherFrame_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/configurator/Ieee8021dInterfaceData.h \
  networklayer/common/InterfaceEntry.h \
  base/INotifiable.h \
  base/NotificationBoard.h \
  base/Compat.h \
  base/LifecycleOperation.h \
  networklayer/common/IInterfaceTable.h
$O/linklayer/ieee8021d/tester/STPTester.o: linklayer/ieee8021d/tester/STPTester.cc \
  linklayer/configurator/Ieee8021dInterfaceData.h \
  linklayer/ieee8021d/tester/STPTester.h \
  base/Topology.h \
  linklayer/ethernet/switch/IMACAddressTable.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTable.h \
  base/Compat.h \
  base/LifecycleOperation.h \
  networklayer/common/IInterfaceTable.h \
  base/INotifiable.h \
  networklayer/common/InterfaceEntry.h \
  base/NotificationBoard.h \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h \
  linklayer/ieee8021d/common/Ieee8021dBPDU_m.h \
  base/INETDefs.h \
  linklayer/ieee8021d/common/STPBase.h \
  base/ILifecycle.h \
  base/NodeOperations.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceToken.h \
  linklayer/ieee8021d/stp/STP.h \
  status/NodeStatus.h
$O/linklayer/loopback/Loopback.o: linklayer/loopback/Loopback.cc \
  networklayer/common/IInterfaceTable.h \
  base/Compat.h \
  base/NotificationBoard.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  base/INotifiable.h \
  linklayer/contract/TxNotifDetails.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  util/opp_utils.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceToken.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  linklayer/loopback/Loopback.h \
  linklayer/common/MACBase.h \
  base/ILifecycle.h \
  base/IPassiveQueue.h \
  base/INETDefs.h
$O/linklayer/ppp/PPP.o: linklayer/ppp/PPP.cc \
  status/NodeStatus.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPv6Address.h \
  base/NodeOperations.h \
  linklayer/ppp/PPPFrame_m.h \
  linklayer/common/MACBase.h \
  base/ILifecycle.h \
  base/IPassiveQueue.h \
  base/INETDefs.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  base/NotificationBoard.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  base/INotifiable.h \
  linklayer/contract/TxNotifDetails.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/ppp/PPP.h \
  base/Compat.h \
  base/LifecycleOperation.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  util/opp_utils.h
$O/linklayer/queue/AlgorithmicDropperBase.o: linklayer/queue/AlgorithmicDropperBase.cc \
  linklayer/queue/IQueueAccess.h \
  base/INETDefs.h \
  linklayer/queue/AlgorithmicDropperBase.h \
  base/Compat.h
$O/linklayer/queue/DropTailQueue.o: linklayer/queue/DropTailQueue.cc \
  base/Compat.h \
  linklayer/queue/DropTailQueue.h \
  base/PassiveQueueBase.h \
  base/INETDefs.h \
  base/IPassiveQueue.h
$O/linklayer/queue/FIFOQueue.o: linklayer/queue/FIFOQueue.cc \
  linklayer/queue/FIFOQueue.h \
  base/PassiveQueueBase.h \
  linklayer/queue/IQueueAccess.h \
  base/INETDefs.h \
  base/IPassiveQueue.h \
  base/Compat.h
$O/linklayer/queue/PriorityScheduler.o: linklayer/queue/PriorityScheduler.cc \
  base/Compat.h \
  linklayer/queue/SchedulerBase.h \
  linklayer/queue/PriorityScheduler.h \
  base/INETDefs.h \
  base/IPassiveQueue.h
$O/linklayer/queue/REDDropper.o: linklayer/queue/REDDropper.cc \
  linklayer/queue/AlgorithmicDropperBase.h \
  linklayer/queue/IQueueAccess.h \
  base/INETDefs.h \
  base/Compat.h \
  util/opp_utils.h \
  linklayer/queue/REDDropper.h
$O/linklayer/queue/SchedulerBase.o: linklayer/queue/SchedulerBase.cc \
  base/IPassiveQueue.h \
  base/INETDefs.h \
  linklayer/queue/SchedulerBase.h \
  base/Compat.h
$O/linklayer/queue/ThresholdDropper.o: linklayer/queue/ThresholdDropper.cc \
  linklayer/queue/ThresholdDropper.h \
  base/Compat.h \
  base/INETDefs.h \
  linklayer/queue/IQueueAccess.h \
  linklayer/queue/AlgorithmicDropperBase.h
$O/linklayer/queue/WRRScheduler.o: linklayer/queue/WRRScheduler.cc \
  linklayer/queue/WRRScheduler.h \
  base/IPassiveQueue.h \
  base/INETDefs.h \
  base/Compat.h \
  util/opp_utils.h \
  linklayer/queue/SchedulerBase.h
$O/linklayer/radio/GenericRadioModel.o: linklayer/radio/GenericRadioModel.cc \
  linklayer/radio/IModulation.h \
  linklayer/radio/AirFrame_m.h \
  linklayer/radio/IRadioModel.h \
  linklayer/radio/Modulation.h \
  linklayer/radio/SnrList.h \
  linklayer/radio/ModulationType.h \
  base/INETDefs.h \
  linklayer/radio/GenericRadioModel.h \
  base/Coord.h \
  linklayer/contract/PhyControlInfo_m.h \
  base/Compat.h \
  util/FWMath.h
$O/linklayer/radio/IdealRadio.o: linklayer/radio/IdealRadio.cc \
  world/radio/IdealChannelModelAccess.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  base/INotifiable.h \
  base/Coord.h \
  base/NotificationBoard.h \
  base/LifecycleOperation.h \
  base/Compat.h \
  linklayer/radio/IdealAirFrame_m.h \
  linklayer/radio/IdealRadio.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  base/BasicModule.h \
  base/NotifierConsts.h \
  world/radio/IdealChannelModel.h \
  status/NodeStatus.h \
  linklayer/contract/RadioState.h \
  base/NodeOperations.h
$O/linklayer/radio/Modulation.o: linklayer/radio/Modulation.cc \
  base/Compat.h \
  linklayer/radio/Modulation.h \
  linklayer/radio/IModulation.h \
  base/INETDefs.h
$O/linklayer/radio/Radio.o: linklayer/radio/Radio.cc \
  linklayer/radio/Radio80211aControlInfo_m.h \
  status/NodeStatus.h \
  linklayer/radio/AirFrame_m.h \
  linklayer/contract/RadioState.h \
  base/NodeOperations.h \
  linklayer/radio/IRadioModel.h \
  linklayer/radio/ModulationType.h \
  linklayer/radio/SnrList.h \
  base/INETDefs.h \
  base/BasicModule.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  battery/models/BasicBattery.h \
  ./world/annotations/AnnotationManager.h \
  base/INotifiable.h \
  linklayer/radio/propagation/IReceptionModel.h \
  world/obstacles/ObstacleControl.h \
  base/NotificationBoard.h \
  base/Coord.h \
  linklayer/radio/Radio.h \
  base/Compat.h \
  base/LifecycleOperation.h \
  linklayer/contract/PhyControlInfo_m.h \
  linklayer/radio/INoiseGenerator.h \
  base/ModuleAccess.h \
  world/radio/ChannelAccess.h \
  ./world/obstacles/Obstacle.h \
  world/radio/IChannelControl.h \
  util/FWMath.h
$O/linklayer/radio/propagation/FreeSpaceModel.o: linklayer/radio/propagation/FreeSpaceModel.cc \
  base/BasicModule.h \
  base/INETDefs.h \
  base/NotifierConsts.h \
  base/Coord.h \
  base/NotificationBoard.h \
  linklayer/radio/propagation/IReceptionModel.h \
  base/INotifiable.h \
  base/Compat.h \
  world/radio/ChannelAccess.h \
  base/ModuleAccess.h \
  linklayer/radio/propagation/FreeSpaceModel.h \
  util/FWMath.h \
  world/radio/IChannelControl.h
$O/linklayer/radio/propagation/LogNormalShadowingModel.o: linklayer/radio/propagation/LogNormalShadowingModel.cc \
  util/FWMath.h \
  linklayer/radio/propagation/FreeSpaceModel.h \
  linklayer/radio/propagation/LogNormalShadowingModel.h \
  base/Compat.h \
  linklayer/radio/propagation/IReceptionModel.h \
  base/INETDefs.h
$O/linklayer/radio/propagation/NakagamiModel.o: linklayer/radio/propagation/NakagamiModel.cc \
  linklayer/radio/propagation/NakagamiModel.h \
  base/Compat.h \
  linklayer/radio/propagation/IReceptionModel.h \
  util/FWMath.h \
  linklayer/radio/propagation/FreeSpaceModel.h \
  base/INETDefs.h
$O/linklayer/radio/propagation/RayleighModel.o: linklayer/radio/propagation/RayleighModel.cc \
  base/INETDefs.h \
  linklayer/radio/propagation/RayleighModel.h \
  linklayer/radio/propagation/FreeSpaceModel.h \
  util/FWMath.h \
  linklayer/radio/propagation/IReceptionModel.h \
  base/Compat.h
$O/linklayer/radio/propagation/RiceModel.o: linklayer/radio/propagation/RiceModel.cc \
  util/FWMath.h \
  linklayer/radio/propagation/FreeSpaceModel.h \
  base/Compat.h \
  linklayer/radio/propagation/RiceModel.h \
  linklayer/radio/propagation/IReceptionModel.h \
  base/INETDefs.h
$O/linklayer/radio/propagation/SUIModel.o: linklayer/radio/propagation/SUIModel.cc \
  util/FWMath.h \
  linklayer/radio/propagation/SUIModel.h \
  linklayer/radio/propagation/FreeSpaceModel.h \
  base/Compat.h \
  linklayer/radio/propagation/IReceptionModel.h \
  base/INETDefs.h
$O/linklayer/radio/propagation/TwoRayGroundModel.o: linklayer/radio/propagation/TwoRayGroundModel.cc \
  linklayer/radio/propagation/IReceptionModel.h \
  base/Compat.h \
  linklayer/radio/propagation/FreeSpaceModel.h \
  util/FWMath.h \
  linklayer/radio/propagation/TwoRayGroundModel.h \
  base/INETDefs.h
$O/localfilter/LocalFilter.o: localfilter/LocalFilter.cc \
  actions/actionbase/ActionBase.h \
  /usr/lib/x86_64-linux-gnu/glibmm-2.4/include/glibmmconfig.h \
  /usr/include/glib-2.0/glib/gutils.h \
  /usr/include/glib-2.0/glib/gdatetime.h \
  localfilter/LocalFilter.h \
  /usr/include/glib-2.0/glib/deprecated/gthread.h \
  /usr/include/libxml++-2.6/libxml++/nodes/entitydeclaration.h \
  /usr/include/glib-2.0/glib/deprecated/grel.h \
  /usr/include/glib-2.0/glib/gcharset.h \
  linklayer/contract/MACAddress.h \
  /usr/include/glib-2.0/glib/gtestutils.h \
  attacks/physicalattack/PhysicalAttack.h \
  /usr/include/libxml++-2.6/libxml++/attributenode.h \
  /usr/include/glib-2.0/glib/gversion.h \
  actions/change/Change.h \
  /usr/include/libxml++-2.6/libxml++/nodes/processinginstructionnode.h \
  /usr/include/glib-2.0/glib/gchecksum.h \
  /usr/include/libxml++-2.6/libxml++/noncopyable.h \
  /usr/include/libxml++-2.6/libxml++/validators/schemavalidator.h \
  /usr/include/glib-2.0/glib/ghmac.h \
  /usr/include/glib-2.0/glib/gmem.h \
  /usr/include/glib-2.0/glib/gregex.h \
  /usr/include/glib-2.0/glib/ggettext.h \
  /usr/include/libxml++-2.6/libxml++/dtd.h \
  /usr/include/glib-2.0/glib/gshell.h \
  /usr/include/glib-2.0/glib/genviron.h \
  globalfilter/putmessages/PutMessages.h \
  attacks/conditionalattack/packetfilter/PacketFilter.h \
  /usr/include/glib-2.0/glib/gvarianttype.h \
  /usr/include/glib-2.0/glib/gmappedfile.h \
  /usr/include/libxml++-2.6/libxml++/attribute.h \
  networklayer/contract/IPv6Address.h \
  /usr/include/glib-2.0/glib/gversionmacros.h \
  /usr/include/glib-2.0/glib/gbytes.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/parse_error.h \
  /usr/include/glib-2.0/glib/gmessages.h \
  /usr/include/glib-2.0/glib/gtimezone.h \
  /usr/include/glibmm-2.4/glibmm/unicode.h \
  /usr/include/glib-2.0/glib/deprecated/gcache.h \
  /usr/include/glib-2.0/glib/gtree.h \
  /usr/include/glib-2.0/glib/gsequence.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  /usr/include/glib-2.0/glib/gquark.h \
  /usr/include/glib-2.0/glib/deprecated/gmain.h \
  /usr/include/glib-2.0/glib/glist.h \
  /usr/include/libxml++-2.6/libxml++/document.h \
  /usr/include/glib-2.0/glib/gwin32.h \
  /usr/include/glib-2.0/glib/grand.h \
  /usr/include/glib-2.0/glib/gnode.h \
  /usr/include/libxml++-2.6/libxml++/parsers/saxparser.h \
  attacks/attackbase/AttackBase.h \
  /usr/include/glib-2.0/glib/gqueue.h \
  /usr/include/glib-2.0/glib/garray.h \
  /usr/include/libxml++-2.6/libxml++/nodes/contentnode.h \
  /usr/include/glib-2.0/glib/deprecated/gcompletion.h \
  /usr/include/glib-2.0/glib/gerror.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/exception.h \
  attacks/conditionalattack/conditionalattack/ConditionalAttack.h \
  /usr/include/glib-2.0/glib/gthread.h \
  /usr/include/glib-2.0/glib/galloca.h \
  /usr/include/glib-2.0/glib/gstring.h \
  /usr/include/glib-2.0/glib/gbacktrace.h \
  base/Compat.h \
  /usr/include/libxml++-2.6/libxml++/libxml++.h \
  /usr/include/glib-2.0/glib/deprecated/gallocator.h \
  /usr/include/glib-2.0/glib/gunicode.h \
  networklayer/common/IInterfaceTable.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/internal_error.h \
  util/seapputils/seapputils.h \
  /usr/include/libxml++-2.6/libxml++/schema.h \
  /usr/include/glib-2.0/glib/gbitlock.h \
  /usr/include/glib-2.0/glib/gmarkup.h \
  /usr/include/libxml++-2.6/libxml++/nodes/commentnode.h \
  base/INETDefs.h \
  /usr/include/libxml++-2.6/libxml++/nodes/node.h \
  /usr/include/glib-2.0/glib/gtrashstack.h \
  /usr/include/glib-2.0/glib.h \
  /usr/include/glib-2.0/glib/gbase64.h \
  /usr/include/glib-2.0/glib/goption.h \
  /usr/include/glib-2.0/glib/gfileutils.h \
  /usr/include/glib-2.0/glib/gqsort.h \
  /usr/include/glib-2.0/glib/gtimer.h \
  base/NotifierConsts.h \
  /usr/include/glib-2.0/glib/gslist.h \
  /usr/include/libxml++-2.6/libxml++/nodes/element.h \
  /usr/include/glib-2.0/glib/gstrfuncs.h \
  /usr/include/glib-2.0/glib/gmain.h \
  /usr/lib/libxml++-2.6/include/libxml++config.h \
  /usr/include/glib-2.0/glib/gbookmarkfile.h \
  /usr/include/glib-2.0/glib/gkeyfile.h \
  networklayer/common/InterfaceToken.h \
  /usr/include/glib-2.0/glib/gspawn.h \
  /usr/include/glib-2.0/glib/gatomic.h \
  /usr/include/libxml++-2.6/libxml++/parsers/textreader.h \
  /usr/include/libxml++-2.6/libxml++/validators/validator.h \
  /usr/include/libxml++-2.6/libxml++/nodes/xincludestart.h \
  /usr/include/libxml++-2.6/libxml++/nodes/textnode.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/validity_error.h \
  /usr/include/libxml++-2.6/libxml++/parsers/parser.h \
  /usr/include/libxml++-2.6/libxml++/nodes/entityreference.h \
  /usr/include/glib-2.0/glib/gprimes.h \
  /usr/include/glib-2.0/glib/gpattern.h \
  /usr/include/glib-2.0/glib/ghostutils.h \
  /usr/include/libxml++-2.6/libxml++/nodes/xincludeend.h \
  /usr/include/glib-2.0/glib/gdate.h \
  /usr/include/libxml++-2.6/libxml++/validators/dtdvalidator.h \
  /usr/include/glib-2.0/glib/ghook.h \
  attacks/conditionalattack/packetfilter/FilterBlock.h \
  /usr/include/glib-2.0/glib/gmacros.h \
  /usr/include/glibmm-2.4/glibmm/ustring.h \
  /usr/include/glib-2.0/glib/gdir.h \
  /usr/include/glib-2.0/glib/ghash.h \
  exmachina/ExMachina.h \
  /usr/include/libxml++-2.6/libxml++/nodes/cdatanode.h \
  /usr/include/glib-2.0/glib/gurifuncs.h \
  /usr/include/libxml++-2.6/libxml++/parsers/domparser.h \
  /usr/include/glib-2.0/glib/gtypes.h \
  networklayer/common/InterfaceEntry.h \
  variable/Variable.h \
  /usr/lib/x86_64-linux-gnu/glib-2.0/include/glibconfig.h \
  networklayer/common/InterfaceTableAccess.h \
  /usr/include/libxml++-2.6/libxml++/attributedeclaration.h \
  /usr/include/glib-2.0/glib/gstringchunk.h \
  /usr/include/glib-2.0/glib/gvariant.h \
  /usr/include/glib-2.0/glib/gdataset.h \
  /usr/include/glib-2.0/glib/gthreadpool.h \
  /usr/include/glib-2.0/glib/gconvert.h \
  /usr/include/glib-2.0/glib/gpoll.h \
  parser/Parser.h \
  /usr/include/glib-2.0/glib/giochannel.h \
  /usr/include/glib-2.0/glib/gscanner.h \
  attacks/attackentry/AttackEntry.h \
  /usr/include/glib-2.0/glib/gslice.h \
  /usr/include/glib-2.0/glib/gasyncqueue.h
$O/mobility/common/LineSegmentsMobilityBase.o: mobility/common/LineSegmentsMobilityBase.cc \
  base/INETDefs.h \
  mobility/common/LineSegmentsMobilityBase.h \
  mobility/common/MovingMobilityBase.h \
  base/Coord.h \
  mobility/contract/IMobility.h \
  mobility/common/MobilityBase.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  base/Compat.h
$O/mobility/common/MobilityAccess.o: mobility/common/MobilityAccess.cc \
  mobility/contract/IMobility.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  mobility/common/MobilityAccess.h \
  base/Compat.h \
  base/INETDefs.h \
  base/Coord.h
$O/mobility/common/MobilityBase.o: mobility/common/MobilityBase.cc \
  util/FWMath.h \
  base/ModuleAccess.h \
  base/Compat.h \
  mobility/contract/IMobility.h \
  mobility/common/MobilityBase.h \
  base/Coord.h \
  base/INETDefs.h
$O/mobility/common/MovingMobilityBase.o: mobility/common/MovingMobilityBase.cc \
  mobility/contract/IMobility.h \
  mobility/common/MobilityBase.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  base/Compat.h \
  base/INETDefs.h \
  mobility/common/MovingMobilityBase.h \
  base/Coord.h
$O/mobility/contract/IMobility.o: mobility/contract/IMobility.cc \
  base/Coord.h \
  base/INETDefs.h \
  base/Compat.h \
  util/FWMath.h \
  mobility/contract/IMobility.h
$O/mobility/group/MoBANCoordinator.o: mobility/group/MoBANCoordinator.cc \
  mobility/common/MobilityAccess.h \
  base/Compat.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  mobility/common/MobilityBase.h \
  mobility/contract/IMobility.h \
  base/Coord.h \
  mobility/group/PostureTransition.h \
  mobility/common/MovingMobilityBase.h \
  mobility/group/MoBANCoordinator.h \
  mobility/group/MoBANLocal.h \
  mobility/group/Posture.h \
  base/INETDefs.h \
  mobility/common/LineSegmentsMobilityBase.h
$O/mobility/group/MoBANLocal.o: mobility/group/MoBANLocal.cc \
  mobility/group/Posture.h \
  mobility/common/LineSegmentsMobilityBase.h \
  base/INETDefs.h \
  base/Coord.h \
  mobility/group/PostureTransition.h \
  mobility/group/MoBANLocal.h \
  mobility/group/MoBANCoordinator.h \
  mobility/common/MovingMobilityBase.h \
  mobility/common/MobilityBase.h \
  mobility/contract/IMobility.h \
  base/Compat.h \
  util/FWMath.h \
  base/ModuleAccess.h
$O/mobility/group/Posture.o: mobility/group/Posture.cc \
  mobility/group/Posture.h \
  base/INETDefs.h \
  base/Coord.h \
  base/Compat.h \
  util/FWMath.h
$O/mobility/group/PostureTransition.o: mobility/group/PostureTransition.cc \
  base/INETDefs.h \
  mobility/group/PostureTransition.h \
  base/Coord.h \
  util/FWMath.h \
  base/Compat.h
$O/mobility/single/ANSimMobility.o: mobility/single/ANSimMobility.cc \
  base/Compat.h \
  util/FWMath.h \
  base/ModuleAccess.h \
  mobility/common/MobilityBase.h \
  mobility/contract/IMobility.h \
  base/Coord.h \
  mobility/common/MovingMobilityBase.h \
  mobility/single/ANSimMobility.h \
  mobility/common/LineSegmentsMobilityBase.h \
  base/INETDefs.h
$O/mobility/single/BonnMotionFileCache.o: mobility/single/BonnMotionFileCache.cc \
  base/Compat.h \
  base/INETDefs.h \
  mobility/single/BonnMotionFileCache.h
$O/mobility/single/BonnMotionMobility.o: mobility/single/BonnMotionMobility.cc \
  base/INETDefs.h \
  mobility/single/BonnMotionFileCache.h \
  mobility/common/LineSegmentsMobilityBase.h \
  base/Coord.h \
  mobility/single/BonnMotionMobility.h \
  mobility/common/MovingMobilityBase.h \
  mobility/common/MobilityBase.h \
  mobility/contract/IMobility.h \
  base/Compat.h \
  base/ModuleAccess.h \
  util/FWMath.h
$O/mobility/single/ChiangMobility.o: mobility/single/ChiangMobility.cc \
  base/Coord.h \
  mobility/common/MovingMobilityBase.h \
  mobility/common/LineSegmentsMobilityBase.h \
  base/INETDefs.h \
  base/Compat.h \
  util/FWMath.h \
  base/ModuleAccess.h \
  mobility/common/MobilityBase.h \
  mobility/single/ChiangMobility.h \
  mobility/contract/IMobility.h
$O/mobility/single/CircleMobility.o: mobility/single/CircleMobility.cc \
  base/Coord.h \
  mobility/common/MovingMobilityBase.h \
  mobility/single/CircleMobility.h \
  base/INETDefs.h \
  base/Compat.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  mobility/common/MobilityBase.h \
  mobility/contract/IMobility.h
$O/mobility/single/ConstSpeedMobility.o: mobility/single/ConstSpeedMobility.cc \
  mobility/contract/IMobility.h \
  mobility/common/MobilityBase.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  base/Compat.h \
  base/INETDefs.h \
  mobility/common/LineSegmentsMobilityBase.h \
  mobility/common/MovingMobilityBase.h \
  mobility/single/ConstSpeedMobility.h \
  base/Coord.h
$O/mobility/single/GaussMarkovMobility.o: mobility/single/GaussMarkovMobility.cc \
  base/Compat.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  mobility/common/MobilityBase.h \
  mobility/contract/IMobility.h \
  base/Coord.h \
  mobility/common/MovingMobilityBase.h \
  base/INETDefs.h \
  mobility/single/GaussMarkovMobility.h \
  mobility/common/LineSegmentsMobilityBase.h
$O/mobility/single/LinearMobility.o: mobility/single/LinearMobility.cc \
  mobility/contract/IMobility.h \
  mobility/common/MobilityBase.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  base/Compat.h \
  mobility/single/LinearMobility.h \
  base/INETDefs.h \
  mobility/common/MovingMobilityBase.h \
  base/Coord.h
$O/mobility/single/LinearNodeDistributionMobility.o: mobility/single/LinearNodeDistributionMobility.cc \
  mobility/common/MobilityBase.h \
  mobility/contract/IMobility.h \
  mobility/single/LinearNodeDistributionMobility.h \
  base/Compat.h \
  mobility/static/StationaryMobility.h \
  util/FWMath.h \
  base/ModuleAccess.h \
  base/INETDefs.h \
  base/Coord.h
$O/mobility/single/MassMobility.o: mobility/single/MassMobility.cc \
  mobility/common/MovingMobilityBase.h \
  base/Coord.h \
  mobility/common/LineSegmentsMobilityBase.h \
  mobility/single/MassMobility.h \
  base/INETDefs.h \
  util/FWMath.h \
  base/ModuleAccess.h \
  base/Compat.h \
  mobility/contract/IMobility.h \
  mobility/common/MobilityBase.h
$O/mobility/single/Ns2MotionMobility.o: mobility/single/Ns2MotionMobility.cc \
  mobility/contract/IMobility.h \
  mobility/common/MobilityBase.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  base/Compat.h \
  base/INETDefs.h \
  mobility/single/Ns2MotionMobility.h \
  mobility/common/LineSegmentsMobilityBase.h \
  mobility/common/MovingMobilityBase.h \
  base/Coord.h
$O/mobility/single/RandomWPMobility.o: mobility/single/RandomWPMobility.cc \
  base/ModuleAccess.h \
  util/FWMath.h \
  base/Compat.h \
  mobility/contract/IMobility.h \
  mobility/common/MobilityBase.h \
  mobility/common/MovingMobilityBase.h \
  base/Coord.h \
  base/INETDefs.h \
  mobility/single/RandomWPMobility.h \
  mobility/common/LineSegmentsMobilityBase.h
$O/mobility/single/RectangleMobility.o: mobility/single/RectangleMobility.cc \
  base/Compat.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  mobility/common/MobilityBase.h \
  mobility/contract/IMobility.h \
  base/Coord.h \
  mobility/common/MovingMobilityBase.h \
  mobility/single/RectangleMobility.h \
  base/INETDefs.h
$O/mobility/single/TraCIMobility.o: mobility/single/TraCIMobility.cc \
  base/Coord.h \
  ./mobility/single/TraCIMobility.h \
  base/INETDefs.h \
  ./world/traci/TraCIScenarioManager.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  base/Compat.h \
  mobility/contract/IMobility.h \
  mobility/common/MobilityBase.h
$O/mobility/single/TractorMobility.o: mobility/single/TractorMobility.cc \
  mobility/common/LineSegmentsMobilityBase.h \
  base/INETDefs.h \
  mobility/common/MovingMobilityBase.h \
  base/Coord.h \
  mobility/single/TractorMobility.h \
  mobility/contract/IMobility.h \
  mobility/common/MobilityBase.h \
  util/FWMath.h \
  base/ModuleAccess.h \
  base/Compat.h
$O/mobility/single/TurtleMobility.o: mobility/single/TurtleMobility.cc \
  mobility/common/MobilityBase.h \
  mobility/contract/IMobility.h \
  base/Compat.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  base/INETDefs.h \
  mobility/common/LineSegmentsMobilityBase.h \
  base/Coord.h \
  mobility/single/TurtleMobility.h \
  mobility/common/MovingMobilityBase.h
$O/mobility/static/StaticGridMobility.o: mobility/static/StaticGridMobility.cc \
  mobility/contract/IMobility.h \
  mobility/common/MobilityBase.h \
  base/ModuleAccess.h \
  mobility/static/StaticGridMobility.h \
  util/FWMath.h \
  mobility/static/StationaryMobility.h \
  base/Compat.h \
  base/INETDefs.h \
  base/Coord.h
$O/mobility/static/StationaryMobility.o: mobility/static/StationaryMobility.cc \
  base/Coord.h \
  base/INETDefs.h \
  mobility/static/StationaryMobility.h \
  base/Compat.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  mobility/common/MobilityBase.h \
  mobility/contract/IMobility.h
$O/networklayer/arp/ARP.o: networklayer/arp/ARP.cc \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ILifecycle.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  base/Compat.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/IPv4Route.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/NotifierConsts.h \
  base/INETDefs.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/NodeOperations.h \
  status/NodeStatus.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/arp/ARPPacket_m.h \
  base/LifecycleOperation.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  base/INotifiable.h
$O/networklayer/arp/IARPCache.o: networklayer/arp/IARPCache.cc \
  base/INETDefs.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/arp/IARPCache.h \
  base/Compat.h \
  linklayer/contract/MACAddress.h
$O/networklayer/autorouting/ipv4/FlatNetworkConfigurator.o: networklayer/autorouting/ipv4/FlatNetworkConfigurator.cc \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/autorouting/ipv4/FlatNetworkConfigurator.h \
  base/NotificationBoard.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/INotifiable.h \
  networklayer/common/InterfaceEntry.h \
  base/INETDefs.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h
$O/networklayer/autorouting/ipv4/HostAutoConfigurator.o: networklayer/autorouting/ipv4/HostAutoConfigurator.cc \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/common/InterfaceEntry.h \
  base/INotifiable.h \
  base/INETDefs.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/autorouting/ipv4/HostAutoConfigurator.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  base/NotificationBoard.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  base/Compat.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6Address.h
$O/networklayer/autorouting/ipv4/IPv4NetworkConfigurator.o: networklayer/autorouting/ipv4/IPv4NetworkConfigurator.cc \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  util/PatternMatcher.h \
  base/Compat.h \
  base/NotificationBoard.h \
  base/Topology.h \
  networklayer/autorouting/ipv4/IPv4NetworkConfigurator.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceToken.h \
  base/NotifierConsts.h \
  base/INETDefs.h \
  base/INotifiable.h \
  networklayer/common/InterfaceEntry.h \
  util/XMLUtils.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/IRoutingTable.h \
  util/stlutils.h
$O/networklayer/autorouting/ipv4/IPv4NodeConfigurator.o: networklayer/autorouting/ipv4/IPv4NodeConfigurator.cc \
  base/LifecycleOperation.h \
  base/INotifiable.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NodeOperations.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  base/NotifierConsts.h \
  base/INETDefs.h \
  util/PatternMatcher.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  base/NotificationBoard.h \
  networklayer/autorouting/ipv4/IPv4NetworkConfigurator.h \
  networklayer/autorouting/ipv4/IPv4NodeConfigurator.h \
  base/Topology.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  base/ILifecycle.h
$O/networklayer/autorouting/ipv6/FlatNetworkConfigurator6.o: networklayer/autorouting/ipv6/FlatNetworkConfigurator6.cc \
  networklayer/autorouting/ipv6/FlatNetworkConfigurator6.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  base/NotificationBoard.h \
  networklayer/common/IInterfaceTable.h \
  base/Compat.h \
  base/ILifecycle.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/RoutingTable6.h \
  networklayer/common/InterfaceEntry.h \
  base/INotifiable.h \
  base/INETDefs.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv6/IPv6InterfaceData.h
$O/networklayer/bgpv4/BGPFSM.o: networklayer/bgpv4/BGPFSM.cc \
  networklayer/bgpv4/BGPRouting.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  base/NotificationBoard.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  transport/contract/TCPSocketMap.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  base/Compat.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/bgpv4/BGPFSM.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/bgpv4/BGPSession.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/OSPFRouting.h \
  networklayer/bgpv4/BGPMessage/BGPUpdate.h \
  networklayer/bgpv4/BGPMessage/BGPKeepAlive.h \
  base/ILifecycle.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  linklayer/contract/MACAddress.h \
  transport/contract/TCPCommand_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  base/INotifiable.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/bgpv4/BGPCommon.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  util/Macho.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/bgpv4/BGPMessage/BGPUpdate_m.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  transport/contract/TCPSocket.h \
  networklayer/bgpv4/BGPRoutingTableEntry.h \
  networklayer/bgpv4/BGPMessage/BGPOpen_m.h \
  base/INETDefs.h \
  networklayer/ospfv2/OSPFRoutingAccess.h \
  networklayer/bgpv4/BGPMessage/BGPOpen.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/bgpv4/BGPMessage/BGPKeepAlive_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h
$O/networklayer/bgpv4/BGPRouting.o: networklayer/bgpv4/BGPRouting.cc \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/bgpv4/BGPCommon.h \
  transport/contract/TCPCommand_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  base/INotifiable.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/bgpv4/BGPMessage/BGPUpdate_m.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  transport/contract/TCPSocket.h \
  util/Macho.h \
  networklayer/ipv4/RoutingTable.h \
  status/NodeStatus.h \
  networklayer/common/InterfaceToken.h \
  networklayer/bgpv4/BGPMessage/BGPOpen.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/bgpv4/BGPMessage/BGPKeepAlive_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/bgpv4/BGPRoutingTableEntry.h \
  networklayer/bgpv4/BGPMessage/BGPOpen_m.h \
  base/INETDefs.h \
  networklayer/ospfv2/OSPFRoutingAccess.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  transport/contract/TCPSocketMap.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  base/Compat.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/bgpv4/BGPRouting.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  base/NotificationBoard.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/bgpv4/BGPSession.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/bgpv4/BGPFSM.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/bgpv4/BGPMessage/BGPUpdate.h \
  networklayer/ospfv2/OSPFRouting.h \
  networklayer/contract/IPv6Address.h \
  networklayer/bgpv4/BGPMessage/BGPKeepAlive.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  linklayer/contract/MACAddress.h \
  base/ILifecycle.h
$O/networklayer/bgpv4/BGPSession.o: networklayer/bgpv4/BGPSession.cc \
  networklayer/contract/IPv4ControlInfo_m.h \
  transport/contract/TCPSocket.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/bgpv4/BGPMessage/BGPUpdate_m.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/RoutingTable.h \
  util/Macho.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/bgpv4/BGPMessage/BGPKeepAlive_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/NotifierConsts.h \
  networklayer/bgpv4/BGPMessage/BGPOpen.h \
  networklayer/ospfv2/OSPFRoutingAccess.h \
  base/INETDefs.h \
  networklayer/bgpv4/BGPMessage/BGPOpen_m.h \
  networklayer/bgpv4/BGPRoutingTableEntry.h \
  networklayer/bgpv4/BGPCommon.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  base/INotifiable.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  transport/contract/TCPCommand_m.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/bgpv4/BGPMessage/BGPKeepAlive.h \
  networklayer/ospfv2/OSPFRouting.h \
  networklayer/contract/IPv6Address.h \
  networklayer/bgpv4/BGPMessage/BGPUpdate.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ILifecycle.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  base/Compat.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  transport/contract/TCPSocketMap.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  base/NotificationBoard.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/bgpv4/BGPRouting.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/bgpv4/BGPSession.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/bgpv4/BGPFSM.h
$O/networklayer/bgpv4/BGPMessage/BGPUpdate.o: networklayer/bgpv4/BGPMessage/BGPUpdate.cc \
  base/INETDefs.h \
  networklayer/bgpv4/BGPMessage/BGPUpdate_m.h \
  networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h \
  networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
  networklayer/bgpv4/BGPMessage/BGPUpdate.h \
  networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h
$O/networklayer/common/InterfaceEntry.o: networklayer/common/InterfaceEntry.cc \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  base/INETDefs.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceEntry.h \
  base/INotifiable.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  base/NotificationBoard.h \
  networklayer/common/IInterfaceTable.h \
  base/Compat.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h
$O/networklayer/common/InterfaceMatcher.o: networklayer/common/InterfaceMatcher.cc \
  base/INETDefs.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  util/stlutils.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6Address.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceMatcher.h \
  base/Compat.h \
  util/PatternMatcher.h \
  networklayer/common/IInterfaceTable.h
$O/networklayer/common/InterfaceTable.o: networklayer/common/InterfaceTable.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/common/InterfaceEntry.h \
  base/INotifiable.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  base/NotifierConsts.h \
  status/NodeStatus.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  base/NodeOperations.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  base/NotificationBoard.h \
  base/Compat.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6Address.h
$O/networklayer/contract/IPSocket.o: networklayer/contract/IPSocket.cc \
  base/INETDefs.h \
  networklayer/contract/IPSocket.h \
  base/Compat.h \
  networklayer/contract/IPProtocolId_m.h
$O/networklayer/contract/IPv4Address.o: networklayer/contract/IPv4Address.cc \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  base/INETDefs.h
$O/networklayer/contract/IPv4ControlInfo.o: networklayer/contract/IPv4ControlInfo.cc \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/INETDefs.h \
  networklayer/contract/IPv4ControlInfo.h
$O/networklayer/contract/IPv6Address.o: networklayer/contract/IPv6Address.cc \
  base/Compat.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h
$O/networklayer/contract/IPv6ControlInfo.o: networklayer/contract/IPv6ControlInfo.cc \
  networklayer/ipv6/IPv6Datagram.h \
  base/INETDefs.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPProtocolId_m.h \
  base/Compat.h
$O/networklayer/contract/IPvXAddress.o: networklayer/contract/IPvXAddress.cc \
  base/Compat.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h
$O/networklayer/contract/IPvXAddressResolver.o: networklayer/contract/IPvXAddressResolver.cc \
  networklayer/autorouting/ipv4/IPv4NetworkConfigurator.h \
  base/Topology.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/Compat.h \
  util/PatternMatcher.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  base/NotificationBoard.h \
  linklayer/contract/MACAddress.h \
  base/ILifecycle.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/IRoutingTable.h \
  base/INotifiable.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv6/RoutingTable6.h \
  base/NotifierConsts.h \
  base/INETDefs.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/common/InterfaceToken.h
$O/networklayer/diffserv/BehaviorAggregateClassifier.o: networklayer/diffserv/BehaviorAggregateClassifier.cc \
  base/ByteArray.h \
  base/ByteArray_m.h \
  base/INETDefs.h \
  transport/tcp_common/TCPSegment.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/diffserv/BehaviorAggregateClassifier.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPvXAddressResolver.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/udp/UDPPacket_m.h \
  networklayer/diffserv/DiffservUtil.h \
  transport/udp/UDPPacket.h \
  base/Compat.h
$O/networklayer/diffserv/DSCPMarker.o: networklayer/diffserv/DSCPMarker.cc \
  networklayer/ipv6/IPv6Datagram.h \
  base/INETDefs.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/diffserv/DSCPMarker.h \
  networklayer/diffserv/DSCP_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/diffserv/DiffservUtil.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h
$O/networklayer/diffserv/DiffservUtil.o: networklayer/diffserv/DiffservUtil.cc \
  util/opp_utils.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  base/INETDefs.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  base/Compat.h \
  networklayer/diffserv/DiffservUtil.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/diffserv/DSCP_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/contract/IPv6Address.h
$O/networklayer/diffserv/MultiFieldClassifier.o: networklayer/diffserv/MultiFieldClassifier.cc \
  base/ByteArray.h \
  base/ByteArray_m.h \
  base/INETDefs.h \
  networklayer/diffserv/MultiFieldClassifier.h \
  networklayer/ipv6/IPv6Datagram.h \
  transport/tcp_common/TCPSegment.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/diffserv/DiffservUtil.h \
  transport/udp/UDPPacket.h \
  base/Compat.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/udp/UDPPacket_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6Datagram_m.h
$O/networklayer/diffserv/SingleRateThreeColorMeter.o: networklayer/diffserv/SingleRateThreeColorMeter.cc \
  networklayer/diffserv/SingleRateThreeColorMeter.h \
  networklayer/diffserv/DiffservUtil.h \
  base/Compat.h \
  base/INETDefs.h
$O/networklayer/diffserv/TokenBucketMeter.o: networklayer/diffserv/TokenBucketMeter.cc \
  networklayer/diffserv/TokenBucketMeter.h \
  base/Compat.h \
  networklayer/diffserv/DiffservUtil.h \
  base/INETDefs.h
$O/networklayer/diffserv/TwoRateThreeColorMeter.o: networklayer/diffserv/TwoRateThreeColorMeter.cc \
  base/Compat.h \
  networklayer/diffserv/DiffservUtil.h \
  networklayer/diffserv/TwoRateThreeColorMeter.h \
  base/INETDefs.h
$O/networklayer/icmpv6/ICMPv6.o: networklayer/icmpv6/ICMPv6.cc \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/common/IInterfaceTable.h \
  base/NotificationBoard.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ILifecycle.h \
  networklayer/contract/IPv6Address.h \
  applications/pingapp/PingPayload_m.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  base/INotifiable.h \
  base/NotifierConsts.h \
  base/INETDefs.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/ipv6/IPv6Datagram.h \
  status/NodeStatus.h \
  networklayer/icmpv6/ICMPv6.h \
  networklayer/common/InterfaceToken.h
$O/networklayer/icmpv6/IPv6NeighbourCache.o: networklayer/icmpv6/IPv6NeighbourCache.cc \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6Address.h \
  base/Compat.h \
  base/INETDefs.h \
  networklayer/icmpv6/IPv6NeighbourCache.h
$O/networklayer/icmpv6/IPv6NeighbourDiscovery.o: networklayer/icmpv6/IPv6NeighbourDiscovery.cc \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/xmipv6/xMIPv6Access.h \
  networklayer/ipv6/IPv6Datagram.h \
  status/NodeStatus.h \
  networklayer/icmpv6/ICMPv6.h \
  networklayer/common/InterfaceToken.h \
  base/NotifierConsts.h \
  networklayer/xmipv6/MobilityHeader.h \
  base/INETDefs.h \
  networklayer/xmipv6/BindingUpdateList.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/icmpv6/IPv6NeighbourCache.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  base/INotifiable.h \
  networklayer/ipv6/RoutingTable6.h \
  networklayer/ipv6tunneling/IPv6Tunneling.h \
  networklayer/xmipv6/xMIPv6.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6ExtensionHeaders.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/icmpv6/IPv6NDMessage_m.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/icmpv6/IPv6NeighbourDiscovery.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ILifecycle.h \
  base/Compat.h \
  networklayer/ipv6/RoutingTable6Access.h \
  networklayer/icmpv6/ICMPv6Access.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/xmipv6/MobilityHeader_m.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h
$O/networklayer/internetcloud/CloudDelayerBase.o: networklayer/internetcloud/CloudDelayerBase.cc \
  base/AbstractQueue.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4FragBuf.h \
  base/INETDefs.h \
  base/NotifierConsts.h \
  base/ReassemblyBuffer.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/ICMP.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/internetcloud/CloudDelayerBase.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ProtocolMap.h \
  base/ILifecycle.h \
  networklayer/common/INetfilter.h \
  base/QueueBase.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/IPv4Route.h \
  base/Compat.h \
  networklayer/ipv4/IPv4.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h
$O/networklayer/internetcloud/MatrixCloudDelayer.o: networklayer/internetcloud/MatrixCloudDelayer.cc \
  networklayer/internetcloud/MatrixCloudDelayer.h \
  networklayer/common/InterfaceToken.h \
  base/NotifierConsts.h \
  base/INETDefs.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  util/XMLUtils.h \
  networklayer/internetcloud/CloudDelayerBase.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IPv4Datagram.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/common/INetfilter.h \
  util/PatternMatcher.h \
  base/Compat.h \
  networklayer/common/IInterfaceTable.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h
$O/networklayer/ipv4/ErrorHandling.o: networklayer/ipv4/ErrorHandling.cc \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/ErrorHandling.h \
  base/INETDefs.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h
$O/networklayer/ipv4/ICMP.o: networklayer/ipv4/ICMP.cc \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/InterfaceTableAccess.h \
  base/INotifiable.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/ICMP.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/INETDefs.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/contract/IPSocket.h \
  base/NotificationBoard.h \
  base/Compat.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  applications/pingapp/PingPayload_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IPv4Datagram.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h
$O/networklayer/ipv4/IGMPv2.o: networklayer/ipv4/IGMPv2.cc \
  networklayer/ipv4/IGMPMessage_m.h \
  base/INotifiable.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/common/InterfaceToken.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IGMPv2.h \
  base/Compat.h \
  base/NotificationBoard.h \
  networklayer/contract/IPSocket.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPProtocolId_m.h \
  linklayer/contract/MACAddress.h
$O/networklayer/ipv4/IPv4.o: networklayer/ipv4/IPv4.cc \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  base/Compat.h \
  networklayer/contract/IPSocket.h \
  base/NotificationBoard.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ProtocolMap.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/ILifecycle.h \
  networklayer/common/INetfilter.h \
  base/QueueBase.h \
  networklayer/ipv4/ICMP.h \
  base/LifecycleOperation.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/arp/ARPPacket_m.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/NodeOperations.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/common/InterfaceToken.h \
  base/AbstractQueue.h \
  status/NodeStatus.h \
  base/ReassemblyBuffer.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/NotifierConsts.h \
  base/INETDefs.h
$O/networklayer/ipv4/IPv4Datagram.o: networklayer/ipv4/IPv4Datagram.cc \
  base/INETDefs.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h
$O/networklayer/ipv4/IPv4FragBuf.o: networklayer/ipv4/IPv4FragBuf.cc \
  base/ReassemblyBuffer.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMP.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Route.h
$O/networklayer/ipv4/IPv4InterfaceData.o: networklayer/ipv4/IPv4InterfaceData.cc \
  base/INETDefs.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/INotifiable.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  base/NotificationBoard.h \
  base/Compat.h
$O/networklayer/ipv4/IPv4Route.o: networklayer/ipv4/IPv4Route.cc \
  linklayer/contract/MACAddress.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  base/Compat.h \
  base/INETDefs.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/routing/aodv/AODVRouteData.h \
  base/INotifiable.h \
  networklayer/common/InterfaceEntry.h
$O/networklayer/ipv4/NetworkInfo.o: networklayer/ipv4/NetworkInfo.cc \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/common/InterfaceToken.h \
  base/NotifierConsts.h \
  networklayer/ipv4/NetworkInfo.h \
  base/IScriptable.h \
  base/INETDefs.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h
$O/networklayer/ipv4/RoutingTable.o: networklayer/ipv4/RoutingTable.cc \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  base/INotifiable.h \
  base/LifecycleOperation.h \
  util/opp_utils.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  status/NodeStatus.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/RoutingTable.h \
  base/NodeOperations.h \
  base/INETDefs.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/Compat.h \
  networklayer/ipv4/RoutingTableParser.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv6Address.h \
  base/ILifecycle.h \
  linklayer/contract/MACAddress.h
$O/networklayer/ipv4/RoutingTableParser.o: networklayer/ipv4/RoutingTableParser.cc \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  base/NotificationBoard.h \
  base/Compat.h \
  networklayer/ipv4/RoutingTableParser.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  base/ILifecycle.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/common/InterfaceEntry.h \
  base/INotifiable.h \
  base/INETDefs.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/RoutingTable.h
$O/networklayer/ipv4/RoutingTableRecorder.o: networklayer/ipv4/RoutingTableRecorder.cc \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/RoutingTableRecorder.h \
  base/INotifiable.h \
  networklayer/common/InterfaceEntry.h
$O/networklayer/ipv6/IPv6.o: networklayer/ipv6/IPv6.cc \
  networklayer/ipv6tunneling/IPv6Tunneling.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  networklayer/icmpv6/IPv6NeighbourCache.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  base/INotifiable.h \
  networklayer/ipv6/RoutingTable6.h \
  base/NotifierConsts.h \
  networklayer/xmipv6/MobilityHeader.h \
  base/ReassemblyBuffer.h \
  base/INETDefs.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/ipv6tunneling/IPv6TunnelingAccess.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/icmpv6/ICMPv6.h \
  status/NodeStatus.h \
  base/AbstractQueue.h \
  networklayer/common/InterfaceToken.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/ipv6/RoutingTable6Access.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/xmipv6/MobilityHeader_m.h \
  networklayer/icmpv6/ICMPv6Access.h \
  base/NotificationBoard.h \
  networklayer/contract/IPSocket.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/icmpv6/IPv6NDMessage_m.h \
  networklayer/icmpv6/IPv6NeighbourDiscovery.h \
  networklayer/contract/IPProtocolId_m.h \
  base/QueueBase.h \
  networklayer/icmpv6/IPv6NeighbourDiscoveryAccess.h \
  base/ILifecycle.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6ExtensionHeaders.h \
  networklayer/ipv6/IPv6.h \
  base/ProtocolMap.h \
  networklayer/ipv6/IPv6FragBuf.h \
  networklayer/ipv6/IPv6Datagram_m.h
$O/networklayer/ipv6/IPv6Datagram.o: networklayer/ipv6/IPv6Datagram.cc \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6ExtensionHeaders.h \
  networklayer/contract/IPProtocolId_m.h \
  base/Compat.h \
  networklayer/ipv6/IPv6Datagram.h \
  base/INETDefs.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h
$O/networklayer/ipv6/IPv6ErrorHandling.o: networklayer/ipv6/IPv6ErrorHandling.cc \
  networklayer/contract/IPv6ControlInfo_m.h \
  base/INETDefs.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/ipv6/IPv6ErrorHandling.h \
  base/Compat.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6Datagram_m.h
$O/networklayer/ipv6/IPv6ExtensionHeaders.o: networklayer/ipv6/IPv6ExtensionHeaders.cc \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6ExtensionHeaders.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  base/Compat.h \
  base/INETDefs.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h
$O/networklayer/ipv6/IPv6FragBuf.o: networklayer/ipv6/IPv6FragBuf.cc \
  base/Compat.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6ExtensionHeaders.h \
  networklayer/ipv6/IPv6FragBuf.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ILifecycle.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/icmpv6/ICMPv6.h \
  base/ReassemblyBuffer.h \
  base/INETDefs.h
$O/networklayer/ipv6/IPv6InterfaceData.o: networklayer/ipv6/IPv6InterfaceData.cc \
  base/NotifierConsts.h \
  base/INETDefs.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv6/RoutingTable6.h \
  base/INotifiable.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/contract/MACAddress.h \
  base/ILifecycle.h \
  networklayer/contract/IPv6Address.h \
  base/ModuleAccess.h \
  base/Compat.h \
  networklayer/ipv6/RoutingTable6Access.h \
  base/NotificationBoard.h
$O/networklayer/ipv6/RoutingTable6.o: networklayer/ipv6/RoutingTable6.cc \
  networklayer/contract/IPv6Address.h \
  base/ILifecycle.h \
  linklayer/contract/MACAddress.h \
  base/NotificationBoard.h \
  base/Compat.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceToken.h \
  base/NodeOperations.h \
  networklayer/ipv6tunneling/IPv6TunnelingAccess.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  base/INETDefs.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv6/RoutingTable6.h \
  base/LifecycleOperation.h \
  util/opp_utils.h \
  networklayer/ipv6tunneling/IPv6Tunneling.h
$O/networklayer/ipv6tunneling/IPv6Tunneling.o: networklayer/ipv6tunneling/IPv6Tunneling.cc \
  networklayer/ipv6tunneling/IPv6Tunneling.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  base/INotifiable.h \
  networklayer/ipv6/RoutingTable6.h \
  base/NotifierConsts.h \
  networklayer/xmipv6/MobilityHeader.h \
  base/INETDefs.h \
  networklayer/xmipv6/BindingUpdateList.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/xmipv6/xMIPv6Access.h \
  networklayer/ipv6/IPv6Datagram.h \
  status/NodeStatus.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  base/Compat.h \
  networklayer/ipv6/RoutingTable6Access.h \
  networklayer/xmipv6/MobilityHeader_m.h \
  networklayer/common/IInterfaceTable.h \
  base/NotificationBoard.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ILifecycle.h \
  networklayer/xmipv6/xMIPv6.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6ExtensionHeaders.h \
  networklayer/ipv6/IPv6Datagram_m.h
$O/networklayer/ldp/LDP.o: networklayer/ldp/LDP.cc \
  transport/contract/TCPSocketMap.h \
  base/Compat.h \
  networklayer/rsvp_te/IntServ_m.h \
  transport/udp/UDPPacket.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ted/TEDAccess.h \
  networklayer/ipv4/IPv4Route.h \
  transport/udp/UDPPacket_m.h \
  networklayer/mpls/LIBTableAccess.h \
  base/NotificationBoard.h \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/rsvp_te/IntServ.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IPv4Datagram.h \
  linklayer/contract/MACAddress.h \
  transport/contract/UDPSocket.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ldp/LDPPacket_m.h \
  base/ILifecycle.h \
  networklayer/mpls/ConstType.h \
  networklayer/ted/TED_m.h \
  base/LifecycleOperation.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  base/INotifiable.h \
  transport/contract/TCPCommand_m.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/mpls/IClassifier.h \
  networklayer/ipv4/IRoutingTable.h \
  transport/contract/TCPSocket.h \
  base/NodeOperations.h \
  networklayer/ted/TED.h \
  status/NodeStatus.h \
  networklayer/common/InterfaceToken.h \
  transport/tcp_common/TCPSegment.h \
  base/NotifierConsts.h \
  networklayer/mpls/LIBTable.h \
  base/INETDefs.h \
  base/ByteArray_m.h \
  base/ByteArray.h \
  networklayer/ldp/LDP.h
$O/networklayer/manetrouting/aodv-uu/aodv_msg_struct.o: networklayer/manetrouting/aodv-uu/aodv_msg_struct.cc \
  base/NotificationBoard.h \
  transport/udp/UDPPacket_m.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/common/IInterfaceTable.h \
  base/Compat.h \
  transport/udp/UDPPacket.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTable.h \
  networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ProtocolMap.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
  base/ILifecycle.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/ipv4/IPv4Datagram.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/INETDefs.h \
  networklayer/manetrouting/base/compatibility.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv4ControlInfo.h
$O/networklayer/manetrouting/aodv-uu/aodv_uu_omnet.o: networklayer/manetrouting/aodv-uu/aodv_uu_omnet.cc \
  networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
  base/Coord.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INotifiable.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/INETDefs.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/NotifierConsts.h \
  base/ReassemblyBuffer.h \
  base/NotificationBoard.h \
  transport/udp/UDPPacket_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/IPv4Route.h \
  transport/udp/UDPPacket.h \
  base/Compat.h \
  networklayer/ipv4/IPv4.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
  util/FWMath.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
  base/ILifecycle.h \
  networklayer/common/INetfilter.h \
  base/QueueBase.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv-uu/packet_queue_omnet.h
$O/networklayer/manetrouting/aodv-uu/packet_queue_omnet.o: networklayer/manetrouting/aodv-uu/packet_queue_omnet.cc \
  base/ILifecycle.h \
  networklayer/common/INetfilter.h \
  base/QueueBase.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IPv4Datagram.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
  networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
  util/FWMath.h \
  networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
  base/NotificationBoard.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/common/IInterfaceTable.h \
  base/Compat.h \
  base/INETDefs.h \
  networklayer/manetrouting/base/compatibility.h \
  base/ReassemblyBuffer.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/ICMPMessage.h \
  base/Coord.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
  base/INotifiable.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.o: networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.cc \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/ipv4/IPv4.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  util/FWMath.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/arp/IARPCache.h \
  base/Compat.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  base/ILifecycle.h \
  base/QueueBase.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
  base/Coord.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/ipv4/ICMPMessage_m.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/common/InterfaceEntry.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  base/INETDefs.h \
  networklayer/manetrouting/base/compatibility.h \
  base/NotifierConsts.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.o: networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.cc \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  base/INotifiable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/ipv4/ICMPMessage.h \
  base/Coord.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  networklayer/ipv4/ICMP.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/arp/ARP.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
  base/INETDefs.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  base/ReassemblyBuffer.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h \
  base/NotificationBoard.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/arp/IARPCache.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/ipv4/IPv4.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
  util/FWMath.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/contract/IPv6Address.h \
  base/QueueBase.h \
  networklayer/common/INetfilter.h \
  base/ILifecycle.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IPv4Datagram.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.o: networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.cc \
  base/QueueBase.h \
  networklayer/common/INetfilter.h \
  base/ILifecycle.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IPv4Datagram.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/ipv4/IPv4.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  util/FWMath.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  base/NotificationBoard.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/arp/IARPCache.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  base/INETDefs.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  base/ReassemblyBuffer.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/arp/ARP.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/ipv4/ICMPMessage.h \
  base/Coord.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
  networklayer/ipv4/ICMP.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.o: networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.cc \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  base/INETDefs.h \
  networklayer/manetrouting/base/compatibility.h \
  base/ReassemblyBuffer.h \
  base/NotifierConsts.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
  base/Coord.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  base/INotifiable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ProtocolMap.h \
  networklayer/contract/IPv6Address.h \
  base/ILifecycle.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  base/QueueBase.h \
  networklayer/common/INetfilter.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/arp/IARPCache.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
  util/FWMath.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.o: networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.cc \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/arp/IARPCache.h \
  base/Compat.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  util/FWMath.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/ipv4/IPv4.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  base/ILifecycle.h \
  base/QueueBase.h \
  networklayer/common/INetfilter.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  base/Coord.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/ipv4/ICMPMessage_m.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  base/INotifiable.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  networklayer/manetrouting/base/compatibility.h \
  base/NotifierConsts.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  base/INETDefs.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.o: networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.cc \
  base/INETDefs.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  base/ReassemblyBuffer.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  networklayer/arp/ARP.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
  base/Coord.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  networklayer/ipv4/ICMP.h \
  networklayer/common/INetfilter.h \
  base/QueueBase.h \
  base/ILifecycle.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  base/ProtocolMap.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
  util/FWMath.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h \
  base/NotificationBoard.h \
  base/Compat.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/common/IInterfaceTable.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.o: networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.cc \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
  base/Coord.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/ipv4/ICMPMessage.h \
  base/NotifierConsts.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/base/compatibility.h \
  base/INETDefs.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  util/FWMath.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  base/NotificationBoard.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/nl.h \
  networklayer/common/INetfilter.h \
  base/QueueBase.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  base/ILifecycle.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
  base/ProtocolMap.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.o: networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.cc \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  util/FWMath.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  base/Compat.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Datagram.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/common/INetfilter.h \
  base/QueueBase.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  base/ILifecycle.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
  networklayer/contract/IPv6Address.h \
  base/ProtocolMap.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  networklayer/ipv4/ICMP.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  base/Coord.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  base/NotifierConsts.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/base/compatibility.h \
  base/INETDefs.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/list.o: networklayer/manetrouting/aodv-uu/aodv-uu/list.cc \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/locality.o: networklayer/manetrouting/aodv-uu/aodv-uu/locality.cc \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  base/INETDefs.h \
  networklayer/manetrouting/base/compatibility.h \
  base/ReassemblyBuffer.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/ipv4/ICMPMessage.h \
  base/Coord.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  base/INotifiable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  base/ILifecycle.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  base/QueueBase.h \
  networklayer/common/INetfilter.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ProtocolMap.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  util/FWMath.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/arp/IARPCache.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  base/Compat.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.o: networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.cc \
  base/NotifierConsts.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/base/compatibility.h \
  base/INETDefs.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  base/INotifiable.h \
  base/Coord.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/ipv4/IPv4Datagram.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/nl.h \
  networklayer/common/INetfilter.h \
  base/QueueBase.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  base/ILifecycle.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
  networklayer/contract/IPv6Address.h \
  base/ProtocolMap.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  util/FWMath.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  base/Compat.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  base/NotificationBoard.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.o: networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.cc \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/ipv4/IPv4.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  util/FWMath.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  base/NotificationBoard.h \
  base/Compat.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/arp/IARPCache.h \
  base/QueueBase.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  base/ILifecycle.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/ipv4/ICMPMessage_m.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/common/InterfaceEntry.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  base/Coord.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
  base/INETDefs.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  base/NotifierConsts.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.o: networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.cc \
  networklayer/contract/IPv6Address.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/IPv4Datagram.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  base/QueueBase.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  base/ILifecycle.h \
  base/Compat.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  base/NotificationBoard.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  util/FWMath.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/ipv4/IPv4.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  base/NotifierConsts.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/base/compatibility.h \
  base/INETDefs.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  networklayer/ipv4/ICMP.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  base/Coord.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h
$O/networklayer/manetrouting/base/ManetAddress.o: networklayer/manetrouting/base/ManetAddress.cc \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/Compat.h \
  base/INETDefs.h
$O/networklayer/manetrouting/base/ManetNetfilterHook.o: networklayer/manetrouting/base/ManetNetfilterHook.cc \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4.h \
  base/Compat.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/arp/IARPCache.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  base/QueueBase.h \
  networklayer/common/INetfilter.h \
  base/ILifecycle.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/contract/IPv6Address.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/ipv4/ICMPAccess.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMP.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMPMessage.h \
  base/ReassemblyBuffer.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  base/INETDefs.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/common/InterfaceToken.h \
  base/AbstractQueue.h
$O/networklayer/manetrouting/base/ManetRoutingBase.o: networklayer/manetrouting/base/ManetRoutingBase.cc \
  base/QueueBase.h \
  networklayer/common/INetfilter.h \
  base/ILifecycle.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  mobility/contract/IMobility.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv6ControlInfo.h \
  base/ProtocolMap.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/contract/IPv6Address.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
  util/FWMath.h \
  transport/udp/UDPPacket_m.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/base/ControlInfoBreakLink_m.h \
  networklayer/contract/IPSocket.h \
  transport/udp/UDPPacket.h \
  base/Compat.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/arp/IARPCache.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  base/IPassiveQueue.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAP.h \
  base/ReassemblyBuffer.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/base/compatibility.h \
  base/PassiveQueueBase.h \
  networklayer/common/InterfaceToken.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  base/AbstractQueue.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/arp/ARP.h \
  base/INotifiable.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMPMessage.h \
  base/Coord.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/ipv4/ICMP.h
$O/networklayer/manetrouting/batman/BatmanMain.o: networklayer/manetrouting/batman/BatmanMain.cc \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/batman/BatmanMsg_m.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/Coord.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/InterfaceEntry.h \
  base/INotifiable.h \
  networklayer/ipv4/ICMP.h \
  base/INETDefs.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/NotifierConsts.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/batman/BatmanMain.h \
  base/AbstractQueue.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/batman/BatmanMsg.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ipv4/IPv4.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPvXAddressResolver.h \
  util/FWMath.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/NotificationBoard.h \
  transport/udp/UDPPacket_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/arp/IARPCache.h \
  base/Compat.h \
  base/ILifecycle.h \
  base/QueueBase.h \
  networklayer/common/INetfilter.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/batman/batmand/batman.h \
  base/ProtocolMap.h \
  networklayer/contract/IPv6Address.h
$O/networklayer/manetrouting/batman/batmand/batman.o: networklayer/manetrouting/batman/batmand/batman.cc \
  base/NotificationBoard.h \
  base/Compat.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/IPv4.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  util/FWMath.h \
  networklayer/manetrouting/batman/batmand/batman.h \
  base/ProtocolMap.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/contract/IPv6Address.h \
  base/QueueBase.h \
  networklayer/common/INetfilter.h \
  base/ILifecycle.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/InterfaceEntry.h \
  base/INotifiable.h \
  base/Coord.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/batman/BatmanMsg_m.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/arp/ARP.h \
  base/AbstractQueue.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/batman/BatmanMain.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/batman/BatmanMsg.h \
  base/INETDefs.h \
  base/NotifierConsts.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/base/compatibility.h
$O/networklayer/manetrouting/batman/batmand/bitarray.o: networklayer/manetrouting/batman/batmand/bitarray.cc \
  networklayer/manetrouting/batman/BatmanMsg_m.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/arp/ARP.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INotifiable.h \
  base/Coord.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/ICMP.h \
  base/INETDefs.h \
  base/NotifierConsts.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/base/compatibility.h \
  base/AbstractQueue.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/batman/BatmanMain.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/batman/BatmanMsg.h \
  networklayer/ipv4/IPv4.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  util/FWMath.h \
  base/NotificationBoard.h \
  base/Compat.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/INetfilter.h \
  base/QueueBase.h \
  base/ILifecycle.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/batman/batmand/batman.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/contract/IPv6Address.h
$O/networklayer/manetrouting/batman/batmand/hna.o: networklayer/manetrouting/batman/batmand/hna.cc \
  base/NotificationBoard.h \
  base/Compat.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/IPv4.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  util/FWMath.h \
  networklayer/manetrouting/batman/batmand/batman.h \
  base/ProtocolMap.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/contract/IPv6Address.h \
  base/QueueBase.h \
  networklayer/common/INetfilter.h \
  base/ILifecycle.h \
  networklayer/ipv4/IPv4Datagram.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/InterfaceEntry.h \
  base/INotifiable.h \
  base/Coord.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/batman/BatmanMsg_m.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/arp/ARP.h \
  base/AbstractQueue.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/batman/BatmanMain.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/batman/BatmanMsg.h \
  base/INETDefs.h \
  base/NotifierConsts.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/base/compatibility.h
$O/networklayer/manetrouting/batman/batmand/originator.o: networklayer/manetrouting/batman/batmand/originator.cc \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/batman/BatmanMsg.h \
  networklayer/common/InterfaceToken.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/batman/BatmanMain.h \
  base/ReassemblyBuffer.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/base/compatibility.h \
  base/INETDefs.h \
  networklayer/ipv4/ICMP.h \
  base/INotifiable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMPMessage.h \
  base/Coord.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/batman/BatmanMsg_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/batman/batmand/batman.h \
  base/ProtocolMap.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IPv4Datagram.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  base/QueueBase.h \
  networklayer/common/INetfilter.h \
  base/ILifecycle.h \
  base/Compat.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/arp/IARPCache.h \
  networklayer/common/IInterfaceTable.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  util/FWMath.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IPv4.h
$O/networklayer/manetrouting/batman/batmand/os.o: networklayer/manetrouting/batman/batmand/os.cc \
  networklayer/ipv4/IPv4.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  util/FWMath.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  base/NotificationBoard.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/IPv4Route.h \
  base/Compat.h \
  base/ILifecycle.h \
  networklayer/common/INetfilter.h \
  base/QueueBase.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/batman/batmand/batman.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/batman/BatmanMsg_m.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/Coord.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INotifiable.h \
  networklayer/ipv4/ICMP.h \
  base/INETDefs.h \
  networklayer/manetrouting/base/compatibility.h \
  base/NotifierConsts.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/batman/BatmanMain.h \
  base/AbstractQueue.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/batman/BatmanMsg.h \
  networklayer/ipv4/IPv4FragBuf.h
$O/networklayer/manetrouting/batman/batmand/ring_buffer.o: networklayer/manetrouting/batman/batmand/ring_buffer.cc \
  base/INETDefs.h \
  base/NotifierConsts.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/base/compatibility.h \
  base/AbstractQueue.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/batman/BatmanMain.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/batman/BatmanMsg.h \
  networklayer/manetrouting/batman/BatmanMsg_m.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/arp/ARP.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INotifiable.h \
  base/Coord.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/ICMP.h \
  networklayer/common/INetfilter.h \
  base/QueueBase.h \
  base/ILifecycle.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/batman/batmand/batman.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IPv4.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  util/FWMath.h \
  base/NotificationBoard.h \
  base/Compat.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/IPv4Route.h
$O/networklayer/manetrouting/batman/batmand/schedule.o: networklayer/manetrouting/batman/batmand/schedule.cc \
  networklayer/arp/ARP.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/batman/BatmanMsg_m.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/ICMP.h \
  base/Coord.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/InterfaceEntry.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/compatibility.h \
  base/NotifierConsts.h \
  base/ReassemblyBuffer.h \
  base/INETDefs.h \
  networklayer/manetrouting/batman/BatmanMsg.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/batman/BatmanMain.h \
  base/AbstractQueue.h \
  networklayer/common/InterfaceToken.h \
  util/FWMath.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/ipv4/IPv4.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/arp/IARPCache.h \
  base/Compat.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/ILifecycle.h \
  base/QueueBase.h \
  networklayer/common/INetfilter.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/batman/batmand/batman.h \
  base/ProtocolMap.h
$O/networklayer/manetrouting/dsdv/DSDV_2.o: networklayer/manetrouting/dsdv/DSDV_2.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/INotifiable.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/INETDefs.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dsdv/DSDVhello_m.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  base/Compat.h \
  networklayer/manetrouting/dsdv/DSDV_2.h \
  networklayer/contract/IPSocket.h \
  base/NotificationBoard.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  linklayer/contract/MACAddress.h \
  base/ILifecycle.h \
  networklayer/contract/IPv6Address.h
$O/networklayer/manetrouting/dsr/dsr-pkt_omnet.o: networklayer/manetrouting/dsr/dsr-pkt_omnet.cc \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/INETDefs.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/ipv4/IPv4Datagram.h \
  linklayer/contract/MACAddress.h \
  base/Compat.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/contract/IPv4Address.h
$O/networklayer/manetrouting/dsr/dsr-uu-omnetpp.o: networklayer/manetrouting/dsr/dsr-uu-omnetpp.cc \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  base/INETDefs.h \
  networklayer/ipv4/ICMP.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  base/INotifiable.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  base/ProtocolMap.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/INetfilter.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/common/IInterfaceTable.h \
  base/Compat.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  base/NotificationBoard.h \
  networklayer/contract/IPSocket.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.o: networklayer/manetrouting/dsr/dsr-uu/dsr-ack.cc \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  base/Compat.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/INetfilter.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INotifiable.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-dev.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-io.o: networklayer/manetrouting/dsr/dsr-uu/dsr-io.cc \
  networklayer/contract/IPv4ControlInfo.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-dev.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rtc.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/ipv4/ICMP.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/InterfaceEntry.h \
  base/INotifiable.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/ipv4/ICMPMessage.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  base/Compat.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  base/NotificationBoard.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.o: networklayer/manetrouting/dsr/dsr-uu/dsr-opt.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/INetfilter.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  base/Compat.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  base/INotifiable.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/ipv4/RoutingTableAccess.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.o: networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.cc \
  networklayer/common/INetfilter.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  base/Compat.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  base/INotifiable.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/ICMP.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.o: networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.cc \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/InterfaceEntry.h \
  base/INotifiable.h \
  networklayer/ipv4/ICMP.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/ipv4/RoutingTableAccess.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-dev.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  base/Compat.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.o: networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/ipv4/IPv4Datagram.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/INetfilter.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  base/Compat.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-dev.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/ipv4/ICMP.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  base/INotifiable.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/InterfaceTableAccess.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.o: networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.cc \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  base/Compat.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/INetfilter.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INotifiable.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-dev.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/common/InterfaceToken.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.o: networklayer/manetrouting/dsr/dsr-uu/dsr-srt.cc \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/InterfaceEntry.h \
  base/INotifiable.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/INetfilter.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  base/Compat.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h
$O/networklayer/manetrouting/dsr/dsr-uu/link-cache.o: networklayer/manetrouting/dsr/dsr-uu/link-cache.cc \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  base/Compat.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/common/INetfilter.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/ipv4/IPv4Datagram.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  base/INotifiable.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rtc.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/contract/IPv4ControlInfo.h
$O/networklayer/manetrouting/dsr/dsr-uu/maint-buf.o: networklayer/manetrouting/dsr/dsr-uu/maint-buf.cc \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  base/Compat.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Datagram.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/ipv4/ICMP.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  base/INotifiable.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-dev.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h
$O/networklayer/manetrouting/dsr/dsr-uu/neigh.o: networklayer/manetrouting/dsr/dsr-uu/neigh.cc \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  base/Compat.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/INetfilter.h \
  networklayer/ipv4/IPv4Datagram.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  base/INotifiable.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h
$O/networklayer/manetrouting/dsr/dsr-uu/path-cache.o: networklayer/manetrouting/dsr/dsr-uu/path-cache.cc \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rtc.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/common/InterfaceToken.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/InterfaceTableAccess.h \
  base/INotifiable.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/ipv4/IPv4Datagram.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/INetfilter.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  base/Compat.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h
$O/networklayer/manetrouting/dsr/dsr-uu/send-buf.o: networklayer/manetrouting/dsr/dsr-uu/send-buf.cc \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INotifiable.h \
  networklayer/ipv4/ICMP.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/ipv4/RoutingTableAccess.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  base/Compat.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h
$O/networklayer/manetrouting/dymo/dymo_msg_struct.o: networklayer/manetrouting/dymo/dymo_msg_struct.cc \
  base/INETDefs.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymo_msg_struct.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/manetrouting/base/ManetAddress.h
$O/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.o: networklayer/manetrouting/dymo/dymo_packet_queue_omnet.cc \
  base/AbstractQueue.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
  base/INETDefs.h \
  base/NotifierConsts.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/manetrouting/base/compatibility.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INotifiable.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymo_msg_struct.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  base/ProtocolMap.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  networklayer/common/INetfilter.h \
  base/QueueBase.h \
  base/ILifecycle.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
  base/NotificationBoard.h \
  base/Compat.h \
  networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/blacklist.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/IPv4Route.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
  networklayer/ipv4/IPv4.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymo_um_omnet.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  util/FWMath.h
$O/networklayer/manetrouting/dymo/dymo_um_omnet.o: networklayer/manetrouting/dymo/dymo_um_omnet.cc \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
  base/ProtocolMap.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  base/ILifecycle.h \
  base/QueueBase.h \
  networklayer/common/INetfilter.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
  base/NotificationBoard.h \
  transport/udp/UDPPacket_m.h \
  networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
  networklayer/manetrouting/dymo/dymoum/blacklist.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/arp/IARPCache.h \
  transport/udp/UDPPacket.h \
  base/Compat.h \
  networklayer/ipv4/IPv4.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  util/FWMath.h \
  networklayer/manetrouting/dymo/dymo_um_omnet.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/AbstractQueue.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/NotifierConsts.h \
  base/ReassemblyBuffer.h \
  base/Coord.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/INotifiable.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/manetrouting/dymo/dymo_msg_struct.h \
  networklayer/ipv4/IPv4InterfaceData.h
$O/networklayer/manetrouting/dymo/dymoum/blacklist.o: networklayer/manetrouting/dymo/dymoum/blacklist.cc \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  base/ILifecycle.h \
  networklayer/common/INetfilter.h \
  base/QueueBase.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymoum/blacklist.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  base/Compat.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  util/FWMath.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4FragBuf.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/base/compatibility.h \
  base/NotifierConsts.h \
  base/ReassemblyBuffer.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/ipv4/ICMPMessage.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/ipv4/ICMP.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h
$O/networklayer/manetrouting/dymo/dymoum/debug_dymo.o: networklayer/manetrouting/dymo/dymoum/debug_dymo.cc \
  util/FWMath.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/ipv4/IPv4.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  base/Compat.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/ILifecycle.h \
  base/QueueBase.h \
  networklayer/common/INetfilter.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  base/ProtocolMap.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  base/Coord.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/ipv4/ICMPMessage_m.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/common/InterfaceEntry.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  base/NotifierConsts.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4FragBuf.h \
  base/AbstractQueue.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_generic.o: networklayer/manetrouting/dymo/dymoum/dymo_generic.cc \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  base/QueueBase.h \
  networklayer/common/INetfilter.h \
  base/ILifecycle.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  util/FWMath.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/ipv4/IPv4.h \
  base/Compat.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/arp/IARPCache.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  base/NotificationBoard.h \
  base/ReassemblyBuffer.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/ipv4/ICMP.h \
  base/INotifiable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  base/Coord.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_hello.o: networklayer/manetrouting/dymo/dymoum/dymo_hello.cc \
  base/AbstractQueue.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  base/INETDefs.h \
  base/NotifierConsts.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  base/Coord.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  base/QueueBase.h \
  networklayer/common/INetfilter.h \
  base/ILifecycle.h \
  networklayer/ipv4/IPv4Datagram.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  base/Compat.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/arp/IARPCache.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/ipv4/IPv4.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  util/FWMath.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_nb.o: networklayer/manetrouting/dymo/dymoum/dymo_nb.cc \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  base/ReassemblyBuffer.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/arp/ARP.h \
  base/INotifiable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/ipv4/ICMP.h \
  base/QueueBase.h \
  networklayer/common/INetfilter.h \
  base/ILifecycle.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/contract/IPv6Address.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  util/FWMath.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  base/NotificationBoard.h \
  base/Compat.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/arp/IARPCache.h \
  networklayer/common/IInterfaceTable.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_re.o: networklayer/manetrouting/dymo/dymoum/dymo_re.cc \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  networklayer/contract/IPv6Address.h \
  base/QueueBase.h \
  networklayer/common/INetfilter.h \
  base/ILifecycle.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
  networklayer/ipv4/IPv4Datagram.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
  base/NotificationBoard.h \
  base/Compat.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/arp/IARPCache.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/blacklist.h \
  networklayer/manetrouting/base/MeshControlInfo_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  util/FWMath.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  base/AbstractQueue.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  base/INETDefs.h \
  base/ReassemblyBuffer.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  base/INotifiable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  base/Coord.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/arp/ARP.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_rerr.o: networklayer/manetrouting/dymo/dymoum/dymo_rerr.cc \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  base/NotificationBoard.h \
  base/Compat.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/arp/IARPCache.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  util/FWMath.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  networklayer/contract/IPv6Address.h \
  base/QueueBase.h \
  networklayer/common/INetfilter.h \
  base/ILifecycle.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IPv4Datagram.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  base/INotifiable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  base/Coord.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/arp/ARP.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  base/AbstractQueue.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  base/ReassemblyBuffer.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_socket.o: networklayer/manetrouting/dymo/dymoum/dymo_socket.cc \
  base/ILifecycle.h \
  networklayer/common/INetfilter.h \
  base/QueueBase.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  util/FWMath.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  base/Compat.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  base/NotifierConsts.h \
  base/ReassemblyBuffer.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/ipv4/ICMPMessage.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INotifiable.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_timeout.o: networklayer/manetrouting/dymo/dymoum/dymo_timeout.cc \
  base/ILifecycle.h \
  networklayer/common/INetfilter.h \
  base/QueueBase.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IPv4Datagram.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  util/FWMath.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/blacklist.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  base/Compat.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  base/ReassemblyBuffer.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/dymo_netlink.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/common/InterfaceToken.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/ipv4/ICMPMessage.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  base/INotifiable.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_uerr.o: networklayer/manetrouting/dymo/dymoum/dymo_uerr.cc \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  base/QueueBase.h \
  networklayer/common/INetfilter.h \
  base/ILifecycle.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  util/FWMath.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/ipv4/IPv4.h \
  base/Compat.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/arp/IARPCache.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  base/NotificationBoard.h \
  base/ReassemblyBuffer.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/ipv4/ICMP.h \
  base/INotifiable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  base/Coord.h
$O/networklayer/manetrouting/dymo/dymoum/icmp_socket.o: networklayer/manetrouting/dymo/dymoum/icmp_socket.cc \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  base/ReassemblyBuffer.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  base/AbstractQueue.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/arp/ARP.h \
  base/INotifiable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/ipv4/ICMP.h \
  base/QueueBase.h \
  networklayer/common/INetfilter.h \
  base/ILifecycle.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/contract/IPv6Address.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  util/FWMath.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  base/NotificationBoard.h \
  base/Compat.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/dymo/dymoum/blacklist.h \
  networklayer/common/IInterfaceTable.h
$O/networklayer/manetrouting/dymo/dymoum/pending_rreq.o: networklayer/manetrouting/dymo/dymoum/pending_rreq.cc \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  util/FWMath.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  base/Compat.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  base/ILifecycle.h \
  networklayer/common/INetfilter.h \
  base/QueueBase.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IPv4Datagram.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/ipv4/ICMPMessage.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  base/INotifiable.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  base/ReassemblyBuffer.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/common/InterfaceToken.h \
  base/AbstractQueue.h \
  networklayer/ipv4/IPv4FragBuf.h
$O/networklayer/manetrouting/dymo/dymoum/rtable.o: networklayer/manetrouting/dymo/dymoum/rtable.cc \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/k_route.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/ipv4/ICMP.h \
  base/INotifiable.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/ipv4/ICMPMessage.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  base/ReassemblyBuffer.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/base/compatibility.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/common/InterfaceToken.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/dymo/dymoum/dymo_netlink.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  util/FWMath.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  base/Compat.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/common/INetfilter.h \
  base/QueueBase.h \
  base/ILifecycle.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/contract/IPv6Address.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h
$O/networklayer/manetrouting/dymo/dymoum/timer_queue.o: networklayer/manetrouting/dymo/dymoum/timer_queue.cc \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IPv4Datagram.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  base/QueueBase.h \
  networklayer/common/INetfilter.h \
  base/ILifecycle.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  util/FWMath.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/ipv4/IPv4.h \
  base/Compat.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/arp/IARPCache.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  base/NotificationBoard.h \
  base/ReassemblyBuffer.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  base/AbstractQueue.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  base/INotifiable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  base/Coord.h
$O/networklayer/manetrouting/dymo_fau/DYMO.o: networklayer/manetrouting/dymo_fau/DYMO.cc \
  base/ProtocolMap.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
  base/QueueBase.h \
  networklayer/common/INetfilter.h \
  base/ILifecycle.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  transport/contract/UDPSocket.h \
  networklayer/ipv4/IPv4Datagram.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/udp/UDPPacket_m.h \
  base/NotificationBoard.h \
  base/Compat.h \
  transport/udp/UDPPacket.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/arp/IARPCache.h \
  networklayer/common/IInterfaceTable.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTable.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/ipv4/IPv4.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  util/FWMath.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
  base/AbstractQueue.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
  networklayer/manetrouting/dymo_fau/DYMO.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/base/compatibility.h \
  base/INotifiable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMPMessage.h \
  base/Coord.h \
  networklayer/ipv4/ICMP.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
  networklayer/arp/ARP.h
$O/networklayer/manetrouting/dymo_fau/DYMO_DataQueue.o: networklayer/manetrouting/dymo_fau/DYMO_DataQueue.cc \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/ipv4/IPv4.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/IPv4Route.h \
  base/Compat.h \
  base/NotificationBoard.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/ILifecycle.h \
  networklayer/common/INetfilter.h \
  base/QueueBase.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ProtocolMap.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/ICMP.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INotifiable.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/NotifierConsts.h \
  base/ReassemblyBuffer.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ipv4/RoutingTable.h \
  base/AbstractQueue.h \
  networklayer/common/InterfaceToken.h
$O/networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.o: networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.cc \
  networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
  base/INETDefs.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
  base/NotificationBoard.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h
$O/networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.o: networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.cc \
  networklayer/ipv4/ICMPMessage.h \
  base/Coord.h \
  base/INotifiable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
  networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
  networklayer/manetrouting/dymo_fau/DYMO.h \
  networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
  base/INETDefs.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
  base/ReassemblyBuffer.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/arp/IARPCache.h \
  networklayer/common/IInterfaceTable.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTable.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4.h \
  util/FWMath.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
  base/ILifecycle.h \
  base/QueueBase.h \
  networklayer/common/INetfilter.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IPv4Datagram.h \
  linklayer/contract/MACAddress.h
$O/networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.o: networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.cc \
  networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
  networklayer/common/InterfaceToken.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
  networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
  networklayer/manetrouting/dymo_fau/DYMO.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/base/compatibility.h \
  base/INotifiable.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/ICMPMessage.h \
  base/Coord.h \
  networklayer/ipv4/ICMP.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
  networklayer/arp/ARP.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
  networklayer/common/INetfilter.h \
  base/QueueBase.h \
  base/ILifecycle.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/NotificationBoard.h \
  base/Compat.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTable.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  util/FWMath.h
$O/networklayer/manetrouting/dymo_fau/DYMO_Timer.o: networklayer/manetrouting/dymo_fau/DYMO_Timer.cc \
  base/INETDefs.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
  base/Compat.h
$O/networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.o: networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.cc \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INotifiable.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/ICMP.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
  base/NotifierConsts.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
  networklayer/ipv4/IPv4.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/NotificationBoard.h \
  base/Compat.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/INetfilter.h \
  base/QueueBase.h \
  base/ILifecycle.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ProtocolMap.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h
$O/networklayer/manetrouting/dymo_fau/InspectorHelpers.o: networklayer/manetrouting/dymo_fau/InspectorHelpers.cc \
  networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
  base/INETDefs.h \
  base/Compat.h \
  networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
  networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RM_m.h
$O/networklayer/manetrouting/olsr/OLSR.o: networklayer/manetrouting/olsr/OLSR.cc \
  base/AbstractQueue.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/INETDefs.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/NotifierConsts.h \
  base/ReassemblyBuffer.h \
  base/Coord.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INotifiable.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/ipv4/IRoutingTable.h \
  util/opp_utils.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/olsr/OLSR_state.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ProtocolMap.h \
  networklayer/contract/IPv6Address.h \
  base/ILifecycle.h \
  networklayer/common/INetfilter.h \
  base/QueueBase.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  transport/udp/UDPPacket_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/olsr/OLSR.h \
  transport/udp/UDPPacket.h \
  base/Compat.h \
  networklayer/ipv4/IPv4.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  util/FWMath.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h
$O/networklayer/manetrouting/olsr/OLSROPT.o: networklayer/manetrouting/olsr/OLSROPT.cc \
  networklayer/manetrouting/base/compatibility.h \
  base/ReassemblyBuffer.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/INETDefs.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/common/InterfaceToken.h \
  base/AbstractQueue.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/olsr/OLSR_state.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  util/opp_utils.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/ipv4/ICMPMessage.h \
  base/Coord.h \
  base/INotifiable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IPv4Datagram.h \
  linklayer/contract/MACAddress.h \
  base/ILifecycle.h \
  base/QueueBase.h \
  networklayer/common/INetfilter.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ProtocolMap.h \
  util/FWMath.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/olsr/OLSROPT.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/arp/IARPCache.h \
  networklayer/common/IInterfaceTable.h \
  base/Compat.h \
  transport/udp/UDPPacket.h \
  networklayer/manetrouting/olsr/OLSR.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  base/NotificationBoard.h \
  transport/udp/UDPPacket_m.h
$O/networklayer/manetrouting/olsr/OLSR_ETX.o: networklayer/manetrouting/olsr/OLSR_ETX.cc \
  networklayer/contract/IPv4ControlInfo.h \
  base/NotifierConsts.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/base/compatibility.h \
  base/INETDefs.h \
  networklayer/manetrouting/olsr/OLSR_ETX.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/AbstractQueue.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/olsr/OLSR_state.h \
  networklayer/arp/ARP.h \
  util/opp_utils.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INotifiable.h \
  base/Coord.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/olsr/OLSR_ETX_state.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  networklayer/common/INetfilter.h \
  base/QueueBase.h \
  base/ILifecycle.h \
  networklayer/contract/IPv6Address.h \
  base/ProtocolMap.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h \
  util/FWMath.h \
  networklayer/ipv4/IPv4.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/olsr/OLSR_ETX_repositories.h \
  networklayer/manetrouting/olsr/OLSR.h \
  transport/udp/UDPPacket.h \
  base/Compat.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/IPv4Route.h \
  transport/udp/UDPPacket_m.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h
$O/networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.o: networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.cc \
  networklayer/ipv4/IRoutingTable.h \
  util/opp_utils.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/olsr/OLSR_state.h \
  base/Coord.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  base/INotifiable.h \
  networklayer/ipv4/ICMP.h \
  base/INETDefs.h \
  networklayer/manetrouting/olsr/OLSR_ETX.h \
  networklayer/manetrouting/base/compatibility.h \
  base/NotifierConsts.h \
  base/ReassemblyBuffer.h \
  base/AbstractQueue.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/ipv4/IPv4.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  util/FWMath.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/olsr/OLSR_ETX_repositories.h \
  base/Compat.h \
  networklayer/manetrouting/olsr/OLSR.h \
  base/ILifecycle.h \
  base/QueueBase.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/olsr/OLSR_ETX_state.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ProtocolMap.h \
  networklayer/contract/IPv6Address.h
$O/networklayer/manetrouting/olsr/OLSR_ETX_state.o: networklayer/manetrouting/olsr/OLSR_ETX_state.cc \
  base/Compat.h \
  networklayer/manetrouting/olsr/OLSR.h \
  networklayer/manetrouting/olsr/OLSR_ETX_repositories.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/arp/IARPCache.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  util/FWMath.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4.h \
  networklayer/contract/IPv6Address.h \
  base/ProtocolMap.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/olsr/OLSR_ETX_state.h \
  base/QueueBase.h \
  networklayer/common/INetfilter.h \
  base/ILifecycle.h \
  networklayer/ipv4/ICMP.h \
  base/INotifiable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMPMessage.h \
  base/Coord.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/olsr/OLSR_state.h \
  networklayer/ipv4/RoutingTableAccess.h \
  util/opp_utils.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/common/InterfaceToken.h \
  base/AbstractQueue.h \
  base/ReassemblyBuffer.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/olsr/OLSR_ETX.h \
  base/INETDefs.h
$O/networklayer/manetrouting/olsr/OLSR_rtable.o: networklayer/manetrouting/olsr/OLSR_rtable.cc \
  networklayer/manetrouting/olsr/OLSR_state.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/RoutingTableAccess.h \
  util/opp_utils.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMP.h \
  base/INotifiable.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/ICMPMessage.h \
  base/Coord.h \
  base/ReassemblyBuffer.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/base/compatibility.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/common/InterfaceToken.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h \
  util/FWMath.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/olsr/OLSR.h \
  base/Compat.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IPv4Datagram.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/common/INetfilter.h \
  base/QueueBase.h \
  base/ILifecycle.h \
  networklayer/contract/IPv6Address.h \
  base/ProtocolMap.h \
  networklayer/ipv4/ICMPAccess.h
$O/networklayer/manetrouting/olsr/OLSR_state.o: networklayer/manetrouting/olsr/OLSR_state.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ProtocolMap.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/ILifecycle.h \
  networklayer/common/INetfilter.h \
  base/QueueBase.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/olsr/OLSR.h \
  base/Compat.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  base/NotificationBoard.h \
  util/FWMath.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/common/InterfaceToken.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/base/compatibility.h \
  base/ReassemblyBuffer.h \
  base/NotifierConsts.h \
  base/INETDefs.h \
  networklayer/ipv4/ICMP.h \
  networklayer/ipv4/ICMPMessage.h \
  base/Coord.h \
  base/INotifiable.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/olsr/OLSR_state.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  util/opp_utils.h
$O/networklayer/mpls/LIBTable.o: networklayer/mpls/LIBTable.cc \
  networklayer/ipv4/IPv4Route.h \
  base/Compat.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/mpls/ConstType.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  util/XMLUtils.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/INETDefs.h \
  networklayer/mpls/LIBTable.h
$O/networklayer/mpls/MPLS.o: networklayer/mpls/MPLS.cc \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/rsvp_te/IntServ.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/rsvp_te/IntServ_m.h \
  base/Compat.h \
  transport/contract/TCPSocketMap.h \
  transport/tcp_common/TCPSegment_m.h \
  base/NotificationBoard.h \
  networklayer/mpls/LIBTableAccess.h \
  networklayer/mpls/MPLSPacket.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/contract/UDPSocket.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/mpls/ConstType.h \
  base/ILifecycle.h \
  networklayer/ldp/LDPPacket_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/mpls/MPLS.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/mpls/IClassifier.h \
  networklayer/ipv4/RoutingTableAccess.h \
  transport/contract/TCPCommand_m.h \
  base/INotifiable.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/mpls/LIBTable.h \
  base/NotifierConsts.h \
  networklayer/ldp/LDP.h \
  base/ByteArray.h \
  base/ByteArray_m.h \
  base/INETDefs.h \
  networklayer/rsvp_te/Utils.h \
  transport/contract/TCPSocket.h \
  transport/tcp_common/TCPSegment.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h
$O/networklayer/mpls/MPLSPacket.o: networklayer/mpls/MPLSPacket.cc \
  base/Compat.h \
  networklayer/mpls/MPLSPacket.h \
  base/INETDefs.h
$O/networklayer/ospfv2/OSPFConfigReader.o: networklayer/ospfv2/OSPFConfigReader.cc \
  base/NotificationBoard.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  base/Compat.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  util/PatternMatcher.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  util/XMLUtils.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  base/INotifiable.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/OSPFConfigReader.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/OSPFTimer.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv4ControlInfo.h
$O/networklayer/ospfv2/OSPFRouting.o: networklayer/ospfv2/OSPFRouting.cc \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/OSPFConfigReader.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  base/LifecycleOperation.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  networklayer/ospfv2/OSPFTimer.h \
  base/NodeOperations.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPSocket.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  base/Compat.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/OSPFRouting.h \
  base/ILifecycle.h \
  networklayer/contract/IPProtocolId_m.h \
  linklayer/contract/MACAddress.h
$O/networklayer/ospfv2/interface/OSPFInterface.o: networklayer/ospfv2/interface/OSPFInterface.cc \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  base/INotifiable.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/common/InterfaceToken.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  base/INETDefs.h \
  base/Compat.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  base/NotificationBoard.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h
$O/networklayer/ospfv2/interface/OSPFInterfaceState.o: networklayer/ospfv2/interface/OSPFInterfaceState.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPProtocolId_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateBackup.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  base/Compat.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateBackup.o: networklayer/ospfv2/interface/OSPFInterfaceStateBackup.cc \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateBackup.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  base/Compat.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  networklayer/ipv4/IPv4Route.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv6Address.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.o: networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.cc \
  networklayer/contract/IPProtocolId_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  base/Compat.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/router/LSA.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateDown.o: networklayer/ospfv2/interface/OSPFInterfaceStateDown.cc \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  networklayer/common/IInterfaceTable.h \
  base/Compat.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPProtocolId_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.h \
  networklayer/contract/IPv6Address.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.o: networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.cc \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/router/LSA.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  base/Compat.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/contract/IPv6Address.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.o: networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.cc \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/INETDefs.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  base/Compat.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.o: networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.cc \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  base/Compat.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/NotifierConsts.h \
  base/INETDefs.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.o: networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.cc \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  networklayer/common/IInterfaceTable.h \
  base/Compat.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPProtocolId_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/common/InterfaceToken.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  base/INETDefs.h
$O/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.o: networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPProtocolId_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  base/Compat.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/common/InterfaceToken.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h
$O/networklayer/ospfv2/messagehandler/HelloHandler.o: networklayer/ospfv2/messagehandler/HelloHandler.cc \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  base/Compat.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/contract/IPProtocolId_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6Address.h
$O/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.o: networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.cc \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  base/Compat.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPProtocolId_m.h \
  linklayer/contract/MACAddress.h
$O/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.o: networklayer/ospfv2/messagehandler/LinkStateRequestHandler.cc \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  base/Compat.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPProtocolId_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/INETDefs.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h
$O/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.o: networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.cc \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  base/Compat.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h
$O/networklayer/ospfv2/messagehandler/MessageHandler.o: networklayer/ospfv2/messagehandler/MessageHandler.cc \
  base/INETDefs.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/contract/IPProtocolId_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  base/Compat.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/OSPFPacket_m.h
$O/networklayer/ospfv2/neighbor/OSPFNeighbor.o: networklayer/ospfv2/neighbor/OSPFNeighbor.cc \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/OSPFTimer.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  base/Compat.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborState.o: networklayer/ospfv2/neighbor/OSPFNeighborState.cc \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  base/Compat.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/INETDefs.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.o: networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.cc \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  base/Compat.h \
  networklayer/contract/IPProtocolId_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  base/INETDefs.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/contract/IPv4ControlInfo_m.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateDown.o: networklayer/ospfv2/neighbor/OSPFNeighborStateDown.cc \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  base/Compat.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPProtocolId_m.h \
  linklayer/contract/MACAddress.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.o: networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.cc \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateFull.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  base/INETDefs.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  base/Compat.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.h \
  networklayer/contract/IPv6Address.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.o: networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.cc \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  base/Compat.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateFull.o: networklayer/ospfv2/neighbor/OSPFNeighborStateFull.cc \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateFull.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
  networklayer/ospfv2/OSPFTimer.h \
  base/INETDefs.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  base/Compat.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPProtocolId_m.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateInit.o: networklayer/ospfv2/neighbor/OSPFNeighborStateInit.cc \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/contract/IPProtocolId_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
  networklayer/contract/IPv6Address.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  base/Compat.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.o: networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.cc \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateFull.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  base/Compat.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/contract/IPProtocolId_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
  networklayer/contract/IPv6Address.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.o: networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.cc \
  base/INETDefs.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  base/Compat.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h
$O/networklayer/ospfv2/router/ASExternalLSA.o: networklayer/ospfv2/router/ASExternalLSA.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  base/INETDefs.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/router/LSA.h
$O/networklayer/ospfv2/router/LSA.o: networklayer/ospfv2/router/LSA.cc \
  networklayer/ospfv2/router/LSA.h \
  base/INETDefs.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  base/Compat.h \
  networklayer/contract/IPv6Address.h
$O/networklayer/ospfv2/router/NetworkLSA.o: networklayer/ospfv2/router/NetworkLSA.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  base/Compat.h \
  base/INETDefs.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/router/LSA.h
$O/networklayer/ospfv2/router/OSPFArea.o: networklayer/ospfv2/router/OSPFArea.cc \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/OSPFTimer.h \
  base/INETDefs.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  base/Compat.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPProtocolId_m.h
$O/networklayer/ospfv2/router/OSPFRouter.o: networklayer/ospfv2/router/OSPFRouter.cc \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  base/Compat.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h
$O/networklayer/ospfv2/router/OSPFRoutingTableEntry.o: networklayer/ospfv2/router/OSPFRoutingTableEntry.cc \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6Address.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  base/NotifierConsts.h \
  base/INETDefs.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h
$O/networklayer/ospfv2/router/RouterLSA.o: networklayer/ospfv2/router/RouterLSA.cc \
  networklayer/contract/IPv6Address.h \
  base/Compat.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  base/INETDefs.h \
  networklayer/ospfv2/router/LSA.h
$O/networklayer/ospfv2/router/SummaryLSA.o: networklayer/ospfv2/router/SummaryLSA.cc \
  networklayer/contract/IPv6Address.h \
  base/Compat.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  base/INETDefs.h \
  networklayer/ospfv2/router/LSA.h
$O/networklayer/routing/aodv/AODVRouteData.o: networklayer/routing/aodv/AODVRouteData.cc \
  base/INETDefs.h \
  networklayer/routing/aodv/AODVRouteData.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h
$O/networklayer/routing/aodv/AODVRouting.o: networklayer/routing/aodv/AODVRouting.cc \
  base/ILifecycle.h \
  networklayer/common/INetfilter.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/contract/UDPSocket.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  transport/contract/UDPControlInfo_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/NotificationBoard.h \
  networklayer/contract/IPSocket.h \
  transport/udp/UDPPacket_m.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  transport/udp/UDPPacket.h \
  base/Compat.h \
  networklayer/routing/aodv/AODVRouting.h \
  base/INETDefs.h \
  transport/contract/UDPControlInfo.h \
  networklayer/routing/aodv/AODVControlPackets_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/NodeOperations.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/INotifiable.h \
  networklayer/routing/aodv/AODVRouteData.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/LifecycleOperation.h
$O/networklayer/routing/dymo/DYMORouteData.o: networklayer/routing/dymo/DYMORouteData.cc \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Route.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/routing/dymo/DYMORouteData.h \
  networklayer/routing/dymo/DYMOdefs.h
$O/networklayer/routing/dymo/xDYMO.o: networklayer/routing/dymo/xDYMO.cc \
  networklayer/contract/IPv4ControlInfo.h \
  base/NotifierConsts.h \
  networklayer/routing/dymo/xDYMO.h \
  base/INETDefs.h \
  transport/contract/UDPControlInfo.h \
  base/NodeOperations.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  status/NodeStatus.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IRoutingTable.h \
  base/LifecycleOperation.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/common/InterfaceEntry.h \
  base/INotifiable.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/common/INetfilter.h \
  base/ILifecycle.h \
  networklayer/contract/IPv6Address.h \
  networklayer/routing/dymo/DYMO_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/routing/dymo/DYMOdefs.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/routing/dymo/DYMORouteData.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddressResolver.h \
  transport/contract/UDPControlInfo_m.h \
  transport/udp/UDPPacket.h \
  base/Compat.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  transport/udp/UDPPacket_m.h \
  base/NotificationBoard.h \
  networklayer/contract/IPSocket.h
$O/networklayer/routing/gpsr/GPSR.o: networklayer/routing/gpsr/GPSR.cc \
  base/NotificationBoard.h \
  networklayer/contract/IPSocket.h \
  transport/udp/UDPPacket_m.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  transport/udp/UDPPacket.h \
  base/Compat.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/routing/gpsr/GPSR.h \
  util/FWMath.h \
  networklayer/routing/gpsr/GPSR_m.h \
  networklayer/contract/IPv6Address.h \
  base/ILifecycle.h \
  networklayer/common/INetfilter.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  linklayer/contract/MACAddress.h \
  mobility/contract/IMobility.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/Coord.h \
  base/INotifiable.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  base/LifecycleOperation.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/common/InterfaceToken.h \
  networklayer/routing/gpsr/PositionTable.h \
  status/NodeStatus.h \
  base/NodeOperations.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/INETDefs.h \
  networklayer/routing/gpsr/GPSRDefs.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/NotifierConsts.h
$O/networklayer/routing/gpsr/PositionTable.o: networklayer/routing/gpsr/PositionTable.cc \
  networklayer/contract/IPv6Address.h \
  base/Compat.h \
  util/FWMath.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/routing/gpsr/PositionTable.h \
  base/INETDefs.h \
  base/Coord.h
$O/networklayer/routing/rip/RIPRouting.o: networklayer/routing/rip/RIPRouting.cc \
  base/NodeOperations.h \
  networklayer/common/InterfaceToken.h \
  networklayer/routing/rip/RIPRouting.h \
  status/NodeStatus.h \
  base/NotifierConsts.h \
  transport/contract/UDPControlInfo.h \
  base/INETDefs.h \
  base/LifecycleOperation.h \
  base/INotifiable.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  transport/udp/UDP.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv6Address.h \
  networklayer/routing/rip/RIPPacket_m.h \
  transport/contract/UDPSocket.h \
  linklayer/contract/MACAddress.h \
  base/ILifecycle.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  base/Compat.h \
  networklayer/common/InterfaceMatcher.h \
  base/NotificationBoard.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  transport/contract/UDPControlInfo_m.h
$O/networklayer/rsvp_te/RSVP.o: networklayer/rsvp_te/RSVP.cc \
  networklayer/mpls/LIBTableAccess.h \
  networklayer/rsvp_te/RSVPHello_m.h \
  networklayer/rsvp_te/RSVPResvMsg.h \
  networklayer/contract/IPSocket.h \
  base/NotificationBoard.h \
  networklayer/rsvp_te/SignallingMsg_m.h \
  networklayer/rsvp_te/IntServ_m.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ted/TEDAccess.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/rsvp_te/RSVPPacket.h \
  networklayer/rsvp_te/IntServ.h \
  networklayer/rsvp_te/RSVPResvMsg_m.h \
  networklayer/rsvp_te/RSVPHelloMsg.h \
  networklayer/rsvp_te/RSVPPathMsg_m.h \
  networklayer/rsvp_te/RSVPPathMsg.h \
  networklayer/contract/IPv6Address.h \
  base/ILifecycle.h \
  networklayer/mpls/ConstType.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/INotifiable.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  util/XMLUtils.h \
  base/LifecycleOperation.h \
  networklayer/ted/TED_m.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/mpls/IClassifier.h \
  util/common.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  networklayer/rsvp_te/IRSVPClassifier.h \
  networklayer/rsvp_te/RSVP.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/NodeOperations.h \
  networklayer/ted/TED.h \
  base/INETDefs.h \
  networklayer/rsvp_te/Utils.h \
  networklayer/rsvp_te/RSVPPacket_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/NotifierConsts.h \
  base/IScriptable.h \
  networklayer/mpls/LIBTable.h
$O/networklayer/rsvp_te/SimpleClassifier.o: networklayer/rsvp_te/SimpleClassifier.cc \
  base/Compat.h \
  networklayer/rsvp_te/IntServ_m.h \
  networklayer/rsvp_te/SignallingMsg_m.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/rsvp_te/RSVPHello_m.h \
  networklayer/mpls/LIBTableAccess.h \
  networklayer/rsvp_te/RSVPResvMsg.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/rsvp_te/SimpleClassifier.h \
  networklayer/rsvp_te/IntServ.h \
  networklayer/rsvp_te/RSVPPacket.h \
  networklayer/rsvp_te/RSVPResvMsg_m.h \
  networklayer/rsvp_te/RSVPPathMsg.h \
  networklayer/rsvp_te/RSVPHelloMsg.h \
  networklayer/rsvp_te/RSVPPathMsg_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/mpls/ConstType.h \
  base/ILifecycle.h \
  base/INotifiable.h \
  util/XMLUtils.h \
  networklayer/mpls/IClassifier.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/rsvp_te/RSVPAccess.h \
  networklayer/rsvp_te/IRSVPClassifier.h \
  networklayer/rsvp_te/RSVP.h \
  base/NotifierConsts.h \
  base/IScriptable.h \
  networklayer/mpls/LIBTable.h \
  base/INETDefs.h \
  networklayer/rsvp_te/RSVPPacket_m.h
$O/networklayer/rsvp_te/Utils.o: networklayer/rsvp_te/Utils.cc \
  base/INETDefs.h \
  networklayer/rsvp_te/Utils.h \
  networklayer/rsvp_te/IntServ_m.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/rsvp_te/IntServ.h
$O/networklayer/ted/LinkStateRouting.o: networklayer/ted/LinkStateRouting.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ted/TED_m.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  base/INotifiable.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/INETDefs.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ted/TED.h \
  networklayer/common/InterfaceToken.h \
  networklayer/rsvp_te/IntServ.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/ted/LinkStateRouting.h \
  base/Compat.h \
  networklayer/rsvp_te/IntServ_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ted/TEDAccess.h \
  networklayer/ipv4/IPv4Route.h \
  base/NotificationBoard.h \
  networklayer/contract/IPSocket.h \
  linklayer/contract/MACAddress.h \
  networklayer/ted/LinkStatePacket_m.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ILifecycle.h \
  networklayer/contract/IPv6Address.h
$O/networklayer/ted/TED.o: networklayer/ted/TED.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/LifecycleOperation.h \
  networklayer/ted/TED_m.h \
  base/INotifiable.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/NotifierConsts.h \
  base/INETDefs.h \
  networklayer/ted/TED.h \
  base/NodeOperations.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/rsvp_te/IntServ.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/rsvp_te/IntServ_m.h \
  base/Compat.h \
  base/NotificationBoard.h \
  networklayer/contract/IPProtocolId_m.h \
  linklayer/contract/MACAddress.h \
  base/ILifecycle.h \
  networklayer/contract/IPv6Address.h
$O/networklayer/xmipv6/BindingCache.o: networklayer/xmipv6/BindingCache.cc \
  networklayer/contract/IPv6Address.h \
  base/Compat.h \
  base/INETDefs.h \
  networklayer/xmipv6/BindingCache.h
$O/networklayer/xmipv6/BindingUpdateList.o: networklayer/xmipv6/BindingUpdateList.cc \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6Address.h \
  base/ModuleAccess.h \
  base/Compat.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  networklayer/xmipv6/BindingUpdateList.h \
  base/INETDefs.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/common/InterfaceEntry.h
$O/networklayer/xmipv6/MobilityHeader.o: networklayer/xmipv6/MobilityHeader.cc \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6ExtensionHeaders.h \
  networklayer/contract/IPProtocolId_m.h \
  base/Compat.h \
  networklayer/xmipv6/MobilityHeader_m.h \
  networklayer/ipv6/IPv6Datagram.h \
  base/INETDefs.h \
  networklayer/xmipv6/MobilityHeader.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h
$O/networklayer/xmipv6/xMIPv6.o: networklayer/xmipv6/xMIPv6.cc \
  base/Compat.h \
  networklayer/ipv6/RoutingTable6Access.h \
  networklayer/xmipv6/MobilityHeader_m.h \
  networklayer/common/IInterfaceTable.h \
  base/NotificationBoard.h \
  networklayer/xmipv6/BindingCacheAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/xmipv6/xMIPv6.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6ExtensionHeaders.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/xmipv6/BindingUpdateListAccess.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/icmpv6/IPv6NDMessage_m.h \
  networklayer/icmpv6/IPv6NeighbourDiscovery.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/icmpv6/IPv6NeighbourDiscoveryAccess.h \
  base/ILifecycle.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/icmpv6/IPv6NeighbourCache.h \
  networklayer/xmipv6/BindingCache.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  base/INotifiable.h \
  networklayer/ipv6/RoutingTable6.h \
  networklayer/ipv6tunneling/IPv6Tunneling.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/ipv6tunneling/IPv6TunnelingAccess.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/common/InterfaceToken.h \
  base/NotifierConsts.h \
  networklayer/xmipv6/MobilityHeader.h \
  base/INETDefs.h \
  networklayer/xmipv6/BindingUpdateList.h
$O/parser/Parser.o: parser/Parser.cc \
  /usr/include/glibmm-2.4/glibmm/ustring.h \
  /usr/include/glib-2.0/glib/gtypes.h \
  actions/send/Send.h \
  /usr/include/libxml++-2.6/libxml++/parsers/domparser.h \
  /usr/include/libxml++-2.6/libxml++/nodes/cdatanode.h \
  /usr/include/glib-2.0/glib/gurifuncs.h \
  /usr/include/glib-2.0/glib/ghash.h \
  /usr/include/glib-2.0/glib/gdir.h \
  /usr/include/glib-2.0/glib/ghook.h \
  /usr/include/glib-2.0/glib/gdate.h \
  /usr/include/libxml++-2.6/libxml++/validators/dtdvalidator.h \
  attacks/conditionalattack/packetfilter/FilterBlock.h \
  /usr/include/glib-2.0/glib/gmacros.h \
  parser/Parser.h \
  /usr/include/glib-2.0/glib/giochannel.h \
  actions/disable/Disable.h \
  /usr/include/glib-2.0/glib/gpoll.h \
  /usr/include/glib-2.0/glib/gslice.h \
  /usr/include/glib-2.0/glib/gasyncqueue.h \
  attacks/attackentry/AttackEntry.h \
  /usr/include/glib-2.0/glib/gscanner.h \
  /usr/include/libxml++-2.6/libxml++/attributedeclaration.h \
  /usr/lib/x86_64-linux-gnu/glib-2.0/include/glibconfig.h \
  variable/Variable.h \
  /usr/include/glib-2.0/glib/gconvert.h \
  /usr/include/glib-2.0/glib/gdataset.h \
  /usr/include/glib-2.0/glib/gthreadpool.h \
  /usr/include/glib-2.0/glib/gvariant.h \
  /usr/include/glib-2.0/glib/gstringchunk.h \
  base/Coord.h \
  /usr/include/glib-2.0/glib/gmain.h \
  /usr/include/glib-2.0/glib/gstrfuncs.h \
  /usr/include/glib-2.0/glib/gslist.h \
  /usr/include/glib-2.0/glib/gtimer.h \
  /usr/include/libxml++-2.6/libxml++/nodes/element.h \
  /usr/lib/libxml++-2.6/include/libxml++config.h \
  actions/create/Create.h \
  actions/drop/Drop.h \
  /usr/include/libxml++-2.6/libxml++/nodes/commentnode.h \
  base/INETDefs.h \
  /usr/include/glib-2.0/glib/goption.h \
  /usr/include/glib-2.0/glib/gfileutils.h \
  /usr/include/glib-2.0/glib/gqsort.h \
  /usr/include/glib-2.0/glib/gtrashstack.h \
  /usr/include/glib-2.0/glib.h \
  /usr/include/glib-2.0/glib/gbase64.h \
  /usr/include/libxml++-2.6/libxml++/nodes/node.h \
  /usr/include/glib-2.0/glib/gprimes.h \
  /usr/include/libxml++-2.6/libxml++/nodes/entityreference.h \
  /usr/include/libxml++-2.6/libxml++/parsers/parser.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/validity_error.h \
  /usr/include/libxml++-2.6/libxml++/nodes/xincludeend.h \
  /usr/include/glib-2.0/glib/ghostutils.h \
  /usr/include/glib-2.0/glib/gpattern.h \
  /usr/include/glib-2.0/glib/gbookmarkfile.h \
  /usr/include/glib-2.0/glib/gkeyfile.h \
  actions/move/Move.h \
  /usr/include/libxml++-2.6/libxml++/nodes/xincludestart.h \
  /usr/include/libxml++-2.6/libxml++/nodes/textnode.h \
  /usr/include/libxml++-2.6/libxml++/validators/validator.h \
  /usr/include/glib-2.0/glib/gatomic.h \
  /usr/include/glib-2.0/glib/gspawn.h \
  /usr/include/libxml++-2.6/libxml++/parsers/textreader.h \
  /usr/include/glib-2.0/glib/deprecated/gmain.h \
  /usr/include/glib-2.0/glib/glist.h \
  /usr/include/glib-2.0/glib/gquark.h \
  /usr/include/glib-2.0/glib/gwin32.h \
  /usr/include/glib-2.0/glib/grand.h \
  util/FWMath.h \
  actions/seappexpression/SEAPPExpression.h \
  /usr/include/libxml++-2.6/libxml++/document.h \
  /usr/include/glib-2.0/glib/deprecated/gcache.h \
  /usr/include/glib-2.0/glib/gtimezone.h \
  /usr/include/glibmm-2.4/glibmm/unicode.h \
  /usr/include/glib-2.0/glib/gmessages.h \
  /usr/include/glib-2.0/glib/gsequence.h \
  /usr/include/glib-2.0/glib/gtree.h \
  base/Compat.h \
  /usr/include/libxml++-2.6/libxml++/libxml++.h \
  actions/retrieve/Retrieve.h \
  /usr/include/glib-2.0/glib/gstring.h \
  /usr/include/glib-2.0/glib/gbacktrace.h \
  /usr/include/glib-2.0/glib/galloca.h \
  /usr/include/glib-2.0/glib/gbitlock.h \
  /usr/include/glib-2.0/glib/gmarkup.h \
  util/seapputils/seapputils.h \
  /usr/include/libxml++-2.6/libxml++/schema.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/internal_error.h \
  /usr/include/glib-2.0/glib/deprecated/gallocator.h \
  /usr/include/glib-2.0/glib/gunicode.h \
  attacks/attackbase/AttackBase.h \
  /usr/include/glib-2.0/glib/gnode.h \
  /usr/include/libxml++-2.6/libxml++/parsers/saxparser.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/exception.h \
  attacks/conditionalattack/conditionalattack/ConditionalAttack.h \
  /usr/include/glib-2.0/glib/gthread.h \
  /usr/include/glib-2.0/glib/gerror.h \
  /usr/include/glib-2.0/glib/garray.h \
  /usr/include/glib-2.0/glib/gqueue.h \
  /usr/include/libxml++-2.6/libxml++/nodes/contentnode.h \
  /usr/include/glib-2.0/glib/deprecated/gcompletion.h \
  /usr/include/glib-2.0/glib/gversion.h \
  actions/change/Change.h \
  /usr/include/libxml++-2.6/libxml++/nodes/processinginstructionnode.h \
  /usr/include/libxml++-2.6/libxml++/attributenode.h \
  /usr/include/glib-2.0/glib/gtestutils.h \
  attacks/physicalattack/PhysicalAttack.h \
  actions/destroy/Destroy.h \
  /usr/include/glib-2.0/glib/gcharset.h \
  /usr/include/libxml++-2.6/libxml++/validators/schemavalidator.h \
  /usr/include/glib-2.0/glib/gchecksum.h \
  /usr/include/libxml++-2.6/libxml++/noncopyable.h \
  /usr/include/glib-2.0/glib/gdatetime.h \
  /usr/include/glib-2.0/glib/gutils.h \
  /usr/lib/x86_64-linux-gnu/glibmm-2.4/include/glibmmconfig.h \
  actions/actionbase/ActionBase.h \
  /usr/include/glib-2.0/glib/deprecated/grel.h \
  /usr/include/glib-2.0/glib/deprecated/gthread.h \
  /usr/include/libxml++-2.6/libxml++/nodes/entitydeclaration.h \
  /usr/include/glib-2.0/glib/gmappedfile.h \
  /usr/include/glib-2.0/glib/gvarianttype.h \
  actions/put/Put.h \
  /usr/include/glib-2.0/glib/gbytes.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/parse_error.h \
  actions/clone/Clone.h \
  /usr/include/glib-2.0/glib/gversionmacros.h \
  /usr/include/libxml++-2.6/libxml++/attribute.h \
  /usr/include/glib-2.0/glib/ggettext.h \
  /usr/include/libxml++-2.6/libxml++/dtd.h \
  /usr/include/glib-2.0/glib/gshell.h \
  /usr/include/glib-2.0/glib/gregex.h \
  attacks/unconditionalattack/UnconditionalAttack.h \
  /usr/include/glib-2.0/glib/ghmac.h \
  /usr/include/glib-2.0/glib/gmem.h \
  attacks/conditionalattack/packetfilter/PacketFilter.h \
  globalfilter/putmessages/PutMessages.h \
  /usr/include/glib-2.0/glib/genviron.h
$O/status/NodeStatus.o: status/NodeStatus.cc \
  base/Compat.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/LifecycleOperation.h \
  base/NodeOperations.h \
  status/NodeStatus.h \
  base/INETDefs.h
$O/transport/contract/SCTPSocket.o: transport/contract/SCTPSocket.cc \
  transport/contract/UDPSocket.h \
  transport/contract/SCTPCommand_m.h \
  networklayer/contract/IPv6Address.h \
  transport/contract/SCTPCommand.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  base/INETDefs.h \
  transport/sctp/SCTP.h \
  transport/contract/SCTPSocket.h
$O/transport/contract/TCPSocket.o: transport/contract/TCPSocket.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  base/Compat.h \
  base/INETDefs.h \
  transport/contract/TCPSocket.h \
  transport/contract/TCPCommand_m.h
$O/transport/contract/TCPSocketMap.o: transport/contract/TCPSocketMap.cc \
  transport/contract/TCPCommand_m.h \
  transport/contract/TCPSocket.h \
  base/INETDefs.h \
  transport/contract/TCPSocketMap.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv6Address.h
$O/transport/contract/UDPSocket.o: transport/contract/UDPSocket.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/INotifiable.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  base/INETDefs.h \
  transport/contract/UDPControlInfo.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/UDPControlInfo_m.h \
  base/NotificationBoard.h \
  base/Compat.h \
  networklayer/common/IInterfaceTable.h \
  transport/contract/UDPSocket.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6Address.h
$O/transport/rtp/RTCP.o: transport/rtp/RTCP.cc \
  base/INETDefs.h \
  transport/rtp/RTPParticipantInfo_m.h \
  transport/rtp/RTPSenderInfo.h \
  transport/rtp/RTCPPacket1.h \
  status/NodeStatus.h \
  transport/rtp/RTCPPacket3_m.h \
  transport/rtp/reports.h \
  transport/rtp/RTPReceiverInfo.h \
  transport/rtp/RTCPPacket.h \
  transport/rtp/RTCPPacket2_m.h \
  transport/rtp/RTPPacket_m.h \
  base/LifecycleOperation.h \
  transport/rtp/RTPInnerPacket.h \
  transport/contract/UDPSocket.h \
  base/ILifecycle.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  transport/rtp/RTCPPacket3.h \
  transport/rtp/sdes.h \
  networklayer/contract/IPv6Address.h \
  transport/rtp/RTPInnerPacket_m.h \
  transport/rtp/RTCPPacket1_m.h \
  transport/rtp/reports_m.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  transport/rtp/RTCP.h \
  transport/rtp/RTPParticipantInfo.h \
  base/Compat.h \
  transport/rtp/RTCPPacket2.h
$O/transport/rtp/RTCPPacket.o: transport/rtp/RTCPPacket.cc \
  base/INETDefs.h \
  transport/rtp/RTCPPacket1.h \
  transport/rtp/RTCPPacket3_m.h \
  transport/rtp/RTCPPacket.h \
  transport/rtp/reports.h \
  transport/rtp/RTCPPacket2_m.h \
  transport/rtp/RTCPPacket3.h \
  transport/rtp/sdes.h \
  transport/rtp/RTCPPacket1_m.h \
  transport/rtp/reports_m.h \
  base/Compat.h \
  transport/rtp/RTCPPacket2.h
$O/transport/rtp/RTP.o: transport/rtp/RTP.cc \
  networklayer/contract/IPv6Address.h \
  transport/rtp/RTPInnerPacket_m.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  base/ILifecycle.h \
  transport/rtp/RTP.h \
  transport/contract/UDPSocket.h \
  linklayer/contract/MACAddress.h \
  transport/rtp/RTPInnerPacket.h \
  transport/rtp/RTPInterfacePacket_m.h \
  transport/rtp/RTPProfile.h \
  networklayer/ipv4/IPv4Route.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  transport/contract/UDPControlInfo_m.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  status/NodeStatus.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceEntry.h \
  transport/rtp/RTPPacket_m.h \
  base/LifecycleOperation.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/RoutingTableAccess.h
$O/transport/rtp/RTPInnerPacket.o: transport/rtp/RTPInnerPacket.cc \
  networklayer/contract/IPv4Address.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  base/Compat.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPInnerPacket.h \
  transport/rtp/RTPInnerPacket_m.h \
  transport/rtp/RTPPacket_m.h \
  base/INETDefs.h
$O/transport/rtp/RTPPacket.o: transport/rtp/RTPPacket.cc \
  transport/rtp/RTPPacket_m.h \
  base/INETDefs.h \
  base/Compat.h \
  transport/rtp/RTPPacket.h
$O/transport/rtp/RTPParticipantInfo.o: transport/rtp/RTPParticipantInfo.cc \
  transport/rtp/reports.h \
  transport/rtp/RTPPacket_m.h \
  base/INETDefs.h \
  transport/rtp/RTPParticipantInfo_m.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  transport/rtp/RTPParticipantInfo.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/reports_m.h \
  transport/rtp/sdes.h
$O/transport/rtp/RTPPayloadReceiver.o: transport/rtp/RTPPayloadReceiver.cc \
  transport/rtp/RTPPacket_m.h \
  transport/rtp/RTPPayloadReceiver.h \
  base/INETDefs.h \
  networklayer/contract/IPv4Address.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  base/Compat.h \
  transport/rtp/RTPInnerPacket.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPInnerPacket_m.h
$O/transport/rtp/RTPPayloadSender.o: transport/rtp/RTPPayloadSender.cc \
  transport/rtp/RTPPacket_m.h \
  transport/rtp/RTPPayloadSender.h \
  base/INETDefs.h \
  base/Compat.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  networklayer/contract/IPv4Address.h \
  transport/rtp/RTPInnerPacket_m.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPInnerPacket.h \
  transport/rtp/RTPInterfacePacket_m.h
$O/transport/rtp/RTPProfile.o: transport/rtp/RTPProfile.cc \
  base/INETDefs.h \
  transport/rtp/RTPPayloadSender.h \
  transport/rtp/RTPPayloadReceiver.h \
  transport/rtp/RTPPacket_m.h \
  transport/rtp/RTPInnerPacket.h \
  transport/rtp/RTPProfile.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPInnerPacket_m.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h
$O/transport/rtp/RTPReceiverInfo.o: transport/rtp/RTPReceiverInfo.cc \
  transport/rtp/RTPPacket.h \
  transport/rtp/reports_m.h \
  transport/rtp/sdes.h \
  networklayer/contract/IPv4Address.h \
  transport/rtp/RTPParticipantInfo.h \
  base/Compat.h \
  base/INETDefs.h \
  transport/rtp/RTPParticipantInfo_m.h \
  transport/rtp/reports.h \
  transport/rtp/RTPReceiverInfo.h \
  transport/rtp/RTPPacket_m.h
$O/transport/rtp/RTPSenderInfo.o: transport/rtp/RTPSenderInfo.cc \
  transport/rtp/reports.h \
  transport/rtp/RTPPacket_m.h \
  base/INETDefs.h \
  transport/rtp/RTPSenderInfo.h \
  transport/rtp/RTPParticipantInfo_m.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  transport/rtp/RTPParticipantInfo.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/sdes.h \
  transport/rtp/reports_m.h
$O/transport/rtp/reports.o: transport/rtp/reports.cc \
  transport/rtp/reports.h \
  transport/rtp/reports_m.h
$O/transport/rtp/sdes.o: transport/rtp/sdes.cc \
  base/INETDefs.h \
  transport/rtp/sdes.h \
  base/Compat.h
$O/transport/rtp/profiles/avprofile/RTPAVProfile.o: transport/rtp/profiles/avprofile/RTPAVProfile.cc \
  base/INETDefs.h \
  base/Compat.h \
  transport/rtp/profiles/avprofile/RTPAVProfile.h \
  transport/rtp/RTPProfile.h
$O/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.o: transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.cc \
  transport/rtp/RTPPacket.h \
  base/Compat.h \
  base/INETDefs.h \
  transport/rtp/profiles/avprofile/RTPMpegPacket_m.h \
  transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.h \
  transport/rtp/RTPPayloadReceiver.h \
  transport/rtp/RTPPacket_m.h
$O/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.o: transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.cc \
  transport/rtp/RTPInnerPacket.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPInnerPacket_m.h \
  networklayer/contract/IPv4Address.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  base/Compat.h \
  base/INETDefs.h \
  transport/rtp/RTPPayloadSender.h \
  transport/rtp/profiles/avprofile/RTPMpegPacket_m.h \
  transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.h \
  transport/rtp/RTPPacket_m.h
$O/transport/sctp/SCTP.o: transport/sctp/SCTP.cc \
  transport/sctp/SCTP.h \
  networklayer/common/InterfaceToken.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPSendStream.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/INETDefs.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/NotifierConsts.h \
  transport/sctp/SCTPAssociation.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  base/INotifiable.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  transport/contract/SCTPCommand.h \
  transport/sctp/SCTPGapList.h \
  networklayer/contract/IPv6Address.h \
  transport/contract/SCTPCommand_m.h \
  transport/sctp/SCTPReceiveStream.h \
  base/ILifecycle.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  transport/contract/UDPSocket.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  transport/sctp/SCTPQueue.h \
  networklayer/contract/IPSocket.h \
  base/NotificationBoard.h \
  base/Compat.h \
  networklayer/common/IInterfaceTable.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTable.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h
$O/transport/sctp/SCTPAlg.o: transport/sctp/SCTPAlg.cc \
  transport/sctp/SCTPQueue.h \
  base/NotificationBoard.h \
  base/Compat.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTable.h \
  transport/sctp/SCTPAlgorithm.h \
  transport/sctp/SCTPAlg.h \
  transport/sctp/SCTPGapList.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTPReceiveStream.h \
  base/ILifecycle.h \
  linklayer/contract/MACAddress.h \
  transport/contract/UDPSocket.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  base/INotifiable.h \
  transport/sctp/SCTP.h \
  networklayer/common/InterfaceToken.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPSendStream.h \
  base/INETDefs.h \
  base/NotifierConsts.h \
  transport/sctp/SCTPAssociation.h
$O/transport/sctp/SCTPAssociationAddIP.o: transport/sctp/SCTPAssociationAddIP.cc \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  base/Compat.h \
  base/NotificationBoard.h \
  transport/sctp/SCTPQueue.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTable.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTPGapList.h \
  transport/contract/UDPSocket.h \
  linklayer/contract/MACAddress.h \
  base/ILifecycle.h \
  transport/sctp/SCTPReceiveStream.h \
  base/INotifiable.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  util/common.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/common/InterfaceToken.h \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPAssociation.h \
  base/NotifierConsts.h \
  base/INETDefs.h
$O/transport/sctp/SCTPAssociationBase.o: transport/sctp/SCTPAssociationBase.cc \
  base/NotificationBoard.h \
  transport/sctp/SCTPQueue.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  base/Compat.h \
  networklayer/ipv6/RoutingTable6Access.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTable.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  transport/sctp/SCTPAlgorithm.h \
  transport/contract/SCTPCommand.h \
  networklayer/contract/IPv6Address.h \
  transport/contract/SCTPCommand_m.h \
  transport/sctp/SCTPGapList.h \
  base/ILifecycle.h \
  transport/sctp/SCTPReceiveStream.h \
  transport/contract/UDPSocket.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv6/RoutingTable6.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/common/InterfaceToken.h \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPMessage.h \
  base/INETDefs.h \
  transport/sctp/SCTPAssociation.h \
  base/NotifierConsts.h
$O/transport/sctp/SCTPAssociationEventProc.o: transport/sctp/SCTPAssociationEventProc.cc \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  base/INotifiable.h \
  base/INETDefs.h \
  base/NotifierConsts.h \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTP.h \
  networklayer/common/InterfaceToken.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPMessage.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTable.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  transport/sctp/SCTPAlgorithm.h \
  transport/sctp/SCTPQueue.h \
  base/NotificationBoard.h \
  base/Compat.h \
  networklayer/common/IInterfaceTable.h \
  transport/sctp/SCTPReceiveStream.h \
  base/ILifecycle.h \
  transport/contract/UDPSocket.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/contract/SCTPCommand.h \
  transport/sctp/SCTPGapList.h \
  networklayer/contract/IPv6Address.h \
  transport/contract/SCTPCommand_m.h
$O/transport/sctp/SCTPAssociationRcvMessage.o: transport/sctp/SCTPAssociationRcvMessage.cc \
  networklayer/contract/IPv6Address.h \
  transport/contract/SCTPCommand_m.h \
  transport/sctp/SCTPGapList.h \
  transport/contract/SCTPCommand.h \
  networklayer/contract/IPProtocolId_m.h \
  linklayer/contract/MACAddress.h \
  transport/contract/UDPSocket.h \
  transport/sctp/SCTPReceiveStream.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  base/Compat.h \
  base/NotificationBoard.h \
  transport/sctp/SCTPQueue.h \
  transport/sctp/SCTPAlgorithm.h \
  networklayer/common/InterfaceTable.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPMessage.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTP.h \
  networklayer/common/InterfaceToken.h \
  transport/sctp/SCTPAssociation.h \
  base/NotifierConsts.h \
  base/INETDefs.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  base/INotifiable.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  util/common.h
$O/transport/sctp/SCTPAssociationSendAll.o: transport/sctp/SCTPAssociationSendAll.cc \
  base/ILifecycle.h \
  transport/sctp/SCTPReceiveStream.h \
  linklayer/contract/MACAddress.h \
  transport/contract/UDPSocket.h \
  transport/contract/SCTPCommand.h \
  transport/sctp/SCTPGapList.h \
  networklayer/contract/IPv6Address.h \
  transport/contract/SCTPCommand_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPAlgorithm.h \
  transport/sctp/SCTPQueue.h \
  base/NotificationBoard.h \
  base/Compat.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  base/NotifierConsts.h \
  transport/sctp/SCTPAssociation.h \
  networklayer/common/InterfaceToken.h \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPMessage.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  base/INotifiable.h
$O/transport/sctp/SCTPAssociationStreamReset.o: transport/sctp/SCTPAssociationStreamReset.cc \
  base/INotifiable.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTP.h \
  networklayer/common/InterfaceToken.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPSendStream.h \
  base/INETDefs.h \
  base/NotifierConsts.h \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTPQueue.h \
  base/NotificationBoard.h \
  base/Compat.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTable.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  transport/contract/SCTPCommand.h \
  transport/sctp/SCTPGapList.h \
  transport/contract/SCTPCommand_m.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTPReceiveStream.h \
  base/ILifecycle.h \
  transport/contract/UDPSocket.h \
  linklayer/contract/MACAddress.h
$O/transport/sctp/SCTPAssociationUtil.o: transport/sctp/SCTPAssociationUtil.cc \
  base/INETDefs.h \
  transport/sctp/SCTPAssociation.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/NotifierConsts.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/ipv4/RoutingTable.h \
  transport/sctp/SCTP.h \
  networklayer/common/InterfaceToken.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPMessage.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  util/common.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv6/RoutingTable6.h \
  base/INotifiable.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  transport/sctp/SCTPReceiveStream.h \
  base/ILifecycle.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv6ControlInfo.h \
  linklayer/contract/MACAddress.h \
  transport/contract/UDPSocket.h \
  transport/contract/SCTPCommand.h \
  transport/contract/SCTPCommand_m.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTPGapList.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTable.h \
  transport/sctp/SCTPAlgorithm.h \
  base/NotificationBoard.h \
  transport/sctp/SCTPQueue.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv6/RoutingTable6Access.h \
  base/Compat.h
$O/transport/sctp/SCTPCCFunctions.o: transport/sctp/SCTPCCFunctions.cc \
  networklayer/common/InterfaceTable.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/IInterfaceTable.h \
  base/Compat.h \
  base/NotificationBoard.h \
  transport/sctp/SCTPQueue.h \
  linklayer/contract/MACAddress.h \
  transport/contract/UDPSocket.h \
  transport/sctp/SCTPReceiveStream.h \
  base/ILifecycle.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTPGapList.h \
  base/INotifiable.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  transport/sctp/SCTPAssociation.h \
  base/NotifierConsts.h \
  base/INETDefs.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTP.h \
  networklayer/common/InterfaceToken.h
$O/transport/sctp/SCTPGapList.o: transport/sctp/SCTPGapList.cc \
  base/Compat.h \
  networklayer/common/IInterfaceTable.h \
  transport/sctp/SCTPQueue.h \
  base/NotificationBoard.h \
  networklayer/common/InterfaceTable.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  transport/sctp/SCTPGapList.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  transport/contract/UDPSocket.h \
  transport/sctp/SCTPReceiveStream.h \
  base/ILifecycle.h \
  base/INotifiable.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTP.h \
  networklayer/common/InterfaceToken.h \
  transport/sctp/SCTPMessage_m.h \
  base/NotifierConsts.h \
  transport/sctp/SCTPAssociation.h \
  base/INETDefs.h
$O/transport/sctp/SCTPMessage.o: transport/sctp/SCTPMessage.cc \
  base/INotifiable.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTP.h \
  networklayer/common/InterfaceToken.h \
  transport/sctp/SCTPAssociation.h \
  base/NotifierConsts.h \
  base/INETDefs.h \
  networklayer/common/IInterfaceTable.h \
  base/Compat.h \
  base/NotificationBoard.h \
  transport/sctp/SCTPQueue.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTable.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTPGapList.h \
  transport/contract/UDPSocket.h \
  linklayer/contract/MACAddress.h \
  transport/sctp/SCTPReceiveStream.h \
  base/ILifecycle.h
$O/transport/sctp/SCTPNatHook.o: transport/sctp/SCTPNatHook.cc \
  networklayer/common/IInterfaceTable.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/IPv4Route.h \
  base/Compat.h \
  base/NotificationBoard.h \
  transport/sctp/SCTPQueue.h \
  networklayer/ipv4/IPv4.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPNatTable.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTPGapList.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ProtocolMap.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  transport/contract/UDPSocket.h \
  transport/sctp/SCTPReceiveStream.h \
  base/ILifecycle.h \
  networklayer/common/INetfilter.h \
  base/QueueBase.h \
  transport/sctp/SCTPNatHook.h \
  networklayer/ipv4/ICMP.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INotifiable.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4FragBuf.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPMessage.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  transport/sctp/SCTPMessage_m.h \
  base/AbstractQueue.h \
  transport/sctp/SCTP.h \
  networklayer/common/InterfaceToken.h \
  transport/sctp/SCTPAssociation.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/NotifierConsts.h \
  base/ReassemblyBuffer.h \
  base/INETDefs.h
$O/transport/sctp/SCTPNatTable.o: transport/sctp/SCTPNatTable.cc \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPSendStream.h \
  networklayer/common/InterfaceToken.h \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPMessage_m.h \
  base/NotifierConsts.h \
  transport/sctp/SCTPAssociation.h \
  base/INETDefs.h \
  base/INotifiable.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  transport/sctp/SCTPGapList.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  transport/contract/UDPSocket.h \
  base/ILifecycle.h \
  transport/sctp/SCTPReceiveStream.h \
  base/Compat.h \
  networklayer/common/IInterfaceTable.h \
  transport/sctp/SCTPQueue.h \
  base/NotificationBoard.h \
  transport/sctp/SCTPNatTable.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTable.h
$O/transport/sctp/SCTPQueue.o: transport/sctp/SCTPQueue.cc \
  transport/sctp/SCTPGapList.h \
  networklayer/contract/IPv6Address.h \
  base/ILifecycle.h \
  transport/sctp/SCTPReceiveStream.h \
  transport/contract/UDPSocket.h \
  linklayer/contract/MACAddress.h \
  transport/sctp/SCTPQueue.h \
  base/NotificationBoard.h \
  base/Compat.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTable.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceToken.h \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPSendStream.h \
  base/INETDefs.h \
  base/NotifierConsts.h \
  transport/sctp/SCTPAssociation.h \
  base/INotifiable.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h
$O/transport/sctp/SCTPReceiveStream.o: transport/sctp/SCTPReceiveStream.cc \
  base/ModuleAccess.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/common/IInterfaceTable.h \
  transport/sctp/SCTPQueue.h \
  base/NotificationBoard.h \
  transport/contract/UDPSocket.h \
  linklayer/contract/MACAddress.h \
  transport/sctp/SCTPReceiveStream.h \
  base/ILifecycle.h \
  transport/sctp/SCTPGapList.h \
  networklayer/contract/IPv6Address.h \
  base/INotifiable.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  base/NotifierConsts.h \
  transport/sctp/SCTPAssociation.h \
  base/INETDefs.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTP.h \
  networklayer/common/InterfaceToken.h \
  transport/sctp/SCTPMessage_m.h
$O/transport/sctp/SCTPSSFunctions.o: transport/sctp/SCTPSSFunctions.cc \
  networklayer/common/IInterfaceTable.h \
  base/Compat.h \
  base/NotificationBoard.h \
  transport/sctp/SCTPQueue.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTPGapList.h \
  transport/contract/UDPSocket.h \
  linklayer/contract/MACAddress.h \
  transport/sctp/SCTPReceiveStream.h \
  base/ILifecycle.h \
  base/INotifiable.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTP.h \
  networklayer/common/InterfaceToken.h \
  transport/sctp/SCTPAssociation.h \
  base/NotifierConsts.h \
  base/INETDefs.h
$O/transport/sctp/SCTPSendStream.o: transport/sctp/SCTPSendStream.cc \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPSendStream.h \
  base/INETDefs.h \
  transport/sctp/SCTPAssociation.h \
  networklayer/contract/IPv6Address.h \
  transport/contract/UDPSocket.h \
  transport/sctp/SCTPQueue.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h
$O/transport/tcp/TCP.o: transport/tcp/TCP.cc \
  transport/tcp/queues/TCPByteStreamSendQueue.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/queues/TCPMsgBasedSendQueue.h \
  base/ILifecycle.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/tcp/queues/TCPVirtualDataSendQueue.h \
  networklayer/contract/IPSocket.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/TCP.h \
  transport/tcp/TCPReceiveQueue.h \
  transport/tcp/queues/TCPByteStreamRcvQueue.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp/TCPConnection.h \
  transport/tcp/TCPSendQueue.h \
  status/NodeStatus.h \
  transport/tcp_common/TCPSegment.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/NodeOperations.h \
  base/ByteArray_m.h \
  base/INETDefs.h \
  base/ByteArray.h \
  transport/tcp/queues/TCPMsgBasedRcvQueue.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/ICMPMessage_m.h \
  transport/contract/TCPCommand_m.h \
  base/ByteArrayBuffer.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  base/LifecycleOperation.h \
  transport/tcp/queues/TCPVirtualDataRcvQueue.h
$O/transport/tcp/TCPConnectionBase.o: transport/tcp/TCPConnectionBase.cc \
  networklayer/contract/IPv6Address.h \
  base/ILifecycle.h \
  base/Compat.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/TCP.h \
  transport/tcp/TCPReceiveQueue.h \
  transport/tcp/TCPSendQueue.h \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp/TCPSACKRexmitQueue.h \
  transport/tcp_common/TCPSegment.h \
  base/ByteArray.h \
  base/ByteArray_m.h \
  base/INETDefs.h \
  transport/tcp/TCPAlgorithm.h \
  transport/contract/TCPCommand_m.h
$O/transport/tcp/TCPConnectionEventProc.o: transport/tcp/TCPConnectionEventProc.cc \
  base/ILifecycle.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCPSendQueue.h \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  transport/tcp/TCP.h \
  transport/tcp/TCPReceiveQueue.h \
  transport/tcp_common/TCPSegment_m.h \
  base/ByteArray.h \
  base/INETDefs.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment.h \
  transport/tcp/TCPAlgorithm.h \
  transport/contract/TCPCommand_m.h
$O/transport/tcp/TCPConnectionRcvSegment.o: transport/tcp/TCPConnectionRcvSegment.cc \
  transport/tcp/TCPSendQueue.h \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  transport/tcp/TCP.h \
  transport/tcp/TCPReceiveQueue.h \
  transport/tcp_common/TCPSegment_m.h \
  base/ILifecycle.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCPAlgorithm.h \
  transport/contract/TCPCommand_m.h \
  base/ByteArray.h \
  base/INETDefs.h \
  base/ByteArray_m.h \
  transport/tcp/TCPSACKRexmitQueue.h \
  transport/tcp_common/TCPSegment.h
$O/transport/tcp/TCPConnectionSackUtil.o: transport/tcp/TCPConnectionSackUtil.cc \
  transport/tcp/TCPSendQueue.h \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  base/Compat.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/TCPReceiveQueue.h \
  transport/tcp/TCP.h \
  base/ILifecycle.h \
  networklayer/contract/IPv6Address.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/TCPAlgorithm.h \
  base/ByteArray.h \
  base/ByteArray_m.h \
  base/INETDefs.h \
  transport/tcp_common/TCPSegment.h \
  transport/tcp/TCPSACKRexmitQueue.h
$O/transport/tcp/TCPConnectionUtil.o: transport/tcp/TCPConnectionUtil.cc \
  base/Compat.h \
  transport/tcp/TCPReceiveQueue.h \
  transport/tcp/TCP.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/TCPSendQueue.h \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ILifecycle.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  transport/tcp/TCPAlgorithm.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  transport/tcp/TCPSACKRexmitQueue.h \
  transport/tcp_common/TCPSegment.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/INETDefs.h \
  base/ByteArray_m.h \
  base/ByteArray.h
$O/transport/tcp/TCPSACKRexmitQueue.o: transport/tcp/TCPSACKRexmitQueue.cc \
  transport/contract/TCPCommand_m.h \
  base/INETDefs.h \
  base/ByteArray_m.h \
  base/ByteArray.h \
  transport/tcp_common/TCPSegment.h \
  transport/tcp/TCPSACKRexmitQueue.h \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  transport/tcp/TCP.h \
  transport/tcp_common/TCPSegment_m.h \
  base/ILifecycle.h \
  networklayer/contract/IPv6Address.h
$O/transport/tcp/flavours/DumbTCP.o: transport/tcp/flavours/DumbTCP.cc \
  networklayer/contract/IPv6Address.h \
  base/ILifecycle.h \
  base/Compat.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/TCP.h \
  transport/tcp/flavours/DumbTCP.h \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp_common/TCPSegment.h \
  base/ByteArray.h \
  base/ByteArray_m.h \
  base/INETDefs.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/TCPAlgorithm.h
$O/transport/tcp/flavours/TCPBaseAlg.o: transport/tcp/flavours/TCPBaseAlg.cc \
  transport/tcp_common/TCPSegment.h \
  transport/tcp/TCPSACKRexmitQueue.h \
  base/ByteArray.h \
  base/INETDefs.h \
  base/ByteArray_m.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/TCPAlgorithm.h \
  networklayer/contract/IPv6Address.h \
  base/ILifecycle.h \
  transport/tcp/TCP.h \
  transport/tcp_common/TCPSegment_m.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp/TCPConnection.h
$O/transport/tcp/flavours/TCPNewReno.o: transport/tcp/flavours/TCPNewReno.cc \
  transport/tcp/flavours/TCPNewReno.h \
  transport/tcp_common/TCPSegment.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  base/ByteArray.h \
  base/ByteArray_m.h \
  base/INETDefs.h \
  transport/tcp/flavours/TCPTahoeRenoFamily.h \
  transport/tcp/TCPAlgorithm.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPv6Address.h \
  base/ILifecycle.h \
  base/Compat.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/TCP.h \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h
$O/transport/tcp/flavours/TCPNoCongestionControl.o: transport/tcp/flavours/TCPNoCongestionControl.cc \
  networklayer/contract/IPv6Address.h \
  base/ILifecycle.h \
  base/Compat.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/TCP.h \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp/flavours/TCPNoCongestionControl.h \
  transport/tcp_common/TCPSegment.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  base/ByteArray.h \
  base/ByteArray_m.h \
  base/INETDefs.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/TCPAlgorithm.h
$O/transport/tcp/flavours/TCPReno.o: transport/tcp/flavours/TCPReno.cc \
  transport/contract/TCPCommand_m.h \
  transport/tcp/TCPAlgorithm.h \
  transport/tcp/flavours/TCPTahoeRenoFamily.h \
  transport/tcp_common/TCPSegment.h \
  base/ByteArray.h \
  base/ByteArray_m.h \
  base/INETDefs.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/TCP.h \
  base/Compat.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPv6Address.h \
  base/ILifecycle.h \
  transport/tcp/flavours/TCPReno.h
$O/transport/tcp/flavours/TCPSegmentTransmitInfoList.o: transport/tcp/flavours/TCPSegmentTransmitInfoList.cc \
  transport/tcp_common/TCPSegment.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  base/ByteArray_m.h \
  base/INETDefs.h \
  base/ByteArray.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/TCPAlgorithm.h \
  networklayer/contract/IPv6Address.h \
  base/ILifecycle.h \
  transport/tcp/flavours/TCPSegmentTransmitInfoList.h \
  base/Compat.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/TCP.h \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h
$O/transport/tcp/flavours/TCPTahoe.o: transport/tcp/flavours/TCPTahoe.cc \
  base/INETDefs.h \
  base/ByteArray_m.h \
  base/ByteArray.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  transport/tcp_common/TCPSegment.h \
  transport/tcp/flavours/TCPTahoeRenoFamily.h \
  transport/tcp/TCPAlgorithm.h \
  transport/contract/TCPCommand_m.h \
  base/ILifecycle.h \
  transport/tcp/flavours/TCPTahoe.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp/TCPConnection.h \
  transport/tcp/TCP.h \
  transport/tcp_common/TCPSegment_m.h \
  base/Compat.h
$O/transport/tcp/flavours/TCPTahoeRenoFamily.o: transport/tcp/flavours/TCPTahoeRenoFamily.cc \
  transport/tcp_common/TCPSegment.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  base/INETDefs.h \
  base/ByteArray_m.h \
  base/ByteArray.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/flavours/TCPTahoeRenoFamily.h \
  transport/tcp/TCPAlgorithm.h \
  networklayer/contract/IPv6Address.h \
  base/ILifecycle.h \
  base/Compat.h \
  transport/tcp/TCP.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h
$O/transport/tcp/flavours/TCPVegas.o: transport/tcp/flavours/TCPVegas.cc \
  base/Compat.h \
  transport/tcp/TCP.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/flavours/TCPSegmentTransmitInfoList.h \
  base/ILifecycle.h \
  transport/tcp/flavours/TCPVegas.h \
  transport/tcp/TCPAlgorithm.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp_common/TCPSegment.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  base/INETDefs.h \
  base/ByteArray_m.h \
  base/ByteArray.h
$O/transport/tcp/flavours/TCPWestwood.o: transport/tcp/flavours/TCPWestwood.cc \
  networklayer/contract/IPv6Address.h \
  base/ILifecycle.h \
  transport/tcp/flavours/TCPSegmentTransmitInfoList.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/TCP.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp/TCPConnection.h \
  transport/tcp/flavours/TCPWestwood.h \
  transport/tcp_common/TCPSegment.h \
  base/ByteArray_m.h \
  base/INETDefs.h \
  base/ByteArray.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/TCPAlgorithm.h
$O/transport/tcp/queues/TCPByteStreamRcvQueue.o: transport/tcp/queues/TCPByteStreamRcvQueue.cc \
  transport/tcp_common/TCPSegment.h \
  base/ByteArray_m.h \
  base/INETDefs.h \
  base/ByteArray.h \
  transport/contract/TCPCommand_m.h \
  base/ByteArrayMessage_m.h \
  transport/tcp/queues/TCPVirtualDataRcvQueue.h \
  networklayer/contract/IPv6Address.h \
  base/ILifecycle.h \
  transport/tcp/queues/TCPByteStreamRcvQueue.h \
  base/Compat.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/TCPReceiveQueue.h \
  transport/tcp/TCP.h \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArrayMessage.h
$O/transport/tcp/queues/TCPByteStreamSendQueue.o: transport/tcp/queues/TCPByteStreamSendQueue.cc \
  base/ByteArray.h \
  base/ByteArray_m.h \
  base/INETDefs.h \
  transport/tcp_common/TCPSegment.h \
  base/ByteArrayMessage_m.h \
  base/ByteArrayBuffer.h \
  transport/contract/TCPCommand_m.h \
  base/ILifecycle.h \
  transport/tcp/queues/TCPByteStreamSendQueue.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArrayMessage.h \
  transport/tcp/TCPSendQueue.h \
  transport/tcp/TCPConnection.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/TCP.h \
  base/Compat.h
$O/transport/tcp/queues/TCPMsgBasedRcvQueue.o: transport/tcp/queues/TCPMsgBasedRcvQueue.cc \
  base/Compat.h \
  transport/tcp/TCP.h \
  transport/tcp/TCPReceiveQueue.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPv6Address.h \
  base/ILifecycle.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/queues/TCPVirtualDataRcvQueue.h \
  transport/tcp_common/TCPSegment.h \
  transport/tcp/queues/TCPMsgBasedRcvQueue.h \
  base/INETDefs.h \
  base/ByteArray_m.h \
  base/ByteArray.h
$O/transport/tcp/queues/TCPMsgBasedSendQueue.o: transport/tcp/queues/TCPMsgBasedSendQueue.cc \
  transport/tcp/TCPSendQueue.h \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/TCP.h \
  base/ILifecycle.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/queues/TCPMsgBasedSendQueue.h \
  transport/contract/TCPCommand_m.h \
  base/ByteArray.h \
  base/ByteArray_m.h \
  base/INETDefs.h \
  transport/tcp_common/TCPSegment.h
$O/transport/tcp/queues/TCPVirtualDataRcvQueue.o: transport/tcp/queues/TCPVirtualDataRcvQueue.cc \
  networklayer/contract/IPv6Address.h \
  base/ILifecycle.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/TCP.h \
  transport/tcp/TCPReceiveQueue.h \
  base/Compat.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp/TCPConnection.h \
  transport/tcp_common/TCPSegment.h \
  base/ByteArray_m.h \
  base/INETDefs.h \
  base/ByteArray.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/queues/TCPVirtualDataRcvQueue.h
$O/transport/tcp/queues/TCPVirtualDataSendQueue.o: transport/tcp/queues/TCPVirtualDataSendQueue.cc \
  base/ByteArray_m.h \
  base/INETDefs.h \
  base/ByteArray.h \
  transport/tcp_common/TCPSegment.h \
  transport/contract/TCPCommand_m.h \
  base/ILifecycle.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCPSendQueue.h \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  base/Compat.h \
  transport/tcp/queues/TCPVirtualDataSendQueue.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/TCP.h
$O/transport/tcp_common/TCPSegment.o: transport/tcp_common/TCPSegment.cc \
  transport/tcp_common/TCPSegment_m.h \
  base/Compat.h \
  base/ByteArray_m.h \
  base/INETDefs.h \
  base/ByteArray.h \
  transport/tcp_common/TCPSegment.h
$O/transport/tcp_common/TCPSpoof.o: transport/tcp_common/TCPSpoof.cc \
  networklayer/contract/IPv6ControlInfo_m.h \
  transport/tcp_common/TCPSegment.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ByteArray_m.h \
  base/INETDefs.h \
  base/ByteArray.h \
  networklayer/contract/IPv4ControlInfo.h \
  transport/tcp_common/TCPSegment_m.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPvXAddressResolver.h \
  transport/tcp_common/TCPSpoof.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPProtocolId_m.h
$O/transport/udp/UDP.o: transport/udp/UDP.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ILifecycle.h \
  base/Compat.h \
  transport/udp/UDPPacket.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/icmpv6/ICMPv6Access.h \
  networklayer/ipv4/IPv4Route.h \
  transport/udp/UDPPacket_m.h \
  base/NotificationBoard.h \
  networklayer/contract/IPSocket.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  base/NodeOperations.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/icmpv6/ICMPv6.h \
  status/NodeStatus.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/RoutingTable.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv4ControlInfo.h \
  transport/contract/UDPControlInfo.h \
  base/INETDefs.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  base/LifecycleOperation.h \
  networklayer/ipv4/ICMP.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  base/INotifiable.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  transport/udp/UDP.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IRoutingTable.h
$O/util/Delayer.o: util/Delayer.cc \
  base/Compat.h \
  base/INETDefs.h \
  util/Delayer.h
$O/util/Macho.o: util/Macho.cc \
  util/Macho.h
$O/util/MessageChecker.o: util/MessageChecker.cc \
  base/INETDefs.h \
  base/Compat.h \
  util/MessageChecker.h
$O/util/NetAnimTrace.o: util/NetAnimTrace.cc \
  mobility/contract/IMobility.h \
  base/ModuleAccess.h \
  util/NetAnimTrace.h \
  util/FWMath.h \
  base/Compat.h \
  base/INETDefs.h \
  base/Coord.h
$O/util/OrdinalBasedDropper.o: util/OrdinalBasedDropper.cc \
  util/OrdinalBasedDropper.h \
  base/INETDefs.h \
  base/Compat.h
$O/util/OrdinalBasedDuplicator.o: util/OrdinalBasedDuplicator.cc \
  base/INETDefs.h \
  util/OrdinalBasedDuplicator.h \
  base/Compat.h
$O/util/PacketDump.o: util/PacketDump.cc \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPSendStream.h \
  networklayer/ipv6/IPv6Datagram.h \
  transport/sctp/SCTP.h \
  networklayer/common/InterfaceToken.h \
  transport/tcp_common/TCPSegment.h \
  transport/sctp/SCTPMessage_m.h \
  base/NotifierConsts.h \
  transport/sctp/SCTPAssociation.h \
  base/ByteArray.h \
  base/ByteArray_m.h \
  base/INETDefs.h \
  base/INotifiable.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/arp/ARPPacket_m.h \
  transport/sctp/SCTPGapList.h \
  util/PacketDump.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  transport/contract/UDPSocket.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/sctp/SCTPReceiveStream.h \
  base/ILifecycle.h \
  base/Compat.h \
  networklayer/common/IInterfaceTable.h \
  transport/sctp/SCTPQueue.h \
  transport/udp/UDPPacket_m.h \
  transport/tcp_common/TCPSegment_m.h \
  base/NotificationBoard.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h
$O/util/PatternMatcher.o: util/PatternMatcher.cc \
  base/Compat.h \
  util/PatternMatcher.h \
  base/INETDefs.h
$O/util/PcapDump.o: util/PcapDump.cc \
  util/headerserializers/ipv4/IPv4Serializer.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  transport/udp/UDPPacket_m.h \
  util/PcapDump.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  base/INETDefs.h \
  util/headerserializers/ipv6/IPv6Serializer.h \
  networklayer/ipv6/IPv6Datagram.h
$O/util/PcapRecorder.o: util/PcapRecorder.cc \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  util/PcapDump.h \
  networklayer/ipv4/IPv4Datagram.h \
  util/PacketDump.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  util/PcapRecorder.h \
  base/INETDefs.h \
  networklayer/ipv6/IPv6Datagram.h
$O/util/TCPDump.o: util/TCPDump.cc \
  util/PcapDump.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  util/PacketDump.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  base/INETDefs.h \
  util/TCPDump.h
$O/util/ThruputMeter.o: util/ThruputMeter.cc \
  util/ThruputMeter.h \
  base/Compat.h \
  base/INETDefs.h
$O/util/ThruputMeteringChannel.o: util/ThruputMeteringChannel.cc \
  base/INETDefs.h \
  util/ThruputMeteringChannel.h \
  base/Compat.h
$O/util/XMLUtils.o: util/XMLUtils.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/Compat.h \
  base/INETDefs.h \
  util/XMLUtils.h
$O/util/common.o: util/common.cc \
  base/INETDefs.h \
  util/common.h \
  base/Compat.h
$O/util/int128.o: util/int128.cc \
  base/Compat.h \
  util/int128.h \
  base/INETDefs.h
$O/util/opp_utils.o: util/opp_utils.cc \
  base/Compat.h \
  util/opp_utils.h \
  base/INETDefs.h
$O/util/headerserializers/TCPIPchecksum.o: util/headerserializers/TCPIPchecksum.cc \
  base/INETDefs.h \
  base/Compat.h \
  util/headerserializers/TCPIPchecksum.h
$O/util/headerserializers/ipv4/ICMPSerializer.o: util/headerserializers/ipv4/ICMPSerializer.cc \
  util/headerserializers/headers/bsdint.h \
  util/headerserializers/headers/in_systm.h \
  base/INETDefs.h \
  util/headerserializers/ipv4/ICMPSerializer.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  util/headerserializers/ipv4/headers/ip_icmp.h \
  applications/pingapp/PingPayload_m.h \
  util/headerserializers/ipv4/IPv4Serializer.h \
  util/headerserializers/headers/defs.h \
  networklayer/contract/IPv4Address.h \
  util/headerserializers/headers/in.h \
  base/Compat.h \
  util/headerserializers/TCPIPchecksum.h
$O/util/headerserializers/ipv4/IGMPSerializer.o: util/headerserializers/ipv4/IGMPSerializer.cc \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  util/headerserializers/headers/defs.h \
  util/headerserializers/ipv4/headers/igmp.h \
  util/headerserializers/headers/in.h \
  networklayer/contract/IPv4Address.h \
  util/headerserializers/ipv4/IPv4Serializer.h \
  util/headerserializers/TCPIPchecksum.h \
  base/Compat.h \
  base/INETDefs.h \
  util/headerserializers/headers/bsdint.h \
  util/headerserializers/headers/in_systm.h \
  util/headerserializers/ipv4/IGMPSerializer.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/ipv4/IGMPMessage_m.h
$O/util/headerserializers/ipv4/IPv4Serializer.o: util/headerserializers/ipv4/IPv4Serializer.cc \
  util/headerserializers/TCPIPchecksum.h \
  transport/udp/UDPPacket.h \
  base/Compat.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/udp/UDPPacket_m.h \
  util/headerserializers/ipv4/IPv4Serializer.h \
  util/headerserializers/headers/in.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  util/headerserializers/tcp/TCPSerializer.h \
  util/headerserializers/headers/defs.h \
  util/headerserializers/udp/UDPSerializer.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  util/headerserializers/sctp/SCTPSerializer.h \
  networklayer/ipv4/IGMPMessage_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  util/headerserializers/ipv4/headers/ip.h \
  util/headerserializers/ipv4/ICMPSerializer.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPMessage_m.h \
  transport/tcp_common/TCPSegment.h \
  util/headerserializers/ipv4/IGMPSerializer.h \
  util/headerserializers/headers/in_systm.h \
  util/headerserializers/headers/bsdint.h \
  util/headerserializers/tcp/headers/tcp.h \
  base/INETDefs.h \
  base/ByteArray_m.h \
  base/ByteArray.h
$O/util/headerserializers/ipv6/IPv6Serializer.o: util/headerserializers/ipv6/IPv6Serializer.cc \
  transport/udp/UDPPacket_m.h \
  transport/tcp_common/TCPSegment_m.h \
  util/headerserializers/TCPIPchecksum.h \
  transport/udp/UDPPacket.h \
  base/Compat.h \
  util/headerserializers/tcp/TCPSerializer.h \
  util/headerserializers/headers/defs.h \
  util/headerserializers/headers/in.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  util/headerserializers/ipv6/headers/ip6.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  util/headerserializers/udp/UDPSerializer.h \
  networklayer/contract/IPv6Address.h \
  util/headerserializers/sctp/SCTPSerializer.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/sctp/SCTPMessage_m.h \
  transport/tcp_common/TCPSegment.h \
  transport/sctp/SCTPMessage.h \
  networklayer/ipv6/IPv6Datagram.h \
  base/INETDefs.h \
  base/ByteArray_m.h \
  base/ByteArray.h \
  util/headerserializers/ipv6/IPv6Serializer.h \
  util/headerserializers/tcp/headers/tcp.h \
  util/headerserializers/headers/in_systm.h
$O/util/headerserializers/sctp/SCTPSerializer.o: util/headerserializers/sctp/SCTPSerializer.cc \
  util/headerserializers/headers/in.h \
  networklayer/common/InterfaceTable.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  util/headerserializers/headers/defs.h \
  util/headerserializers/ipv4/IPv4Serializer.h \
  base/NotificationBoard.h \
  transport/sctp/SCTPQueue.h \
  networklayer/common/IInterfaceTable.h \
  base/Compat.h \
  transport/sctp/SCTPReceiveStream.h \
  base/ILifecycle.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/contract/UDPSocket.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  util/headerserializers/sctp/SCTPSerializer.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTPGapList.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  base/INotifiable.h \
  util/headerserializers/sctp/headers/sctp.h \
  base/INETDefs.h \
  util/headerserializers/headers/in_systm.h \
  transport/sctp/SCTPAssociation.h \
  util/headerserializers/headers/bsdint.h \
  base/NotifierConsts.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTP.h \
  networklayer/common/InterfaceToken.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPSendStream.h
$O/util/headerserializers/tcp/TCPSerializer.o: util/headerserializers/tcp/TCPSerializer.cc \
  transport/tcp_common/TCPSegment.h \
  util/headerserializers/headers/in_systm.h \
  util/headerserializers/headers/bsdint.h \
  util/headerserializers/tcp/headers/tcp.h \
  base/ByteArray.h \
  base/INETDefs.h \
  base/ByteArray_m.h \
  base/Compat.h \
  util/headerserializers/TCPIPchecksum.h \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  util/headerserializers/headers/in.h \
  util/headerserializers/headers/defs.h \
  util/headerserializers/tcp/TCPSerializer.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPProtocolId_m.h
$O/util/headerserializers/udp/UDPSerializer.o: util/headerserializers/udp/UDPSerializer.cc \
  util/headerserializers/headers/bsdint.h \
  util/headerserializers/headers/in_systm.h \
  base/ByteArray.h \
  base/ByteArray_m.h \
  base/INETDefs.h \
  base/ByteArrayMessage_m.h \
  util/headerserializers/udp/headers/udp.h \
  util/headerserializers/udp/UDPSerializer.h \
  transport/udp/UDPPacket.h \
  base/Compat.h \
  util/headerserializers/TCPIPchecksum.h \
  transport/udp/UDPPacket_m.h \
  base/ByteArrayMessage.h \
  util/headerserializers/headers/defs.h \
  util/headerserializers/headers/in.h
$O/util/messageprinters/InetPacketBytesPrinter.o: util/messageprinters/InetPacketBytesPrinter.cc \
  base/INETDefs.h \
  base/Compat.h
$O/util/messageprinters/InetPacketPrinter.o: util/messageprinters/InetPacketPrinter.cc \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv6/IPv6Datagram.h \
  transport/tcp_common/TCPSegment.h \
  base/ByteArray.h \
  base/INETDefs.h \
  base/ByteArray_m.h \
  base/Compat.h \
  transport/udp/UDPPacket.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/udp/UDPPacket_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  applications/pingapp/PingPayload_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/IPv4Datagram.h
$O/util/messageprinters/InetPacketPrinter2.o: util/messageprinters/InetPacketPrinter2.cc \
  networklayer/contract/IPv6Address.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/radio/AirFrame_m.h \
  networklayer/routing/rip/RIPPacket_m.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  applications/pingapp/PingPayload_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  linklayer/contract/MACAddress.h \
  base/Compat.h \
  transport/udp/UDPPacket.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/udp/UDPPacket_m.h \
  util/FWMath.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  linklayer/radio/ModulationType.h \
  networklayer/ipv6/IPv6Datagram.h \
  transport/tcp_common/TCPSegment.h \
  linklayer/ethernet/EtherFrame.h \
  base/ByteArray.h \
  base/ByteArray_m.h \
  base/INETDefs.h \
  networklayer/ipv4/ICMPMessage.h \
  base/Coord.h \
  networklayer/ipv4/ICMPMessage_m.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/arp/ARPPacket_m.h \
  linklayer/ethernet/EtherFrame_m.h
$O/util/seapputils/seapputils.o: util/seapputils/seapputils.cc \
  util/seapputils/seapputils.h
$O/variable/Variable.o: variable/Variable.cc \
  variable/Variable.h
$O/world/annotations/AnnotationDummy.o: world/annotations/AnnotationDummy.cc \
  base/INETDefs.h \
  ./world/annotations/AnnotationDummy.h \
  base/Compat.h
$O/world/annotations/AnnotationManager.o: world/annotations/AnnotationManager.cc \
  util/FWMath.h \
  base/ModuleAccess.h \
  base/Compat.h \
  ./world/annotations/AnnotationManager.h \
  base/Coord.h \
  base/INETDefs.h
$O/world/httptools/HttpController.o: world/httptools/HttpController.cc \
  applications/httptools/HttpMessages_m.h \
  base/INETDefs.h \
  applications/httptools/HttpRandom.h \
  applications/httptools/HttpUtils.h \
  world/httptools/HttpController.h \
  applications/httptools/HttpEventMessages_m.h \
  base/Compat.h
$O/world/obstacles/Obstacle.o: world/obstacles/Obstacle.cc \
  base/Coord.h \
  ./world/obstacles/Obstacle.h \
  base/INETDefs.h \
  base/Compat.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  ./world/annotations/AnnotationManager.h
$O/world/obstacles/ObstacleControl.o: world/obstacles/ObstacleControl.cc \
  base/INETDefs.h \
  ./world/obstacles/Obstacle.h \
  base/Coord.h \
  ./world/annotations/AnnotationManager.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  ./world/obstacles/ObstacleControl.h \
  base/Compat.h
$O/world/radio/ChannelAccess.o: world/radio/ChannelAccess.cc \
  world/radio/IChannelControl.h \
  base/Coord.h \
  base/INotifiable.h \
  base/NotifierConsts.h \
  base/INETDefs.h \
  util/FWMath.h \
  base/ModuleAccess.h \
  world/radio/ChannelAccess.h \
  base/Compat.h \
  base/NotificationBoard.h \
  mobility/contract/IMobility.h \
  base/BasicModule.h
$O/world/radio/ChannelControl.o: world/radio/ChannelControl.cc \
  world/radio/ChannelControl.h \
  linklayer/radio/AirFrame_m.h \
  util/FWMath.h \
  base/Compat.h \
  base/INETDefs.h \
  linklayer/radio/ModulationType.h \
  world/radio/IChannelControl.h \
  base/Coord.h
$O/world/radio/IdealChannelModel.o: world/radio/IdealChannelModel.cc \
  base/INotifiable.h \
  base/Coord.h \
  linklayer/radio/IdealAirFrame_m.h \
  world/radio/IdealChannelModelAccess.h \
  base/INETDefs.h \
  base/NotifierConsts.h \
  world/radio/IdealChannelModel.h \
  base/NotificationBoard.h \
  base/Compat.h \
  linklayer/radio/IdealRadio.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  linklayer/contract/RadioState.h \
  base/ILifecycle.h \
  base/BasicModule.h
$O/world/radio/IdealChannelModelAccess.o: world/radio/IdealChannelModelAccess.cc \
  mobility/contract/IMobility.h \
  base/BasicModule.h \
  util/FWMath.h \
  base/ModuleAccess.h \
  base/Compat.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  world/radio/IdealChannelModel.h \
  base/INETDefs.h \
  world/radio/IdealChannelModelAccess.h \
  base/INotifiable.h \
  base/Coord.h
$O/world/scenario/ScenarioManager.o: world/scenario/ScenarioManager.cc \
  base/Compat.h \
  base/IScriptable.h \
  world/scenario/ScenarioManager.h \
  base/INETDefs.h
$O/world/traci/TraCIScenarioManager.o: world/traci/TraCIScenarioManager.cc \
  mobility/common/MobilityBase.h \
  mobility/contract/IMobility.h \
  base/Compat.h \
  ./world/traci/TraCIConstants.h \
  base/ModuleAccess.h \
  ./world/traci/TraCIScenarioManager.h \
  util/FWMath.h \
  ./mobility/single/TraCIMobility.h \
  base/INETDefs.h \
  base/Coord.h
$O/world/traci/TraCIScenarioManagerLaunchd.o: world/traci/TraCIScenarioManagerLaunchd.cc \
  base/INETDefs.h \
  base/Coord.h \
  ./world/traci/TraCIConstants.h \
  base/Compat.h \
  ./world/traci/TraCIScenarioManagerLaunchd.h \
  util/FWMath.h \
  base/ModuleAccess.h \
  ./world/traci/TraCIScenarioManager.h
