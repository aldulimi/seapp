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
    -Iattacks/filterblock \
    -Iattacks/physicalattack \
    -Iattacks/unconditionalattack \
    -Ibase \
    -Ibattery \
    -Ibattery/models \
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
PROJECT_OUTPUT_DIR = ../out
PROJECTRELATIVE_PATH = /src
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc and .msg files
OBJS = \
    $O/actions/actionbase/ActionBase.o \
    $O/actions/change/Change.o \
    $O/actions/clone/Clone.o \
    $O/actions/create/Create.o \
    $O/actions/destroy/Destroy.o \
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
    $O/attacks/conditionalattack/ConditionalAttack.o \
    $O/attacks/filterblock/CompoundBlock.o \
    $O/attacks/filterblock/ElementaryBlock.o \
    $O/attacks/filterblock/FilterBlock.o \
    $O/attacks/filterblock/PacketFilter.o \
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
	$(Q)-rm -f attacks/filterblock/*_m.cc attacks/filterblock/*_m.h
	$(Q)-rm -f attacks/physicalattack/*_m.cc attacks/physicalattack/*_m.h
	$(Q)-rm -f attacks/unconditionalattack/*_m.cc attacks/unconditionalattack/*_m.h
	$(Q)-rm -f base/*_m.cc base/*_m.h
	$(Q)-rm -f battery/*_m.cc battery/*_m.h
	$(Q)-rm -f battery/models/*_m.cc battery/models/*_m.h
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
	$(Q)$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc actions/*.cc actions/actionbase/*.cc actions/change/*.cc actions/clone/*.cc actions/create/*.cc actions/destroy/*.cc actions/drop/*.cc actions/move/*.cc actions/put/*.cc actions/retrieve/*.cc actions/seappexpression/*.cc actions/send/*.cc applications/*.cc applications/common/*.cc applications/dhcp/*.cc applications/ethernet/*.cc applications/generic/*.cc applications/httptools/*.cc applications/netperfmeter/*.cc applications/pingapp/*.cc applications/rtpapp/*.cc applications/sctpapp/*.cc applications/tcpapp/*.cc applications/traci/*.cc applications/trafficlightapp/*.cc applications/udpapp/*.cc applications/voip/*.cc attacks/*.cc attacks/attackbase/*.cc attacks/attackentry/*.cc attacks/conditionalattack/*.cc attacks/filterblock/*.cc attacks/physicalattack/*.cc attacks/unconditionalattack/*.cc base/*.cc battery/*.cc battery/models/*.cc globalfilter/*.cc globalfilter/putmessages/*.cc linklayer/*.cc linklayer/common/*.cc linklayer/configurator/*.cc linklayer/contract/*.cc linklayer/ethernet/*.cc linklayer/ethernet/switch/*.cc linklayer/ext/*.cc linklayer/idealwireless/*.cc linklayer/ieee80211/*.cc linklayer/ieee80211/mac/*.cc linklayer/ieee80211/mgmt/*.cc linklayer/ieee80211/radio/*.cc linklayer/ieee80211/radio/errormodel/*.cc linklayer/ieee8021d/*.cc linklayer/ieee8021d/common/*.cc linklayer/ieee8021d/relay/*.cc linklayer/ieee8021d/rstp/*.cc linklayer/ieee8021d/stp/*.cc linklayer/ieee8021d/tester/*.cc linklayer/loopback/*.cc linklayer/ppp/*.cc linklayer/queue/*.cc linklayer/radio/*.cc linklayer/radio/propagation/*.cc localfilter/*.cc mobility/*.cc mobility/common/*.cc mobility/contract/*.cc mobility/group/*.cc mobility/single/*.cc mobility/static/*.cc networklayer/*.cc networklayer/arp/*.cc networklayer/autorouting/*.cc networklayer/autorouting/ipv4/*.cc networklayer/autorouting/ipv6/*.cc networklayer/bgpv4/*.cc networklayer/bgpv4/BGPMessage/*.cc networklayer/common/*.cc networklayer/contract/*.cc networklayer/diffserv/*.cc networklayer/icmpv6/*.cc networklayer/internetcloud/*.cc networklayer/ipv4/*.cc networklayer/ipv6/*.cc networklayer/ipv6tunneling/*.cc networklayer/ldp/*.cc networklayer/manetrouting/*.cc networklayer/manetrouting/aodv-uu/*.cc networklayer/manetrouting/aodv-uu/aodv-uu/*.cc networklayer/manetrouting/base/*.cc networklayer/manetrouting/batman/*.cc networklayer/manetrouting/batman/batmand/*.cc networklayer/manetrouting/batman/batmand/orig/*.cc networklayer/manetrouting/dsdv/*.cc networklayer/manetrouting/dsr/*.cc networklayer/manetrouting/dsr/dsr-uu/*.cc networklayer/manetrouting/dymo/*.cc networklayer/manetrouting/dymo/dymoum/*.cc networklayer/manetrouting/dymo_fau/*.cc networklayer/manetrouting/olsr/*.cc networklayer/mpls/*.cc networklayer/ospfv2/*.cc networklayer/ospfv2/interface/*.cc networklayer/ospfv2/messagehandler/*.cc networklayer/ospfv2/neighbor/*.cc networklayer/ospfv2/router/*.cc networklayer/routing/*.cc networklayer/routing/aodv/*.cc networklayer/routing/dymo/*.cc networklayer/routing/gpsr/*.cc networklayer/routing/rip/*.cc networklayer/rsvp_te/*.cc networklayer/ted/*.cc networklayer/xmipv6/*.cc nodes/*.cc nodes/aodv/*.cc nodes/bgp/*.cc nodes/dymo/*.cc nodes/ethernet/*.cc nodes/gpsr/*.cc nodes/httptools/*.cc nodes/inet/*.cc nodes/internetcloud/*.cc nodes/ipv6/*.cc nodes/mpls/*.cc nodes/ospfv2/*.cc nodes/rip/*.cc nodes/rtp/*.cc nodes/wireless/*.cc nodes/xmipv6/*.cc parser/*.cc status/*.cc transport/*.cc transport/contract/*.cc transport/rtp/*.cc transport/rtp/profiles/*.cc transport/rtp/profiles/avprofile/*.cc transport/sctp/*.cc transport/tcp/*.cc transport/tcp/flavours/*.cc transport/tcp/queues/*.cc transport/tcp_common/*.cc transport/udp/*.cc util/*.cc util/headerserializers/*.cc util/headerserializers/headers/*.cc util/headerserializers/ipv4/*.cc util/headerserializers/ipv4/headers/*.cc util/headerserializers/ipv6/*.cc util/headerserializers/ipv6/headers/*.cc util/headerserializers/sctp/*.cc util/headerserializers/sctp/headers/*.cc util/headerserializers/tcp/*.cc util/headerserializers/tcp/headers/*.cc util/headerserializers/udp/*.cc util/headerserializers/udp/headers/*.cc util/messageprinters/*.cc util/seapputils/*.cc variable/*.cc world/*.cc world/annotations/*.cc world/httptools/*.cc world/obstacles/*.cc world/radio/*.cc world/scenario/*.cc world/traci/*.cc

# DO NOT DELETE THIS LINE -- make depend depends on it.
$O/actions/actionbase/ActionBase.o: actions/actionbase/ActionBase.cc \
  base/Compat.h \
  base/INETDefs.h \
  actions/actionbase/ActionBase.h
$O/actions/change/Change.o: actions/change/Change.cc \
  base/INETDefs.h \
  actions/actionbase/ActionBase.h \
  actions/change/Change.h \
  util/seapputils/seapputils.h \
  base/Compat.h
$O/actions/clone/Clone.o: actions/clone/Clone.cc \
  actions/actionbase/ActionBase.h \
  base/INETDefs.h \
  actions/clone/Clone.h \
  util/seapputils/seapputils.h \
  base/Compat.h
$O/actions/create/Create.o: actions/create/Create.cc \
  applications/httptools/HttpEventMessages_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
  base/INETDefs.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/rsvp_te/RSVPHello_m.h \
  networklayer/rsvp_te/RSVPHelloMsg.h \
  linklayer/radio/AirFrame_m.h \
  transport/contract/TCPCommand_m.h \
  networklayer/rsvp_te/RSVPPacket.h \
  networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
  linklayer/ethernet/EtherFrame_m.h \
  networklayer/arp/ARPPacket_m.h \
  networklayer/rsvp_te/RSVPPathMsg_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h \
  linklayer/ethernet/Ethernet.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  linklayer/ppp/PPPFrame_m.h \
  linklayer/ext/ExtFrame_m.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/ldp/LDPPacket_m.h \
  networklayer/ipv6/IPv6Datagram.h \
  transport/sctp/SCTPMessage.h \
  util/seapputils/seapputils.h \
  linklayer/idealwireless/IdealWirelessFrame_m.h \
  applications/ethernet/EtherApp_m.h \
  networklayer/manetrouting/dsdv/DSDVhello_m.h \
  networklayer/rsvp_te/RSVPPathMsg.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
  networklayer/ted/LinkStatePacket_m.h \
  linklayer/ieee8021d/common/Ieee8021dBPDU_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  applications/trafficlightapp/TrafficLightPacket_m.h \
  networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/bgpv4/BGPMessage/BGPOpen_m.h \
  linklayer/radio/ModulationType.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/bgpv4/BGPMessage/BGPUpdate_m.h \
  transport/udp/UDPPacket_m.h \
  base/ByteArray.h \
  networklayer/contract/IPvXAddress.h \
  actions/actionbase/ActionBase.h \
  networklayer/manetrouting/base/ControlInfoBreakLink_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
  linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
  networklayer/manetrouting/base/ManetAddress.h \
  applications/httptools/HttpMessages_m.h \
  linklayer/radio/Radio80211aControlInfo_m.h \
  base/Coord.h \
  networklayer/routing/gpsr/GPSRDefs.h \
  networklayer/routing/rip/RIPPacket_m.h \
  actions/create/Create.h \
  networklayer/routing/gpsr/GPSR_m.h \
  transport/contract/SCTPCommand_m.h \
  networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
  applications/netperfmeter/NetPerfMeter_m.h \
  networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/xmipv6/MobilityHeader_m.h \
  networklayer/manetrouting/batman/BatmanMsg_m.h \
  applications/dhcp/DHCPMessage_m.h \
  networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
  networklayer/rsvp_te/IntServ_m.h \
  base/Compat.h \
  networklayer/rsvp_te/RSVPResvMsg.h \
  applications/tcpapp/GenericAppMsg_m.h \
  networklayer/routing/aodv/AODVControlPackets_m.h \
  transport/udp/UDPPacket.h \
  networklayer/manetrouting/base/MeshControlInfo_m.h \
  networklayer/rsvp_te/IntServ.h \
  linklayer/contract/PhyControlInfo_m.h \
  networklayer/rsvp_te/RSVPResvMsg_m.h \
  networklayer/contract/IPv6ControlInfo.h \
  applications/pingapp/PingPayload_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/xmipv6/MobilityHeader.h \
  networklayer/rsvp_te/RSVPPacket_m.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/bgpv4/BGPMessage/BGPKeepAlive_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/IGMPMessage_m.h \
  networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
  linklayer/radio/IdealAirFrame_m.h \
  transport/contract/SCTPCommand.h \
  networklayer/ted/TED_m.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp_common/TCPSegment.h \
  networklayer/icmpv6/IPv6NDMessage_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
  networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
  applications/voip/SimpleVoIPPacket_m.h \
  base/ByteArray_m.h \
  networklayer/bgpv4/BGPMessage/BGPUpdate.h \
  util/FWMath.h \
  networklayer/ipv6/IPv6ExtensionHeaders.h
$O/actions/destroy/Destroy.o: actions/destroy/Destroy.cc \
  actions/destroy/Destroy.h \
  base/INETDefs.h \
  actions/actionbase/ActionBase.h \
  attacks/filterblock/FilterBlock.h \
  attacks/conditionalattack/ConditionalAttack.h \
  attacks/attackbase/AttackBase.h \
  variable/Variable.h \
  attacks/filterblock/PacketFilter.h \
  base/Compat.h \
  localfilter/LocalFilter.h
$O/actions/drop/Drop.o: actions/drop/Drop.cc \
  actions/actionbase/ActionBase.h \
  base/INETDefs.h \
  actions/drop/Drop.h \
  base/Compat.h
$O/actions/move/Move.o: actions/move/Move.cc \
  mobility/common/MobilityBase.h \
  util/FWMath.h \
  base/ModuleAccess.h \
  base/Compat.h \
  actions/move/Move.h \
  base/Coord.h \
  actions/actionbase/ActionBase.h \
  mobility/contract/IMobility.h \
  base/INETDefs.h
$O/actions/put/Put.o: actions/put/Put.cc \
  actions/actionbase/ActionBase.h \
  base/INETDefs.h \
  globalfilter/putmessages/PutMessages.h \
  actions/put/Put.h \
  base/Compat.h
$O/actions/retrieve/Retrieve.o: actions/retrieve/Retrieve.cc \
  base/Compat.h \
  variable/Variable.h \
  base/INETDefs.h \
  actions/actionbase/ActionBase.h \
  util/seapputils/seapputils.h \
  actions/retrieve/Retrieve.h
$O/actions/seappexpression/SEAPPExpression.o: actions/seappexpression/SEAPPExpression.cc \
  base/INETDefs.h \
  actions/actionbase/ActionBase.h \
  variable/Variable.h \
  base/Compat.h \
  actions/seappexpression/SEAPPExpression.h
$O/actions/send/Send.o: actions/send/Send.cc \
  actions/send/Send.h \
  base/Compat.h \
  util/seapputils/seapputils.h \
  actions/actionbase/ActionBase.h \
  base/INETDefs.h
$O/applications/common/ApplicationBase.o: applications/common/ApplicationBase.cc \
  base/Compat.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  applications/common/ApplicationBase.h \
  base/LifecycleOperation.h \
  base/OperationalBase.h \
  base/NodeOperations.h
$O/applications/dhcp/DHCPClient.o: applications/dhcp/DHCPClient.cc \
  networklayer/common/InterfaceToken.h \
  networklayer/arp/IARPCache.h \
  base/INETDefs.h \
  transport/contract/UDPSocket.h \
  base/ILifecycle.h \
  networklayer/ipv4/RoutingTable.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceTableAccess.h \
  applications/dhcp/DHCPLease.h \
  base/NodeOperations.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/IInterfaceTable.h \
  base/LifecycleOperation.h \
  base/INotifiable.h \
  base/NotificationBoard.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPv4Address.h \
  status/NodeStatus.h \
  applications/dhcp/DHCPMessage_m.h \
  base/Compat.h \
  base/ModuleAccess.h \
  applications/dhcp/DHCPClient.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/RoutingTableAccess.h
$O/applications/dhcp/DHCPServer.o: applications/dhcp/DHCPServer.cc \
  base/ILifecycle.h \
  networklayer/common/InterfaceToken.h \
  networklayer/arp/IARPCache.h \
  base/INETDefs.h \
  transport/contract/UDPControlInfo_m.h \
  transport/contract/UDPSocket.h \
  base/LifecycleOperation.h \
  base/INotifiable.h \
  applications/dhcp/DHCPLease.h \
  base/NodeOperations.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/IInterfaceTable.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6Address.h \
  base/ModuleAccess.h \
  applications/dhcp/DHCPMessage_m.h \
  base/Compat.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPv4Address.h \
  status/NodeStatus.h \
  base/NotificationBoard.h \
  applications/dhcp/DHCPServer.h \
  networklayer/arp/ARP.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceEntry.h
$O/applications/ethernet/EtherAppCli.o: applications/ethernet/EtherAppCli.cc \
  base/Compat.h \
  base/ModuleAccess.h \
  status/NodeStatus.h \
  applications/ethernet/EtherAppCli.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  base/NodeOperations.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/LifecycleOperation.h \
  linklayer/contract/MACAddress.h \
  applications/ethernet/EtherApp_m.h
$O/applications/ethernet/EtherAppSrv.o: applications/ethernet/EtherAppSrv.cc \
  base/INETDefs.h \
  base/ILifecycle.h \
  base/NodeOperations.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/LifecycleOperation.h \
  linklayer/contract/MACAddress.h \
  applications/ethernet/EtherApp_m.h \
  applications/ethernet/EtherAppSrv.h \
  base/Compat.h \
  base/ModuleAccess.h \
  status/NodeStatus.h
$O/applications/ethernet/EtherTrafGen.o: applications/ethernet/EtherTrafGen.cc \
  status/NodeStatus.h \
  base/Compat.h \
  base/ModuleAccess.h \
  applications/ethernet/EtherTrafGen.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  linklayer/contract/MACAddress.h \
  base/NodeOperations.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/LifecycleOperation.h
$O/applications/ethernet/EthernetApplication.o: applications/ethernet/EthernetApplication.cc \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h \
  applications/ethernet/EtherApp_m.h \
  applications/ethernet/EthernetApplication.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/Compat.h
$O/applications/generic/IPvXTrafGen.o: applications/generic/IPvXTrafGen.cc \
  networklayer/contract/IPv6ControlInfo.h \
  base/ModuleAccess.h \
  base/Compat.h \
  applications/generic/IPvXTrafSink.h \
  networklayer/contract/IPv4Address.h \
  status/NodeStatus.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/ILifecycle.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/INETDefs.h \
  base/LifecycleOperation.h \
  base/NodeOperations.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPSocket.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6Address.h \
  applications/generic/IPvXTrafGen.h
$O/applications/generic/IPvXTrafSink.o: applications/generic/IPvXTrafSink.cc \
  networklayer/contract/IPv4Address.h \
  status/NodeStatus.h \
  applications/generic/IPvXTrafSink.h \
  base/Compat.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/INETDefs.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ILifecycle.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPSocket.h \
  applications/generic/IPvXTrafGen.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  base/NodeOperations.h \
  base/LifecycleOperation.h
$O/applications/httptools/HttpBrowser.o: applications/httptools/HttpBrowser.cc \
  applications/httptools/HttpBrowser.h \
  applications/httptools/HttpRandom.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  world/httptools/HttpController.h \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPvXAddressResolver.h \
  applications/httptools/HttpUtils.h \
  applications/httptools/HttpBrowserBase.h \
  transport/contract/TCPCommand_m.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  applications/httptools/HttpEventMessages_m.h \
  applications/httptools/HttpMessages_m.h \
  transport/contract/TCPSocketMap.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPvXAddress.h \
  applications/httptools/HttpNodeBase.h \
  networklayer/contract/IPv6Address.h
$O/applications/httptools/HttpBrowserBase.o: applications/httptools/HttpBrowserBase.cc \
  applications/httptools/HttpBrowserBase.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  applications/httptools/HttpEventMessages_m.h \
  applications/httptools/HttpMessages_m.h \
  base/LifecycleOperation.h \
  applications/httptools/HttpNodeBase.h \
  base/ModuleAccess.h \
  applications/httptools/HttpRandom.h \
  base/Compat.h \
  status/NodeStatus.h \
  world/httptools/HttpController.h \
  applications/httptools/HttpUtils.h
$O/applications/httptools/HttpBrowserDirect.o: applications/httptools/HttpBrowserDirect.cc \
  applications/httptools/HttpMessages_m.h \
  base/LifecycleOperation.h \
  applications/httptools/HttpNodeBase.h \
  applications/httptools/HttpBrowserBase.h \
  applications/httptools/HttpBrowserDirect.h \
  base/ILifecycle.h \
  applications/httptools/HttpServerBase.h \
  applications/httptools/HttpEventMessages_m.h \
  base/INETDefs.h \
  world/httptools/HttpController.h \
  applications/httptools/HttpUtils.h \
  applications/httptools/HttpRandom.h \
  base/Compat.h
$O/applications/httptools/HttpNodeBase.o: applications/httptools/HttpNodeBase.cc \
  applications/httptools/HttpEventMessages_m.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  applications/httptools/HttpNodeBase.h \
  applications/httptools/HttpMessages_m.h \
  base/LifecycleOperation.h \
  base/Compat.h \
  applications/httptools/HttpRandom.h \
  world/httptools/HttpController.h \
  applications/httptools/HttpUtils.h
$O/applications/httptools/HttpRandom.o: applications/httptools/HttpRandom.cc \
  applications/httptools/HttpMessages_m.h \
  base/INETDefs.h \
  applications/httptools/HttpUtils.h \
  applications/httptools/HttpRandom.h \
  base/Compat.h
$O/applications/httptools/HttpServer.o: applications/httptools/HttpServer.cc \
  applications/httptools/HttpEventMessages_m.h \
  base/INETDefs.h \
  applications/httptools/HttpServerBase.h \
  transport/contract/TCPCommand_m.h \
  base/ILifecycle.h \
  applications/httptools/HttpNodeBase.h \
  networklayer/contract/IPvXAddress.h \
  base/LifecycleOperation.h \
  transport/contract/TCPSocketMap.h \
  applications/httptools/HttpMessages_m.h \
  networklayer/contract/IPv6Address.h \
  base/Compat.h \
  applications/httptools/HttpServer.h \
  applications/httptools/HttpRandom.h \
  networklayer/contract/IPv4Address.h \
  transport/contract/TCPSocket.h \
  world/httptools/HttpController.h \
  applications/httptools/HttpUtils.h
$O/applications/httptools/HttpServerBase.o: applications/httptools/HttpServerBase.cc \
  world/httptools/HttpController.h \
  applications/httptools/HttpUtils.h \
  base/ModuleAccess.h \
  applications/httptools/HttpRandom.h \
  base/Compat.h \
  status/NodeStatus.h \
  applications/httptools/HttpMessages_m.h \
  base/LifecycleOperation.h \
  applications/httptools/HttpNodeBase.h \
  base/ILifecycle.h \
  applications/httptools/HttpServerBase.h \
  base/INETDefs.h \
  applications/httptools/HttpEventMessages_m.h
$O/applications/httptools/HttpServerDirect.o: applications/httptools/HttpServerDirect.cc \
  world/httptools/HttpController.h \
  applications/httptools/HttpUtils.h \
  applications/httptools/HttpRandom.h \
  base/Compat.h \
  applications/httptools/HttpServerDirect.h \
  base/LifecycleOperation.h \
  applications/httptools/HttpMessages_m.h \
  applications/httptools/HttpNodeBase.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  applications/httptools/HttpEventMessages_m.h \
  applications/httptools/HttpServerBase.h
$O/applications/httptools/HttpServerDirectEvilA.o: applications/httptools/HttpServerDirectEvilA.cc \
  applications/httptools/HttpUtils.h \
  world/httptools/HttpController.h \
  applications/httptools/HttpServerDirect.h \
  applications/httptools/HttpServerDirectEvilA.h \
  base/Compat.h \
  applications/httptools/HttpRandom.h \
  applications/httptools/HttpNodeBase.h \
  base/LifecycleOperation.h \
  applications/httptools/HttpMessages_m.h \
  applications/httptools/HttpEventMessages_m.h \
  base/INETDefs.h \
  applications/httptools/HttpServerBase.h \
  base/ILifecycle.h
$O/applications/httptools/HttpServerDirectEvilB.o: applications/httptools/HttpServerDirectEvilB.cc \
  applications/httptools/HttpUtils.h \
  world/httptools/HttpController.h \
  applications/httptools/HttpServerDirect.h \
  base/Compat.h \
  applications/httptools/HttpRandom.h \
  applications/httptools/HttpNodeBase.h \
  base/LifecycleOperation.h \
  applications/httptools/HttpMessages_m.h \
  applications/httptools/HttpServerDirectEvilB.h \
  base/INETDefs.h \
  applications/httptools/HttpEventMessages_m.h \
  applications/httptools/HttpServerBase.h \
  base/ILifecycle.h
$O/applications/httptools/HttpServerEvilA.o: applications/httptools/HttpServerEvilA.cc \
  applications/httptools/HttpServerEvilA.h \
  transport/contract/TCPCommand_m.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  applications/httptools/HttpEventMessages_m.h \
  applications/httptools/HttpServerBase.h \
  base/LifecycleOperation.h \
  applications/httptools/HttpMessages_m.h \
  transport/contract/TCPSocketMap.h \
  applications/httptools/HttpNodeBase.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv6Address.h \
  applications/httptools/HttpRandom.h \
  applications/httptools/HttpServer.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  world/httptools/HttpController.h \
  transport/contract/TCPSocket.h \
  applications/httptools/HttpUtils.h
$O/applications/httptools/HttpServerEvilB.o: applications/httptools/HttpServerEvilB.cc \
  applications/httptools/HttpServerEvilB.h \
  transport/contract/TCPSocket.h \
  world/httptools/HttpController.h \
  applications/httptools/HttpUtils.h \
  base/Compat.h \
  applications/httptools/HttpRandom.h \
  applications/httptools/HttpServer.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  applications/httptools/HttpNodeBase.h \
  transport/contract/TCPSocketMap.h \
  applications/httptools/HttpMessages_m.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPv6Address.h \
  applications/httptools/HttpServerBase.h \
  applications/httptools/HttpEventMessages_m.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  transport/contract/TCPCommand_m.h
$O/applications/httptools/HttpUtils.o: applications/httptools/HttpUtils.cc \
  applications/httptools/HttpUtils.h \
  applications/httptools/HttpMessages_m.h
$O/applications/netperfmeter/NetPerfMeter.o: applications/netperfmeter/NetPerfMeter.cc \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTPMessage.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceTableAccess.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPQueue.h \
  transport/sctp/SCTPReceiveStream.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/IInterfaceTable.h \
  transport/sctp/SCTPMessage_m.h \
  applications/netperfmeter/NetPerfMeter.h \
  base/INotifiable.h \
  transport/contract/UDPSocket.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  transport/contract/UDPControlInfo_m.h \
  transport/contract/TCPCommand_m.h \
  base/ILifecycle.h \
  networklayer/common/InterfaceEntry.h \
  transport/contract/SCTPSocket.h \
  transport/contract/SCTPCommand.h \
  networklayer/contract/IPvXAddressResolver.h \
  transport/sctp/SCTP.h \
  transport/contract/TCPSocket.h \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTPGapList.h \
  base/NotificationBoard.h \
  applications/netperfmeter/NetPerfMeter_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTable.h \
  transport/contract/SCTPCommand_m.h \
  base/Compat.h \
  base/ModuleAccess.h
$O/applications/pingapp/PingApp.o: applications/pingapp/PingApp.cc \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  base/LifecycleOperation.h \
  base/NodeOperations.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/contract/IPvXAddress.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  applications/pingapp/PingApp.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPProtocolId_m.h \
  applications/pingapp/PingPayload_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  status/NodeStatus.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPv6ControlInfo.h \
  base/ModuleAccess.h \
  base/Compat.h
$O/applications/pingapp/PingTestApp.o: applications/pingapp/PingTestApp.cc \
  applications/pingapp/PingTestApp.h \
  base/ILifecycle.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/INETDefs.h \
  base/INotifiable.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6Address.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6ControlInfo.h \
  base/ModuleAccess.h \
  base/Compat.h \
  status/NodeStatus.h \
  networklayer/contract/IPv4Address.h \
  base/NotificationBoard.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceEntry.h \
  applications/pingapp/PingPayload_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo.h
$O/applications/rtpapp/RTPApplication.o: applications/rtpapp/RTPApplication.cc \
  networklayer/contract/IPv6Address.h \
  transport/rtp/RTPInterfacePacket_m.h \
  networklayer/contract/IPvXAddress.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  applications/rtpapp/RTPApplication.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPv4Address.h \
  status/NodeStatus.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  base/Compat.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  base/ModuleAccess.h
$O/applications/sctpapp/SCTPClient.o: applications/sctpapp/SCTPClient.cc \
  base/Compat.h \
  base/ModuleAccess.h \
  base/NotificationBoard.h \
  status/NodeStatus.h \
  networklayer/contract/IPv4Address.h \
  transport/contract/SCTPCommand_m.h \
  networklayer/common/InterfaceTable.h \
  transport/sctp/SCTPGapList.h \
  transport/sctp/SCTPAssociation.h \
  networklayer/common/InterfaceEntry.h \
  transport/contract/SCTPSocket.h \
  transport/contract/SCTPCommand.h \
  networklayer/contract/IPvXAddressResolver.h \
  transport/sctp/SCTP.h \
  applications/sctpapp/SCTPClient.h \
  transport/contract/UDPSocket.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  transport/sctp/SCTPReceiveStream.h \
  transport/sctp/SCTPQueue.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  transport/sctp/SCTPMessage_m.h \
  base/INotifiable.h \
  base/LifecycleOperation.h \
  transport/sctp/SCTPMessage.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceTableAccess.h \
  transport/sctp/SCTPSendStream.h
$O/applications/sctpapp/SCTPNatPeer.o: applications/sctpapp/SCTPNatPeer.cc \
  base/ModuleAccess.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  status/NodeStatus.h \
  networklayer/common/InterfaceTable.h \
  transport/contract/SCTPCommand_m.h \
  base/NotificationBoard.h \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTPGapList.h \
  networklayer/contract/IPvXAddressResolver.h \
  transport/contract/SCTPCommand.h \
  transport/sctp/SCTP.h \
  applications/sctpapp/SCTPNatPeer.h \
  networklayer/common/InterfaceEntry.h \
  transport/contract/SCTPSocket.h \
  base/ILifecycle.h \
  transport/contract/UDPSocket.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  transport/sctp/SCTPReceiveStream.h \
  transport/sctp/SCTPQueue.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPSendStream.h \
  networklayer/common/InterfaceTableAccess.h \
  transport/sctp/SCTPMessage.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h
$O/applications/sctpapp/SCTPNatServer.o: applications/sctpapp/SCTPNatServer.cc \
  applications/sctpapp/SCTPNatServer.h \
  base/NotifierConsts.h \
  transport/sctp/SCTPNatTable.h \
  transport/sctp/SCTPMessage.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTPSendStream.h \
  networklayer/common/InterfaceTableAccess.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/IInterfaceTable.h \
  transport/sctp/SCTPReceiveStream.h \
  transport/sctp/SCTPQueue.h \
  base/INotifiable.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  transport/contract/UDPSocket.h \
  base/ILifecycle.h \
  transport/contract/SCTPSocket.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTP.h \
  networklayer/contract/IPvXAddressResolver.h \
  transport/contract/SCTPCommand.h \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTPGapList.h \
  base/NotificationBoard.h \
  networklayer/common/InterfaceTable.h \
  transport/contract/SCTPCommand_m.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  base/ModuleAccess.h
$O/applications/sctpapp/SCTPPeer.o: applications/sctpapp/SCTPPeer.cc \
  base/ILifecycle.h \
  transport/contract/UDPSocket.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/common/InterfaceTableAccess.h \
  applications/sctpapp/SCTPPeer.h \
  transport/sctp/SCTPSendStream.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTPMessage.h \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  base/LifecycleOperation.h \
  transport/sctp/SCTPReceiveStream.h \
  transport/sctp/SCTPQueue.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/contract/IPv4Address.h \
  status/NodeStatus.h \
  transport/contract/SCTPCommand_m.h \
  networklayer/common/InterfaceTable.h \
  base/NotificationBoard.h \
  base/ModuleAccess.h \
  base/Compat.h \
  transport/contract/SCTPCommand.h \
  networklayer/contract/IPvXAddressResolver.h \
  transport/sctp/SCTP.h \
  networklayer/common/InterfaceEntry.h \
  transport/contract/SCTPSocket.h \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTPGapList.h
$O/applications/sctpapp/SCTPServer.o: applications/sctpapp/SCTPServer.cc \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTPGapList.h \
  transport/sctp/SCTP.h \
  transport/contract/SCTPCommand.h \
  networklayer/contract/IPvXAddressResolver.h \
  transport/contract/SCTPSocket.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  base/Compat.h \
  transport/contract/SCTPCommand_m.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPv4Address.h \
  status/NodeStatus.h \
  base/NotificationBoard.h \
  base/LifecycleOperation.h \
  base/INotifiable.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPQueue.h \
  transport/sctp/SCTPReceiveStream.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  transport/sctp/SCTPSendStream.h \
  base/NotifierConsts.h \
  transport/sctp/SCTPMessage.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6Address.h \
  applications/sctpapp/SCTPServer.h \
  base/ILifecycle.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  transport/contract/UDPSocket.h
$O/applications/tcpapp/TCPAppBase.o: applications/tcpapp/TCPAppBase.cc \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPvXAddressResolver.h \
  applications/tcpapp/TCPAppBase.h \
  transport/contract/TCPCommand_m.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv6Address.h
$O/applications/tcpapp/TCPBasicClientApp.o: applications/tcpapp/TCPBasicClientApp.cc \
  transport/contract/TCPSocket.h \
  applications/tcpapp/TCPAppBase.h \
  base/Compat.h \
  applications/tcpapp/GenericAppMsg_m.h \
  base/ModuleAccess.h \
  status/NodeStatus.h \
  networklayer/contract/IPv4Address.h \
  base/NodeOperations.h \
  networklayer/contract/IPvXAddress.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPv6Address.h \
  applications/tcpapp/TCPBasicClientApp.h \
  base/INETDefs.h \
  transport/contract/TCPCommand_m.h \
  base/ILifecycle.h
$O/applications/tcpapp/TCPEchoApp.o: applications/tcpapp/TCPEchoApp.cc \
  transport/contract/TCPSocket.h \
  base/ByteArray_m.h \
  networklayer/contract/IPv4Address.h \
  status/NodeStatus.h \
  base/Compat.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6Address.h \
  base/ByteArrayMessage_m.h \
  base/ByteArrayMessage.h \
  networklayer/contract/IPvXAddress.h \
  base/ByteArray.h \
  base/NodeOperations.h \
  base/LifecycleOperation.h \
  applications/tcpapp/TCPEchoApp.h \
  base/INETDefs.h \
  transport/contract/TCPCommand_m.h \
  base/ILifecycle.h
$O/applications/tcpapp/TCPGenericSrvApp.o: applications/tcpapp/TCPGenericSrvApp.cc \
  status/NodeStatus.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  base/ModuleAccess.h \
  applications/tcpapp/GenericAppMsg_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  transport/contract/TCPSocket.h \
  base/INETDefs.h \
  transport/contract/TCPCommand_m.h \
  base/ILifecycle.h \
  applications/tcpapp/TCPGenericSrvApp.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h \
  base/LifecycleOperation.h
$O/applications/tcpapp/TCPGenericSrvThread.o: applications/tcpapp/TCPGenericSrvThread.cc \
  transport/contract/TCPCommand_m.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  applications/tcpapp/TCPGenericSrvThread.h \
  networklayer/contract/IPv6Address.h \
  transport/contract/TCPSocketMap.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  applications/tcpapp/GenericAppMsg_m.h \
  applications/tcpapp/TCPSrvHostApp.h \
  base/Compat.h \
  transport/contract/TCPSocket.h
$O/applications/tcpapp/TCPSessionApp.o: applications/tcpapp/TCPSessionApp.cc \
  transport/contract/TCPCommand_m.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  base/ByteArrayMessage.h \
  applications/tcpapp/TCPSessionApp.h \
  networklayer/contract/IPv6Address.h \
  base/ByteArrayMessage_m.h \
  base/LifecycleOperation.h \
  base/NodeOperations.h \
  networklayer/contract/IPvXAddress.h \
  base/ByteArray.h \
  status/NodeStatus.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  base/Compat.h \
  networklayer/contract/IPvXAddressResolver.h \
  applications/tcpapp/TCPAppBase.h \
  base/ByteArray_m.h \
  transport/contract/TCPSocket.h
$O/applications/tcpapp/TCPSinkApp.o: applications/tcpapp/TCPSinkApp.cc \
  networklayer/contract/IPvXAddressResolver.h \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPv4Address.h \
  status/NodeStatus.h \
  base/Compat.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  transport/contract/TCPCommand_m.h \
  applications/tcpapp/TCPSinkApp.h
$O/applications/tcpapp/TCPSrvHostApp.o: applications/tcpapp/TCPSrvHostApp.cc \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/Compat.h \
  base/ModuleAccess.h \
  applications/tcpapp/TCPSrvHostApp.h \
  status/NodeStatus.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/TCPSocketMap.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  transport/contract/TCPCommand_m.h \
  base/ILifecycle.h
$O/applications/tcpapp/TelnetApp.o: applications/tcpapp/TelnetApp.cc \
  base/LifecycleOperation.h \
  networklayer/contract/IPvXAddress.h \
  base/NodeOperations.h \
  networklayer/contract/IPv6Address.h \
  applications/tcpapp/TelnetApp.h \
  base/ILifecycle.h \
  transport/contract/TCPCommand_m.h \
  base/INETDefs.h \
  transport/contract/TCPSocket.h \
  applications/tcpapp/TCPAppBase.h \
  base/ModuleAccess.h \
  applications/tcpapp/GenericAppMsg_m.h \
  base/Compat.h \
  status/NodeStatus.h \
  networklayer/contract/IPv4Address.h
$O/applications/traci/TraCIDemo.o: applications/traci/TraCIDemo.cc \
  util/FWMath.h \
  mobility/common/MobilityBase.h \
  networklayer/contract/IPv4Address.h \
  status/NodeStatus.h \
  base/Coord.h \
  base/ModuleAccess.h \
  base/Compat.h \
  networklayer/contract/IPv6Address.h \
  ./applications/traci/TraCIDemo.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPvXAddress.h \
  mobility/contract/IMobility.h \
  base/ILifecycle.h \
  transport/contract/UDPSocket.h \
  base/INETDefs.h \
  ./mobility/single/TraCIMobility.h \
  ./world/traci/TraCIScenarioManager.h
$O/applications/traci/TraCITestApp.o: applications/traci/TraCITestApp.cc \
  ./applications/traci/TraCITestApp.h \
  base/LifecycleOperation.h \
  mobility/contract/IMobility.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  ./mobility/single/TraCIMobility.h \
  ./world/traci/TraCIScenarioManager.h \
  mobility/common/MobilityBase.h \
  util/FWMath.h \
  status/NodeStatus.h \
  base/Coord.h \
  base/ModuleAccess.h \
  base/Compat.h
$O/applications/trafficlightapp/CommandNodeBasicApp.o: applications/trafficlightapp/CommandNodeBasicApp.cc \
  applications/trafficlightapp/CommandNodeBasicApp.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/INETDefs.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/common/InterfaceToken.h \
  transport/contract/UDPSocket.h \
  base/ILifecycle.h \
  applications/common/ApplicationBase.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceTableAccess.h \
  applications/trafficlightapp/TrafficLightPacket_m.h \
  base/NodeOperations.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  base/OperationalBase.h \
  base/LifecycleOperation.h
$O/applications/trafficlightapp/CommandNodeSinkApp.o: applications/trafficlightapp/CommandNodeSinkApp.cc \
  applications/trafficlightapp/CommandNodeSinkApp.h \
  base/OperationalBase.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPvXAddress.h \
  base/NodeOperations.h \
  applications/trafficlightapp/TrafficLightPacket_m.h \
  networklayer/contract/IPv6Address.h \
  applications/common/ApplicationBase.h \
  base/ILifecycle.h \
  transport/contract/UDPSocket.h \
  base/INETDefs.h \
  transport/contract/UDPControlInfo_m.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h
$O/applications/trafficlightapp/TrafficLightBasicApp.o: applications/trafficlightapp/TrafficLightBasicApp.cc \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  base/Compat.h \
  applications/trafficlightapp/TrafficLightPacket_m.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6Address.h \
  base/NotifierConsts.h \
  base/LifecycleOperation.h \
  base/OperationalBase.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/IInterfaceTable.h \
  base/NodeOperations.h \
  base/ILifecycle.h \
  applications/trafficlightapp/TrafficLightBasicApp.h \
  transport/contract/UDPSocket.h \
  base/INETDefs.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/common/InterfaceToken.h \
  applications/common/ApplicationBase.h
$O/applications/trafficlightapp/TrafficLightSinkApp.o: applications/trafficlightapp/TrafficLightSinkApp.cc \
  base/NodeOperations.h \
  networklayer/contract/IPvXAddress.h \
  base/OperationalBase.h \
  base/LifecycleOperation.h \
  applications/trafficlightapp/TrafficLightSinkApp.h \
  networklayer/contract/IPv6Address.h \
  applications/trafficlightapp/TrafficLightPacket_m.h \
  applications/common/ApplicationBase.h \
  transport/contract/UDPControlInfo_m.h \
  base/INETDefs.h \
  transport/contract/UDPSocket.h \
  base/ILifecycle.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h
$O/applications/trafficlightapp/TrafficLightUpdateStatusApp.o: applications/trafficlightapp/TrafficLightUpdateStatusApp.cc \
  base/INETDefs.h \
  applications/trafficlightapp/TrafficLightUpdateStatusApp.h \
  base/Compat.h
$O/applications/udpapp/UDPBasicApp.o: applications/udpapp/UDPBasicApp.cc \
  applications/common/ApplicationBase.h \
  transport/contract/UDPControlInfo_m.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  transport/contract/UDPSocket.h \
  base/ILifecycle.h \
  base/NodeOperations.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  base/LifecycleOperation.h \
  base/OperationalBase.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceTableAccess.h \
  base/Compat.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  applications/udpapp/UDPBasicApp.h \
  networklayer/contract/IPvXAddressResolver.h
$O/applications/udpapp/UDPBasicBurst.o: applications/udpapp/UDPBasicBurst.cc \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv6Address.h \
  base/OperationalBase.h \
  base/LifecycleOperation.h \
  base/INotifiable.h \
  base/NodeOperations.h \
  applications/udpapp/UDPBasicBurst.h \
  networklayer/contract/IPvXAddress.h \
  base/ILifecycle.h \
  networklayer/ipv6/RoutingTable6Access.h \
  networklayer/ipv6/RoutingTable6.h \
  transport/contract/UDPControlInfo_m.h \
  base/INETDefs.h \
  transport/contract/UDPSocket.h \
  applications/common/ApplicationBase.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/contract/IPv4Address.h \
  base/NotificationBoard.h \
  base/ModuleAccess.h \
  base/Compat.h
$O/applications/udpapp/UDPEchoApp.o: applications/udpapp/UDPEchoApp.cc \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  base/LifecycleOperation.h \
  base/OperationalBase.h \
  base/NodeOperations.h \
  networklayer/contract/IPvXAddress.h \
  applications/udpapp/UDPEchoApp.h \
  networklayer/contract/IPv6Address.h \
  applications/common/ApplicationBase.h \
  base/ILifecycle.h \
  transport/contract/UDPControlInfo_m.h \
  base/INETDefs.h \
  transport/contract/UDPSocket.h
$O/applications/udpapp/UDPSink.o: applications/udpapp/UDPSink.cc \
  transport/contract/UDPSocket.h \
  base/INETDefs.h \
  transport/contract/UDPControlInfo_m.h \
  base/ILifecycle.h \
  applications/common/ApplicationBase.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h \
  base/NodeOperations.h \
  base/LifecycleOperation.h \
  base/OperationalBase.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  applications/udpapp/UDPSink.h
$O/applications/udpapp/UDPVideoStreamCli.o: applications/udpapp/UDPVideoStreamCli.cc \
  applications/common/ApplicationBase.h \
  base/INETDefs.h \
  transport/contract/UDPControlInfo_m.h \
  transport/contract/UDPSocket.h \
  base/ILifecycle.h \
  base/NodeOperations.h \
  networklayer/contract/IPvXAddress.h \
  base/OperationalBase.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPv6Address.h \
  applications/udpapp/UDPVideoStreamCli.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddressResolver.h
$O/applications/udpapp/UDPVideoStreamSvr.o: applications/udpapp/UDPVideoStreamSvr.cc \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  applications/udpapp/UDPVideoStreamSvr.h \
  transport/contract/UDPSocket.h \
  base/INETDefs.h \
  transport/contract/UDPControlInfo_m.h \
  base/ILifecycle.h \
  applications/common/ApplicationBase.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h \
  base/NodeOperations.h \
  base/LifecycleOperation.h \
  base/OperationalBase.h
$O/applications/voip/SimpleVoIPReceiver.o: applications/voip/SimpleVoIPReceiver.cc \
  base/Compat.h \
  base/ModuleAccess.h \
  applications/voip/SimpleVoIPReceiver.h \
  networklayer/contract/IPv4Address.h \
  status/NodeStatus.h \
  applications/voip/SimpleVoIPPacket_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  transport/contract/UDPSocket.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  networklayer/contract/IPvXAddress.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPv6Address.h
$O/applications/voip/SimpleVoIPSender.o: applications/voip/SimpleVoIPSender.cc \
  networklayer/contract/IPv4Address.h \
  status/NodeStatus.h \
  applications/voip/SimpleVoIPSender.h \
  base/ModuleAccess.h \
  base/Compat.h \
  networklayer/contract/IPvXAddressResolver.h \
  applications/voip/SimpleVoIPPacket_m.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  transport/contract/UDPSocket.h \
  networklayer/contract/IPv6Address.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPvXAddress.h
$O/attacks/attackbase/AttackBase.o: attacks/attackbase/AttackBase.cc \
  attacks/attackbase/AttackBase.h \
  base/Compat.h \
  variable/Variable.h \
  actions/actionbase/ActionBase.h \
  base/INETDefs.h
$O/attacks/attackentry/AttackEntry.o: attacks/attackentry/AttackEntry.cc \
  attacks/attackentry/AttackEntry.h \
  attacks/attackbase/AttackBase.h \
  base/Compat.h \
  variable/Variable.h \
  actions/actionbase/ActionBase.h \
  base/INETDefs.h
$O/attacks/conditionalattack/ConditionalAttack.o: attacks/conditionalattack/ConditionalAttack.cc \
  actions/actionbase/ActionBase.h \
  actions/clone/Clone.h \
  attacks/conditionalattack/ConditionalAttack.h \
  attacks/filterblock/FilterBlock.h \
  util/seapputils/seapputils.h \
  actions/retrieve/Retrieve.h \
  actions/change/Change.h \
  base/INETDefs.h \
  actions/seappexpression/SEAPPExpression.h \
  actions/send/Send.h \
  actions/drop/Drop.h \
  variable/Variable.h \
  base/Compat.h \
  actions/put/Put.h \
  attacks/filterblock/PacketFilter.h \
  attacks/attackbase/AttackBase.h \
  actions/create/Create.h \
  globalfilter/putmessages/PutMessages.h
$O/attacks/filterblock/CompoundBlock.o: attacks/filterblock/CompoundBlock.cc \
  util/seapputils/seapputils.h \
  attacks/filterblock/FilterBlock.h \
  attacks/filterblock/CompoundBlock.h
$O/attacks/filterblock/ElementaryBlock.o: attacks/filterblock/ElementaryBlock.cc \
  attacks/filterblock/ElementaryBlock.h \
  util/seapputils/seapputils.h \
  attacks/filterblock/FilterBlock.h
$O/attacks/filterblock/FilterBlock.o: attacks/filterblock/FilterBlock.cc \
  attacks/filterblock/FilterBlock.h
$O/attacks/filterblock/PacketFilter.o: attacks/filterblock/PacketFilter.cc \
  attacks/filterblock/CompoundBlock.h \
  attacks/filterblock/PacketFilter.h \
  attacks/filterblock/FilterBlock.h \
  util/seapputils/seapputils.h \
  attacks/filterblock/ElementaryBlock.h
$O/attacks/physicalattack/PhysicalAttack.o: attacks/physicalattack/PhysicalAttack.cc \
  base/INETDefs.h \
  actions/destroy/Destroy.h \
  attacks/physicalattack/PhysicalAttack.h \
  actions/actionbase/ActionBase.h \
  base/Coord.h \
  attacks/attackbase/AttackBase.h \
  base/Compat.h \
  actions/move/Move.h \
  variable/Variable.h \
  util/FWMath.h
$O/attacks/unconditionalattack/UnconditionalAttack.o: attacks/unconditionalattack/UnconditionalAttack.cc \
  variable/Variable.h \
  actions/put/Put.h \
  base/Compat.h \
  attacks/attackbase/AttackBase.h \
  globalfilter/putmessages/PutMessages.h \
  actions/create/Create.h \
  actions/seappexpression/SEAPPExpression.h \
  attacks/unconditionalattack/UnconditionalAttack.h \
  actions/drop/Drop.h \
  base/INETDefs.h \
  actions/change/Change.h \
  actions/actionbase/ActionBase.h \
  actions/clone/Clone.h \
  util/seapputils/seapputils.h \
  actions/retrieve/Retrieve.h
$O/base/AbstractQueue.o: base/AbstractQueue.cc \
  base/AbstractQueue.h \
  base/Compat.h \
  base/INETDefs.h
$O/base/BasicModule.o: base/BasicModule.cc \
  base/NotificationBoard.h \
  base/ModuleAccess.h \
  base/Compat.h \
  base/INETDefs.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  base/BasicModule.h
$O/base/ByteArray.o: base/ByteArray.cc \
  base/INETDefs.h \
  base/ByteArray.h \
  base/Compat.h \
  base/ByteArray_m.h
$O/base/ByteArrayBuffer.o: base/ByteArrayBuffer.cc \
  base/ByteArray_m.h \
  base/ByteArrayBuffer.h \
  base/Compat.h \
  base/ByteArray.h \
  base/INETDefs.h
$O/base/ByteArrayMessage.o: base/ByteArrayMessage.cc \
  base/Compat.h \
  base/ByteArray_m.h \
  base/INETDefs.h \
  base/ByteArrayMessage_m.h \
  base/ByteArrayMessage.h \
  base/ByteArray.h
$O/base/Compat.o: base/Compat.cc \
  base/Compat.h
$O/base/Coord.o: base/Coord.cc \
  base/INETDefs.h \
  base/Coord.h \
  base/Compat.h \
  util/FWMath.h
$O/base/InterfaceOperations.o: base/InterfaceOperations.cc
$O/base/Join.o: base/Join.cc \
  base/INETDefs.h \
  base/Compat.h
$O/base/LifecycleController.o: base/LifecycleController.cc \
  base/Compat.h \
  base/LifecycleController.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/IScriptable.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  base/LifecycleOperation.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h
$O/base/ModuleAccess.o: base/ModuleAccess.cc \
  base/INETDefs.h \
  base/ModuleAccess.h \
  base/Compat.h
$O/base/NedFunctions.o: base/NedFunctions.cc \
  base/INETDefs.h \
  base/Compat.h
$O/base/NodeOperations.o: base/NodeOperations.cc \
  base/Compat.h \
  base/ModuleAccess.h \
  base/INETDefs.h \
  base/NodeOperations.h \
  base/LifecycleOperation.h
$O/base/NotificationBoard.o: base/NotificationBoard.cc \
  base/ModuleAccess.h \
  base/Compat.h \
  base/NotificationBoard.h \
  base/INETDefs.h \
  base/INotifiable.h \
  base/NotifierConsts.h
$O/base/NotifierConsts.o: base/NotifierConsts.cc \
  base/INETDefs.h \
  base/NotifierConsts.h \
  base/Compat.h
$O/base/OperationalBase.o: base/OperationalBase.cc \
  base/INETDefs.h \
  base/ILifecycle.h \
  base/NodeOperations.h \
  base/LifecycleOperation.h \
  base/OperationalBase.h \
  base/Compat.h \
  base/ModuleAccess.h \
  status/NodeStatus.h
$O/base/PassiveQueueBase.o: base/PassiveQueueBase.cc \
  base/PassiveQueueBase.h \
  base/IPassiveQueue.h \
  base/Compat.h \
  base/INETDefs.h
$O/base/ProtocolMap.o: base/ProtocolMap.cc \
  base/INETDefs.h \
  base/ProtocolMap.h \
  base/Compat.h
$O/base/QueueBase.o: base/QueueBase.cc \
  base/INETDefs.h \
  base/QueueBase.h \
  base/Compat.h \
  base/AbstractQueue.h
$O/base/ReassemblyBuffer.o: base/ReassemblyBuffer.cc \
  base/Compat.h \
  base/INETDefs.h \
  base/ReassemblyBuffer.h
$O/base/ResultFilters.o: base/ResultFilters.cc \
  util/FWMath.h \
  base/Compat.h \
  base/Coord.h \
  base/ResultFilters.h \
  mobility/contract/IMobility.h \
  base/INETDefs.h
$O/base/Sink.o: base/Sink.cc \
  base/Compat.h \
  base/Sink.h \
  base/INETDefs.h
$O/base/Topology.o: base/Topology.cc \
  base/Compat.h \
  util/PatternMatcher.h \
  util/stlutils.h \
  base/INETDefs.h \
  base/Topology.h
$O/base/UnimplementedModule.o: base/UnimplementedModule.cc \
  base/INETDefs.h \
  base/UnimplementedModule.h \
  base/Compat.h
$O/base/erfc.o: base/erfc.cc \
  base/Compat.h \
  base/INETDefs.h
$O/battery/models/BasicBattery.o: battery/models/BasicBattery.cc \
  base/NotifierConsts.h \
  base/INotifiable.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  battery/models/BasicBattery.h \
  base/Compat.h \
  base/ModuleAccess.h
$O/battery/models/InetSimpleBattery.o: battery/models/InetSimpleBattery.cc \
  battery/models/InetSimpleBattery.h \
  base/Compat.h \
  battery/models/Energy.h \
  base/ModuleAccess.h \
  base/NotificationBoard.h \
  battery/models/BasicBattery.h \
  base/INotifiable.h \
  base/NotifierConsts.h \
  linklayer/contract/RadioState.h \
  base/INETDefs.h
$O/globalfilter/GlobalFilter.o: globalfilter/GlobalFilter.cc \
  /usr/include/glib-2.0/glib/gconvert.h \
  /usr/include/libxml++-2.6/libxml++/attribute.h \
  /usr/include/libxml++-2.6/libxml++/nodes/node.h \
  actions/actionbase/ActionBase.h \
  /usr/include/glib-2.0/glib/gtimezone.h \
  /usr/include/glib-2.0/glib/gthreadpool.h \
  /usr/include/glib-2.0/glib/gtestutils.h \
  /usr/include/glibmm-2.4/glibmm/unicode.h \
  /usr/lib/x86_64-linux-gnu/glibmm-2.4/include/glibmmconfig.h \
  /usr/include/glib-2.0/glib/gchecksum.h \
  /usr/include/glib-2.0/glib/gurifuncs.h \
  /usr/include/libxml++-2.6/libxml++/noncopyable.h \
  /usr/include/glib-2.0/glib/deprecated/gthread.h \
  /usr/include/glib-2.0/glib/gmarkup.h \
  /usr/include/libxml++-2.6/libxml++/nodes/cdatanode.h \
  parser/Parser.h \
  /usr/include/glib-2.0/glib/giochannel.h \
  /usr/include/glib-2.0/glib/gmem.h \
  /usr/include/glib-2.0/glib/gwin32.h \
  /usr/include/libxml++-2.6/libxml++/nodes/entitydeclaration.h \
  /usr/include/glib-2.0/glib/gbase64.h \
  /usr/include/libxml++-2.6/libxml++/nodes/xincludestart.h \
  /usr/lib/libxml++-2.6/include/libxml++config.h \
  /usr/include/glib-2.0/glib/gfileutils.h \
  /usr/include/glib-2.0/glib/gshell.h \
  /usr/include/glib-2.0/glib/gpattern.h \
  util/seapputils/seapputils.h \
  /usr/include/libxml++-2.6/libxml++/attributedeclaration.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/exception.h \
  /usr/include/glib-2.0/glib/gtimer.h \
  /usr/include/glib-2.0/glib/gbacktrace.h \
  /usr/include/glib-2.0/glib/gthread.h \
  /usr/include/glib-2.0/glib/gbitlock.h \
  /usr/include/glib-2.0/glib/gmacros.h \
  /usr/include/glib-2.0/glib/deprecated/grel.h \
  /usr/include/glib-2.0/glib/deprecated/gmain.h \
  /usr/include/glib-2.0/glib/grand.h \
  /usr/include/glib-2.0/glib/ghash.h \
  /usr/include/libxml++-2.6/libxml++/validators/validator.h \
  /usr/include/glib-2.0/glib/gmappedfile.h \
  /usr/include/glib-2.0/glib/gquark.h \
  /usr/include/glib-2.0/glib/gscanner.h \
  /usr/include/glib-2.0/glib/goption.h \
  /usr/include/libxml++-2.6/libxml++/attributenode.h \
  /usr/include/glib-2.0/glib/gregex.h \
  /usr/include/glib-2.0/glib/ghostutils.h \
  /usr/include/glib-2.0/glib/gunicode.h \
  /usr/include/glib-2.0/glib/gstring.h \
  /usr/include/libxml++-2.6/libxml++/nodes/element.h \
  /usr/include/libxml++-2.6/libxml++/parsers/saxparser.h \
  /usr/include/glib-2.0/glib/gspawn.h \
  /usr/include/glib-2.0/glib/gutils.h \
  /usr/include/glib-2.0/glib/galloca.h \
  /usr/include/libxml++-2.6/libxml++/dtd.h \
  /usr/include/glib-2.0/glib/gasyncqueue.h \
  /usr/include/libxml++-2.6/libxml++/nodes/contentnode.h \
  base/INETDefs.h \
  /usr/include/glib-2.0/glib/gdataset.h \
  /usr/include/glib-2.0/glib/gdate.h \
  /usr/include/glib-2.0/glib/gtypes.h \
  /usr/include/glib-2.0/glib/gkeyfile.h \
  /usr/include/libxml++-2.6/libxml++/libxml++.h \
  /usr/include/libxml++-2.6/libxml++/parsers/domparser.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/parse_error.h \
  /usr/include/glib-2.0/glib/gversion.h \
  /usr/include/glib-2.0/glib/gerror.h \
  /usr/include/glib-2.0/glib/gatomic.h \
  /usr/include/glib-2.0/glib/gbookmarkfile.h \
  attacks/unconditionalattack/UnconditionalAttack.h \
  /usr/lib/x86_64-linux-gnu/glib-2.0/include/glibconfig.h \
  /usr/include/glib-2.0/glib/gvariant.h \
  /usr/include/glib-2.0/glib/garray.h \
  /usr/include/glib-2.0/glib/gslist.h \
  /usr/include/glib-2.0/glib/gsequence.h \
  /usr/include/glibmm-2.4/glibmm/ustring.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/internal_error.h \
  /usr/include/glib-2.0/glib/gqsort.h \
  /usr/include/libxml++-2.6/libxml++/nodes/xincludeend.h \
  /usr/include/glib-2.0/glib/gslice.h \
  /usr/include/glib-2.0/glib/ghook.h \
  /usr/include/libxml++-2.6/libxml++/validators/schemavalidator.h \
  /usr/include/glib-2.0/glib/ggettext.h \
  /usr/include/glib-2.0/glib/gdatetime.h \
  /usr/include/glib-2.0/glib/deprecated/gcompletion.h \
  /usr/include/libxml++-2.6/libxml++/nodes/processinginstructionnode.h \
  /usr/include/libxml++-2.6/libxml++/nodes/commentnode.h \
  /usr/include/glib-2.0/glib/gcharset.h \
  /usr/include/glib-2.0/glib/gprimes.h \
  /usr/include/libxml++-2.6/libxml++/schema.h \
  /usr/include/glib-2.0/glib/deprecated/gallocator.h \
  variable/Variable.h \
  /usr/include/glib-2.0/glib/genviron.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/validity_error.h \
  /usr/include/glib-2.0/glib/gmain.h \
  /usr/include/libxml++-2.6/libxml++/nodes/entityreference.h \
  /usr/include/glib-2.0/glib.h \
  /usr/include/libxml++-2.6/libxml++/validators/dtdvalidator.h \
  /usr/include/libxml++-2.6/libxml++/nodes/textnode.h \
  /usr/include/glib-2.0/glib/gdir.h \
  /usr/include/glib-2.0/glib/deprecated/gcache.h \
  base/Compat.h \
  /usr/include/libxml++-2.6/libxml++/parsers/textreader.h \
  /usr/include/glib-2.0/glib/gbytes.h \
  /usr/include/glib-2.0/glib/gvarianttype.h \
  /usr/include/libxml++-2.6/libxml++/document.h \
  /usr/include/glib-2.0/glib/gnode.h \
  /usr/include/glib-2.0/glib/gmessages.h \
  /usr/include/glib-2.0/glib/gpoll.h \
  attacks/attackbase/AttackBase.h \
  globalfilter/GlobalFilter.h \
  /usr/include/glib-2.0/glib/gstringchunk.h \
  /usr/include/glib-2.0/glib/glist.h \
  /usr/include/glib-2.0/glib/gversionmacros.h \
  /usr/include/glib-2.0/glib/gqueue.h \
  globalfilter/putmessages/PutMessages.h \
  /usr/include/glib-2.0/glib/ghmac.h \
  attacks/attackentry/AttackEntry.h \
  /usr/include/glib-2.0/glib/gtrashstack.h \
  /usr/include/glib-2.0/glib/gtree.h \
  /usr/include/libxml++-2.6/libxml++/parsers/parser.h \
  /usr/include/glib-2.0/glib/gstrfuncs.h
$O/globalfilter/putmessages/PutMessages.o: globalfilter/putmessages/PutMessages.cc \
  globalfilter/putmessages/PutMessages.h \
  util/seapputils/seapputils.h
$O/linklayer/common/MACBase.o: linklayer/common/MACBase.cc \
  base/ModuleAccess.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  status/NodeStatus.h \
  base/NotificationBoard.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/common/MACBase.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/LifecycleOperation.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  base/NodeOperations.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h
$O/linklayer/common/WirelessMacBase.o: linklayer/common/WirelessMacBase.cc \
  linklayer/common/MACBase.h \
  base/ILifecycle.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  base/INotifiable.h \
  base/LifecycleOperation.h \
  base/NodeOperations.h \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h \
  base/ModuleAccess.h \
  base/Compat.h \
  status/NodeStatus.h \
  base/NotificationBoard.h \
  linklayer/common/WirelessMacBase.h \
  networklayer/common/InterfaceEntry.h
$O/linklayer/configurator/Ieee8021dInterfaceData.o: linklayer/configurator/Ieee8021dInterfaceData.cc \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h \
  linklayer/configurator/Ieee8021dInterfaceData.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/common/InterfaceEntry.h \
  base/Compat.h
$O/linklayer/configurator/L2NetworkConfigurator.o: linklayer/configurator/L2NetworkConfigurator.cc \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/IInterfaceTable.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6Address.h \
  base/Topology.h \
  linklayer/configurator/L2NetworkConfigurator.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  linklayer/configurator/Ieee8021dInterfaceData.h \
  util/stlutils.h \
  networklayer/common/InterfaceEntry.h \
  base/Compat.h \
  util/PatternMatcher.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h
$O/linklayer/configurator/L2NodeConfigurator.o: linklayer/configurator/L2NodeConfigurator.cc \
  networklayer/common/InterfaceEntry.h \
  linklayer/configurator/L2NodeConfigurator.h \
  status/NodeStatus.h \
  networklayer/contract/IPv4Address.h \
  util/PatternMatcher.h \
  base/ModuleAccess.h \
  base/Compat.h \
  networklayer/common/InterfaceTableAccess.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6Address.h \
  base/LifecycleOperation.h \
  base/NodeOperations.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  linklayer/configurator/Ieee8021dInterfaceData.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  linklayer/configurator/L2NetworkConfigurator.h \
  base/Topology.h
$O/linklayer/contract/MACAddress.o: linklayer/contract/MACAddress.cc \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  linklayer/contract/MACAddress.h
$O/linklayer/ethernet/EtherBus.o: linklayer/ethernet/EtherBus.cc \
  base/Compat.h \
  linklayer/ethernet/EtherBus.h \
  base/INETDefs.h
$O/linklayer/ethernet/EtherEncap.o: linklayer/ethernet/EtherEncap.cc \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/ethernet/Ethernet.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ethernet/EtherFrame.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  linklayer/ethernet/EtherEncap.h
$O/linklayer/ethernet/EtherFrameClassifier.o: linklayer/ethernet/EtherFrameClassifier.cc \
  linklayer/ethernet/Ethernet.h \
  base/INETDefs.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/contract/MACAddress.h \
  base/Compat.h \
  linklayer/ethernet/EtherFrameClassifier.h \
  linklayer/ethernet/EtherFrame.h
$O/linklayer/ethernet/EtherHub.o: linklayer/ethernet/EtherHub.cc \
  base/Compat.h \
  linklayer/ethernet/EtherHub.h \
  base/INETDefs.h
$O/linklayer/ethernet/EtherLLC.o: linklayer/ethernet/EtherLLC.cc \
  base/INETDefs.h \
  base/ILifecycle.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/contract/MACAddress.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/NodeOperations.h \
  base/LifecycleOperation.h \
  status/NodeStatus.h \
  base/Compat.h \
  linklayer/ethernet/EtherLLC.h \
  base/ModuleAccess.h \
  linklayer/ethernet/EtherFrame.h
$O/linklayer/ethernet/EtherMAC.o: linklayer/ethernet/EtherMAC.cc \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/INotifiable.h \
  linklayer/ethernet/EtherMAC.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/common/MACBase.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  base/ILifecycle.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/IPassiveQueue.h \
  linklayer/ethernet/EtherMACBase.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ethernet/EtherFrame.h \
  base/Compat.h \
  status/NodeStatus.h
$O/linklayer/ethernet/EtherMACBase.o: linklayer/ethernet/EtherMACBase.cc \
  base/IPassiveQueue.h \
  linklayer/ethernet/EtherMACBase.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ethernet/EtherFrame.h \
  base/Compat.h \
  base/ModuleAccess.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv4Address.h \
  status/NodeStatus.h \
  base/NodeOperations.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/IInterfaceTable.h \
  base/LifecycleOperation.h \
  base/INotifiable.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/ethernet/Ethernet.h \
  util/opp_utils.h \
  linklayer/common/MACBase.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  linklayer/ethernet/EtherFrame_m.h
$O/linklayer/ethernet/EtherMACFullDuplex.o: linklayer/ethernet/EtherMACFullDuplex.cc \
  base/Compat.h \
  base/ModuleAccess.h \
  base/NotificationBoard.h \
  status/NodeStatus.h \
  base/IPassiveQueue.h \
  linklayer/ethernet/EtherMACFullDuplex.h \
  linklayer/ethernet/EtherMACBase.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ethernet/EtherFrame.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/common/MACBase.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  base/ILifecycle.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/INotifiable.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h
$O/linklayer/ethernet/switch/MACAddressTable.o: linklayer/ethernet/switch/MACAddressTable.cc \
  base/INETDefs.h \
  linklayer/ethernet/switch/IMACAddressTable.h \
  linklayer/contract/MACAddress.h \
  linklayer/ethernet/switch/MACAddressTable.h \
  base/Compat.h
$O/linklayer/ethernet/switch/MACRelayUnit.o: linklayer/ethernet/switch/MACRelayUnit.cc \
  linklayer/contract/MACAddress.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/NodeOperations.h \
  base/INotifiable.h \
  base/LifecycleOperation.h \
  linklayer/ethernet/switch/IMACAddressTable.h \
  base/INETDefs.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/ethernet/switch/MACRelayUnit.h \
  base/ILifecycle.h \
  linklayer/common/MACBase.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/ethernet/EtherFrame.h \
  base/IPassiveQueue.h \
  linklayer/ethernet/EtherMACBase.h \
  status/NodeStatus.h \
  base/Compat.h \
  base/ModuleAccess.h
$O/linklayer/ext/ExtInterface.o: linklayer/ext/ExtInterface.cc \
  base/INotifiable.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6Address.h \
  util/headerserializers/ipv4/IPv4Serializer.h \
  base/NotifierConsts.h \
  linklayer/ext/ExtFrame_m.h \
  util/opp_utils.h \
  linklayer/common/MACBase.h \
  base/ILifecycle.h \
  util/headerserializers/headers/bsdint.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  linklayer/ext/ExtInterface.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPProtocolId_m.h \
  linklayer/ext/cSocketRTScheduler.h \
  base/ModuleAccess.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTable.h \
  base/NotificationBoard.h
$O/linklayer/ext/cSocketRTScheduler.o: linklayer/ext/cSocketRTScheduler.cc \
  util/headerserializers/headers/bsdint.h \
  base/INETDefs.h \
  util/headerserializers/headers/ethernet.h \
  linklayer/ext/ExtFrame_m.h \
  linklayer/ext/cSocketRTScheduler.h \
  base/Compat.h
$O/linklayer/idealwireless/IdealWirelessMac.o: linklayer/idealwireless/IdealWirelessMac.cc \
  base/INotifiable.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/IInterfaceTable.h \
  world/radio/IdealChannelModelAccess.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/BasicModule.h \
  base/NodeOperations.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  linklayer/idealwireless/IdealWirelessFrame_m.h \
  base/NotifierConsts.h \
  linklayer/contract/RadioState.h \
  linklayer/common/MACBase.h \
  util/opp_utils.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  util/FWMath.h \
  linklayer/common/WirelessMacBase.h \
  world/radio/IdealChannelModel.h \
  base/IPassiveQueue.h \
  linklayer/radio/IdealAirFrame_m.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  linklayer/radio/IdealRadio.h \
  base/Compat.h \
  linklayer/idealwireless/IdealWirelessMac.h \
  networklayer/contract/IPv4Address.h \
  status/NodeStatus.h \
  base/NotificationBoard.h \
  base/Coord.h
$O/linklayer/ieee80211/mac/Ieee80211DataRate.o: linklayer/ieee80211/mac/Ieee80211DataRate.cc \
  base/Compat.h \
  linklayer/ieee80211/mac/Ieee80211DataRate.h \
  linklayer/ieee80211/radio/WifiPreambleType.h \
  base/INETDefs.h \
  linklayer/radio/ModulationType.h \
  linklayer/ieee80211/mac/WifiMode.h
$O/linklayer/ieee80211/mac/Ieee80211Mac.o: linklayer/ieee80211/mac/Ieee80211Mac.cc \
  linklayer/radio/Radio80211aControlInfo_m.h \
  base/Coord.h \
  base/NotificationBoard.h \
  status/NodeStatus.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  linklayer/ieee80211/mac/IQoSClassifier.h \
  base/ModuleAccess.h \
  linklayer/contract/PhyControlInfo_m.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  linklayer/ieee80211/radio/WifiPreambleType.h \
  base/FSMA.h \
  base/IPassiveQueue.h \
  util/FWMath.h \
  linklayer/common/WirelessMacBase.h \
  linklayer/ieee80211/mac/Ieee80211DataRate.h \
  linklayer/radio/AirFrame_m.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/ILifecycle.h \
  linklayer/ieee80211/mac/Ieee80211eClassifier.h \
  linklayer/common/MACBase.h \
  util/opp_utils.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  linklayer/ieee80211/mac/WifiMode.h \
  base/NotifierConsts.h \
  linklayer/contract/RadioState.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/ieee80211/mac/Ieee80211Mac.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/radio/ModulationType.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/NodeOperations.h \
  base/INotifiable.h \
  base/LifecycleOperation.h
$O/linklayer/ieee80211/mac/Ieee80211eClassifier.o: linklayer/ieee80211/mac/Ieee80211eClassifier.cc \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  base/ByteArray.h \
  transport/udp/UDPPacket_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/INETDefs.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  linklayer/ieee80211/mac/Ieee80211eClassifier.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/tcp_common/TCPSegment.h \
  transport/tcp_common/TCPSegment_m.h \
  base/ByteArray_m.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  linklayer/ieee80211/mac/IQoSClassifier.h
$O/linklayer/ieee80211/mac/WifiMode.o: linklayer/ieee80211/mac/WifiMode.cc \
  base/INETDefs.h \
  linklayer/radio/ModulationType.h \
  linklayer/ieee80211/mac/WifiMode.h \
  base/Compat.h \
  linklayer/ieee80211/radio/WifiPreambleType.h \
  linklayer/ieee80211/mac/Ieee80211DataRate.h
$O/linklayer/ieee80211/mgmt/Ieee80211AgentSTA.o: linklayer/ieee80211/mgmt/Ieee80211AgentSTA.cc \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  base/ModuleAccess.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTable.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  base/NotificationBoard.h \
  linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
  base/INotifiable.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/ieee80211/mgmt/Ieee80211AgentSTA.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h \
  util/opp_utils.h \
  base/ILifecycle.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAP.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAP.cc \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/INotifiable.h \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h \
  linklayer/contract/RadioState.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  base/INETDefs.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/ILifecycle.h \
  base/IPassiveQueue.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  base/PassiveQueueBase.h \
  linklayer/ethernet/EtherFrame.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAP.h \
  base/Compat.h \
  base/ModuleAccess.h \
  base/NotificationBoard.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.cc \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
  base/Compat.h \
  base/ModuleAccess.h \
  base/NotificationBoard.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  base/IPassiveQueue.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  base/PassiveQueueBase.h \
  linklayer/ethernet/EtherFrame.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  base/INETDefs.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/ILifecycle.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/INotifiable.h \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.cc \
  base/Compat.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
  base/ModuleAccess.h \
  base/NotificationBoard.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  base/IPassiveQueue.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  linklayer/ethernet/EtherFrame.h \
  base/PassiveQueueBase.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/INETDefs.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  base/ILifecycle.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/INotifiable.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.cc \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  base/PassiveQueueBase.h \
  base/IPassiveQueue.h \
  base/NotificationBoard.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  base/Compat.h \
  base/ModuleAccess.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/INotifiable.h \
  base/INETDefs.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  base/ILifecycle.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.o: linklayer/ieee80211/mgmt/Ieee80211MgmtBase.cc \
  base/IPassiveQueue.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  base/PassiveQueueBase.h \
  base/Compat.h \
  base/ModuleAccess.h \
  base/NotificationBoard.h \
  status/NodeStatus.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/NodeOperations.h \
  base/INotifiable.h \
  base/LifecycleOperation.h \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  base/INETDefs.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/ILifecycle.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.o: linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.cc \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6Address.h \
  base/NotifierConsts.h \
  linklayer/contract/RadioState.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/radio/ModulationType.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/BasicModule.h \
  base/INotifiable.h \
  linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/ILifecycle.h \
  util/opp_utils.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  base/PassiveQueueBase.h \
  base/IPassiveQueue.h \
  util/FWMath.h \
  world/radio/IChannelControl.h \
  base/NotificationBoard.h \
  base/Coord.h \
  linklayer/radio/Radio80211aControlInfo_m.h \
  networklayer/contract/IPv4Address.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  base/Compat.h \
  base/ModuleAccess.h \
  linklayer/contract/PhyControlInfo_m.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.h \
  world/radio/ChannelAccess.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.o: linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.cc \
  base/PassiveQueueBase.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.h \
  base/IPassiveQueue.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  base/NotificationBoard.h \
  base/ModuleAccess.h \
  base/Compat.h \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/ILifecycle.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/INETDefs.h
$O/linklayer/ieee80211/radio/BerParseFile.o: linklayer/ieee80211/radio/BerParseFile.cc \
  base/Compat.h \
  linklayer/ieee80211/radio/BerParseFile.h \
  base/INETDefs.h
$O/linklayer/ieee80211/radio/Ieee80211RadioModel.o: linklayer/ieee80211/radio/Ieee80211RadioModel.cc \
  base/Coord.h \
  linklayer/ieee80211/radio/BerParseFile.h \
  base/Compat.h \
  linklayer/contract/PhyControlInfo_m.h \
  linklayer/ieee80211/radio/WifiPreambleType.h \
  util/FWMath.h \
  linklayer/radio/AirFrame_m.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/INETDefs.h \
  linklayer/radio/SnrList.h \
  linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.h \
  linklayer/ieee80211/mac/WifiMode.h \
  linklayer/radio/IRadioModel.h \
  linklayer/radio/ModulationType.h \
  linklayer/ieee80211/radio/errormodel/nist-error-rate-model.h \
  linklayer/ieee80211/radio/errormodel/yans-error-rate-model.h \
  linklayer/ieee80211/radio/errormodel/IErrorModel.h \
  linklayer/ieee80211/radio/Ieee80211RadioModel.h
$O/linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.o: linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.cc \
  base/INETDefs.h \
  linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.h \
  base/Compat.h
$O/linklayer/ieee80211/radio/errormodel/nist-error-rate-model.o: linklayer/ieee80211/radio/errormodel/nist-error-rate-model.cc \
  linklayer/ieee80211/radio/WifiPreambleType.h \
  base/Compat.h \
  linklayer/radio/ModulationType.h \
  linklayer/ieee80211/radio/errormodel/nist-error-rate-model.h \
  linklayer/ieee80211/radio/errormodel/IErrorModel.h \
  linklayer/ieee80211/mac/WifiMode.h \
  base/INETDefs.h \
  linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.h
$O/linklayer/ieee80211/radio/errormodel/yans-error-rate-model.o: linklayer/ieee80211/radio/errormodel/yans-error-rate-model.cc \
  linklayer/ieee80211/mac/WifiMode.h \
  linklayer/ieee80211/radio/errormodel/IErrorModel.h \
  linklayer/radio/ModulationType.h \
  linklayer/ieee80211/radio/errormodel/yans-error-rate-model.h \
  linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.h \
  base/INETDefs.h \
  linklayer/ieee80211/radio/WifiPreambleType.h \
  base/Compat.h
$O/linklayer/ieee8021d/common/STPBase.o: linklayer/ieee8021d/common/STPBase.cc \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/IInterfaceTable.h \
  base/NodeOperations.h \
  linklayer/ieee8021d/common/STPBase.h \
  linklayer/configurator/Ieee8021dInterfaceData.h \
  base/ILifecycle.h \
  linklayer/ethernet/switch/IMACAddressTable.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPv4Address.h \
  status/NodeStatus.h \
  networklayer/common/InterfaceTable.h \
  base/NotificationBoard.h \
  base/ModuleAccess.h \
  base/Compat.h
$O/linklayer/ieee8021d/relay/Ieee8021dRelay.o: linklayer/ieee8021d/relay/Ieee8021dRelay.cc \
  networklayer/common/InterfaceEntry.h \
  status/NodeStatus.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTable.h \
  base/NotificationBoard.h \
  base/ModuleAccess.h \
  base/Compat.h \
  linklayer/ieee8021d/common/Ieee8021dBPDU_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6Address.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/NodeOperations.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/configurator/Ieee8021dInterfaceData.h \
  base/ILifecycle.h \
  linklayer/ieee8021d/relay/Ieee8021dRelay.h \
  linklayer/ethernet/switch/IMACAddressTable.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  linklayer/ethernet/Ethernet.h
$O/linklayer/ieee8021d/rstp/RSTP.o: linklayer/ieee8021d/rstp/RSTP.cc \
  base/LifecycleOperation.h \
  linklayer/ethernet/switch/MACAddressTable.h \
  base/INotifiable.h \
  base/NodeOperations.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/ieee8021d/common/Ieee8021dBPDU_m.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  linklayer/ethernet/Ethernet.h \
  base/ILifecycle.h \
  linklayer/ieee8021d/common/STPBase.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/configurator/Ieee8021dInterfaceData.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  linklayer/ethernet/switch/IMACAddressTable.h \
  linklayer/ieee8021d/rstp/RSTP.h \
  linklayer/ethernet/EtherFrame.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  base/Compat.h \
  networklayer/common/InterfaceTable.h \
  status/NodeStatus.h \
  networklayer/contract/IPv4Address.h \
  base/NotificationBoard.h
$O/linklayer/ieee8021d/stp/STP.o: linklayer/ieee8021d/stp/STP.cc \
  linklayer/ethernet/Ethernet.h \
  base/ILifecycle.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/configurator/Ieee8021dInterfaceData.h \
  linklayer/ieee8021d/common/STPBase.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  linklayer/ethernet/switch/IMACAddressTable.h \
  base/LifecycleOperation.h \
  base/INotifiable.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/NodeOperations.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/ieee8021d/common/Ieee8021dBPDU_m.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6Address.h \
  base/ModuleAccess.h \
  linklayer/ieee8021d/stp/STP.h \
  base/Compat.h \
  networklayer/common/InterfaceTable.h \
  status/NodeStatus.h \
  networklayer/contract/IPv4Address.h \
  base/NotificationBoard.h \
  linklayer/ethernet/EtherFrame.h \
  networklayer/common/InterfaceEntry.h
$O/linklayer/ieee8021d/tester/STPTester.o: linklayer/ieee8021d/tester/STPTester.cc \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTable.h \
  status/NodeStatus.h \
  networklayer/contract/IPv4Address.h \
  base/NotificationBoard.h \
  base/ModuleAccess.h \
  linklayer/ieee8021d/stp/STP.h \
  base/Compat.h \
  linklayer/ieee8021d/common/Ieee8021dBPDU_m.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  base/LifecycleOperation.h \
  base/INotifiable.h \
  base/NodeOperations.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  linklayer/ieee8021d/tester/STPTester.h \
  linklayer/configurator/Ieee8021dInterfaceData.h \
  linklayer/ieee8021d/common/STPBase.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  linklayer/ethernet/switch/IMACAddressTable.h \
  base/Topology.h
$O/linklayer/loopback/Loopback.o: linklayer/loopback/Loopback.cc \
  base/IPassiveQueue.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  linklayer/loopback/Loopback.h \
  base/Compat.h \
  linklayer/contract/TxNotifDetails.h \
  networklayer/contract/IPv4Address.h \
  base/NotificationBoard.h \
  base/INotifiable.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6Address.h \
  linklayer/common/MACBase.h \
  util/opp_utils.h \
  base/ILifecycle.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h
$O/linklayer/ppp/PPP.o: linklayer/ppp/PPP.cc \
  base/ILifecycle.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  util/opp_utils.h \
  linklayer/ppp/PPPFrame_m.h \
  linklayer/common/MACBase.h \
  networklayer/common/InterfaceTableAccess.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  base/LifecycleOperation.h \
  base/INotifiable.h \
  base/NodeOperations.h \
  linklayer/ppp/PPP.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  status/NodeStatus.h \
  base/NotificationBoard.h \
  base/ModuleAccess.h \
  linklayer/contract/TxNotifDetails.h \
  base/Compat.h \
  networklayer/common/InterfaceEntry.h \
  base/IPassiveQueue.h
$O/linklayer/queue/AlgorithmicDropperBase.o: linklayer/queue/AlgorithmicDropperBase.cc \
  base/INETDefs.h \
  linklayer/queue/IQueueAccess.h \
  linklayer/queue/AlgorithmicDropperBase.h \
  base/Compat.h
$O/linklayer/queue/DropTailQueue.o: linklayer/queue/DropTailQueue.cc \
  base/INETDefs.h \
  base/Compat.h \
  base/PassiveQueueBase.h \
  base/IPassiveQueue.h \
  linklayer/queue/DropTailQueue.h
$O/linklayer/queue/FIFOQueue.o: linklayer/queue/FIFOQueue.cc \
  linklayer/queue/IQueueAccess.h \
  base/INETDefs.h \
  base/IPassiveQueue.h \
  linklayer/queue/FIFOQueue.h \
  base/PassiveQueueBase.h \
  base/Compat.h
$O/linklayer/queue/PriorityScheduler.o: linklayer/queue/PriorityScheduler.cc \
  base/INETDefs.h \
  base/Compat.h \
  linklayer/queue/SchedulerBase.h \
  linklayer/queue/PriorityScheduler.h \
  base/IPassiveQueue.h
$O/linklayer/queue/REDDropper.o: linklayer/queue/REDDropper.cc \
  base/Compat.h \
  linklayer/queue/AlgorithmicDropperBase.h \
  util/opp_utils.h \
  linklayer/queue/IQueueAccess.h \
  linklayer/queue/REDDropper.h \
  base/INETDefs.h
$O/linklayer/queue/SchedulerBase.o: linklayer/queue/SchedulerBase.cc \
  base/INETDefs.h \
  linklayer/queue/SchedulerBase.h \
  base/Compat.h \
  base/IPassiveQueue.h
$O/linklayer/queue/ThresholdDropper.o: linklayer/queue/ThresholdDropper.cc \
  linklayer/queue/IQueueAccess.h \
  linklayer/queue/ThresholdDropper.h \
  base/INETDefs.h \
  linklayer/queue/AlgorithmicDropperBase.h \
  base/Compat.h
$O/linklayer/queue/WRRScheduler.o: linklayer/queue/WRRScheduler.cc \
  base/IPassiveQueue.h \
  base/Compat.h \
  linklayer/queue/SchedulerBase.h \
  linklayer/queue/WRRScheduler.h \
  util/opp_utils.h \
  base/INETDefs.h
$O/linklayer/radio/GenericRadioModel.o: linklayer/radio/GenericRadioModel.cc \
  util/FWMath.h \
  base/Coord.h \
  linklayer/radio/Modulation.h \
  base/Compat.h \
  linklayer/radio/IModulation.h \
  linklayer/contract/PhyControlInfo_m.h \
  linklayer/radio/IRadioModel.h \
  linklayer/radio/ModulationType.h \
  linklayer/radio/AirFrame_m.h \
  linklayer/radio/GenericRadioModel.h \
  base/INETDefs.h \
  linklayer/radio/SnrList.h
$O/linklayer/radio/IdealRadio.o: linklayer/radio/IdealRadio.cc \
  linklayer/radio/IdealAirFrame_m.h \
  world/radio/IdealChannelModel.h \
  util/FWMath.h \
  base/NotificationBoard.h \
  base/Coord.h \
  status/NodeStatus.h \
  base/Compat.h \
  linklayer/radio/IdealRadio.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  linklayer/contract/RadioState.h \
  world/radio/IdealChannelModelAccess.h \
  base/BasicModule.h \
  base/NodeOperations.h \
  base/LifecycleOperation.h \
  base/INotifiable.h \
  base/INETDefs.h \
  base/ILifecycle.h
$O/linklayer/radio/Modulation.o: linklayer/radio/Modulation.cc \
  linklayer/radio/Modulation.h \
  linklayer/radio/IModulation.h \
  base/Compat.h \
  base/INETDefs.h
$O/linklayer/radio/Radio.o: linklayer/radio/Radio.cc \
  world/obstacles/ObstacleControl.h \
  base/ILifecycle.h \
  ./world/annotations/AnnotationManager.h \
  linklayer/radio/SnrList.h \
  base/INETDefs.h \
  linklayer/radio/AirFrame_m.h \
  base/LifecycleOperation.h \
  base/INotifiable.h \
  ./world/obstacles/Obstacle.h \
  base/NodeOperations.h \
  base/BasicModule.h \
  linklayer/radio/ModulationType.h \
  linklayer/radio/IRadioModel.h \
  linklayer/contract/RadioState.h \
  base/NotifierConsts.h \
  world/radio/ChannelAccess.h \
  linklayer/contract/PhyControlInfo_m.h \
  linklayer/radio/Radio.h \
  base/ModuleAccess.h \
  base/Compat.h \
  battery/models/BasicBattery.h \
  status/NodeStatus.h \
  linklayer/radio/propagation/IReceptionModel.h \
  linklayer/radio/Radio80211aControlInfo_m.h \
  base/Coord.h \
  base/NotificationBoard.h \
  world/radio/IChannelControl.h \
  linklayer/radio/INoiseGenerator.h \
  util/FWMath.h
$O/linklayer/radio/propagation/FreeSpaceModel.o: linklayer/radio/propagation/FreeSpaceModel.cc \
  linklayer/radio/propagation/FreeSpaceModel.h \
  base/INETDefs.h \
  base/INotifiable.h \
  base/BasicModule.h \
  base/NotifierConsts.h \
  world/radio/ChannelAccess.h \
  base/ModuleAccess.h \
  base/Compat.h \
  linklayer/radio/propagation/IReceptionModel.h \
  base/Coord.h \
  base/NotificationBoard.h \
  world/radio/IChannelControl.h \
  util/FWMath.h
$O/linklayer/radio/propagation/LogNormalShadowingModel.o: linklayer/radio/propagation/LogNormalShadowingModel.cc \
  base/Compat.h \
  linklayer/radio/propagation/IReceptionModel.h \
  util/FWMath.h \
  linklayer/radio/propagation/FreeSpaceModel.h \
  linklayer/radio/propagation/LogNormalShadowingModel.h \
  base/INETDefs.h
$O/linklayer/radio/propagation/NakagamiModel.o: linklayer/radio/propagation/NakagamiModel.cc \
  base/Compat.h \
  linklayer/radio/propagation/IReceptionModel.h \
  util/FWMath.h \
  linklayer/radio/propagation/NakagamiModel.h \
  linklayer/radio/propagation/FreeSpaceModel.h \
  base/INETDefs.h
$O/linklayer/radio/propagation/RayleighModel.o: linklayer/radio/propagation/RayleighModel.cc \
  linklayer/radio/propagation/FreeSpaceModel.h \
  base/INETDefs.h \
  util/FWMath.h \
  base/Compat.h \
  linklayer/radio/propagation/RayleighModel.h \
  linklayer/radio/propagation/IReceptionModel.h
$O/linklayer/radio/propagation/RiceModel.o: linklayer/radio/propagation/RiceModel.cc \
  util/FWMath.h \
  base/Compat.h \
  linklayer/radio/propagation/IReceptionModel.h \
  linklayer/radio/propagation/FreeSpaceModel.h \
  linklayer/radio/propagation/RiceModel.h \
  base/INETDefs.h
$O/linklayer/radio/propagation/SUIModel.o: linklayer/radio/propagation/SUIModel.cc \
  base/INETDefs.h \
  linklayer/radio/propagation/FreeSpaceModel.h \
  linklayer/radio/propagation/SUIModel.h \
  linklayer/radio/propagation/IReceptionModel.h \
  base/Compat.h \
  util/FWMath.h
$O/linklayer/radio/propagation/TwoRayGroundModel.o: linklayer/radio/propagation/TwoRayGroundModel.cc \
  util/FWMath.h \
  linklayer/radio/propagation/IReceptionModel.h \
  base/Compat.h \
  linklayer/radio/propagation/TwoRayGroundModel.h \
  base/INETDefs.h \
  linklayer/radio/propagation/FreeSpaceModel.h
$O/localfilter/LocalFilter.o: localfilter/LocalFilter.cc \
  /usr/include/glib-2.0/glib/glist.h \
  /usr/include/glib-2.0/glib/gqueue.h \
  /usr/include/glib-2.0/glib/ghmac.h \
  /usr/include/libxml++-2.6/libxml++/document.h \
  /usr/include/glib-2.0/glib/gnode.h \
  /usr/include/glib-2.0/glib/gmessages.h \
  attacks/attackbase/AttackBase.h \
  networklayer/contract/IPv4Address.h \
  /usr/include/libxml++-2.6/libxml++/validators/dtdvalidator.h \
  /usr/include/glib-2.0/glib/deprecated/gcache.h \
  /usr/include/glib-2.0/glib/gbytes.h \
  /usr/include/libxml++-2.6/libxml++/parsers/textreader.h \
  /usr/include/glib-2.0/glib/gvarianttype.h \
  /usr/include/glib-2.0/glib/gprimes.h \
  /usr/include/libxml++-2.6/libxml++/schema.h \
  /usr/include/glib-2.0/glib/genviron.h \
  /usr/include/glib-2.0/glib/gmain.h \
  /usr/include/libxml++-2.6/libxml++/nodes/entityreference.h \
  /usr/include/glib-2.0/glib/gdatetime.h \
  /usr/include/glib-2.0/glib/gqsort.h \
  /usr/include/libxml++-2.6/libxml++/nodes/xincludeend.h \
  /usr/include/glib-2.0/glib/gslice.h \
  /usr/include/libxml++-2.6/libxml++/validators/schemavalidator.h \
  /usr/include/glib-2.0/glib/ggettext.h \
  /usr/lib/x86_64-linux-gnu/glib-2.0/include/glibconfig.h \
  /usr/include/glib-2.0/glib/gvariant.h \
  /usr/include/glib-2.0/glib/gslist.h \
  localfilter/LocalFilter.h \
  /usr/include/glib-2.0/glib/gsequence.h \
  /usr/include/glibmm-2.4/glibmm/ustring.h \
  /usr/include/glib-2.0/glib/gerror.h \
  /usr/include/libxml++-2.6/libxml++/dtd.h \
  /usr/include/glib-2.0/glib/gasyncqueue.h \
  /usr/include/libxml++-2.6/libxml++/nodes/contentnode.h \
  /usr/include/glib-2.0/glib/gdate.h \
  /usr/include/glib-2.0/glib/gtypes.h \
  /usr/include/glib-2.0/glib/gdataset.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/parse_error.h \
  /usr/include/glib-2.0/glib/goption.h \
  /usr/include/libxml++-2.6/libxml++/attributenode.h \
  /usr/include/libxml++-2.6/libxml++/parsers/saxparser.h \
  /usr/include/glib-2.0/glib/gutils.h \
  /usr/include/glib-2.0/glib/deprecated/gmain.h \
  /usr/include/glib-2.0/glib/ghash.h \
  /usr/include/glib-2.0/glib/gbitlock.h \
  /usr/include/glib-2.0/glib/gmacros.h \
  /usr/include/libxml++-2.6/libxml++/nodes/xincludestart.h \
  /usr/include/glib-2.0/glib/gfileutils.h \
  util/seapputils/seapputils.h \
  linklayer/contract/MACAddress.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/exception.h \
  /usr/include/glib-2.0/glib/gmarkup.h \
  parser/Parser.h \
  /usr/include/glib-2.0/glib/giochannel.h \
  /usr/include/glib-2.0/glib/gmem.h \
  /usr/include/glib-2.0/glib/gbase64.h \
  /usr/include/libxml++-2.6/libxml++/nodes/entitydeclaration.h \
  attacks/physicalattack/PhysicalAttack.h \
  attacks/filterblock/FilterBlock.h \
  networklayer/common/IInterfaceTable.h \
  /usr/include/glib-2.0/glib/deprecated/gthread.h \
  /usr/include/libxml++-2.6/libxml++/attribute.h \
  /usr/include/glib-2.0/glib/gconvert.h \
  /usr/lib/x86_64-linux-gnu/glibmm-2.4/include/glibmmconfig.h \
  /usr/include/glib-2.0/glib/gstringchunk.h \
  /usr/include/glib-2.0/glib/gversionmacros.h \
  attacks/attackentry/AttackEntry.h \
  globalfilter/putmessages/PutMessages.h \
  /usr/include/glib-2.0/glib/gtree.h \
  /usr/include/glib-2.0/glib/gtrashstack.h \
  /usr/include/libxml++-2.6/libxml++/parsers/parser.h \
  /usr/include/glib-2.0/glib/gstrfuncs.h \
  /usr/include/glib-2.0/glib/gpoll.h \
  /usr/include/libxml++-2.6/libxml++/nodes/textnode.h \
  attacks/filterblock/PacketFilter.h \
  /usr/include/glib-2.0/glib/gdir.h \
  base/Compat.h \
  /usr/include/glib-2.0/glib/gcharset.h \
  /usr/include/glib-2.0/glib/deprecated/gallocator.h \
  variable/Variable.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/validity_error.h \
  /usr/include/glib-2.0/glib.h \
  base/ModuleAccess.h \
  /usr/include/glib-2.0/glib/deprecated/gcompletion.h \
  /usr/include/libxml++-2.6/libxml++/nodes/processinginstructionnode.h \
  /usr/include/libxml++-2.6/libxml++/nodes/commentnode.h \
  networklayer/common/InterfaceEntry.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/internal_error.h \
  /usr/include/glib-2.0/glib/ghook.h \
  /usr/include/glib-2.0/glib/garray.h \
  /usr/include/glib-2.0/glib/gversion.h \
  /usr/include/glib-2.0/glib/gatomic.h \
  /usr/include/glib-2.0/glib/gbookmarkfile.h \
  /usr/include/glib-2.0/glib/galloca.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  actions/change/Change.h \
  /usr/include/glib-2.0/glib/gkeyfile.h \
  /usr/include/libxml++-2.6/libxml++/parsers/domparser.h \
  /usr/include/libxml++-2.6/libxml++/libxml++.h \
  /usr/include/glib-2.0/glib/gregex.h \
  /usr/include/glib-2.0/glib/ghostutils.h \
  /usr/include/glib-2.0/glib/gunicode.h \
  /usr/include/glib-2.0/glib/gstring.h \
  /usr/include/libxml++-2.6/libxml++/nodes/element.h \
  /usr/include/glib-2.0/glib/gspawn.h \
  /usr/include/glib-2.0/glib/deprecated/grel.h \
  /usr/include/glib-2.0/glib/grand.h \
  /usr/include/libxml++-2.6/libxml++/validators/validator.h \
  /usr/include/glib-2.0/glib/gmappedfile.h \
  /usr/include/glib-2.0/glib/gquark.h \
  /usr/include/glib-2.0/glib/gscanner.h \
  /usr/include/glib-2.0/glib/gtimer.h \
  /usr/include/glib-2.0/glib/gbacktrace.h \
  /usr/include/glib-2.0/glib/gthread.h \
  base/NotifierConsts.h \
  /usr/lib/libxml++-2.6/include/libxml++config.h \
  /usr/include/glib-2.0/glib/gshell.h \
  /usr/include/glib-2.0/glib/gpattern.h \
  /usr/include/libxml++-2.6/libxml++/attributedeclaration.h \
  networklayer/contract/IPv6Address.h \
  /usr/include/libxml++-2.6/libxml++/nodes/cdatanode.h \
  networklayer/common/InterfaceTableAccess.h \
  /usr/include/glib-2.0/glib/gwin32.h \
  /usr/include/glib-2.0/glib/gurifuncs.h \
  /usr/include/libxml++-2.6/libxml++/noncopyable.h \
  networklayer/contract/IPvXAddress.h \
  attacks/conditionalattack/ConditionalAttack.h \
  /usr/include/libxml++-2.6/libxml++/nodes/node.h \
  actions/actionbase/ActionBase.h \
  /usr/include/glib-2.0/glib/gtimezone.h \
  /usr/include/glib-2.0/glib/gthreadpool.h \
  /usr/include/glib-2.0/glib/gtestutils.h \
  /usr/include/glibmm-2.4/glibmm/unicode.h \
  /usr/include/glib-2.0/glib/gchecksum.h
$O/mobility/common/LineSegmentsMobilityBase.o: mobility/common/LineSegmentsMobilityBase.cc \
  base/ModuleAccess.h \
  base/Compat.h \
  mobility/common/LineSegmentsMobilityBase.h \
  base/INETDefs.h \
  util/FWMath.h \
  mobility/common/MovingMobilityBase.h \
  mobility/common/MobilityBase.h \
  base/Coord.h \
  mobility/contract/IMobility.h
$O/mobility/common/MobilityAccess.o: mobility/common/MobilityAccess.cc \
  base/INETDefs.h \
  base/ModuleAccess.h \
  base/Compat.h \
  mobility/common/MobilityAccess.h \
  mobility/contract/IMobility.h \
  base/Coord.h \
  util/FWMath.h
$O/mobility/common/MobilityBase.o: mobility/common/MobilityBase.cc \
  base/ModuleAccess.h \
  base/Compat.h \
  base/INETDefs.h \
  base/Coord.h \
  util/FWMath.h \
  mobility/common/MobilityBase.h \
  mobility/contract/IMobility.h
$O/mobility/common/MovingMobilityBase.o: mobility/common/MovingMobilityBase.cc \
  mobility/common/MobilityBase.h \
  mobility/common/MovingMobilityBase.h \
  util/FWMath.h \
  base/Coord.h \
  mobility/contract/IMobility.h \
  base/ModuleAccess.h \
  base/Compat.h \
  base/INETDefs.h
$O/mobility/contract/IMobility.o: mobility/contract/IMobility.cc \
  base/Compat.h \
  base/INETDefs.h \
  util/FWMath.h \
  base/Coord.h \
  mobility/contract/IMobility.h
$O/mobility/group/MoBANCoordinator.o: mobility/group/MoBANCoordinator.cc \
  mobility/common/MobilityAccess.h \
  mobility/contract/IMobility.h \
  mobility/group/MoBANCoordinator.h \
  base/Coord.h \
  mobility/group/Posture.h \
  mobility/common/MovingMobilityBase.h \
  util/FWMath.h \
  mobility/common/MobilityBase.h \
  base/INETDefs.h \
  mobility/group/PostureTransition.h \
  mobility/common/LineSegmentsMobilityBase.h \
  base/Compat.h \
  base/ModuleAccess.h \
  mobility/group/MoBANLocal.h
$O/mobility/group/MoBANLocal.o: mobility/group/MoBANLocal.cc \
  mobility/common/MovingMobilityBase.h \
  util/FWMath.h \
  mobility/common/MobilityBase.h \
  mobility/group/Posture.h \
  base/Coord.h \
  mobility/group/MoBANCoordinator.h \
  mobility/contract/IMobility.h \
  mobility/group/MoBANLocal.h \
  base/ModuleAccess.h \
  base/Compat.h \
  mobility/group/PostureTransition.h \
  base/INETDefs.h \
  mobility/common/LineSegmentsMobilityBase.h
$O/mobility/group/Posture.o: mobility/group/Posture.cc \
  base/Compat.h \
  base/INETDefs.h \
  base/Coord.h \
  mobility/group/Posture.h \
  util/FWMath.h
$O/mobility/group/PostureTransition.o: mobility/group/PostureTransition.cc \
  util/FWMath.h \
  base/Coord.h \
  base/INETDefs.h \
  mobility/group/PostureTransition.h \
  base/Compat.h
$O/mobility/single/ANSimMobility.o: mobility/single/ANSimMobility.cc \
  mobility/contract/IMobility.h \
  base/Coord.h \
  mobility/common/MobilityBase.h \
  mobility/common/MovingMobilityBase.h \
  util/FWMath.h \
  mobility/single/ANSimMobility.h \
  mobility/common/LineSegmentsMobilityBase.h \
  base/INETDefs.h \
  base/Compat.h \
  base/ModuleAccess.h
$O/mobility/single/BonnMotionFileCache.o: mobility/single/BonnMotionFileCache.cc \
  base/INETDefs.h \
  mobility/single/BonnMotionFileCache.h \
  base/Compat.h
$O/mobility/single/BonnMotionMobility.o: mobility/single/BonnMotionMobility.cc \
  mobility/single/BonnMotionFileCache.h \
  mobility/common/LineSegmentsMobilityBase.h \
  mobility/single/BonnMotionMobility.h \
  base/INETDefs.h \
  base/Compat.h \
  base/ModuleAccess.h \
  mobility/contract/IMobility.h \
  mobility/common/MobilityBase.h \
  mobility/common/MovingMobilityBase.h \
  util/FWMath.h \
  base/Coord.h
$O/mobility/single/ChiangMobility.o: mobility/single/ChiangMobility.cc \
  base/Coord.h \
  mobility/common/MobilityBase.h \
  mobility/common/MovingMobilityBase.h \
  util/FWMath.h \
  mobility/single/ChiangMobility.h \
  mobility/contract/IMobility.h \
  base/ModuleAccess.h \
  base/Compat.h \
  mobility/common/LineSegmentsMobilityBase.h \
  base/INETDefs.h
$O/mobility/single/CircleMobility.o: mobility/single/CircleMobility.cc \
  base/Coord.h \
  mobility/single/CircleMobility.h \
  mobility/common/MobilityBase.h \
  util/FWMath.h \
  mobility/common/MovingMobilityBase.h \
  mobility/contract/IMobility.h \
  base/Compat.h \
  base/ModuleAccess.h \
  base/INETDefs.h
$O/mobility/single/ConstSpeedMobility.o: mobility/single/ConstSpeedMobility.cc \
  base/Compat.h \
  base/ModuleAccess.h \
  mobility/common/LineSegmentsMobilityBase.h \
  base/INETDefs.h \
  mobility/common/MobilityBase.h \
  util/FWMath.h \
  mobility/common/MovingMobilityBase.h \
  base/Coord.h \
  mobility/contract/IMobility.h \
  mobility/single/ConstSpeedMobility.h
$O/mobility/single/GaussMarkovMobility.o: mobility/single/GaussMarkovMobility.cc \
  base/Compat.h \
  base/ModuleAccess.h \
  mobility/common/LineSegmentsMobilityBase.h \
  base/INETDefs.h \
  mobility/single/GaussMarkovMobility.h \
  util/FWMath.h \
  mobility/common/MovingMobilityBase.h \
  mobility/common/MobilityBase.h \
  base/Coord.h \
  mobility/contract/IMobility.h
$O/mobility/single/LinearMobility.o: mobility/single/LinearMobility.cc \
  mobility/single/LinearMobility.h \
  base/ModuleAccess.h \
  base/Compat.h \
  base/INETDefs.h \
  base/Coord.h \
  mobility/common/MovingMobilityBase.h \
  util/FWMath.h \
  mobility/common/MobilityBase.h \
  mobility/contract/IMobility.h
$O/mobility/single/LinearNodeDistributionMobility.o: mobility/single/LinearNodeDistributionMobility.cc \
  mobility/single/LinearNodeDistributionMobility.h \
  base/INETDefs.h \
  base/Compat.h \
  base/ModuleAccess.h \
  mobility/contract/IMobility.h \
  mobility/static/StationaryMobility.h \
  mobility/common/MobilityBase.h \
  util/FWMath.h \
  base/Coord.h
$O/mobility/single/MassMobility.o: mobility/single/MassMobility.cc \
  base/ModuleAccess.h \
  base/Compat.h \
  mobility/single/MassMobility.h \
  mobility/common/LineSegmentsMobilityBase.h \
  base/INETDefs.h \
  mobility/common/MovingMobilityBase.h \
  util/FWMath.h \
  mobility/common/MobilityBase.h \
  base/Coord.h \
  mobility/contract/IMobility.h
$O/mobility/single/Ns2MotionMobility.o: mobility/single/Ns2MotionMobility.cc \
  base/ModuleAccess.h \
  base/Compat.h \
  mobility/common/LineSegmentsMobilityBase.h \
  base/INETDefs.h \
  base/Coord.h \
  mobility/common/MobilityBase.h \
  mobility/common/MovingMobilityBase.h \
  util/FWMath.h \
  mobility/single/Ns2MotionMobility.h \
  mobility/contract/IMobility.h
$O/mobility/single/RandomWPMobility.o: mobility/single/RandomWPMobility.cc \
  base/Coord.h \
  mobility/common/MobilityBase.h \
  mobility/common/MovingMobilityBase.h \
  util/FWMath.h \
  mobility/contract/IMobility.h \
  base/Compat.h \
  base/ModuleAccess.h \
  mobility/common/LineSegmentsMobilityBase.h \
  base/INETDefs.h \
  mobility/single/RandomWPMobility.h
$O/mobility/single/RectangleMobility.o: mobility/single/RectangleMobility.cc \
  base/INETDefs.h \
  base/Compat.h \
  base/ModuleAccess.h \
  mobility/contract/IMobility.h \
  base/Coord.h \
  mobility/single/RectangleMobility.h \
  mobility/common/MobilityBase.h \
  util/FWMath.h \
  mobility/common/MovingMobilityBase.h
$O/mobility/single/TraCIMobility.o: mobility/single/TraCIMobility.cc \
  ./world/traci/TraCIScenarioManager.h \
  base/INETDefs.h \
  base/ModuleAccess.h \
  base/Compat.h \
  mobility/contract/IMobility.h \
  ./mobility/single/TraCIMobility.h \
  mobility/common/MobilityBase.h \
  util/FWMath.h \
  base/Coord.h
$O/mobility/single/TractorMobility.o: mobility/single/TractorMobility.cc \
  base/Coord.h \
  mobility/common/MobilityBase.h \
  util/FWMath.h \
  mobility/common/MovingMobilityBase.h \
  mobility/contract/IMobility.h \
  base/ModuleAccess.h \
  base/Compat.h \
  mobility/single/TractorMobility.h \
  mobility/common/LineSegmentsMobilityBase.h \
  base/INETDefs.h
$O/mobility/single/TurtleMobility.o: mobility/single/TurtleMobility.cc \
  mobility/contract/IMobility.h \
  util/FWMath.h \
  mobility/common/MovingMobilityBase.h \
  mobility/common/MobilityBase.h \
  base/Coord.h \
  mobility/common/LineSegmentsMobilityBase.h \
  base/INETDefs.h \
  mobility/single/TurtleMobility.h \
  base/Compat.h \
  base/ModuleAccess.h
$O/mobility/static/StaticGridMobility.o: mobility/static/StaticGridMobility.cc \
  mobility/contract/IMobility.h \
  mobility/static/StationaryMobility.h \
  base/Coord.h \
  util/FWMath.h \
  mobility/common/MobilityBase.h \
  base/INETDefs.h \
  base/Compat.h \
  base/ModuleAccess.h \
  mobility/static/StaticGridMobility.h
$O/mobility/static/StationaryMobility.o: mobility/static/StationaryMobility.cc \
  mobility/contract/IMobility.h \
  mobility/static/StationaryMobility.h \
  mobility/common/MobilityBase.h \
  util/FWMath.h \
  base/Coord.h \
  base/INETDefs.h \
  base/Compat.h \
  base/ModuleAccess.h
$O/networklayer/arp/ARP.o: networklayer/arp/ARP.cc \
  linklayer/contract/MACAddress.h \
  base/LifecycleOperation.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/NodeOperations.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/arp/ARP.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/contract/IPv4Address.h \
  base/NotificationBoard.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  base/INotifiable.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/arp/IARPCache.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/arp/ARPPacket_m.h \
  networklayer/common/InterfaceEntry.h \
  status/NodeStatus.h \
  base/ModuleAccess.h \
  base/Compat.h
$O/networklayer/arp/IARPCache.o: networklayer/arp/IARPCache.cc \
  base/Compat.h \
  base/ModuleAccess.h \
  networklayer/arp/IARPCache.h \
  base/INETDefs.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h
$O/networklayer/autorouting/ipv4/FlatNetworkConfigurator.o: networklayer/autorouting/ipv4/FlatNetworkConfigurator.cc \
  networklayer/contract/IPv4Address.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/autorouting/ipv4/FlatNetworkConfigurator.h \
  base/ModuleAccess.h \
  base/Compat.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceEntry.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h
$O/networklayer/autorouting/ipv4/HostAutoConfigurator.o: networklayer/autorouting/ipv4/HostAutoConfigurator.cc \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/autorouting/ipv4/HostAutoConfigurator.h \
  base/Compat.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h \
  base/INotifiable.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4Route.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/common/IInterfaceTable.h
$O/networklayer/autorouting/ipv4/IPv4NetworkConfigurator.o: networklayer/autorouting/ipv4/IPv4NetworkConfigurator.cc \
  base/Topology.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/autorouting/ipv4/IPv4NetworkConfigurator.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv4Address.h \
  util/stlutils.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/contract/IPvXAddress.h \
  base/INotifiable.h \
  base/Compat.h \
  util/XMLUtils.h \
  base/ModuleAccess.h \
  util/PatternMatcher.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddressResolver.h
$O/networklayer/autorouting/ipv4/IPv4NodeConfigurator.o: networklayer/autorouting/ipv4/IPv4NodeConfigurator.cc \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceEntry.h \
  status/NodeStatus.h \
  util/PatternMatcher.h \
  base/ModuleAccess.h \
  base/Compat.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  base/INotifiable.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/autorouting/ipv4/IPv4NodeConfigurator.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/contract/IPv4Address.h \
  base/NotificationBoard.h \
  networklayer/autorouting/ipv4/IPv4NetworkConfigurator.h \
  linklayer/contract/MACAddress.h \
  base/LifecycleOperation.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/NodeOperations.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  base/Topology.h
$O/networklayer/autorouting/ipv6/FlatNetworkConfigurator6.o: networklayer/autorouting/ipv6/FlatNetworkConfigurator6.cc \
  base/INETDefs.h \
  networklayer/ipv6/RoutingTable6.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPv6Address.h \
  base/NotifierConsts.h \
  networklayer/contract/IPvXAddress.h \
  base/INotifiable.h \
  base/Compat.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/autorouting/ipv6/FlatNetworkConfigurator6.h \
  base/ILifecycle.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv4Address.h
$O/networklayer/bgpv4/BGPFSM.o: networklayer/bgpv4/BGPFSM.cc \
  base/INotifiable.h \
  networklayer/bgpv4/BGPMessage/BGPUpdate_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/OSPFRoutingAccess.h \
  networklayer/common/InterfaceTableAccess.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv6Address.h \
  networklayer/bgpv4/BGPSession.h \
  networklayer/ospfv2/router/LSA.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/bgpv4/BGPMessage/BGPUpdate.h \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPvXAddressResolver.h \
  util/Macho.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/bgpv4/BGPMessage/BGPKeepAlive.h \
  networklayer/ospfv2/router/OSPFArea.h \
  base/ModuleAccess.h \
  networklayer/bgpv4/BGPRouting.h \
  base/Compat.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/bgpv4/BGPMessage/BGPOpen.h \
  transport/contract/TCPSocketMap.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/bgpv4/BGPFSM.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/bgpv4/BGPMessage/BGPOpen_m.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/bgpv4/BGPCommon.h \
  networklayer/bgpv4/BGPRoutingTableEntry.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/ospfv2/OSPFRouting.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  base/ILifecycle.h \
  transport/contract/TCPCommand_m.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/bgpv4/BGPMessage/BGPKeepAlive_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  base/NotificationBoard.h
$O/networklayer/bgpv4/BGPRouting.o: networklayer/bgpv4/BGPRouting.cc \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  base/NotificationBoard.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/bgpv4/BGPMessage/BGPKeepAlive_m.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/bgpv4/BGPRoutingTableEntry.h \
  networklayer/bgpv4/BGPCommon.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/ospfv2/OSPFRouting.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  base/ILifecycle.h \
  transport/contract/TCPCommand_m.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  transport/contract/TCPSocketMap.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/bgpv4/BGPFSM.h \
  networklayer/bgpv4/BGPMessage/BGPOpen_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/router/OSPFArea.h \
  base/ModuleAccess.h \
  networklayer/bgpv4/BGPRouting.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  base/Compat.h \
  status/NodeStatus.h \
  networklayer/bgpv4/BGPMessage/BGPOpen.h \
  networklayer/bgpv4/BGPMessage/BGPUpdate.h \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPvXAddressResolver.h \
  util/Macho.h \
  networklayer/bgpv4/BGPMessage/BGPKeepAlive.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/bgpv4/BGPSession.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/bgpv4/BGPMessage/BGPUpdate_m.h \
  networklayer/ospfv2/OSPFRoutingAccess.h \
  networklayer/common/InterfaceTableAccess.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv6Address.h
$O/networklayer/bgpv4/BGPSession.o: networklayer/bgpv4/BGPSession.cc \
  networklayer/bgpv4/BGPMessage/BGPOpen.h \
  networklayer/ospfv2/router/OSPFArea.h \
  base/ModuleAccess.h \
  networklayer/bgpv4/BGPRouting.h \
  base/Compat.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/contract/IPvXAddressResolver.h \
  util/Macho.h \
  networklayer/bgpv4/BGPMessage/BGPKeepAlive.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/bgpv4/BGPMessage/BGPUpdate.h \
  transport/contract/TCPSocket.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/bgpv4/BGPSession.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/OSPFRoutingAccess.h \
  networklayer/common/InterfaceTableAccess.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv6Address.h \
  base/INotifiable.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/bgpv4/BGPMessage/BGPUpdate_m.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  base/NotificationBoard.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/bgpv4/BGPMessage/BGPKeepAlive_m.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ILifecycle.h \
  transport/contract/TCPCommand_m.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/bgpv4/BGPCommon.h \
  networklayer/bgpv4/BGPRoutingTableEntry.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/ospfv2/OSPFRouting.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  linklayer/contract/MACAddress.h \
  transport/contract/TCPSocketMap.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/bgpv4/BGPFSM.h \
  networklayer/bgpv4/BGPMessage/BGPOpen_m.h
$O/networklayer/bgpv4/BGPMessage/BGPUpdate.o: networklayer/bgpv4/BGPMessage/BGPUpdate.cc \
  networklayer/bgpv4/BGPMessage/BGPUpdate.h \
  base/Compat.h \
  networklayer/bgpv4/BGPMessage/BGPUpdate_m.h \
  base/INETDefs.h \
  networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h \
  networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.h
$O/networklayer/common/InterfaceEntry.o: networklayer/common/InterfaceEntry.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  base/INotifiable.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  base/Compat.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv6/IPv6InterfaceData.h
$O/networklayer/common/InterfaceMatcher.o: networklayer/common/InterfaceMatcher.cc \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceMatcher.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/Compat.h \
  util/PatternMatcher.h \
  base/ModuleAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h \
  util/stlutils.h \
  networklayer/contract/IPv4Address.h
$O/networklayer/common/InterfaceTable.o: networklayer/common/InterfaceTable.cc \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  base/INotifiable.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTable.h \
  status/NodeStatus.h \
  base/ModuleAccess.h \
  base/Compat.h \
  linklayer/contract/MACAddress.h \
  base/LifecycleOperation.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/NodeOperations.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  networklayer/contract/IPv4Address.h \
  base/NotificationBoard.h
$O/networklayer/contract/IPSocket.o: networklayer/contract/IPSocket.cc \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPSocket.h \
  base/Compat.h \
  base/INETDefs.h
$O/networklayer/contract/IPv4Address.o: networklayer/contract/IPv4Address.cc \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  base/INETDefs.h
$O/networklayer/contract/IPv4ControlInfo.o: networklayer/contract/IPv4ControlInfo.cc \
  base/INETDefs.h \
  base/Compat.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo.h
$O/networklayer/contract/IPv6Address.o: networklayer/contract/IPv6Address.cc \
  base/Compat.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h
$O/networklayer/contract/IPv6ControlInfo.o: networklayer/contract/IPv6ControlInfo.cc \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  base/Compat.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6Datagram.h \
  base/INETDefs.h
$O/networklayer/contract/IPvXAddress.o: networklayer/contract/IPvXAddress.cc \
  base/Compat.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv4Address.h
$O/networklayer/contract/IPvXAddressResolver.o: networklayer/contract/IPvXAddressResolver.cc \
  base/Compat.h \
  base/ModuleAccess.h \
  util/PatternMatcher.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv6/RoutingTable6.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  base/INotifiable.h \
  networklayer/contract/IPv6Address.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/autorouting/ipv4/IPv4NetworkConfigurator.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4Route.h \
  base/Topology.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  linklayer/contract/MACAddress.h
$O/networklayer/diffserv/BehaviorAggregateClassifier.o: networklayer/diffserv/BehaviorAggregateClassifier.cc \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  transport/udp/UDPPacket.h \
  base/Compat.h \
  transport/udp/UDPPacket_m.h \
  base/ByteArray.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/diffserv/DiffservUtil.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  base/ByteArray_m.h \
  networklayer/diffserv/BehaviorAggregateClassifier.h \
  transport/tcp_common/TCPSegment.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv6/IPv6Datagram_m.h
$O/networklayer/diffserv/DSCPMarker.o: networklayer/diffserv/DSCPMarker.cc \
  base/INETDefs.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPv6Address.h \
  networklayer/diffserv/DiffservUtil.h \
  networklayer/diffserv/DSCPMarker.h \
  base/Compat.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/diffserv/DSCP_m.h
$O/networklayer/diffserv/DiffservUtil.o: networklayer/diffserv/DiffservUtil.cc \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  util/opp_utils.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPv6Address.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/diffserv/DiffservUtil.h \
  networklayer/contract/IPvXAddress.h \
  base/Compat.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/diffserv/DSCP_m.h
$O/networklayer/diffserv/MultiFieldClassifier.o: networklayer/diffserv/MultiFieldClassifier.cc \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  base/ByteArray_m.h \
  networklayer/diffserv/MultiFieldClassifier.h \
  transport/tcp_common/TCPSegment.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPv4Address.h \
  networklayer/diffserv/DiffservUtil.h \
  transport/udp/UDPPacket_m.h \
  networklayer/contract/IPvXAddress.h \
  base/ByteArray.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  transport/udp/UDPPacket.h \
  base/Compat.h
$O/networklayer/diffserv/SingleRateThreeColorMeter.o: networklayer/diffserv/SingleRateThreeColorMeter.cc \
  networklayer/diffserv/SingleRateThreeColorMeter.h \
  base/INETDefs.h \
  networklayer/diffserv/DiffservUtil.h \
  base/Compat.h
$O/networklayer/diffserv/TokenBucketMeter.o: networklayer/diffserv/TokenBucketMeter.cc \
  base/INETDefs.h \
  networklayer/diffserv/DiffservUtil.h \
  base/Compat.h \
  networklayer/diffserv/TokenBucketMeter.h
$O/networklayer/diffserv/TwoRateThreeColorMeter.o: networklayer/diffserv/TwoRateThreeColorMeter.cc \
  base/Compat.h \
  base/INETDefs.h \
  networklayer/diffserv/DiffservUtil.h \
  networklayer/diffserv/TwoRateThreeColorMeter.h
$O/networklayer/icmpv6/ICMPv6.o: networklayer/icmpv6/ICMPv6.cc \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  base/Compat.h \
  status/NodeStatus.h \
  networklayer/icmpv6/ICMPv6.h \
  base/INotifiable.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6Datagram.h \
  base/NotifierConsts.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  applications/pingapp/PingPayload_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPv4Address.h \
  base/NotificationBoard.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  base/ILifecycle.h
$O/networklayer/icmpv6/IPv6NeighbourCache.o: networklayer/icmpv6/IPv6NeighbourCache.cc \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  networklayer/icmpv6/IPv6NeighbourCache.h \
  networklayer/contract/IPv6Address.h \
  base/Compat.h
$O/networklayer/icmpv6/IPv6NeighbourDiscovery.o: networklayer/icmpv6/IPv6NeighbourDiscovery.cc \
  networklayer/contract/IPv4Address.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/xmipv6/MobilityHeader_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/xmipv6/MobilityHeader.h \
  networklayer/xmipv6/xMIPv6.h \
  networklayer/ipv6tunneling/IPv6Tunneling.h \
  networklayer/xmipv6/xMIPv6Access.h \
  base/ILifecycle.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/xmipv6/BindingUpdateList.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/icmpv6/IPv6NeighbourDiscovery.h \
  status/NodeStatus.h \
  networklayer/icmpv6/ICMPv6.h \
  base/ModuleAccess.h \
  base/Compat.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv6/IPv6ExtensionHeaders.h \
  networklayer/icmpv6/IPv6NDMessage_m.h \
  networklayer/ipv6/RoutingTable6Access.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv6/RoutingTable6.h \
  base/INETDefs.h \
  networklayer/icmpv6/IPv6NeighbourCache.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/icmpv6/ICMPv6Access.h \
  base/NotifierConsts.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPv6Address.h \
  base/INotifiable.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/internetcloud/CloudDelayerBase.o: networklayer/internetcloud/CloudDelayerBase.cc \
  linklayer/contract/MACAddress.h \
  base/ReassemblyBuffer.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ILifecycle.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/IPv4Route.h \
  base/AbstractQueue.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/QueueBase.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4FragBuf.h \
  base/ProtocolMap.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/internetcloud/CloudDelayerBase.h \
  networklayer/arp/IARPCache.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/INetfilter.h \
  networklayer/ipv4/ICMPMessage.h \
  base/Compat.h \
  base/ModuleAccess.h
$O/networklayer/internetcloud/MatrixCloudDelayer.o: networklayer/internetcloud/MatrixCloudDelayer.cc \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  networklayer/internetcloud/CloudDelayerBase.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/INetfilter.h \
  base/Compat.h \
  util/PatternMatcher.h \
  networklayer/internetcloud/MatrixCloudDelayer.h \
  base/ModuleAccess.h \
  util/XMLUtils.h \
  networklayer/common/InterfaceEntry.h
$O/networklayer/ipv4/ErrorHandling.o: networklayer/ipv4/ErrorHandling.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INETDefs.h \
  networklayer/ipv4/ErrorHandling.h
$O/networklayer/ipv4/ICMP.o: networklayer/ipv4/ICMP.cc \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPSocket.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/ICMP.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  applications/pingapp/PingPayload_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  networklayer/contract/IPvXAddress.h \
  base/ModuleAccess.h \
  base/Compat.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/common/InterfaceEntry.h
$O/networklayer/ipv4/IGMPv2.o: networklayer/ipv4/IGMPv2.cc \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4Route.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPSocket.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/IGMPMessage_m.h \
  base/Compat.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IGMPv2.h \
  networklayer/contract/IPvXAddress.h \
  base/INotifiable.h \
  networklayer/contract/IPv6Address.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h
$O/networklayer/ipv4/IPv4.o: networklayer/ipv4/IPv4.cc \
  networklayer/ipv4/RoutingTableAccess.h \
  base/AbstractQueue.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Route.h \
  base/ProtocolMap.h \
  networklayer/ipv4/ICMP.h \
  base/NotificationBoard.h \
  base/QueueBase.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/NodeOperations.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPSocket.h \
  linklayer/contract/MACAddress.h \
  base/ReassemblyBuffer.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ILifecycle.h \
  networklayer/common/InterfaceEntry.h \
  base/Compat.h \
  networklayer/ipv4/ICMPMessage.h \
  base/ModuleAccess.h \
  networklayer/common/INetfilter.h \
  status/NodeStatus.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/INotifiable.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/arp/ARPPacket_m.h \
  networklayer/arp/IARPCache.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h
$O/networklayer/ipv4/IPv4Datagram.o: networklayer/ipv4/IPv4Datagram.cc \
  base/INETDefs.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4Address.h
$O/networklayer/ipv4/IPv4FragBuf.o: networklayer/ipv4/IPv4FragBuf.cc \
  base/Compat.h \
  networklayer/ipv4/ICMPMessage.h \
  base/ModuleAccess.h \
  base/INETDefs.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ReassemblyBuffer.h
$O/networklayer/ipv4/IPv4InterfaceData.o: networklayer/ipv4/IPv4InterfaceData.cc \
  base/INotifiable.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  base/Compat.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv4Address.h \
  base/NotificationBoard.h
$O/networklayer/ipv4/IPv4Route.o: networklayer/ipv4/IPv4Route.cc \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/routing/aodv/AODVRouteData.h \
  networklayer/ipv4/IPv4Route.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv4Address.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/common/InterfaceEntry.h \
  base/Compat.h \
  base/ModuleAccess.h
$O/networklayer/ipv4/NetworkInfo.o: networklayer/ipv4/NetworkInfo.cc \
  base/Compat.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv4/NetworkInfo.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  base/IScriptable.h \
  networklayer/contract/IPv6Address.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4Route.h \
  linklayer/contract/MACAddress.h
$O/networklayer/ipv4/RoutingTable.o: networklayer/ipv4/RoutingTable.cc \
  status/NodeStatus.h \
  base/Compat.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/RoutingTableParser.h \
  util/opp_utils.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPvXAddress.h \
  base/INotifiable.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4Route.h \
  base/ILifecycle.h \
  networklayer/ipv4/RoutingTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/NodeOperations.h \
  networklayer/common/IInterfaceTable.h \
  base/LifecycleOperation.h
$O/networklayer/ipv4/RoutingTableParser.o: networklayer/ipv4/RoutingTableParser.cc \
  base/ILifecycle.h \
  networklayer/ipv4/RoutingTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/common/IInterfaceTable.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/ipv4/RoutingTableParser.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h \
  base/INotifiable.h \
  base/Compat.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h
$O/networklayer/ipv4/RoutingTableRecorder.o: networklayer/ipv4/RoutingTableRecorder.cc \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/RoutingTableRecorder.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv4Address.h \
  base/NotificationBoard.h \
  base/INotifiable.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv6Address.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  base/Compat.h
$O/networklayer/ipv6/IPv6.o: networklayer/ipv6/IPv6.cc \
  base/ILifecycle.h \
  networklayer/ipv6/IPv6.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/contract/IPSocket.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/ipv6tunneling/IPv6TunnelingAccess.h \
  base/ReassemblyBuffer.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/common/IInterfaceTable.h \
  base/NotificationBoard.h \
  base/QueueBase.h \
  networklayer/contract/IPv4Address.h \
  networklayer/xmipv6/MobilityHeader_m.h \
  base/ProtocolMap.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/xmipv6/MobilityHeader.h \
  base/AbstractQueue.h \
  networklayer/ipv6tunneling/IPv6Tunneling.h \
  networklayer/icmpv6/IPv6NeighbourCache.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv6/RoutingTable6.h \
  base/INETDefs.h \
  networklayer/ipv6/RoutingTable6Access.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6Datagram.h \
  base/NotifierConsts.h \
  networklayer/icmpv6/IPv6NeighbourDiscoveryAccess.h \
  networklayer/icmpv6/ICMPv6Access.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/INotifiable.h \
  networklayer/icmpv6/ICMPv6.h \
  status/NodeStatus.h \
  networklayer/icmpv6/IPv6NeighbourDiscovery.h \
  base/Compat.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  networklayer/icmpv6/IPv6NDMessage_m.h \
  networklayer/ipv6/IPv6FragBuf.h \
  networklayer/ipv6/IPv6ExtensionHeaders.h
$O/networklayer/ipv6/IPv6Datagram.o: networklayer/ipv6/IPv6Datagram.cc \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6Datagram.h \
  base/Compat.h \
  networklayer/ipv6/IPv6ExtensionHeaders.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h
$O/networklayer/ipv6/IPv6ErrorHandling.o: networklayer/ipv6/IPv6ErrorHandling.cc \
  base/INETDefs.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPv6Address.h \
  base/Compat.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/ipv6/IPv6ErrorHandling.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPProtocolId_m.h
$O/networklayer/ipv6/IPv6ExtensionHeaders.o: networklayer/ipv6/IPv6ExtensionHeaders.cc \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  base/Compat.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  networklayer/ipv6/IPv6ExtensionHeaders.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6Datagram.h
$O/networklayer/ipv6/IPv6FragBuf.o: networklayer/ipv6/IPv6FragBuf.cc \
  networklayer/ipv6/IPv6FragBuf.h \
  networklayer/ipv6/IPv6ExtensionHeaders.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  base/Compat.h \
  networklayer/icmpv6/ICMPv6.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6Datagram.h \
  base/INETDefs.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  base/ReassemblyBuffer.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  base/ILifecycle.h
$O/networklayer/ipv6/IPv6InterfaceData.o: networklayer/ipv6/IPv6InterfaceData.cc \
  linklayer/contract/MACAddress.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv6Address.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv6/RoutingTable6.h \
  networklayer/ipv6/RoutingTable6Access.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  base/Compat.h \
  base/ModuleAccess.h
$O/networklayer/ipv6/RoutingTable6.o: networklayer/ipv6/RoutingTable6.cc \
  base/LifecycleOperation.h \
  networklayer/common/IInterfaceTable.h \
  base/NodeOperations.h \
  networklayer/ipv6tunneling/IPv6TunnelingAccess.h \
  linklayer/contract/MACAddress.h \
  base/ILifecycle.h \
  networklayer/ipv6tunneling/IPv6Tunneling.h \
  networklayer/contract/IPv4Address.h \
  base/NotificationBoard.h \
  base/INotifiable.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv6Address.h \
  base/NotifierConsts.h \
  util/opp_utils.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv6/RoutingTable6.h \
  base/INETDefs.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  base/Compat.h
$O/networklayer/ipv6tunneling/IPv6Tunneling.o: networklayer/ipv6tunneling/IPv6Tunneling.cc \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPvXAddress.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv6/RoutingTable6.h \
  base/INETDefs.h \
  networklayer/ipv6/RoutingTable6Access.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/ipv6/IPv6ExtensionHeaders.h \
  status/NodeStatus.h \
  base/Compat.h \
  base/ModuleAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/xmipv6/BindingUpdateList.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/xmipv6/MobilityHeader.h \
  networklayer/xmipv6/xMIPv6Access.h \
  networklayer/xmipv6/xMIPv6.h \
  networklayer/ipv6tunneling/IPv6Tunneling.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv4Address.h \
  networklayer/xmipv6/MobilityHeader_m.h \
  networklayer/contract/IPv6ControlInfo.h
$O/networklayer/ldp/LDP.o: networklayer/ldp/LDP.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/ldp/LDP.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/common/InterfaceTableAccess.h \
  transport/udp/UDPPacket_m.h \
  networklayer/contract/IPvXAddress.h \
  base/ByteArray.h \
  base/INotifiable.h \
  networklayer/ted/TED.h \
  networklayer/mpls/LIBTable.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/mpls/IClassifier.h \
  networklayer/common/InterfaceEntry.h \
  transport/contract/TCPSocket.h \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/ted/TED_m.h \
  networklayer/ted/TEDAccess.h \
  status/NodeStatus.h \
  base/Compat.h \
  networklayer/rsvp_te/IntServ_m.h \
  base/ModuleAccess.h \
  transport/udp/UDPPacket.h \
  linklayer/contract/MACAddress.h \
  networklayer/ldp/LDPPacket_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/NodeOperations.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  transport/contract/TCPSocketMap.h \
  base/LifecycleOperation.h \
  transport/contract/UDPSocket.h \
  transport/contract/UDPControlInfo_m.h \
  transport/contract/TCPCommand_m.h \
  base/ILifecycle.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/RoutingTableAccess.h \
  transport/tcp_common/TCPSegment.h \
  networklayer/mpls/ConstType.h \
  base/ByteArray_m.h \
  networklayer/mpls/LIBTableAccess.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv4Address.h \
  networklayer/rsvp_te/IntServ.h
$O/networklayer/manetrouting/aodv-uu/aodv_msg_struct.o: networklayer/manetrouting/aodv-uu/aodv_msg_struct.cc \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMPMessage.h \
  base/Compat.h \
  transport/udp/UDPPacket.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  transport/udp/UDPPacket_m.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/IPv4Route.h \
  base/ProtocolMap.h \
  networklayer/contract/IPv6ControlInfo.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ILifecycle.h
$O/networklayer/manetrouting/aodv-uu/aodv_uu_omnet.o: networklayer/manetrouting/aodv-uu/aodv_uu_omnet.cc \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  base/ReassemblyBuffer.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  base/ILifecycle.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  base/AbstractQueue.h \
  networklayer/ipv4/RoutingTableAccess.h \
  util/FWMath.h \
  base/NotificationBoard.h \
  base/Coord.h \
  base/QueueBase.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
  transport/udp/UDPPacket_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/INotifiable.h \
  networklayer/arp/IARPCache.h \
  base/INETDefs.h \
  networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/common/InterfaceToken.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
  networklayer/common/INetfilter.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
  base/Compat.h \
  transport/udp/UDPPacket.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  base/ModuleAccess.h
$O/networklayer/manetrouting/aodv-uu/packet_queue_omnet.o: networklayer/manetrouting/aodv-uu/packet_queue_omnet.cc \
  networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/INETDefs.h \
  networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
  networklayer/arp/IARPCache.h \
  networklayer/contract/IPv6Address.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/common/INetfilter.h \
  base/Compat.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
  networklayer/ipv4/ICMPMessage.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ILifecycle.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  base/QueueBase.h \
  base/NotificationBoard.h \
  base/Coord.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/AbstractQueue.h \
  util/FWMath.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.o: networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.cc \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  base/Compat.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  networklayer/contract/IPv6Address.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/common/InterfaceToken.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/arp/IARPCache.h \
  base/INETDefs.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/AbstractQueue.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  base/Coord.h \
  base/NotificationBoard.h \
  base/QueueBase.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  base/ILifecycle.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.o: networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.cc \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/AbstractQueue.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  base/Coord.h \
  base/NotificationBoard.h \
  base/QueueBase.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  base/ILifecycle.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  base/Compat.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/common/InterfaceToken.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/arp/IARPCache.h \
  base/INETDefs.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.o: networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.cc \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  base/QueueBase.h \
  base/NotificationBoard.h \
  base/Coord.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/contract/IPv4Address.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  networklayer/arp/ARP.h \
  base/AbstractQueue.h \
  networklayer/ipv4/RoutingTableAccess.h \
  util/FWMath.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ILifecycle.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  linklayer/contract/MACAddress.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  base/Compat.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  base/ModuleAccess.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/INETDefs.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetAddress.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.o: networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.cc \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/INETDefs.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  base/Compat.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ILifecycle.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  base/QueueBase.h \
  base/NotificationBoard.h \
  base/Coord.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/AbstractQueue.h \
  util/FWMath.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.o: networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.cc \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/ipv4/ICMP.h \
  base/QueueBase.h \
  base/NotificationBoard.h \
  base/Coord.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPProtocolId_m.h \
  util/FWMath.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  base/ILifecycle.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/common/INetfilter.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
  base/Compat.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/arp/IARPCache.h \
  base/INETDefs.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.o: networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.cc \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/AbstractQueue.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  base/QueueBase.h \
  base/Coord.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ILifecycle.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  base/Compat.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/arp/IARPCache.h \
  base/INETDefs.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.o: networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.cc \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/contract/IPv6Address.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/arp/IARPCache.h \
  base/INETDefs.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  base/Compat.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/IPv4.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ILifecycle.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/AbstractQueue.h \
  util/FWMath.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/nl.h \
  networklayer/ipv4/IPv4Route.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  base/QueueBase.h \
  base/NotificationBoard.h \
  base/Coord.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.o: networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.cc \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4FragBuf.h \
  base/QueueBase.h \
  base/Coord.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  base/ProtocolMap.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/ipv4/IPv4Datagram.h \
  util/FWMath.h \
  base/AbstractQueue.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  base/ILifecycle.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/ipv4/ICMPMessage.h \
  base/Compat.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/arp/IARPCache.h \
  base/INETDefs.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/list.o: networklayer/manetrouting/aodv-uu/aodv-uu/list.cc \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/locality.o: networklayer/manetrouting/aodv-uu/aodv-uu/locality.cc \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/INETDefs.h \
  networklayer/arp/IARPCache.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPv6Address.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
  base/Compat.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  base/ILifecycle.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ReassemblyBuffer.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  base/ProtocolMap.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/ipv4/ICMP.h \
  base/QueueBase.h \
  base/Coord.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  util/FWMath.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/AbstractQueue.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPProtocolId_m.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.o: networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.cc \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  base/Compat.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/arp/IARPCache.h \
  base/INETDefs.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  base/QueueBase.h \
  base/NotificationBoard.h \
  base/Coord.h \
  util/FWMath.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/AbstractQueue.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/nl.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
  base/ILifecycle.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/IPv4.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.o: networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.cc \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/common/InterfaceToken.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/INETDefs.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  base/Compat.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  base/ILifecycle.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  base/ReassemblyBuffer.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  base/NotificationBoard.h \
  base/Coord.h \
  base/QueueBase.h \
  util/FWMath.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/AbstractQueue.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/compatibility.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.o: networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.cc \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/INETDefs.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  base/ModuleAccess.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  base/Compat.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  base/ILifecycle.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  base/QueueBase.h \
  base/NotificationBoard.h \
  base/Coord.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  networklayer/arp/ARP.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  util/FWMath.h \
  base/AbstractQueue.h \
  networklayer/ipv4/RoutingTableAccess.h
$O/networklayer/manetrouting/base/ManetAddress.o: networklayer/manetrouting/base/ManetAddress.cc \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  base/Compat.h
$O/networklayer/manetrouting/base/ManetNetfilterHook.o: networklayer/manetrouting/base/ManetNetfilterHook.cc \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/AbstractQueue.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4FragBuf.h \
  base/QueueBase.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  base/ProtocolMap.h \
  networklayer/common/InterfaceTableAccess.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/arp/IARPCache.h \
  networklayer/common/InterfaceEntry.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/common/INetfilter.h \
  base/ModuleAccess.h \
  networklayer/ipv4/ICMPMessage.h \
  base/Compat.h
$O/networklayer/manetrouting/base/ManetRoutingBase.o: networklayer/manetrouting/base/ManetRoutingBase.cc \
  base/PassiveQueueBase.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/common/InterfaceEntry.h \
  transport/udp/UDPPacket.h \
  base/ModuleAccess.h \
  networklayer/ipv4/ICMPMessage.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAP.h \
  base/Compat.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/base/ControlInfoBreakLink_m.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPvXAddress.h \
  transport/udp/UDPPacket_m.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/arp/IARPCache.h \
  base/INETDefs.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  util/FWMath.h \
  base/AbstractQueue.h \
  base/IPassiveQueue.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/arp/ARP.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPv6ControlInfo.h \
  base/ProtocolMap.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/contract/IPv4Address.h \
  base/QueueBase.h \
  base/Coord.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMP.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  mobility/contract/IMobility.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/common/IInterfaceTable.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPSocket.h \
  base/ILifecycle.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ipv4/ICMPAccess.h
$O/networklayer/manetrouting/batman/BatmanMain.o: networklayer/manetrouting/batman/BatmanMain.cc \
  networklayer/ipv4/ICMP.h \
  base/NotificationBoard.h \
  base/Coord.h \
  base/QueueBase.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/batman/BatmanMsg_m.h \
  base/ProtocolMap.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/AbstractQueue.h \
  util/FWMath.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ILifecycle.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  base/ReassemblyBuffer.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/common/INetfilter.h \
  base/Compat.h \
  networklayer/ipv4/ICMPMessage.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/manetrouting/batman/BatmanMain.h \
  networklayer/arp/IARPCache.h \
  base/INETDefs.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/batman/BatmanMsg.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/batman/batmand/batman.h \
  transport/udp/UDPPacket_m.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetAddress.h
$O/networklayer/manetrouting/batman/batmand/batman.o: networklayer/manetrouting/batman/batmand/batman.cc \
  base/ILifecycle.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/IInterfaceTable.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  linklayer/contract/MACAddress.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/batman/BatmanMsg_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4FragBuf.h \
  base/QueueBase.h \
  base/NotificationBoard.h \
  base/Coord.h \
  networklayer/ipv4/ICMP.h \
  util/FWMath.h \
  base/AbstractQueue.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/arp/ARP.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/batman/BatmanMsg.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/INETDefs.h \
  networklayer/arp/IARPCache.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/batman/batmand/batman.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  base/ModuleAccess.h \
  networklayer/ipv4/ICMPMessage.h \
  base/Compat.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/batman/BatmanMain.h \
  networklayer/common/InterfaceEntry.h
$O/networklayer/manetrouting/batman/batmand/bitarray.o: networklayer/manetrouting/batman/batmand/bitarray.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/ipv4/ICMP.h \
  base/Coord.h \
  base/NotificationBoard.h \
  base/QueueBase.h \
  networklayer/manetrouting/batman/BatmanMsg_m.h \
  base/ProtocolMap.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPProtocolId_m.h \
  util/FWMath.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/AbstractQueue.h \
  base/ILifecycle.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ReassemblyBuffer.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/common/INetfilter.h \
  base/ModuleAccess.h \
  base/Compat.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/batman/BatmanMain.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/batman/BatmanMsg.h \
  base/INETDefs.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/batman/batmand/batman.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/manetrouting/batman/batmand/hna.o: networklayer/manetrouting/batman/batmand/hna.cc \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  linklayer/contract/MACAddress.h \
  base/ReassemblyBuffer.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ILifecycle.h \
  base/AbstractQueue.h \
  networklayer/ipv4/RoutingTableAccess.h \
  util/FWMath.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/batman/BatmanMsg_m.h \
  base/ProtocolMap.h \
  base/Coord.h \
  base/NotificationBoard.h \
  base/QueueBase.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/batman/batmand/batman.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/batman/BatmanMsg.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/batman/BatmanMain.h \
  networklayer/ipv4/ICMPMessage.h \
  base/Compat.h \
  base/ModuleAccess.h \
  networklayer/common/INetfilter.h
$O/networklayer/manetrouting/batman/batmand/originator.o: networklayer/manetrouting/batman/batmand/originator.cc \
  base/ProtocolMap.h \
  networklayer/manetrouting/batman/BatmanMsg_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/ipv4/ICMP.h \
  base/QueueBase.h \
  base/NotificationBoard.h \
  base/Coord.h \
  util/FWMath.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/AbstractQueue.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/compatibility.h \
  base/ILifecycle.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/IPv4.h \
  base/ReassemblyBuffer.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  base/ModuleAccess.h \
  base/Compat.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/batman/BatmanMain.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/batman/BatmanMsg.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/INETDefs.h \
  networklayer/arp/IARPCache.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv6Address.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/batman/batmand/batman.h
$O/networklayer/manetrouting/batman/batmand/os.o: networklayer/manetrouting/batman/batmand/os.cc \
  base/INETDefs.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/batman/BatmanMsg.h \
  networklayer/contract/IPvXAddress.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/batman/batmand/batman.h \
  base/NotifierConsts.h \
  base/Compat.h \
  networklayer/ipv4/ICMPMessage.h \
  base/ModuleAccess.h \
  networklayer/common/INetfilter.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/batman/BatmanMain.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/batman/BatmanMsg_m.h \
  base/ProtocolMap.h \
  networklayer/ipv4/ICMP.h \
  base/NotificationBoard.h \
  base/Coord.h \
  base/QueueBase.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/AbstractQueue.h \
  util/FWMath.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/IPv4Route.h
$O/networklayer/manetrouting/batman/batmand/ring_buffer.o: networklayer/manetrouting/batman/batmand/ring_buffer.cc \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/batman/BatmanMain.h \
  base/Compat.h \
  networklayer/ipv4/ICMPMessage.h \
  base/ModuleAccess.h \
  networklayer/common/INetfilter.h \
  networklayer/contract/IPvXAddress.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/batman/batmand/batman.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/arp/IARPCache.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/batman/BatmanMsg.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/AbstractQueue.h \
  util/FWMath.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/batman/BatmanMsg_m.h \
  base/ProtocolMap.h \
  networklayer/ipv4/ICMP.h \
  base/QueueBase.h \
  base/NotificationBoard.h \
  base/Coord.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  base/ReassemblyBuffer.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ILifecycle.h
$O/networklayer/manetrouting/batman/batmand/schedule.o: networklayer/manetrouting/batman/batmand/schedule.cc \
  base/AbstractQueue.h \
  networklayer/ipv4/RoutingTableAccess.h \
  util/FWMath.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/arp/ARP.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/batman/BatmanMsg_m.h \
  base/Coord.h \
  base/NotificationBoard.h \
  base/QueueBase.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  linklayer/contract/MACAddress.h \
  base/ReassemblyBuffer.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ILifecycle.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/batman/BatmanMain.h \
  networklayer/ipv4/ICMPMessage.h \
  base/Compat.h \
  base/ModuleAccess.h \
  networklayer/common/INetfilter.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/batman/batmand/batman.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/batman/BatmanMsg.h
$O/networklayer/manetrouting/dsdv/DSDV_2.o: networklayer/manetrouting/dsdv/DSDV_2.cc \
  base/NotificationBoard.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ILifecycle.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/manetrouting/dsdv/DSDVhello_m.h \
  networklayer/contract/IPSocket.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dsdv/DSDV_2.h \
  networklayer/contract/IPv6Address.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPvXAddress.h \
  base/INotifiable.h
$O/networklayer/manetrouting/dsr/dsr-pkt_omnet.o: networklayer/manetrouting/dsr/dsr-pkt_omnet.cc \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  linklayer/contract/MACAddress.h \
  base/Compat.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h
$O/networklayer/manetrouting/dsr/dsr-uu-omnetpp.o: networklayer/manetrouting/dsr/dsr-uu-omnetpp.cc \
  networklayer/common/INetfilter.h \
  networklayer/ipv4/ICMPMessage.h \
  base/Compat.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/common/InterfaceToken.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/INotifiable.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv4Address.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/contract/IPSocket.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.o: networklayer/manetrouting/dsr/dsr-uu/dsr-ack.cc \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv4Address.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-dev.h \
  networklayer/common/INetfilter.h \
  networklayer/ipv4/ICMPMessage.h \
  base/Compat.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-io.o: networklayer/manetrouting/dsr/dsr-uu/dsr-io.cc \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-dev.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rtc.h \
  base/ModuleAccess.h \
  base/Compat.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/INotifiable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  base/ProtocolMap.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.o: networklayer/manetrouting/dsr/dsr-uu/dsr-opt.cc \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/ipv4/ICMP.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/INotifiable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/common/INetfilter.h \
  base/Compat.h \
  networklayer/ipv4/ICMPMessage.h \
  base/ModuleAccess.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.o: networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.cc \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/common/INetfilter.h \
  base/Compat.h \
  networklayer/ipv4/ICMPMessage.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  util/headerserializers/ipv4/headers/ip.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/contract/IPv6Address.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.o: networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.cc \
  networklayer/manetrouting/dsr/dsr-uu/dsr-dev.h \
  networklayer/common/INetfilter.h \
  networklayer/ipv4/ICMPMessage.h \
  base/Compat.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  util/headerserializers/ipv4/headers/ip.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/INotifiable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv4Address.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.o: networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.cc \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-dev.h \
  base/Compat.h \
  networklayer/ipv4/ICMPMessage.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  util/headerserializers/ipv4/headers/ip.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPvXAddress.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.o: networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.cc \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  base/Compat.h \
  networklayer/ipv4/ICMPMessage.h \
  base/ModuleAccess.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-dev.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/INotifiable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/contract/IPv6Address.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/contract/IPv4ControlInfo_m.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.o: networklayer/manetrouting/dsr/dsr-uu/dsr-srt.cc \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/common/InterfaceEntry.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/common/INetfilter.h \
  base/ModuleAccess.h \
  networklayer/ipv4/ICMPMessage.h \
  base/Compat.h \
  networklayer/common/InterfaceTableAccess.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h
$O/networklayer/manetrouting/dsr/dsr-uu/link-cache.o: networklayer/manetrouting/dsr/dsr-uu/link-cache.cc \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/contract/IPv4Address.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/ipv4/ICMPMessage.h \
  base/Compat.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rtc.h \
  networklayer/common/INetfilter.h
$O/networklayer/manetrouting/dsr/dsr-uu/maint-buf.o: networklayer/manetrouting/dsr/dsr-uu/maint-buf.cc \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/ICMP.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  base/ProtocolMap.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/INotifiable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-dev.h \
  base/ModuleAccess.h \
  base/Compat.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/manetrouting/dsr/dsr-uu/neigh.o: networklayer/manetrouting/dsr/dsr-uu/neigh.cc \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/ipv4/ICMPMessage.h \
  base/Compat.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/contract/IPv4Address.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  networklayer/ipv4/ICMP.h
$O/networklayer/manetrouting/dsr/dsr-uu/path-cache.o: networklayer/manetrouting/dsr/dsr-uu/path-cache.cc \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  base/ModuleAccess.h \
  base/Compat.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rtc.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  base/ProtocolMap.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/contract/IPv4ControlInfo_m.h
$O/networklayer/manetrouting/dsr/dsr-uu/send-buf.o: networklayer/manetrouting/dsr/dsr-uu/send-buf.cc \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  base/ProtocolMap.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/INetfilter.h \
  base/ModuleAccess.h \
  base/Compat.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h
$O/networklayer/manetrouting/dymo/dymo_msg_struct.o: networklayer/manetrouting/dymo/dymo_msg_struct.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/INETDefs.h \
  base/Compat.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymo_msg_struct.h \
  networklayer/contract/IPv4Address.h
$O/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.o: networklayer/manetrouting/dymo/dymo_packet_queue_omnet.cc \
  base/ProtocolMap.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/ICMP.h \
  base/QueueBase.h \
  base/NotificationBoard.h \
  base/Coord.h \
  util/FWMath.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymo_msg_struct.h \
  base/AbstractQueue.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  base/ILifecycle.h \
  networklayer/manetrouting/dymo/dymoum/blacklist.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
  networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/IPv4.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  base/ModuleAccess.h \
  base/Compat.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/arp/IARPCache.h \
  base/INETDefs.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/INotifiable.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
  networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h
$O/networklayer/manetrouting/dymo/dymo_um_omnet.o: networklayer/manetrouting/dymo/dymo_um_omnet.cc \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/INETDefs.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/INotifiable.h \
  networklayer/contract/IPvXAddress.h \
  transport/udp/UDPPacket_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
  networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  base/ModuleAccess.h \
  transport/udp/UDPPacket.h \
  base/Compat.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  base/ILifecycle.h \
  networklayer/manetrouting/dymo/dymoum/blacklist.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/IPv4.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/contract/IPv6ControlInfo.h \
  base/ProtocolMap.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/ICMP.h \
  base/QueueBase.h \
  base/Coord.h \
  base/NotificationBoard.h \
  util/FWMath.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/dymo/dymo_msg_struct.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv4ControlInfo.h
$O/networklayer/manetrouting/dymo/dymoum/blacklist.o: networklayer/manetrouting/dymo/dymoum/blacklist.cc \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  base/Compat.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/INotifiable.h \
  base/INETDefs.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/common/InterfaceToken.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  base/AbstractQueue.h \
  networklayer/ipv4/RoutingTableAccess.h \
  util/FWMath.h \
  base/NotificationBoard.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  base/QueueBase.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  base/ReassemblyBuffer.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/manetrouting/dymo/dymoum/blacklist.h \
  base/ILifecycle.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h
$O/networklayer/manetrouting/dymo/dymoum/debug_dymo.o: networklayer/manetrouting/dymo/dymoum/debug_dymo.cc \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  base/INETDefs.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/common/InterfaceToken.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  base/ModuleAccess.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  base/Compat.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/ILifecycle.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  util/FWMath.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  base/AbstractQueue.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  base/NotificationBoard.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  base/QueueBase.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  base/ProtocolMap.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_generic.o: networklayer/manetrouting/dymo/dymoum/dymo_generic.cc \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  base/ModuleAccess.h \
  networklayer/ipv4/ICMPMessage.h \
  base/Compat.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv6Address.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/INETDefs.h \
  networklayer/arp/IARPCache.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  util/FWMath.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  base/AbstractQueue.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  base/QueueBase.h \
  base/NotificationBoard.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
  base/ILifecycle.h \
  networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_hello.o: networklayer/manetrouting/dymo/dymoum/dymo_hello.cc \
  networklayer/arp/ARP.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPProtocolId_m.h \
  util/FWMath.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  base/AbstractQueue.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/ipv4/ICMP.h \
  base/QueueBase.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  base/ProtocolMap.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ILifecycle.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/common/INetfilter.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  base/Compat.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/arp/IARPCache.h \
  base/INETDefs.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_nb.o: networklayer/manetrouting/dymo/dymoum/dymo_nb.cc \
  base/NotificationBoard.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  base/QueueBase.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  base/AbstractQueue.h \
  networklayer/ipv4/RoutingTableAccess.h \
  util/FWMath.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ILifecycle.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  base/ReassemblyBuffer.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  base/Compat.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  base/INETDefs.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/common/InterfaceToken.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetAddress.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_re.o: networklayer/manetrouting/dymo/dymoum/dymo_re.cc \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/common/InterfaceToken.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/INETDefs.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
  networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  base/ModuleAccess.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  base/Compat.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  base/ILifecycle.h \
  networklayer/manetrouting/dymo/dymoum/blacklist.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/MeshControlInfo_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/contract/IPv4Address.h \
  base/NotificationBoard.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  base/QueueBase.h \
  networklayer/ipv4/ICMP.h \
  util/FWMath.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/arp/ARP.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
  networklayer/ipv4/IPv4Datagram.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_rerr.o: networklayer/manetrouting/dymo/dymoum/dymo_rerr.cc \
  networklayer/manetrouting/base/ManetAddress.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/contract/IPv6Address.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/arp/IARPCache.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  base/Compat.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/IPv4.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  base/ILifecycle.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  util/FWMath.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/ipv4/ICMP.h \
  base/QueueBase.h \
  base/NotificationBoard.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_socket.o: networklayer/manetrouting/dymo/dymoum/dymo_socket.cc \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  base/QueueBase.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  base/Coord.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  base/AbstractQueue.h \
  networklayer/ipv4/RoutingTableAccess.h \
  util/FWMath.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  base/ILifecycle.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  base/ReassemblyBuffer.h \
  networklayer/ipv4/ICMPMessage.h \
  base/Compat.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/arp/IARPCache.h \
  base/INETDefs.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_timeout.o: networklayer/manetrouting/dymo/dymoum/dymo_timeout.cc \
  networklayer/common/InterfaceToken.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/INETDefs.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/INotifiable.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  base/Compat.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ILifecycle.h \
  networklayer/manetrouting/dymo/dymoum/blacklist.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  base/ReassemblyBuffer.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  base/Coord.h \
  base/NotificationBoard.h \
  base/QueueBase.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4FragBuf.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/manetrouting/dymo/dymoum/dymo_netlink.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/arp/ARP.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/ipv4/RoutingTableAccess.h \
  util/FWMath.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_uerr.o: networklayer/manetrouting/dymo/dymoum/dymo_uerr.cc \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  base/Compat.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/INETDefs.h \
  networklayer/arp/IARPCache.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  base/ProtocolMap.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/ipv4/ICMP.h \
  base/QueueBase.h \
  base/Coord.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  util/FWMath.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  base/AbstractQueue.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  base/ILifecycle.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h
$O/networklayer/manetrouting/dymo/dymoum/icmp_socket.o: networklayer/manetrouting/dymo/dymoum/icmp_socket.cc \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  base/ProtocolMap.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/ipv4/ICMP.h \
  base/QueueBase.h \
  base/Coord.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  util/FWMath.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  base/AbstractQueue.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/manetrouting/dymo/dymoum/blacklist.h \
  base/ILifecycle.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  base/Compat.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/arp/IARPCache.h \
  base/INETDefs.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/INotifiable.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h
$O/networklayer/manetrouting/dymo/dymoum/pending_rreq.o: networklayer/manetrouting/dymo/dymoum/pending_rreq.cc \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  base/Compat.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  base/INETDefs.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/common/InterfaceToken.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/INotifiable.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/contract/IPv6Address.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  base/ProtocolMap.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  base/Coord.h \
  base/NotificationBoard.h \
  base/QueueBase.h \
  util/FWMath.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  base/AbstractQueue.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  base/ILifecycle.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h
$O/networklayer/manetrouting/dymo/dymoum/rtable.o: networklayer/manetrouting/dymo/dymoum/rtable.cc \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo/dymoum/dymo_netlink.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  base/QueueBase.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  base/Coord.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  base/AbstractQueue.h \
  networklayer/ipv4/RoutingTableAccess.h \
  util/FWMath.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  base/ILifecycle.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  base/ReassemblyBuffer.h \
  networklayer/ipv4/ICMPMessage.h \
  base/Compat.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/INETDefs.h \
  networklayer/arp/IARPCache.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/manetrouting/dymo/dymoum/k_route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymoum/pending_rreq.h
$O/networklayer/manetrouting/dymo/dymoum/timer_queue.o: networklayer/manetrouting/dymo/dymoum/timer_queue.cc \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  base/Compat.h \
  networklayer/ipv4/ICMPMessage.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/arp/IARPCache.h \
  base/INETDefs.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/common/InterfaceToken.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/ipv4/ICMP.h \
  base/Coord.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  base/QueueBase.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  base/AbstractQueue.h \
  util/FWMath.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h
$O/networklayer/manetrouting/dymo_fau/DYMO.o: networklayer/manetrouting/dymo_fau/DYMO.cc \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo_fau/DYMO.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
  util/FWMath.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
  networklayer/ipv4/ICMP.h \
  base/NotificationBoard.h \
  base/Coord.h \
  base/QueueBase.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4FragBuf.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
  transport/contract/UDPSocket.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  transport/contract/UDPControlInfo_m.h \
  base/ILifecycle.h \
  networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
  networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
  networklayer/common/InterfaceTable.h \
  base/Compat.h \
  networklayer/ipv4/ICMPMessage.h \
  base/ModuleAccess.h \
  transport/udp/UDPPacket.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/common/InterfaceTableAccess.h \
  transport/udp/UDPPacket_m.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
  base/INETDefs.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h
$O/networklayer/manetrouting/dymo_fau/DYMO_DataQueue.o: networklayer/manetrouting/dymo_fau/DYMO_DataQueue.cc \
  networklayer/ipv4/RoutingTable.h \
  base/ILifecycle.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/IPv4.h \
  base/ReassemblyBuffer.h \
  linklayer/contract/MACAddress.h \
  base/ProtocolMap.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/ipv4/ICMP.h \
  base/QueueBase.h \
  base/NotificationBoard.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/AbstractQueue.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/arp/IARPCache.h \
  base/INotifiable.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  base/ModuleAccess.h \
  base/Compat.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/common/InterfaceTable.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
  networklayer/common/InterfaceEntry.h
$O/networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.o: networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.cc \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
  base/NotifierConsts.h \
  base/INETDefs.h \
  base/Compat.h \
  base/ModuleAccess.h
$O/networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.o: networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.cc \
  networklayer/contract/IPvXAddress.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
  networklayer/contract/IPv6Address.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
  networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
  networklayer/arp/IARPCache.h \
  base/INETDefs.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
  networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
  base/Compat.h \
  networklayer/ipv4/ICMPMessage.h \
  base/ModuleAccess.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
  networklayer/common/InterfaceTable.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
  base/ILifecycle.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
  base/AbstractQueue.h \
  util/FWMath.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/dymo_fau/DYMO.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/IPv4Route.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
  networklayer/ipv4/ICMP.h \
  base/Coord.h \
  base/NotificationBoard.h \
  base/QueueBase.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4FragBuf.h
$O/networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.o: networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.cc \
  networklayer/arp/IARPCache.h \
  base/INETDefs.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
  networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
  networklayer/contract/IPv6Address.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
  networklayer/common/InterfaceTable.h \
  networklayer/common/INetfilter.h \
  base/ModuleAccess.h \
  base/Compat.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
  networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
  networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
  base/ILifecycle.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
  networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
  base/ReassemblyBuffer.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/ipv4/ICMP.h \
  base/Coord.h \
  base/NotificationBoard.h \
  base/QueueBase.h \
  networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
  base/ProtocolMap.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/dymo_fau/DYMO.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
  util/FWMath.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
  base/AbstractQueue.h
$O/networklayer/manetrouting/dymo_fau/DYMO_Timer.o: networklayer/manetrouting/dymo_fau/DYMO_Timer.cc \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
  base/Compat.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
  base/INETDefs.h
$O/networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.o: networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.cc \
  networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
  networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
  networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  base/Compat.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
  networklayer/common/InterfaceTable.h \
  networklayer/common/INetfilter.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
  networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
  base/ProtocolMap.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/ipv4/ICMP.h \
  base/NotificationBoard.h \
  base/QueueBase.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/IPv4.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
  base/ILifecycle.h \
  networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h
$O/networklayer/manetrouting/dymo_fau/InspectorHelpers.o: networklayer/manetrouting/dymo_fau/InspectorHelpers.cc \
  networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
  base/INETDefs.h \
  base/Compat.h \
  networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
  networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
  networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
  networklayer/manetrouting/dymo_fau/DYMO_RM_m.h
$O/networklayer/manetrouting/olsr/OLSR.o: networklayer/manetrouting/olsr/OLSR.cc \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPvXAddress.h \
  transport/udp/UDPPacket_m.h \
  networklayer/common/InterfaceTableAccess.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h \
  util/opp_utils.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/INETDefs.h \
  networklayer/arp/IARPCache.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceEntry.h \
  transport/udp/UDPPacket.h \
  base/ModuleAccess.h \
  networklayer/ipv4/ICMPMessage.h \
  base/Compat.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  networklayer/common/INetfilter.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/manetrouting/olsr/OLSR.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  base/ILifecycle.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ipv4/ICMPAccess.h \
  util/FWMath.h \
  base/AbstractQueue.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPv6ControlInfo.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/olsr/OLSR_state.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4FragBuf.h \
  base/QueueBase.h \
  base/NotificationBoard.h \
  base/Coord.h \
  networklayer/ipv4/ICMP.h
$O/networklayer/manetrouting/olsr/OLSROPT.o: networklayer/manetrouting/olsr/OLSROPT.cc \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  transport/udp/UDPPacket.h \
  base/Compat.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPvXAddress.h \
  transport/udp/UDPPacket_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  util/opp_utils.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/olsr/OLSROPT.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  util/FWMath.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/AbstractQueue.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/manetrouting/olsr/OLSR_state.h \
  base/ProtocolMap.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/ICMP.h \
  base/QueueBase.h \
  base/Coord.h \
  base/NotificationBoard.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/olsr/OLSR.h \
  base/ReassemblyBuffer.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  base/ILifecycle.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h
$O/networklayer/manetrouting/olsr/OLSR_ETX.o: networklayer/manetrouting/olsr/OLSR_ETX.cc \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/INotifiable.h \
  transport/udp/UDPPacket_m.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/common/InterfaceToken.h \
  util/opp_utils.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  base/ModuleAccess.h \
  transport/udp/UDPPacket.h \
  base/Compat.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/olsr/OLSR.h \
  base/ReassemblyBuffer.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/olsr/OLSR_ETX_state.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  base/ILifecycle.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/manetrouting/olsr/OLSR_ETX.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPProtocolId_m.h \
  util/FWMath.h \
  networklayer/manetrouting/olsr/OLSR_ETX_repositories.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/AbstractQueue.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/ICMP.h \
  base/NotificationBoard.h \
  base/Coord.h \
  base/QueueBase.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/manetrouting/olsr/OLSR_state.h \
  base/ProtocolMap.h
$O/networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.o: networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.cc \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/INotifiable.h \
  networklayer/arp/IARPCache.h \
  base/INETDefs.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h \
  util/opp_utils.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  networklayer/common/INetfilter.h \
  networklayer/ipv4/ICMPMessage.h \
  base/Compat.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/olsr/OLSR.h \
  base/ReassemblyBuffer.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/olsr/OLSR_ETX_state.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/manetrouting/olsr/OLSR_ETX.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  base/ILifecycle.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/arp/ARP.h \
  base/AbstractQueue.h \
  networklayer/ipv4/RoutingTableAccess.h \
  util/FWMath.h \
  networklayer/manetrouting/olsr/OLSR_ETX_repositories.h \
  base/Coord.h \
  base/NotificationBoard.h \
  base/QueueBase.h \
  networklayer/ipv4/ICMP.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/contract/IPv4Address.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/olsr/OLSR_state.h
$O/networklayer/manetrouting/olsr/OLSR_ETX_state.o: networklayer/manetrouting/olsr/OLSR_ETX_state.cc \
  networklayer/common/InterfaceEntry.h \
  base/Compat.h \
  networklayer/ipv4/ICMPMessage.h \
  base/ModuleAccess.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/INotifiable.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  util/opp_utils.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h \
  networklayer/common/InterfaceToken.h \
  networklayer/arp/IARPCache.h \
  base/INETDefs.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/AbstractQueue.h \
  util/FWMath.h \
  networklayer/manetrouting/olsr/OLSR_ETX_repositories.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/olsr/OLSR_state.h \
  base/ProtocolMap.h \
  networklayer/ipv4/ICMP.h \
  base/NotificationBoard.h \
  base/Coord.h \
  base/QueueBase.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/olsr/OLSR_ETX_state.h \
  networklayer/ipv4/IPv4.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/olsr/OLSR.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/manetrouting/olsr/OLSR_ETX.h \
  base/ILifecycle.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h
$O/networklayer/manetrouting/olsr/OLSR_rtable.o: networklayer/manetrouting/olsr/OLSR_rtable.cc \
  networklayer/common/InterfaceEntry.h \
  base/Compat.h \
  networklayer/ipv4/ICMPMessage.h \
  base/ModuleAccess.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/INotifiable.h \
  networklayer/contract/IPv6Address.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  util/opp_utils.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h \
  networklayer/common/InterfaceToken.h \
  networklayer/arp/IARPCache.h \
  base/INETDefs.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/AbstractQueue.h \
  util/FWMath.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/olsr/OLSR_state.h \
  base/ProtocolMap.h \
  networklayer/ipv4/ICMP.h \
  base/Coord.h \
  base/NotificationBoard.h \
  base/QueueBase.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/IPv4.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/olsr/OLSR.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  base/ILifecycle.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h
$O/networklayer/manetrouting/olsr/OLSR_state.o: networklayer/manetrouting/olsr/OLSR_state.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/common/InterfaceToken.h \
  util/opp_utils.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  base/ModuleAccess.h \
  base/Compat.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/olsr/OLSR.h \
  base/ReassemblyBuffer.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  base/ILifecycle.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPProtocolId_m.h \
  util/FWMath.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/AbstractQueue.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/ipv4/ICMP.h \
  base/NotificationBoard.h \
  base/Coord.h \
  base/QueueBase.h \
  networklayer/manetrouting/olsr/OLSR_state.h \
  base/ProtocolMap.h
$O/networklayer/mpls/LIBTable.o: networklayer/mpls/LIBTable.cc \
  base/ModuleAccess.h \
  util/XMLUtils.h \
  base/Compat.h \
  base/INETDefs.h \
  networklayer/mpls/LIBTable.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv4Address.h \
  networklayer/mpls/ConstType.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/IPv4Datagram_m.h
$O/networklayer/mpls/MPLS.o: networklayer/mpls/MPLS.cc \
  base/INotifiable.h \
  networklayer/contract/IPvXAddress.h \
  base/ByteArray.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/rsvp_te/Utils.h \
  networklayer/ldp/LDP.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/mpls/IClassifier.h \
  networklayer/mpls/LIBTable.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  transport/contract/TCPSocket.h \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/rsvp_te/IntServ_m.h \
  base/Compat.h \
  status/NodeStatus.h \
  networklayer/mpls/MPLS.h \
  transport/contract/TCPSocketMap.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ldp/LDPPacket_m.h \
  base/ILifecycle.h \
  transport/contract/TCPCommand_m.h \
  transport/contract/UDPSocket.h \
  networklayer/mpls/ConstType.h \
  base/ByteArray_m.h \
  networklayer/ipv4/RoutingTableAccess.h \
  transport/tcp_common/TCPSegment.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/mpls/MPLSPacket.h \
  networklayer/rsvp_te/IntServ.h \
  networklayer/contract/IPv4Address.h \
  networklayer/mpls/LIBTableAccess.h \
  base/NotificationBoard.h
$O/networklayer/mpls/MPLSPacket.o: networklayer/mpls/MPLSPacket.cc \
  base/INETDefs.h \
  base/Compat.h \
  networklayer/mpls/MPLSPacket.h
$O/networklayer/ospfv2/OSPFConfigReader.o: networklayer/ospfv2/OSPFConfigReader.cc \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  base/NotificationBoard.h \
  networklayer/ospfv2/OSPFConfigReader.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  util/XMLUtils.h \
  util/PatternMatcher.h \
  networklayer/ospfv2/router/OSPFArea.h \
  base/Compat.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/router/LSA.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h
$O/networklayer/ospfv2/OSPFRouting.o: networklayer/ospfv2/OSPFRouting.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddressResolver.h \
  status/NodeStatus.h \
  base/Compat.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/router/OSPFArea.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPSocket.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/common/IInterfaceTable.h \
  base/NodeOperations.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  base/ILifecycle.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/OSPFRouting.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/OSPFConfigReader.h
$O/networklayer/ospfv2/interface/OSPFInterface.o: networklayer/ospfv2/interface/OSPFInterface.cc \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/router/OSPFArea.h \
  base/Compat.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  base/INotifiable.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv6Address.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/ospfv2/router/LSA.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  base/NotificationBoard.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/contract/IPv4ControlInfo_m.h
$O/networklayer/ospfv2/interface/OSPFInterfaceState.o: networklayer/ospfv2/interface/OSPFInterfaceState.cc \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateBackup.h \
  base/Compat.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.h \
  networklayer/ospfv2/router/OSPFArea.h \
  base/ModuleAccess.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateBackup.o: networklayer/ospfv2/interface/OSPFInterfaceStateBackup.cc \
  networklayer/ospfv2/interface/OSPFInterfaceStateBackup.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/Compat.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFArea.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/interface/OSPFInterface.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.o: networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.cc \
  base/ModuleAccess.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  base/Compat.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/LSA.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateDown.o: networklayer/ospfv2/interface/OSPFInterfaceStateDown.cc \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/OSPFTimer.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/contract/IPv6Address.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  base/Compat.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.o: networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.cc \
  base/Compat.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  base/INETDefs.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.o: networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.cc \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  base/Compat.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/router/OSPFArea.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.o: networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.cc \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  base/Compat.h \
  networklayer/ospfv2/router/OSPFArea.h \
  base/ModuleAccess.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.o: networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.cc \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/router/OSPFArea.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  base/Compat.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv6Address.h
$O/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.o: networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.cc \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/common/IInterfaceTable.h \
  base/Compat.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFArea.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/ospfv2/router/LSA.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/ospfv2/messagehandler/HelloHandler.o: networklayer/ospfv2/messagehandler/HelloHandler.cc \
  networklayer/contract/IPv6Address.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/Compat.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/router/OSPFArea.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h
$O/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.o: networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.cc \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFArea.h \
  base/ModuleAccess.h \
  base/Compat.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/router/LSA.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/contract/IPv4ControlInfo_m.h
$O/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.o: networklayer/ospfv2/messagehandler/LinkStateRequestHandler.cc \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  base/Compat.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFArea.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/contract/IPvXAddress.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceTableAccess.h
$O/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.o: networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.cc \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/ospfv2/router/LSA.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  base/Compat.h \
  networklayer/ospfv2/router/OSPFArea.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddressResolver.h
$O/networklayer/ospfv2/messagehandler/MessageHandler.o: networklayer/ospfv2/messagehandler/MessageHandler.cc \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  base/Compat.h \
  networklayer/ipv4/ICMPMessage.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceTableAccess.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/interface/OSPFInterface.h
$O/networklayer/ospfv2/neighbor/OSPFNeighbor.o: networklayer/ospfv2/neighbor/OSPFNeighbor.cc \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  base/Compat.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv6Address.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/ospfv2/router/LSA.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborState.o: networklayer/ospfv2/neighbor/OSPFNeighborState.cc \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/router/OSPFArea.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  base/Compat.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.o: networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.cc \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/router/OSPFArea.h \
  base/ModuleAccess.h \
  base/Compat.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateDown.o: networklayer/ospfv2/neighbor/OSPFNeighborStateDown.cc \
  networklayer/ospfv2/router/OSPFRouter.h \
  base/Compat.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/OSPFTimer.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.o: networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.cc \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateFull.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  base/Compat.h \
  networklayer/ospfv2/router/OSPFArea.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.o: networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.cc \
  base/Compat.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateFull.o: networklayer/ospfv2/neighbor/OSPFNeighborStateFull.cc \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateFull.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  base/Compat.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/router/LSA.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateInit.o: networklayer/ospfv2/neighbor/OSPFNeighborStateInit.cc \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/router/LSA.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/router/OSPFArea.h \
  base/Compat.h \
  networklayer/ospfv2/router/OSPFRouter.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.o: networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateFull.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  base/Compat.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/ospfv2/router/LSA.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.o: networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.cc \
  base/Compat.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFArea.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/common/IInterfaceTable.h
$O/networklayer/ospfv2/router/ASExternalLSA.o: networklayer/ospfv2/router/ASExternalLSA.cc \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/Compat.h
$O/networklayer/ospfv2/router/LSA.o: networklayer/ospfv2/router/LSA.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  base/Compat.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/INETDefs.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv6Address.h
$O/networklayer/ospfv2/router/NetworkLSA.o: networklayer/ospfv2/router/NetworkLSA.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/Compat.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/ospfv2/router/LSA.h
$O/networklayer/ospfv2/router/OSPFArea.o: networklayer/ospfv2/router/OSPFArea.cc \
  networklayer/ospfv2/router/OSPFArea.h \
  base/ModuleAccess.h \
  base/Compat.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/common/IInterfaceTable.h
$O/networklayer/ospfv2/router/OSPFRouter.o: networklayer/ospfv2/router/OSPFRouter.cc \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/router/OSPFArea.h \
  base/Compat.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv6Address.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h
$O/networklayer/ospfv2/router/OSPFRoutingTableEntry.o: networklayer/ospfv2/router/OSPFRoutingTableEntry.cc \
  base/ModuleAccess.h \
  base/Compat.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv6Address.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h
$O/networklayer/ospfv2/router/RouterLSA.o: networklayer/ospfv2/router/RouterLSA.cc \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/Compat.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/contract/IPv4Address.h
$O/networklayer/ospfv2/router/SummaryLSA.o: networklayer/ospfv2/router/SummaryLSA.cc \
  base/INETDefs.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv6Address.h \
  base/Compat.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/contract/IPv4Address.h
$O/networklayer/routing/aodv/AODVRouteData.o: networklayer/routing/aodv/AODVRouteData.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/routing/aodv/AODVRouteData.h \
  base/Compat.h \
  base/INETDefs.h
$O/networklayer/routing/aodv/AODVRouting.o: networklayer/routing/aodv/AODVRouting.cc \
  networklayer/contract/IPSocket.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/NodeOperations.h \
  base/LifecycleOperation.h \
  transport/contract/UDPSocket.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ILifecycle.h \
  networklayer/routing/aodv/AODVRouteData.h \
  networklayer/routing/aodv/AODVRouting.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv4Address.h \
  networklayer/routing/aodv/AODVControlPackets_m.h \
  networklayer/contract/IPv6Address.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPvXAddress.h \
  transport/udp/UDPPacket_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/INotifiable.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  transport/contract/UDPControlInfo.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/common/INetfilter.h \
  status/NodeStatus.h \
  base/Compat.h \
  base/ModuleAccess.h \
  transport/udp/UDPPacket.h
$O/networklayer/routing/dymo/DYMORouteData.o: networklayer/routing/dymo/DYMORouteData.cc \
  base/Compat.h \
  networklayer/routing/dymo/DYMOdefs.h \
  networklayer/routing/dymo/DYMORouteData.h \
  base/INETDefs.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4Route.h
$O/networklayer/routing/dymo/xDYMO.o: networklayer/routing/dymo/xDYMO.cc \
  base/Compat.h \
  transport/udp/UDPPacket.h \
  base/ModuleAccess.h \
  networklayer/routing/dymo/DYMOdefs.h \
  networklayer/common/INetfilter.h \
  status/NodeStatus.h \
  networklayer/routing/dymo/DYMORouteData.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddressResolver.h \
  transport/contract/UDPControlInfo.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPvXAddress.h \
  transport/udp/UDPPacket_m.h \
  base/INotifiable.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceTableAccess.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/routing/dymo/xDYMO.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ILifecycle.h \
  base/NodeOperations.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/routing/dymo/DYMO_m.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPSocket.h \
  linklayer/contract/MACAddress.h
$O/networklayer/routing/gpsr/GPSR.o: networklayer/routing/gpsr/GPSR.cc \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPvXAddress.h \
  transport/udp/UDPPacket_m.h \
  base/INotifiable.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/routing/gpsr/GPSRDefs.h \
  networklayer/common/INetfilter.h \
  networklayer/routing/gpsr/PositionTable.h \
  status/NodeStatus.h \
  base/Compat.h \
  networklayer/routing/gpsr/GPSR.h \
  transport/udp/UDPPacket.h \
  base/ModuleAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPSocket.h \
  base/NodeOperations.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  mobility/contract/IMobility.h \
  networklayer/common/IInterfaceTable.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ILifecycle.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/IPv4Route.h \
  util/FWMath.h \
  base/Coord.h \
  base/NotificationBoard.h \
  networklayer/routing/gpsr/GPSR_m.h \
  networklayer/contract/IPv4Address.h
$O/networklayer/routing/gpsr/PositionTable.o: networklayer/routing/gpsr/PositionTable.cc \
  base/Coord.h \
  networklayer/contract/IPv4Address.h \
  util/FWMath.h \
  networklayer/routing/gpsr/PositionTable.h \
  base/Compat.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/routing/rip/RIPRouting.o: networklayer/routing/rip/RIPRouting.cc \
  base/LifecycleOperation.h \
  networklayer/common/IInterfaceTable.h \
  base/NodeOperations.h \
  linklayer/contract/MACAddress.h \
  base/ILifecycle.h \
  transport/contract/UDPSocket.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/routing/rip/RIPRouting.h \
  transport/udp/UDP.h \
  networklayer/contract/IPv4Address.h \
  base/NotificationBoard.h \
  base/INotifiable.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceMatcher.h \
  networklayer/contract/IPv6Address.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  transport/contract/UDPControlInfo.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  base/Compat.h \
  status/NodeStatus.h \
  networklayer/routing/rip/RIPPacket_m.h
$O/networklayer/rsvp_te/RSVP.o: networklayer/rsvp_te/RSVP.cc \
  networklayer/common/InterfaceToken.h \
  networklayer/rsvp_te/RSVPHelloMsg.h \
  base/INETDefs.h \
  networklayer/mpls/LIBTable.h \
  base/IScriptable.h \
  networklayer/rsvp_te/RSVPPathMsg_m.h \
  networklayer/mpls/IClassifier.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv6Address.h \
  networklayer/rsvp_te/Utils.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/rsvp_te/IRSVPClassifier.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ted/TED.h \
  base/INotifiable.h \
  status/NodeStatus.h \
  base/Compat.h \
  networklayer/rsvp_te/IntServ_m.h \
  util/common.h \
  networklayer/rsvp_te/RSVPResvMsg_m.h \
  util/XMLUtils.h \
  base/ModuleAccess.h \
  networklayer/rsvp_te/RSVPPacket_m.h \
  networklayer/rsvp_te/RSVP.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ted/TED_m.h \
  networklayer/ted/TEDAccess.h \
  networklayer/rsvp_te/RSVPHello_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/rsvp_te/RSVPPacket.h \
  base/ILifecycle.h \
  networklayer/contract/IPSocket.h \
  linklayer/contract/MACAddress.h \
  networklayer/rsvp_te/RSVPPathMsg.h \
  base/NodeOperations.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/common/IInterfaceTable.h \
  base/LifecycleOperation.h \
  networklayer/mpls/LIBTableAccess.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv4Address.h \
  networklayer/rsvp_te/RSVPResvMsg.h \
  networklayer/rsvp_te/IntServ.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/rsvp_te/SignallingMsg_m.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/mpls/ConstType.h
$O/networklayer/rsvp_te/SimpleClassifier.o: networklayer/rsvp_te/SimpleClassifier.cc \
  base/Compat.h \
  networklayer/rsvp_te/IntServ_m.h \
  networklayer/rsvp_te/RSVPResvMsg_m.h \
  util/XMLUtils.h \
  base/ModuleAccess.h \
  networklayer/rsvp_te/RSVPPacket_m.h \
  networklayer/rsvp_te/RSVP.h \
  networklayer/rsvp_te/RSVPAccess.h \
  base/IScriptable.h \
  networklayer/rsvp_te/RSVPPathMsg_m.h \
  networklayer/mpls/IClassifier.h \
  base/INETDefs.h \
  networklayer/rsvp_te/RSVPHelloMsg.h \
  networklayer/mpls/LIBTable.h \
  networklayer/rsvp_te/IRSVPClassifier.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/rsvp_te/RSVPResvMsg.h \
  networklayer/rsvp_te/IntServ.h \
  networklayer/mpls/LIBTableAccess.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/rsvp_te/SimpleClassifier.h \
  networklayer/mpls/ConstType.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/rsvp_te/SignallingMsg_m.h \
  networklayer/rsvp_te/RSVPHello_m.h \
  base/ILifecycle.h \
  networklayer/rsvp_te/RSVPPacket.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/rsvp_te/RSVPPathMsg.h
$O/networklayer/rsvp_te/Utils.o: networklayer/rsvp_te/Utils.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/rsvp_te/IntServ.h \
  base/INETDefs.h \
  networklayer/rsvp_te/Utils.h \
  networklayer/rsvp_te/IntServ_m.h \
  base/Compat.h
$O/networklayer/ted/LinkStateRouting.o: networklayer/ted/LinkStateRouting.cc \
  networklayer/contract/IPvXAddress.h \
  base/INotifiable.h \
  networklayer/ted/TED.h \
  networklayer/contract/IPv6Address.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ted/LinkStatePacket_m.h \
  networklayer/ted/LinkStateRouting.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ted/TED_m.h \
  networklayer/ted/TEDAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/rsvp_te/IntServ_m.h \
  base/Compat.h \
  base/ModuleAccess.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPSocket.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ILifecycle.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/rsvp_te/IntServ.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv4Address.h
$O/networklayer/ted/TED.o: networklayer/ted/TED.cc \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ted/TED.h \
  base/INotifiable.h \
  status/NodeStatus.h \
  networklayer/rsvp_te/IntServ_m.h \
  base/Compat.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ted/TED_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ILifecycle.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/NodeOperations.h \
  networklayer/common/IInterfaceTable.h \
  base/LifecycleOperation.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv4Address.h \
  networklayer/rsvp_te/IntServ.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/RoutingTableAccess.h
$O/networklayer/xmipv6/BindingCache.o: networklayer/xmipv6/BindingCache.cc \
  networklayer/xmipv6/BindingCache.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  base/Compat.h
$O/networklayer/xmipv6/BindingUpdateList.o: networklayer/xmipv6/BindingUpdateList.cc \
  base/ModuleAccess.h \
  base/Compat.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  base/INotifiable.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  base/NotificationBoard.h \
  linklayer/contract/MACAddress.h \
  networklayer/xmipv6/BindingUpdateList.h
$O/networklayer/xmipv6/MobilityHeader.o: networklayer/xmipv6/MobilityHeader.cc \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/xmipv6/MobilityHeader.h \
  networklayer/xmipv6/MobilityHeader_m.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/ipv6/IPv6ExtensionHeaders.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  base/Compat.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h
$O/networklayer/xmipv6/xMIPv6.o: networklayer/xmipv6/xMIPv6.cc \
  networklayer/contract/IPv4Address.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/xmipv6/MobilityHeader_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/xmipv6/MobilityHeader.h \
  networklayer/xmipv6/xMIPv6.h \
  networklayer/ipv6tunneling/IPv6Tunneling.h \
  networklayer/xmipv6/BindingCache.h \
  base/ILifecycle.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/ipv6tunneling/IPv6TunnelingAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/xmipv6/BindingUpdateList.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/icmpv6/IPv6NeighbourDiscovery.h \
  base/ModuleAccess.h \
  base/Compat.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv6/IPv6ExtensionHeaders.h \
  networklayer/icmpv6/IPv6NDMessage_m.h \
  networklayer/ipv6/RoutingTable6Access.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv6/RoutingTable6.h \
  base/INETDefs.h \
  networklayer/icmpv6/IPv6NeighbourCache.h \
  networklayer/icmpv6/IPv6NeighbourDiscoveryAccess.h \
  networklayer/common/InterfaceTableAccess.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/xmipv6/BindingCacheAccess.h \
  networklayer/xmipv6/BindingUpdateListAccess.h \
  base/INotifiable.h \
  networklayer/contract/IPvXAddress.h
$O/parser/Parser.o: parser/Parser.cc \
  util/FWMath.h \
  actions/seappexpression/SEAPPExpression.h \
  /usr/include/glib-2.0/glib/gerror.h \
  /usr/include/glib-2.0/glib/gsequence.h \
  /usr/include/glib-2.0/glib/gslist.h \
  /usr/include/glibmm-2.4/glibmm/ustring.h \
  /usr/lib/x86_64-linux-gnu/glib-2.0/include/glibconfig.h \
  attacks/unconditionalattack/UnconditionalAttack.h \
  /usr/include/glib-2.0/glib/gvariant.h \
  /usr/include/glib-2.0/glib/ggettext.h \
  /usr/include/libxml++-2.6/libxml++/validators/schemavalidator.h \
  /usr/include/libxml++-2.6/libxml++/nodes/xincludeend.h \
  /usr/include/glib-2.0/glib/gqsort.h \
  /usr/include/glib-2.0/glib/gslice.h \
  /usr/include/glib-2.0/glib/gdatetime.h \
  /usr/include/glib-2.0/glib/genviron.h \
  /usr/include/libxml++-2.6/libxml++/schema.h \
  /usr/include/libxml++-2.6/libxml++/nodes/entityreference.h \
  /usr/include/glib-2.0/glib/gmain.h \
  /usr/include/glib-2.0/glib/gprimes.h \
  actions/move/Move.h \
  /usr/include/glib-2.0/glib/gvarianttype.h \
  /usr/include/libxml++-2.6/libxml++/parsers/textreader.h \
  /usr/include/glib-2.0/glib/gbytes.h \
  /usr/include/libxml++-2.6/libxml++/validators/dtdvalidator.h \
  /usr/include/glib-2.0/glib/deprecated/gcache.h \
  attacks/attackbase/AttackBase.h \
  /usr/include/glib-2.0/glib/gmessages.h \
  /usr/include/glib-2.0/glib/gnode.h \
  /usr/include/libxml++-2.6/libxml++/document.h \
  actions/create/Create.h \
  /usr/include/glib-2.0/glib/gqueue.h \
  /usr/include/glib-2.0/glib/glist.h \
  /usr/include/glib-2.0/glib/ghmac.h \
  base/Coord.h \
  /usr/lib/x86_64-linux-gnu/glibmm-2.4/include/glibmmconfig.h \
  /usr/include/libxml++-2.6/libxml++/attribute.h \
  /usr/include/glib-2.0/glib/gconvert.h \
  /usr/include/glib-2.0/glib/deprecated/gthread.h \
  attacks/physicalattack/PhysicalAttack.h \
  attacks/filterblock/FilterBlock.h \
  /usr/include/glib-2.0/glib/giochannel.h \
  /usr/include/glib-2.0/glib/gbase64.h \
  /usr/include/libxml++-2.6/libxml++/nodes/entitydeclaration.h \
  /usr/include/glib-2.0/glib/gmem.h \
  /usr/include/glib-2.0/glib/gmarkup.h \
  parser/Parser.h \
  util/seapputils/seapputils.h \
  actions/retrieve/Retrieve.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/exception.h \
  /usr/include/libxml++-2.6/libxml++/nodes/xincludestart.h \
  /usr/include/glib-2.0/glib/gfileutils.h \
  /usr/include/glib-2.0/glib/gmacros.h \
  /usr/include/glib-2.0/glib/gbitlock.h \
  /usr/include/glib-2.0/glib/deprecated/gmain.h \
  /usr/include/glib-2.0/glib/ghash.h \
  /usr/include/libxml++-2.6/libxml++/parsers/saxparser.h \
  /usr/include/glib-2.0/glib/gutils.h \
  /usr/include/libxml++-2.6/libxml++/attributenode.h \
  /usr/include/glib-2.0/glib/goption.h \
  /usr/include/glib-2.0/glib/gtypes.h \
  /usr/include/glib-2.0/glib/gdate.h \
  /usr/include/glib-2.0/glib/gdataset.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/parse_error.h \
  /usr/include/libxml++-2.6/libxml++/dtd.h \
  /usr/include/glib-2.0/glib/gasyncqueue.h \
  /usr/include/libxml++-2.6/libxml++/nodes/contentnode.h \
  /usr/include/glib-2.0/glib/gbookmarkfile.h \
  /usr/include/glib-2.0/glib/gversion.h \
  /usr/include/glib-2.0/glib/gatomic.h \
  /usr/include/glib-2.0/glib/garray.h \
  actions/send/Send.h \
  /usr/include/glib-2.0/glib/ghook.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/internal_error.h \
  /usr/include/libxml++-2.6/libxml++/nodes/commentnode.h \
  /usr/include/libxml++-2.6/libxml++/nodes/processinginstructionnode.h \
  /usr/include/glib-2.0/glib/deprecated/gcompletion.h \
  actions/drop/Drop.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/validity_error.h \
  variable/Variable.h \
  /usr/include/glib-2.0/glib/deprecated/gallocator.h \
  /usr/include/glib-2.0/glib.h \
  /usr/include/glib-2.0/glib/gcharset.h \
  base/Compat.h \
  actions/put/Put.h \
  attacks/filterblock/PacketFilter.h \
  /usr/include/libxml++-2.6/libxml++/nodes/textnode.h \
  /usr/include/glib-2.0/glib/gdir.h \
  /usr/include/glib-2.0/glib/gpoll.h \
  /usr/include/glib-2.0/glib/gtrashstack.h \
  /usr/include/glib-2.0/glib/gtree.h \
  /usr/include/glib-2.0/glib/gstrfuncs.h \
  /usr/include/libxml++-2.6/libxml++/parsers/parser.h \
  /usr/include/glib-2.0/glib/gversionmacros.h \
  /usr/include/glib-2.0/glib/gstringchunk.h \
  attacks/attackentry/AttackEntry.h \
  globalfilter/putmessages/PutMessages.h \
  /usr/include/glib-2.0/glib/gtestutils.h \
  /usr/include/glib-2.0/glib/gchecksum.h \
  /usr/include/glibmm-2.4/glibmm/unicode.h \
  actions/actionbase/ActionBase.h \
  /usr/include/libxml++-2.6/libxml++/nodes/node.h \
  /usr/include/glib-2.0/glib/gtimezone.h \
  /usr/include/glib-2.0/glib/gthreadpool.h \
  /usr/include/libxml++-2.6/libxml++/noncopyable.h \
  actions/clone/Clone.h \
  attacks/conditionalattack/ConditionalAttack.h \
  /usr/include/glib-2.0/glib/gurifuncs.h \
  /usr/include/glib-2.0/glib/gwin32.h \
  /usr/include/libxml++-2.6/libxml++/nodes/cdatanode.h \
  /usr/include/libxml++-2.6/libxml++/attributedeclaration.h \
  /usr/include/glib-2.0/glib/gpattern.h \
  /usr/include/glib-2.0/glib/gshell.h \
  /usr/lib/libxml++-2.6/include/libxml++config.h \
  /usr/include/glib-2.0/glib/gthread.h \
  /usr/include/glib-2.0/glib/gtimer.h \
  /usr/include/glib-2.0/glib/gbacktrace.h \
  /usr/include/glib-2.0/glib/gscanner.h \
  /usr/include/glib-2.0/glib/gquark.h \
  /usr/include/glib-2.0/glib/grand.h \
  /usr/include/glib-2.0/glib/deprecated/grel.h \
  /usr/include/glib-2.0/glib/gmappedfile.h \
  /usr/include/libxml++-2.6/libxml++/validators/validator.h \
  /usr/include/glib-2.0/glib/gstring.h \
  /usr/include/libxml++-2.6/libxml++/nodes/element.h \
  /usr/include/glib-2.0/glib/gspawn.h \
  actions/destroy/Destroy.h \
  /usr/include/glib-2.0/glib/gunicode.h \
  /usr/include/glib-2.0/glib/ghostutils.h \
  /usr/include/glib-2.0/glib/gregex.h \
  /usr/include/libxml++-2.6/libxml++/parsers/domparser.h \
  /usr/include/glib-2.0/glib/gkeyfile.h \
  /usr/include/libxml++-2.6/libxml++/libxml++.h \
  actions/change/Change.h \
  /usr/include/glib-2.0/glib/galloca.h \
  base/INETDefs.h
$O/status/NodeStatus.o: status/NodeStatus.cc \
  status/NodeStatus.h \
  base/Compat.h \
  base/ModuleAccess.h \
  base/INETDefs.h \
  base/NodeOperations.h \
  base/LifecycleOperation.h \
  base/ILifecycle.h
$O/transport/contract/SCTPSocket.o: transport/contract/SCTPSocket.cc \
  transport/contract/SCTPSocket.h \
  transport/sctp/SCTP.h \
  transport/contract/SCTPCommand.h \
  base/Compat.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  transport/contract/SCTPCommand_m.h \
  networklayer/contract/IPv4Address.h \
  transport/contract/UDPSocket.h
$O/transport/contract/TCPSocket.o: transport/contract/TCPSocket.cc \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPv4Address.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv6Address.h \
  base/Compat.h \
  transport/contract/TCPSocket.h
$O/transport/contract/TCPSocketMap.o: transport/contract/TCPSocketMap.cc \
  networklayer/contract/IPv4Address.h \
  transport/contract/TCPCommand_m.h \
  transport/contract/TCPSocketMap.h \
  base/Compat.h \
  transport/contract/TCPSocket.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv6Address.h
$O/transport/contract/UDPSocket.o: transport/contract/UDPSocket.cc \
  networklayer/contract/IPv6Address.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPvXAddress.h \
  base/INotifiable.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  transport/contract/UDPControlInfo.h \
  networklayer/common/InterfaceEntry.h \
  base/Compat.h \
  base/ModuleAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  transport/contract/UDPSocket.h \
  transport/contract/UDPControlInfo_m.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv4Address.h
$O/transport/rtp/RTCP.o: transport/rtp/RTCP.cc \
  base/INETDefs.h \
  transport/rtp/RTCPPacket1.h \
  transport/rtp/RTPParticipantInfo_m.h \
  transport/rtp/reports.h \
  transport/rtp/RTCPPacket3.h \
  transport/rtp/RTPInnerPacket.h \
  networklayer/contract/IPv6Address.h \
  transport/rtp/RTCPPacket3_m.h \
  transport/rtp/RTCPPacket2_m.h \
  networklayer/contract/IPvXAddress.h \
  transport/rtp/RTPPacket.h \
  status/NodeStatus.h \
  base/Compat.h \
  base/ModuleAccess.h \
  transport/rtp/RTPReceiverInfo.h \
  transport/rtp/RTPSenderInfo.h \
  transport/rtp/RTCP.h \
  transport/contract/UDPControlInfo_m.h \
  transport/contract/UDPSocket.h \
  base/ILifecycle.h \
  transport/rtp/RTPInnerPacket_m.h \
  transport/rtp/RTPParticipantInfo.h \
  base/LifecycleOperation.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  networklayer/contract/IPv4Address.h \
  transport/rtp/sdes.h \
  transport/rtp/RTPPacket_m.h \
  transport/rtp/RTCPPacket.h \
  transport/rtp/reports_m.h \
  transport/rtp/RTCPPacket2.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  transport/rtp/RTCPPacket1_m.h
$O/transport/rtp/RTCPPacket.o: transport/rtp/RTCPPacket.cc \
  transport/rtp/sdes.h \
  transport/rtp/reports_m.h \
  transport/rtp/RTCPPacket2.h \
  transport/rtp/RTCPPacket.h \
  transport/rtp/RTCPPacket1_m.h \
  base/INETDefs.h \
  transport/rtp/RTCPPacket1.h \
  transport/rtp/reports.h \
  transport/rtp/RTCPPacket3.h \
  transport/rtp/RTCPPacket2_m.h \
  transport/rtp/RTCPPacket3_m.h \
  base/Compat.h
$O/transport/rtp/RTP.o: transport/rtp/RTP.cc \
  transport/rtp/RTPInnerPacket_m.h \
  base/ILifecycle.h \
  transport/contract/UDPControlInfo_m.h \
  transport/contract/UDPSocket.h \
  base/LifecycleOperation.h \
  linklayer/contract/MACAddress.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  transport/rtp/RTPPacket_m.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  networklayer/contract/IPv4Address.h \
  transport/rtp/RTP.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4Route.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPInterfacePacket_m.h \
  networklayer/contract/IPvXAddress.h \
  transport/rtp/RTPInnerPacket.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv6Address.h \
  base/ModuleAccess.h \
  base/Compat.h \
  status/NodeStatus.h \
  transport/rtp/RTPProfile.h \
  networklayer/common/InterfaceEntry.h
$O/transport/rtp/RTPInnerPacket.o: transport/rtp/RTPInnerPacket.cc \
  transport/rtp/RTPSenderControlMessage_m.h \
  transport/rtp/RTPPacket_m.h \
  networklayer/contract/IPv4Address.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  transport/rtp/RTPInnerPacket_m.h \
  base/Compat.h \
  base/INETDefs.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPInnerPacket.h
$O/transport/rtp/RTPPacket.o: transport/rtp/RTPPacket.cc \
  transport/rtp/RTPPacket.h \
  base/INETDefs.h \
  base/Compat.h \
  transport/rtp/RTPPacket_m.h
$O/transport/rtp/RTPParticipantInfo.o: transport/rtp/RTPParticipantInfo.cc \
  base/INETDefs.h \
  transport/rtp/RTPParticipantInfo_m.h \
  transport/rtp/reports.h \
  transport/rtp/RTPPacket.h \
  base/Compat.h \
  transport/rtp/RTPParticipantInfo.h \
  networklayer/contract/IPv4Address.h \
  transport/rtp/RTPPacket_m.h \
  transport/rtp/sdes.h \
  transport/rtp/reports_m.h
$O/transport/rtp/RTPPayloadReceiver.o: transport/rtp/RTPPayloadReceiver.cc \
  transport/rtp/RTPInnerPacket_m.h \
  transport/rtp/RTPPayloadReceiver.h \
  transport/rtp/RTPPacket_m.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  networklayer/contract/IPv4Address.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  base/INETDefs.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPInnerPacket.h \
  base/Compat.h
$O/transport/rtp/RTPPayloadSender.o: transport/rtp/RTPPayloadSender.cc \
  transport/rtp/RTPSenderStatusMessage_m.h \
  networklayer/contract/IPv4Address.h \
  transport/rtp/RTPPacket_m.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  transport/rtp/RTPPayloadSender.h \
  transport/rtp/RTPInnerPacket_m.h \
  base/Compat.h \
  transport/rtp/RTPInnerPacket.h \
  transport/rtp/RTPInterfacePacket_m.h \
  transport/rtp/RTPPacket.h \
  base/INETDefs.h
$O/transport/rtp/RTPProfile.o: transport/rtp/RTPProfile.cc \
  base/INETDefs.h \
  transport/rtp/RTPInnerPacket.h \
  transport/rtp/RTPPacket.h \
  base/Compat.h \
  transport/rtp/RTPProfile.h \
  transport/rtp/RTPPayloadSender.h \
  transport/rtp/RTPInnerPacket_m.h \
  transport/rtp/RTPPayloadReceiver.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  networklayer/contract/IPv4Address.h \
  transport/rtp/RTPPacket_m.h \
  transport/rtp/RTPSenderControlMessage_m.h
$O/transport/rtp/RTPReceiverInfo.o: transport/rtp/RTPReceiverInfo.cc \
  networklayer/contract/IPv4Address.h \
  transport/rtp/reports_m.h \
  transport/rtp/sdes.h \
  transport/rtp/RTPPacket_m.h \
  transport/rtp/RTPParticipantInfo.h \
  base/Compat.h \
  transport/rtp/RTPReceiverInfo.h \
  transport/rtp/RTPParticipantInfo_m.h \
  base/INETDefs.h \
  transport/rtp/reports.h \
  transport/rtp/RTPPacket.h
$O/transport/rtp/RTPSenderInfo.o: transport/rtp/RTPSenderInfo.cc \
  networklayer/contract/IPv4Address.h \
  transport/rtp/sdes.h \
  transport/rtp/RTPPacket_m.h \
  transport/rtp/reports_m.h \
  transport/rtp/RTPParticipantInfo.h \
  transport/rtp/RTPSenderInfo.h \
  base/Compat.h \
  transport/rtp/RTPPacket.h \
  base/INETDefs.h \
  transport/rtp/RTPParticipantInfo_m.h \
  transport/rtp/reports.h
$O/transport/rtp/reports.o: transport/rtp/reports.cc \
  transport/rtp/reports_m.h \
  transport/rtp/reports.h
$O/transport/rtp/sdes.o: transport/rtp/sdes.cc \
  transport/rtp/sdes.h \
  base/INETDefs.h \
  base/Compat.h
$O/transport/rtp/profiles/avprofile/RTPAVProfile.o: transport/rtp/profiles/avprofile/RTPAVProfile.cc \
  base/Compat.h \
  transport/rtp/RTPProfile.h \
  base/INETDefs.h \
  transport/rtp/profiles/avprofile/RTPAVProfile.h
$O/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.o: transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.cc \
  transport/rtp/RTPPacket_m.h \
  transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.h \
  transport/rtp/RTPPayloadReceiver.h \
  base/Compat.h \
  transport/rtp/profiles/avprofile/RTPMpegPacket_m.h \
  base/INETDefs.h \
  transport/rtp/RTPPacket.h
$O/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.o: transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.cc \
  transport/rtp/RTPSenderControlMessage_m.h \
  transport/rtp/RTPPacket_m.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  networklayer/contract/IPv4Address.h \
  transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.h \
  transport/rtp/RTPInnerPacket_m.h \
  transport/rtp/RTPPayloadSender.h \
  transport/rtp/profiles/avprofile/RTPMpegPacket_m.h \
  base/Compat.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPInnerPacket.h \
  base/INETDefs.h
$O/transport/sctp/SCTP.o: transport/sctp/SCTP.cc \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceTableAccess.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPReceiveStream.h \
  networklayer/contract/IPvXAddress.h \
  base/INotifiable.h \
  networklayer/common/InterfaceTable.h \
  base/Compat.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTP.h \
  transport/contract/SCTPCommand.h \
  transport/sctp/SCTPAssociation.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  transport/contract/UDPControlInfo_m.h \
  transport/contract/UDPSocket.h \
  base/ILifecycle.h \
  transport/sctp/SCTPMessage.h \
  networklayer/contract/IPSocket.h \
  linklayer/contract/MACAddress.h \
  transport/sctp/SCTPSendStream.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  transport/sctp/SCTPQueue.h \
  networklayer/common/IInterfaceTable.h \
  base/NotificationBoard.h \
  transport/contract/SCTPCommand_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4Datagram.h \
  transport/sctp/SCTPGapList.h
$O/transport/sctp/SCTPAlg.o: transport/sctp/SCTPAlg.cc \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPMessage.h \
  linklayer/contract/MACAddress.h \
  transport/sctp/SCTPQueue.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  transport/contract/UDPSocket.h \
  transport/sctp/SCTPGapList.h \
  networklayer/contract/IPv4Address.h \
  base/NotificationBoard.h \
  networklayer/common/InterfaceTableAccess.h \
  transport/sctp/SCTPAlgorithm.h \
  networklayer/contract/IPv6Address.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  transport/sctp/SCTPReceiveStream.h \
  networklayer/contract/IPvXAddress.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPAlg.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPAssociation.h \
  networklayer/common/InterfaceTable.h \
  base/ModuleAccess.h \
  base/Compat.h
$O/transport/sctp/SCTPAssociationAddIP.o: transport/sctp/SCTPAssociationAddIP.cc \
  base/NotificationBoard.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/RoutingTableAccess.h \
  transport/sctp/SCTPGapList.h \
  transport/contract/UDPSocket.h \
  base/ILifecycle.h \
  transport/sctp/SCTPMessage.h \
  linklayer/contract/MACAddress.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPQueue.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTable.h \
  base/Compat.h \
  util/common.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTP.h \
  networklayer/contract/IPvXAddressResolver.h \
  transport/sctp/SCTPAssociation.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceTableAccess.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPReceiveStream.h \
  networklayer/contract/IPvXAddress.h \
  base/INotifiable.h
$O/transport/sctp/SCTPAssociationBase.o: transport/sctp/SCTPAssociationBase.cc \
  networklayer/ipv4/IPv4Route.h \
  transport/sctp/SCTPGapList.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/contract/IPv4Address.h \
  transport/contract/SCTPCommand_m.h \
  base/NotificationBoard.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPMessage.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h \
  transport/sctp/SCTPQueue.h \
  base/ILifecycle.h \
  transport/contract/UDPSocket.h \
  transport/contract/SCTPCommand.h \
  transport/sctp/SCTP.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPAssociation.h \
  networklayer/common/InterfaceTable.h \
  base/ModuleAccess.h \
  base/Compat.h \
  networklayer/common/InterfaceTableAccess.h \
  transport/sctp/SCTPAlgorithm.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  networklayer/contract/IPvXAddress.h \
  transport/sctp/SCTPReceiveStream.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/ipv6/RoutingTable6Access.h \
  base/INETDefs.h \
  networklayer/ipv6/RoutingTable6.h \
  networklayer/common/InterfaceToken.h
$O/transport/sctp/SCTPAssociationEventProc.o: transport/sctp/SCTPAssociationEventProc.cc \
  transport/sctp/SCTPAssociation.h \
  networklayer/common/InterfaceEntry.h \
  transport/contract/SCTPCommand.h \
  transport/sctp/SCTP.h \
  base/Compat.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  transport/sctp/SCTPReceiveStream.h \
  transport/sctp/SCTPMessage_m.h \
  base/INotifiable.h \
  transport/sctp/SCTPAlgorithm.h \
  networklayer/contract/IPv6Address.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceTableAccess.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  transport/sctp/SCTPGapList.h \
  networklayer/contract/IPProtocolId_m.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv4Address.h \
  transport/contract/SCTPCommand_m.h \
  networklayer/common/IInterfaceTable.h \
  transport/sctp/SCTPQueue.h \
  transport/sctp/SCTPMessage.h \
  linklayer/contract/MACAddress.h \
  transport/sctp/SCTPSendStream.h \
  transport/contract/UDPSocket.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ILifecycle.h
$O/transport/sctp/SCTPAssociationRcvMessage.o: transport/sctp/SCTPAssociationRcvMessage.cc \
  transport/sctp/SCTP.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  transport/contract/SCTPCommand.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPAssociation.h \
  networklayer/common/InterfaceTable.h \
  util/common.h \
  base/ModuleAccess.h \
  base/Compat.h \
  networklayer/common/InterfaceTableAccess.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTPAlgorithm.h \
  base/INotifiable.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPReceiveStream.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/sctp/SCTPGapList.h \
  transport/contract/SCTPCommand_m.h \
  networklayer/contract/IPv4Address.h \
  base/NotificationBoard.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPMessage.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  transport/sctp/SCTPQueue.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  transport/contract/UDPSocket.h
$O/transport/sctp/SCTPAssociationSendAll.o: transport/sctp/SCTPAssociationSendAll.cc \
  networklayer/common/InterfaceTable.h \
  base/ModuleAccess.h \
  base/Compat.h \
  transport/contract/SCTPCommand.h \
  transport/sctp/SCTP.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPAssociation.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/common/InterfaceTableAccess.h \
  transport/sctp/SCTPAlgorithm.h \
  networklayer/contract/IPv6Address.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  transport/sctp/SCTPReceiveStream.h \
  networklayer/contract/IPvXAddress.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/contract/IPv4Address.h \
  transport/contract/SCTPCommand_m.h \
  base/NotificationBoard.h \
  transport/sctp/SCTPGapList.h \
  base/ILifecycle.h \
  transport/contract/UDPSocket.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPMessage.h \
  linklayer/contract/MACAddress.h \
  transport/sctp/SCTPQueue.h \
  networklayer/common/IInterfaceTable.h
$O/transport/sctp/SCTPAssociationStreamReset.o: transport/sctp/SCTPAssociationStreamReset.cc \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv6Address.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  transport/sctp/SCTPReceiveStream.h \
  networklayer/contract/IPvXAddress.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/common/InterfaceTable.h \
  base/ModuleAccess.h \
  base/Compat.h \
  transport/contract/SCTPCommand.h \
  transport/sctp/SCTP.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPAssociation.h \
  base/ILifecycle.h \
  transport/contract/UDPSocket.h \
  transport/sctp/SCTPSendStream.h \
  linklayer/contract/MACAddress.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPQueue.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPv4Address.h \
  transport/contract/SCTPCommand_m.h \
  base/NotificationBoard.h \
  transport/sctp/SCTPGapList.h
$O/transport/sctp/SCTPAssociationUtil.o: transport/sctp/SCTPAssociationUtil.cc \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/RoutingTableAccess.h \
  transport/sctp/SCTPGapList.h \
  networklayer/contract/IPv4Address.h \
  transport/contract/SCTPCommand_m.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv6ControlInfo.h \
  transport/sctp/SCTPSendStream.h \
  linklayer/contract/MACAddress.h \
  transport/sctp/SCTPMessage.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  transport/sctp/SCTPQueue.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/ILifecycle.h \
  transport/contract/UDPSocket.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  transport/contract/SCTPCommand.h \
  transport/sctp/SCTP.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPAssociation.h \
  networklayer/common/InterfaceTable.h \
  base/ModuleAccess.h \
  util/common.h \
  base/Compat.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTPAlgorithm.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  base/INotifiable.h \
  networklayer/contract/IPvXAddress.h \
  transport/sctp/SCTPReceiveStream.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/ipv6/RoutingTable6Access.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv6/RoutingTable6.h
$O/transport/sctp/SCTPCCFunctions.o: transport/sctp/SCTPCCFunctions.cc \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceTableAccess.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/contract/IPvXAddress.h \
  transport/sctp/SCTPReceiveStream.h \
  base/INotifiable.h \
  networklayer/common/InterfaceTable.h \
  base/Compat.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPAssociation.h \
  transport/contract/UDPSocket.h \
  base/ILifecycle.h \
  linklayer/contract/MACAddress.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPSendStream.h \
  networklayer/common/IInterfaceTable.h \
  transport/sctp/SCTPQueue.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv4Address.h \
  transport/sctp/SCTPGapList.h
$O/transport/sctp/SCTPGapList.o: transport/sctp/SCTPGapList.cc \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTP.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  base/Compat.h \
  networklayer/common/InterfaceTable.h \
  base/INotifiable.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/contract/IPvXAddress.h \
  transport/sctp/SCTPReceiveStream.h \
  networklayer/common/InterfaceTableAccess.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  transport/sctp/SCTPGapList.h \
  networklayer/contract/IPv4Address.h \
  base/NotificationBoard.h \
  networklayer/common/IInterfaceTable.h \
  transport/sctp/SCTPQueue.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPMessage.h \
  linklayer/contract/MACAddress.h \
  base/ILifecycle.h \
  transport/contract/UDPSocket.h
$O/transport/sctp/SCTPMessage.o: transport/sctp/SCTPMessage.cc \
  transport/contract/UDPSocket.h \
  base/ILifecycle.h \
  linklayer/contract/MACAddress.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPQueue.h \
  networklayer/common/IInterfaceTable.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv4Address.h \
  transport/sctp/SCTPGapList.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceTableAccess.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPReceiveStream.h \
  networklayer/contract/IPvXAddress.h \
  base/INotifiable.h \
  networklayer/common/InterfaceTable.h \
  base/Compat.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPAssociation.h
$O/transport/sctp/SCTPNatHook.o: transport/sctp/SCTPNatHook.cc \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/arp/IARPCache.h \
  base/INotifiable.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPReceiveStream.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTPNatTable.h \
  base/ModuleAccess.h \
  networklayer/ipv4/ICMPMessage.h \
  base/Compat.h \
  networklayer/common/InterfaceTable.h \
  networklayer/common/INetfilter.h \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTP.h \
  networklayer/common/InterfaceEntry.h \
  base/ILifecycle.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  transport/contract/UDPSocket.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  transport/sctp/SCTPQueue.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/IInterfaceTable.h \
  base/ReassemblyBuffer.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPMessage.h \
  linklayer/contract/MACAddress.h \
  base/ProtocolMap.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/contract/IPv4Address.h \
  base/NotificationBoard.h \
  base/QueueBase.h \
  transport/sctp/SCTPNatHook.h \
  networklayer/ipv4/ICMP.h \
  base/AbstractQueue.h \
  networklayer/ipv4/RoutingTableAccess.h \
  transport/sctp/SCTPGapList.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4Datagram.h
$O/transport/sctp/SCTPNatTable.o: transport/sctp/SCTPNatTable.cc \
  base/NotificationBoard.h \
  networklayer/contract/IPv4Address.h \
  transport/sctp/SCTPGapList.h \
  transport/contract/UDPSocket.h \
  base/ILifecycle.h \
  linklayer/contract/MACAddress.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPSendStream.h \
  networklayer/common/IInterfaceTable.h \
  transport/sctp/SCTPQueue.h \
  networklayer/common/InterfaceTable.h \
  base/Compat.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPAssociation.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  transport/sctp/SCTPNatTable.h \
  networklayer/contract/IPv6Address.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPvXAddress.h \
  transport/sctp/SCTPReceiveStream.h \
  transport/sctp/SCTPMessage_m.h \
  base/INotifiable.h
$O/transport/sctp/SCTPQueue.o: transport/sctp/SCTPQueue.cc \
  networklayer/contract/IPv4Address.h \
  base/NotificationBoard.h \
  transport/sctp/SCTPGapList.h \
  base/ILifecycle.h \
  transport/contract/UDPSocket.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPMessage.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h \
  transport/sctp/SCTPQueue.h \
  networklayer/common/InterfaceTable.h \
  base/ModuleAccess.h \
  base/Compat.h \
  transport/sctp/SCTP.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPAssociation.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv6Address.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  networklayer/contract/IPvXAddress.h \
  transport/sctp/SCTPReceiveStream.h \
  transport/sctp/SCTPMessage_m.h
$O/transport/sctp/SCTPReceiveStream.o: transport/sctp/SCTPReceiveStream.cc \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPvXAddress.h \
  transport/sctp/SCTPReceiveStream.h \
  transport/sctp/SCTPMessage_m.h \
  base/INotifiable.h \
  networklayer/contract/IPv6Address.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceTableAccess.h \
  base/Compat.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceTable.h \
  transport/sctp/SCTPAssociation.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTP.h \
  transport/contract/UDPSocket.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  transport/sctp/SCTPQueue.h \
  linklayer/contract/MACAddress.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPSendStream.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv4Address.h \
  transport/sctp/SCTPGapList.h
$O/transport/sctp/SCTPSSFunctions.o: transport/sctp/SCTPSSFunctions.cc \
  transport/sctp/SCTP.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPAssociation.h \
  networklayer/common/InterfaceTable.h \
  base/ModuleAccess.h \
  base/Compat.h \
  networklayer/common/InterfaceTableAccess.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  base/INotifiable.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPReceiveStream.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  transport/sctp/SCTPGapList.h \
  networklayer/contract/IPv4Address.h \
  base/NotificationBoard.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPMessage.h \
  linklayer/contract/MACAddress.h \
  transport/sctp/SCTPQueue.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  transport/contract/UDPSocket.h
$O/transport/sctp/SCTPSendStream.o: transport/sctp/SCTPSendStream.cc \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h \
  base/Compat.h \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPAssociation.h \
  transport/contract/UDPSocket.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPQueue.h \
  networklayer/contract/IPv4Address.h
$O/transport/tcp/TCP.o: transport/tcp/TCP.cc \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/queues/TCPVirtualDataSendQueue.h \
  base/ByteArrayBuffer.h \
  transport/tcp/TCPSendQueue.h \
  transport/tcp/TCPReceiveQueue.h \
  base/Compat.h \
  base/ModuleAccess.h \
  status/NodeStatus.h \
  base/ByteArray.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp/queues/TCPByteStreamSendQueue.h \
  transport/tcp/queues/TCPMsgBasedRcvQueue.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/queues/TCPMsgBasedSendQueue.h \
  base/INETDefs.h \
  transport/tcp_common/TCPSegment.h \
  base/ByteArray_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/contract/IPv6ControlInfo.h \
  transport/tcp/queues/TCPByteStreamRcvQueue.h \
  networklayer/contract/IPv4Address.h \
  base/NodeOperations.h \
  transport/tcp/TCP.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPSocket.h \
  linklayer/contract/MACAddress.h \
  transport/tcp/queues/TCPVirtualDataRcvQueue.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  transport/contract/TCPCommand_m.h \
  base/ILifecycle.h \
  transport/tcp/TCPConnection.h
$O/transport/tcp/TCPConnectionBase.o: transport/tcp/TCPConnectionBase.cc \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCPSACKRexmitQueue.h \
  networklayer/contract/IPvXAddress.h \
  base/ByteArray.h \
  base/Compat.h \
  transport/tcp/TCPAlgorithm.h \
  transport/tcp/TCPReceiveQueue.h \
  transport/tcp/TCPSendQueue.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/TCPConnection.h \
  transport/contract/TCPCommand_m.h \
  base/ILifecycle.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp_common/TCPSegment.h \
  base/ByteArray_m.h
$O/transport/tcp/TCPConnectionEventProc.o: transport/tcp/TCPConnectionEventProc.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h \
  base/ByteArray.h \
  base/INETDefs.h \
  transport/tcp/TCPSendQueue.h \
  transport/tcp/TCPReceiveQueue.h \
  transport/tcp/TCPAlgorithm.h \
  transport/tcp_common/TCPSegment_m.h \
  base/Compat.h \
  transport/tcp/TCP.h \
  base/ILifecycle.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/TCPConnection.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment.h \
  networklayer/contract/IPv4Address.h
$O/transport/tcp/TCPConnectionRcvSegment.o: transport/tcp/TCPConnectionRcvSegment.cc \
  networklayer/contract/IPv4Address.h \
  transport/tcp_common/TCPSegment.h \
  base/ByteArray_m.h \
  transport/contract/TCPCommand_m.h \
  base/ILifecycle.h \
  transport/tcp/TCPConnection.h \
  transport/tcp/TCP.h \
  base/Compat.h \
  transport/tcp/TCPSendQueue.h \
  transport/tcp/TCPAlgorithm.h \
  transport/tcp/TCPReceiveQueue.h \
  transport/tcp_common/TCPSegment_m.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCPSACKRexmitQueue.h \
  base/ByteArray.h \
  networklayer/contract/IPvXAddress.h
$O/transport/tcp/TCPConnectionSackUtil.o: transport/tcp/TCPConnectionSackUtil.cc \
  transport/tcp/TCP.h \
  transport/tcp/TCPConnection.h \
  base/ILifecycle.h \
  transport/contract/TCPCommand_m.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp/TCPSACKRexmitQueue.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/TCPAlgorithm.h \
  transport/tcp/TCPReceiveQueue.h \
  transport/tcp/TCPSendQueue.h \
  base/Compat.h
$O/transport/tcp/TCPConnectionUtil.o: transport/tcp/TCPConnectionUtil.cc \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  transport/tcp_common/TCPSegment.h \
  base/ByteArray_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPv6ControlInfo.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  transport/tcp/TCPConnection.h \
  base/ILifecycle.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/TCPReceiveQueue.h \
  transport/tcp/TCPAlgorithm.h \
  transport/tcp/TCPSendQueue.h \
  transport/tcp_common/TCPSegment_m.h \
  base/Compat.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCPSACKRexmitQueue.h \
  base/ByteArray.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h
$O/transport/tcp/TCPSACKRexmitQueue.o: transport/tcp/TCPSACKRexmitQueue.cc \
  networklayer/contract/IPv4Address.h \
  transport/tcp_common/TCPSegment.h \
  base/ByteArray_m.h \
  transport/tcp/TCPConnection.h \
  transport/contract/TCPCommand_m.h \
  base/ILifecycle.h \
  transport/tcp/TCP.h \
  base/Compat.h \
  transport/tcp_common/TCPSegment_m.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  base/ByteArray.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCPSACKRexmitQueue.h
$O/transport/tcp/flavours/DumbTCP.o: transport/tcp/flavours/DumbTCP.cc \
  base/Compat.h \
  transport/tcp/flavours/DumbTCP.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/TCPAlgorithm.h \
  base/INETDefs.h \
  base/ByteArray.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp_common/TCPSegment.h \
  base/ByteArray_m.h \
  transport/tcp/TCPConnection.h \
  base/ILifecycle.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/TCP.h
$O/transport/tcp/flavours/TCPBaseAlg.o: transport/tcp/flavours/TCPBaseAlg.cc \
  networklayer/contract/IPvXAddress.h \
  base/ByteArray.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCPSACKRexmitQueue.h \
  base/INETDefs.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/TCPAlgorithm.h \
  base/Compat.h \
  transport/tcp/TCP.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  transport/contract/TCPCommand_m.h \
  base/ILifecycle.h \
  transport/tcp/TCPConnection.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment.h \
  networklayer/contract/IPv4Address.h
$O/transport/tcp/flavours/TCPNewReno.o: transport/tcp/flavours/TCPNewReno.cc \
  transport/tcp/TCPAlgorithm.h \
  transport/tcp_common/TCPSegment_m.h \
  base/Compat.h \
  transport/tcp/flavours/TCPNewReno.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h \
  base/ByteArray.h \
  base/INETDefs.h \
  transport/tcp/flavours/TCPTahoeRenoFamily.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  transport/tcp/TCP.h \
  transport/contract/TCPCommand_m.h \
  base/ILifecycle.h \
  transport/tcp/TCPConnection.h
$O/transport/tcp/flavours/TCPNoCongestionControl.o: transport/tcp/flavours/TCPNoCongestionControl.cc \
  base/INETDefs.h \
  base/ByteArray.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv6Address.h \
  base/Compat.h \
  transport/tcp/flavours/TCPNoCongestionControl.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/TCPAlgorithm.h \
  transport/tcp/TCPConnection.h \
  transport/contract/TCPCommand_m.h \
  base/ILifecycle.h \
  transport/tcp/TCP.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment.h
$O/transport/tcp/flavours/TCPReno.o: transport/tcp/flavours/TCPReno.cc \
  transport/tcp/flavours/TCPReno.h \
  base/Compat.h \
  transport/tcp/TCPAlgorithm.h \
  transport/tcp_common/TCPSegment_m.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  base/ByteArray.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp/flavours/TCPTahoeRenoFamily.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment.h \
  transport/contract/TCPCommand_m.h \
  base/ILifecycle.h \
  transport/tcp/TCPConnection.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  transport/tcp/TCP.h
$O/transport/tcp/flavours/TCPSegmentTransmitInfoList.o: transport/tcp/flavours/TCPSegmentTransmitInfoList.cc \
  base/Compat.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/TCPAlgorithm.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  base/ByteArray.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment.h \
  transport/tcp/flavours/TCPSegmentTransmitInfoList.h \
  transport/contract/TCPCommand_m.h \
  base/ILifecycle.h \
  transport/tcp/TCPConnection.h \
  transport/tcp/TCP.h \
  transport/tcp/flavours/TCPBaseAlg.h
$O/transport/tcp/flavours/TCPTahoe.o: transport/tcp/flavours/TCPTahoe.cc \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/TCPAlgorithm.h \
  base/Compat.h \
  base/ByteArray.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  transport/tcp_common/TCPSegment.h \
  base/ByteArray_m.h \
  transport/tcp/flavours/TCPTahoeRenoFamily.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp/TCP.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  transport/tcp/flavours/TCPTahoe.h \
  transport/tcp/TCPConnection.h \
  base/ILifecycle.h \
  transport/contract/TCPCommand_m.h
$O/transport/tcp/flavours/TCPTahoeRenoFamily.o: transport/tcp/flavours/TCPTahoeRenoFamily.cc \
  networklayer/contract/IPv6Address.h \
  base/ByteArray.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  transport/tcp/TCPAlgorithm.h \
  transport/tcp_common/TCPSegment_m.h \
  base/Compat.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  transport/tcp/TCP.h \
  transport/tcp/TCPConnection.h \
  base/ILifecycle.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/flavours/TCPTahoeRenoFamily.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment.h \
  networklayer/contract/IPv4Address.h
$O/transport/tcp/flavours/TCPVegas.o: transport/tcp/flavours/TCPVegas.cc \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/TCPAlgorithm.h \
  transport/tcp/flavours/TCPVegas.h \
  base/Compat.h \
  base/ByteArray.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp/TCP.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  transport/tcp/flavours/TCPSegmentTransmitInfoList.h \
  transport/contract/TCPCommand_m.h \
  base/ILifecycle.h \
  transport/tcp/TCPConnection.h
$O/transport/tcp/flavours/TCPWestwood.o: transport/tcp/flavours/TCPWestwood.cc \
  base/Compat.h \
  transport/tcp/flavours/TCPWestwood.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/TCPAlgorithm.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  base/ByteArray.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp_common/TCPSegment.h \
  base/ByteArray_m.h \
  transport/tcp/flavours/TCPSegmentTransmitInfoList.h \
  transport/contract/TCPCommand_m.h \
  base/ILifecycle.h \
  transport/tcp/TCPConnection.h \
  transport/tcp/TCP.h \
  transport/tcp/flavours/TCPBaseAlg.h
$O/transport/tcp/queues/TCPByteStreamRcvQueue.o: transport/tcp/queues/TCPByteStreamRcvQueue.cc \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  base/ByteArray.h \
  networklayer/contract/IPvXAddress.h \
  base/Compat.h \
  transport/tcp/TCPReceiveQueue.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/TCPConnection.h \
  base/ILifecycle.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/queues/TCPVirtualDataRcvQueue.h \
  base/ByteArrayMessage.h \
  base/ByteArrayMessage_m.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp/queues/TCPByteStreamRcvQueue.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment.h
$O/transport/tcp/queues/TCPByteStreamSendQueue.o: transport/tcp/queues/TCPByteStreamSendQueue.cc \
  transport/tcp_common/TCPSegment.h \
  base/ByteArray_m.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp/TCP.h \
  base/ByteArrayMessage_m.h \
  base/ByteArrayMessage.h \
  transport/tcp/TCPConnection.h \
  transport/contract/TCPCommand_m.h \
  base/ILifecycle.h \
  transport/tcp_common/TCPSegment_m.h \
  base/ByteArrayBuffer.h \
  transport/tcp/TCPSendQueue.h \
  base/Compat.h \
  networklayer/contract/IPvXAddress.h \
  base/ByteArray.h \
  transport/tcp/queues/TCPByteStreamSendQueue.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h
$O/transport/tcp/queues/TCPMsgBasedRcvQueue.o: transport/tcp/queues/TCPMsgBasedRcvQueue.cc \
  networklayer/contract/IPv4Address.h \
  transport/tcp_common/TCPSegment.h \
  base/ByteArray_m.h \
  transport/tcp/TCPConnection.h \
  transport/contract/TCPCommand_m.h \
  base/ILifecycle.h \
  transport/tcp/queues/TCPVirtualDataRcvQueue.h \
  transport/tcp/TCP.h \
  base/Compat.h \
  transport/tcp/TCPReceiveQueue.h \
  transport/tcp_common/TCPSegment_m.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h \
  base/ByteArray.h \
  transport/tcp/queues/TCPMsgBasedRcvQueue.h
$O/transport/tcp/queues/TCPMsgBasedSendQueue.o: transport/tcp/queues/TCPMsgBasedSendQueue.cc \
  base/Compat.h \
  transport/tcp/TCPSendQueue.h \
  transport/tcp_common/TCPSegment_m.h \
  base/INETDefs.h \
  transport/tcp/queues/TCPMsgBasedSendQueue.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h \
  base/ByteArray.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment.h \
  transport/tcp/TCPConnection.h \
  transport/contract/TCPCommand_m.h \
  base/ILifecycle.h \
  transport/tcp/TCP.h
$O/transport/tcp/queues/TCPVirtualDataRcvQueue.o: transport/tcp/queues/TCPVirtualDataRcvQueue.cc \
  transport/tcp/TCPConnection.h \
  base/ILifecycle.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/TCP.h \
  transport/tcp/queues/TCPVirtualDataRcvQueue.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  base/ByteArray.h \
  networklayer/contract/IPv6Address.h \
  base/Compat.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/TCPReceiveQueue.h
$O/transport/tcp/queues/TCPVirtualDataSendQueue.o: transport/tcp/queues/TCPVirtualDataSendQueue.cc \
  networklayer/contract/IPv6Address.h \
  base/ByteArray.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  transport/tcp/TCPSendQueue.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/queues/TCPVirtualDataSendQueue.h \
  base/Compat.h \
  transport/tcp/TCP.h \
  transport/contract/TCPCommand_m.h \
  base/ILifecycle.h \
  transport/tcp/TCPConnection.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment.h \
  networklayer/contract/IPv4Address.h
$O/transport/tcp_common/TCPSegment.o: transport/tcp_common/TCPSegment.cc \
  transport/tcp_common/TCPSegment.h \
  base/ByteArray_m.h \
  base/Compat.h \
  transport/tcp_common/TCPSegment_m.h \
  base/INETDefs.h \
  base/ByteArray.h
$O/transport/tcp_common/TCPSpoof.o: transport/tcp_common/TCPSpoof.cc \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  transport/tcp_common/TCPSpoof.h \
  linklayer/contract/MACAddress.h \
  base/Compat.h \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/INETDefs.h \
  base/ByteArray.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv6Address.h
$O/transport/udp/UDP.o: transport/udp/UDP.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/icmpv6/ICMPv6Access.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPvXAddress.h \
  transport/udp/UDPPacket_m.h \
  base/INotifiable.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  transport/contract/UDPControlInfo.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/icmpv6/ICMPv6.h \
  status/NodeStatus.h \
  base/Compat.h \
  networklayer/ipv4/ICMPMessage.h \
  base/ModuleAccess.h \
  transport/udp/UDPPacket.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPSocket.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/NodeOperations.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/LifecycleOperation.h \
  networklayer/ipv4/ICMPAccess.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ILifecycle.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/ICMP.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPv6ControlInfo.h \
  transport/udp/UDP.h
$O/util/Delayer.o: util/Delayer.cc \
  util/Delayer.h \
  base/Compat.h \
  base/INETDefs.h
$O/util/Macho.o: util/Macho.cc \
  util/Macho.h
$O/util/MessageChecker.o: util/MessageChecker.cc \
  base/INETDefs.h \
  base/Compat.h \
  util/MessageChecker.h
$O/util/NetAnimTrace.o: util/NetAnimTrace.cc \
  mobility/contract/IMobility.h \
  util/FWMath.h \
  util/NetAnimTrace.h \
  base/Coord.h \
  base/INETDefs.h \
  base/Compat.h \
  base/ModuleAccess.h
$O/util/OrdinalBasedDropper.o: util/OrdinalBasedDropper.cc \
  base/INETDefs.h \
  base/Compat.h \
  util/OrdinalBasedDropper.h
$O/util/OrdinalBasedDuplicator.o: util/OrdinalBasedDuplicator.cc \
  base/INETDefs.h \
  util/OrdinalBasedDuplicator.h \
  base/Compat.h
$O/util/PacketDump.o: util/PacketDump.cc \
  base/ModuleAccess.h \
  networklayer/ipv4/ICMPMessage.h \
  base/Compat.h \
  util/PacketDump.h \
  networklayer/common/InterfaceTable.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTP.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/arp/ARPPacket_m.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  transport/sctp/SCTPMessage_m.h \
  base/ByteArray.h \
  networklayer/contract/IPvXAddress.h \
  transport/udp/UDPPacket_m.h \
  transport/sctp/SCTPReceiveStream.h \
  networklayer/common/InterfaceTableAccess.h \
  base/NotifierConsts.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv4Address.h \
  base/NotificationBoard.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment.h \
  transport/sctp/SCTPGapList.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/ILifecycle.h \
  transport/contract/UDPSocket.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  transport/sctp/SCTPQueue.h \
  transport/sctp/SCTPSendStream.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  transport/sctp/SCTPMessage.h \
  linklayer/contract/MACAddress.h
$O/util/PatternMatcher.o: util/PatternMatcher.cc \
  base/INETDefs.h \
  base/Compat.h \
  util/PatternMatcher.h
$O/util/PcapDump.o: util/PcapDump.cc \
  util/PcapDump.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  util/headerserializers/ipv6/IPv6Serializer.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPv6Address.h \
  util/headerserializers/ipv4/IPv4Serializer.h \
  transport/udp/UDPPacket_m.h \
  base/Compat.h
$O/util/PcapRecorder.o: util/PcapRecorder.cc \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6Datagram.h \
  util/PacketDump.h \
  base/Compat.h \
  util/PcapDump.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPv4Address.h \
  util/PcapRecorder.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPProtocolId_m.h
$O/util/TCPDump.o: util/TCPDump.cc \
  networklayer/ipv4/IPv4Datagram_m.h \
  util/PcapDump.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPv4Address.h \
  util/TCPDump.h \
  base/INETDefs.h \
  base/Compat.h \
  util/PacketDump.h
$O/util/ThruputMeter.o: util/ThruputMeter.cc \
  base/INETDefs.h \
  base/Compat.h \
  util/ThruputMeter.h
$O/util/ThruputMeteringChannel.o: util/ThruputMeteringChannel.cc \
  base/INETDefs.h \
  base/Compat.h \
  util/ThruputMeteringChannel.h
$O/util/XMLUtils.o: util/XMLUtils.cc \
  networklayer/contract/IPv4Address.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h \
  util/XMLUtils.h \
  base/Compat.h \
  networklayer/contract/IPvXAddressResolver.h
$O/util/common.o: util/common.cc \
  util/common.h \
  base/Compat.h \
  base/INETDefs.h
$O/util/int128.o: util/int128.cc \
  base/INETDefs.h \
  base/Compat.h \
  util/int128.h
$O/util/opp_utils.o: util/opp_utils.cc \
  base/Compat.h \
  util/opp_utils.h \
  base/INETDefs.h
$O/util/headerserializers/TCPIPchecksum.o: util/headerserializers/TCPIPchecksum.cc \
  base/INETDefs.h \
  base/Compat.h \
  util/headerserializers/TCPIPchecksum.h
$O/util/headerserializers/ipv4/ICMPSerializer.o: util/headerserializers/ipv4/ICMPSerializer.cc \
  util/headerserializers/headers/in_systm.h \
  util/headerserializers/ipv4/IPv4Serializer.h \
  util/headerserializers/ipv4/headers/ip_icmp.h \
  base/INETDefs.h \
  util/headerserializers/ipv4/headers/ip.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  util/headerserializers/TCPIPchecksum.h \
  networklayer/ipv4/ICMPMessage_m.h \
  util/headerserializers/headers/defs.h \
  util/headerserializers/headers/bsdint.h \
  networklayer/contract/IPProtocolId_m.h \
  applications/pingapp/PingPayload_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  util/headerserializers/headers/in.h \
  networklayer/contract/IPv4Address.h \
  util/headerserializers/ipv4/ICMPSerializer.h
$O/util/headerserializers/ipv4/IGMPSerializer.o: util/headerserializers/ipv4/IGMPSerializer.cc \
  util/headerserializers/headers/bsdint.h \
  util/headerserializers/headers/defs.h \
  util/headerserializers/ipv4/headers/igmp.h \
  util/headerserializers/TCPIPchecksum.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  util/headerserializers/headers/in.h \
  networklayer/contract/IPv4Address.h \
  util/headerserializers/ipv4/IGMPSerializer.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  base/INETDefs.h \
  util/headerserializers/headers/in_systm.h \
  util/headerserializers/ipv4/IPv4Serializer.h \
  base/Compat.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/ipv4/IGMPMessage_m.h
$O/util/headerserializers/ipv4/IPv4Serializer.o: util/headerserializers/ipv4/IPv4Serializer.cc \
  base/INETDefs.h \
  util/headerserializers/sctp/SCTPSerializer.h \
  util/headerserializers/udp/UDPSerializer.h \
  networklayer/contract/IPv6Address.h \
  util/headerserializers/ipv4/IPv4Serializer.h \
  transport/udp/UDPPacket_m.h \
  util/headerserializers/headers/in_systm.h \
  base/ByteArray.h \
  networklayer/contract/IPvXAddress.h \
  transport/sctp/SCTPMessage_m.h \
  transport/udp/UDPPacket.h \
  base/Compat.h \
  networklayer/ipv4/IGMPMessage_m.h \
  util/headerserializers/ipv4/headers/ip.h \
  transport/tcp_common/TCPSegment_m.h \
  util/headerserializers/headers/bsdint.h \
  util/headerserializers/headers/defs.h \
  transport/sctp/SCTPMessage.h \
  util/headerserializers/tcp/headers/tcp.h \
  networklayer/ipv4/ICMPMessage_m.h \
  util/headerserializers/TCPIPchecksum.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  util/headerserializers/ipv4/ICMPSerializer.h \
  networklayer/contract/IPv4Address.h \
  util/headerserializers/headers/in.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  util/headerserializers/tcp/TCPSerializer.h \
  base/ByteArray_m.h \
  util/headerserializers/ipv4/IGMPSerializer.h \
  transport/tcp_common/TCPSegment.h
$O/util/headerserializers/ipv6/IPv6Serializer.o: util/headerserializers/ipv6/IPv6Serializer.cc \
  base/Compat.h \
  transport/udp/UDPPacket.h \
  transport/tcp_common/TCPSegment_m.h \
  util/headerserializers/ipv6/headers/ip6.h \
  base/INETDefs.h \
  transport/udp/UDPPacket_m.h \
  base/ByteArray.h \
  util/headerserializers/headers/in_systm.h \
  networklayer/contract/IPvXAddress.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6Datagram.h \
  util/headerserializers/udp/UDPSerializer.h \
  util/headerserializers/sctp/SCTPSerializer.h \
  util/headerserializers/headers/in.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp_common/TCPSegment.h \
  util/headerserializers/tcp/TCPSerializer.h \
  base/ByteArray_m.h \
  networklayer/contract/IPProtocolId_m.h \
  util/headerserializers/headers/defs.h \
  util/headerserializers/TCPIPchecksum.h \
  util/headerserializers/tcp/headers/tcp.h \
  util/headerserializers/ipv6/IPv6Serializer.h \
  transport/sctp/SCTPMessage.h \
  networklayer/ipv6/IPv6Datagram_m.h
$O/util/headerserializers/sctp/SCTPSerializer.o: util/headerserializers/sctp/SCTPSerializer.cc \
  networklayer/common/InterfaceTable.h \
  util/headerserializers/sctp/headers/sctp.h \
  base/ModuleAccess.h \
  base/Compat.h \
  transport/sctp/SCTP.h \
  networklayer/common/InterfaceEntry.h \
  util/headerserializers/ipv4/headers/ip.h \
  transport/sctp/SCTPAssociation.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  util/headerserializers/sctp/SCTPSerializer.h \
  networklayer/common/InterfaceTableAccess.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  util/headerserializers/ipv4/IPv4Serializer.h \
  base/INotifiable.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPReceiveStream.h \
  util/headerserializers/headers/in_systm.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  util/headerserializers/headers/in.h \
  base/NotificationBoard.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  transport/sctp/SCTPGapList.h \
  base/ILifecycle.h \
  util/headerserializers/headers/defs.h \
  transport/contract/UDPSocket.h \
  util/headerserializers/headers/bsdint.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPMessage.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  transport/sctp/SCTPQueue.h \
  networklayer/common/IInterfaceTable.h
$O/util/headerserializers/tcp/TCPSerializer.o: util/headerserializers/tcp/TCPSerializer.cc \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h \
  base/ByteArray.h \
  util/headerserializers/headers/in_systm.h \
  base/Compat.h \
  transport/tcp_common/TCPSegment_m.h \
  util/headerserializers/headers/bsdint.h \
  util/headerserializers/headers/defs.h \
  util/headerserializers/TCPIPchecksum.h \
  util/headerserializers/tcp/headers/tcp.h \
  util/headerserializers/headers/in.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/tcp_common/TCPSegment.h \
  util/headerserializers/tcp/TCPSerializer.h \
  base/ByteArray_m.h
$O/util/headerserializers/udp/UDPSerializer.o: util/headerserializers/udp/UDPSerializer.cc \
  base/ByteArray_m.h \
  util/headerserializers/headers/in.h \
  util/headerserializers/TCPIPchecksum.h \
  base/ByteArrayMessage_m.h \
  base/ByteArrayMessage.h \
  util/headerserializers/udp/headers/udp.h \
  util/headerserializers/headers/defs.h \
  util/headerserializers/headers/bsdint.h \
  base/Compat.h \
  transport/udp/UDPPacket.h \
  base/ByteArray.h \
  util/headerserializers/headers/in_systm.h \
  transport/udp/UDPPacket_m.h \
  util/headerserializers/udp/UDPSerializer.h \
  base/INETDefs.h
$O/util/messageprinters/InetPacketBytesPrinter.o: util/messageprinters/InetPacketBytesPrinter.cc \
  base/INETDefs.h \
  base/Compat.h
$O/util/messageprinters/InetPacketPrinter.o: util/messageprinters/InetPacketPrinter.cc \
  base/INETDefs.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPv6Address.h \
  base/ByteArray.h \
  networklayer/contract/IPvXAddress.h \
  transport/udp/UDPPacket_m.h \
  base/Compat.h \
  networklayer/ipv4/ICMPMessage.h \
  transport/udp/UDPPacket.h \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  applications/pingapp/PingPayload_m.h \
  transport/tcp_common/TCPSegment.h \
  base/ByteArray_m.h
$O/util/messageprinters/InetPacketPrinter2.o: util/messageprinters/InetPacketPrinter2.cc \
  networklayer/routing/rip/RIPPacket_m.h \
  transport/udp/UDPPacket.h \
  networklayer/ipv4/ICMPMessage.h \
  base/Compat.h \
  linklayer/ethernet/EtherFrame.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  transport/tcp_common/TCPSegment_m.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/INETDefs.h \
  networklayer/arp/ARPPacket_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6Datagram.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/radio/ModulationType.h \
  base/ByteArray.h \
  networklayer/contract/IPvXAddress.h \
  transport/udp/UDPPacket_m.h \
  networklayer/contract/IPv4Address.h \
  base/Coord.h \
  networklayer/contract/IPProtocolId_m.h \
  applications/pingapp/PingPayload_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/ByteArray_m.h \
  util/FWMath.h \
  transport/tcp_common/TCPSegment.h \
  linklayer/radio/AirFrame_m.h \
  linklayer/ethernet/Ethernet.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/ICMPMessage_m.h
$O/util/seapputils/seapputils.o: util/seapputils/seapputils.cc \
  util/seapputils/seapputils.h
$O/variable/Variable.o: variable/Variable.cc \
  variable/Variable.h
$O/world/annotations/AnnotationDummy.o: world/annotations/AnnotationDummy.cc \
  ./world/annotations/AnnotationDummy.h \
  base/Compat.h \
  base/INETDefs.h
$O/world/annotations/AnnotationManager.o: world/annotations/AnnotationManager.cc \
  base/Coord.h \
  util/FWMath.h \
  base/ModuleAccess.h \
  base/Compat.h \
  ./world/annotations/AnnotationManager.h \
  base/INETDefs.h
$O/world/httptools/HttpController.o: world/httptools/HttpController.cc \
  applications/httptools/HttpRandom.h \
  base/Compat.h \
  base/INETDefs.h \
  applications/httptools/HttpEventMessages_m.h \
  applications/httptools/HttpMessages_m.h \
  applications/httptools/HttpUtils.h \
  world/httptools/HttpController.h
$O/world/obstacles/Obstacle.o: world/obstacles/Obstacle.cc \
  util/FWMath.h \
  base/Coord.h \
  base/ModuleAccess.h \
  base/Compat.h \
  ./world/obstacles/Obstacle.h \
  ./world/annotations/AnnotationManager.h \
  base/INETDefs.h
$O/world/obstacles/ObstacleControl.o: world/obstacles/ObstacleControl.cc \
  ./world/obstacles/Obstacle.h \
  base/INETDefs.h \
  ./world/annotations/AnnotationManager.h \
  base/Compat.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  base/Coord.h \
  ./world/obstacles/ObstacleControl.h
$O/world/radio/ChannelAccess.o: world/radio/ChannelAccess.cc \
  mobility/contract/IMobility.h \
  world/radio/ChannelAccess.h \
  base/NotificationBoard.h \
  base/Coord.h \
  util/FWMath.h \
  base/INETDefs.h \
  base/INotifiable.h \
  base/BasicModule.h \
  base/NotifierConsts.h \
  base/ModuleAccess.h \
  base/Compat.h \
  world/radio/IChannelControl.h
$O/world/radio/ChannelControl.o: world/radio/ChannelControl.cc \
  base/Compat.h \
  world/radio/IChannelControl.h \
  base/INETDefs.h \
  linklayer/radio/ModulationType.h \
  base/Coord.h \
  util/FWMath.h \
  world/radio/ChannelControl.h \
  linklayer/radio/AirFrame_m.h
$O/world/radio/IdealChannelModel.o: world/radio/IdealChannelModel.cc \
  linklayer/radio/IdealAirFrame_m.h \
  base/Compat.h \
  base/ModuleAccess.h \
  world/radio/IdealChannelModelAccess.h \
  base/BasicModule.h \
  base/INotifiable.h \
  base/NotifierConsts.h \
  linklayer/contract/RadioState.h \
  base/INETDefs.h \
  world/radio/IdealChannelModel.h \
  util/FWMath.h \
  linklayer/radio/IdealRadio.h \
  base/NotificationBoard.h \
  base/Coord.h \
  base/ILifecycle.h
$O/world/radio/IdealChannelModelAccess.o: world/radio/IdealChannelModelAccess.cc \
  world/radio/IdealChannelModel.h \
  util/FWMath.h \
  base/NotificationBoard.h \
  base/Coord.h \
  mobility/contract/IMobility.h \
  base/Compat.h \
  base/ModuleAccess.h \
  world/radio/IdealChannelModelAccess.h \
  base/BasicModule.h \
  base/INotifiable.h \
  base/NotifierConsts.h \
  base/INETDefs.h
$O/world/scenario/ScenarioManager.o: world/scenario/ScenarioManager.cc \
  base/INETDefs.h \
  base/IScriptable.h \
  world/scenario/ScenarioManager.h \
  base/Compat.h
$O/world/traci/TraCIScenarioManager.o: world/traci/TraCIScenarioManager.cc \
  base/INETDefs.h \
  ./world/traci/TraCIScenarioManager.h \
  ./world/traci/TraCIConstants.h \
  base/ModuleAccess.h \
  base/Compat.h \
  ./mobility/single/TraCIMobility.h \
  mobility/contract/IMobility.h \
  base/Coord.h \
  util/FWMath.h \
  mobility/common/MobilityBase.h
$O/world/traci/TraCIScenarioManagerLaunchd.o: world/traci/TraCIScenarioManagerLaunchd.cc \
  base/Coord.h \
  ./world/traci/TraCIScenarioManagerLaunchd.h \
  util/FWMath.h \
  ./world/traci/TraCIConstants.h \
  base/Compat.h \
  base/ModuleAccess.h \
  base/INETDefs.h \
  ./world/traci/TraCIScenarioManager.h
