/**
 * @file	Create.cc
 * @author	Francesco Racciatti <racciatti.francesco@gmail.com>
 * @version	1.0
 * @date	2015 jun 22
 */


#include "Create.h"
#include <list>
#include "seapputils.h"

// layer 5
#include "DHCPMessage_m.h"
#include "EtherApp_m.h"
#include "HttpEventMessages_m.h"
#include "HttpMessages_m.h"
#include "HttpEventMessages_m.h"
#include "NetPerfMeter_m.h"
// already included by NetPerfMeter_m.h
//#include "SCTPMessage_m.h"
#include "PingPayload_m.h"
#include "GenericAppMsg_m.h"
#include "TrafficLightPacket_m.h"
#include "SimpleVoIPPacket_m.h"

// layer 4
#include "SCTPCommand_m.h"
#include "TCPCommand_m.h"
#include "UDPControlInfo_m.h"
#include "SCTPMessage.h"
#include "TCPSegment.h"
#include "UDPPacket.h"

// layer 3
#include "ARPPacket_m.h"
#include "BGPKeepAlive_m.h"
// already included by BGPKeepAlive_m.h
//#include "BGPHeader_m.h"
#include "BGPOpen_m.h"
#include "BGPUpdate.h"
#include "BGPASPathSegment_m.h"
#include "BGPUpdatePathAttributes_m.h"
#include "IPProtocolId_m.h"
#include "IPv4ControlInfo.h"
#include "IPv6ControlInfo.h"
#include "ICMPv6Message_m.h"
#include "IPv6NDMessage_m.h"
#include "ICMPMessage_m.h"
#include "IGMPMessage_m.h"
#include "IPv4Datagram.h"
#include "IPv6Datagram.h"
#include "IPv6ExtensionHeaders.h"
#include "LDPPacket_m.h"
#include "aodv_msg_struct.h"
#include "ControlInfoBreakLink_m.h"
#include "ControlManetRouting_m.h"
// already included by MeshControlInfo_m.h
//#include "Ieee802Ctrl_m.h"
#include "MeshControlInfo_m.h"
#include "BatmanMsg_m.h"
#include "DSDVhello_m.h"
#include "DYMO_Packet_m.h"
// already included by DYMO_UERR_m.h
//#include "DYMO_PacketBBMessage_m.h"
#include "DYMO_RERR_m.h"
// already included by DYMO_RREQ_m.h
//#include "DYMO_RM_m.h"
#include "DYMO_RREP_m.h"
#include "DYMO_RREQ_m.h"
#include "DYMO_Timeout_m.h"
#include "DYMO_UERR_m.h"
#include "OLSRpkt_m.h"
#include "OSPFPacket_m.h"
#include "AODVControlPackets_m.h"
#include "GPSR_m.h"
#include "RIPPacket_m.h"
#include "RSVPHelloMsg.h"
#include "RSVPPathMsg.h"
#include "RSVPResvMsg.h"
#include "RSVPPacket.h"
#include "LinkStatePacket_m.h"
#include "TED_m.h"
#include "MobilityHeader.h"

// layer 2
#include "Ieee802Ctrl_m.h"
#include "PhyControlInfo_m.h"
#include "EtherFrame_m.h"
#include "ExtFrame_m.h"
#include "IdealWirelessFrame_m.h"
#include "Ieee8021dBPDU_m.h"
// already included by Ieee80211Primitives_m.h
//#include "Ieee80211Frame_m.h"
//#include "Ieee80211MgmtFrames_m.h"
#include "Ieee80211Primitives_m.h"
#include "PPPFrame_m.h"
#include "AirFrame_m.h"
#include "IdealAirFrame_m.h"
#include "Radio80211aControlInfo_m.h"


CreateInfo::CreateInfo () { 

}


CreateInfo::~CreateInfo () {

}


void Create::buildNewPacket (cPacket** packet, int layer, packet_t packetType, controlInfo_t controlInfoType) const {

	switch (layer) {
		// create a packet of layer 5
		case 5: {
			buildLayer5Packet(packet, packetType);
			buildLayer5ControlInfo(packet, controlInfoType);
			break;
		}
		
		// create a packet of layer 4
		case 4: {
			buildLayer4Packet(packet, packetType);
			buildLayer4ControlInfo(packet, controlInfoType);
			break;
		}

		// create a packet of layer 3
		case 3: {
			buildLayer3Packet(packet, packetType);
			buildLayer3ControlInfo(packet, controlInfoType);
			break;
		}
		// create a packet of layer 2
		case 2: {
			buildLayer2Packet(packet, packetType);
			buildLayer2ControlInfo(packet, controlInfoType);
			break;
		}
		
	}

}		


void Create::buildLayer5Packet (cPacket** packet, packet_t packetType) const {

	switch (packetType) {

		case packet_t::CPACKET: {
			*packet = new cPacket("CreatedPacket", 0);
			break;
		}

		case packet_t::DHCP_MESSAGE: {
			*packet = new DHCPMessage("CreatedPacket", 0);
			break;
		}
		
		case packet_t::ETHER_APP_REQ: {
			*packet = new EtherAppReq("CreatedPacket", 0);
			break;
		}
		
		case packet_t::ETHER_APP_RESP: {
			*packet = new EtherAppResp("CreatedPacket", 0);
			break;
		}

		case packet_t::HTTP_BASE_MESSAGE: {
			*packet = new HttpBaseMessage("CreatedPacket", 0);
			break;
		}

		case packet_t::HTTP_REQUEST_MESSAGE: {
			*packet = new HttpRequestMessage("CreatedPacket", 0);
			break;
		}

		case packet_t::HTTP_REPLY_MESSAGE: {
			*packet = new HttpReplyMessage("CreatedPacket", 0);
			break;
		}
		
		case packet_t::HTTP_SERVER_STATUS_UPDATE_MSG: {
			*packet = new HttpServerStatusUpdateMsg("CreatedPacket", 0);
			break;
		}

		// TODO handle message properly
		case packet_t::NET_PERF_METER_TRANSMIT_TIMER: {
			opp_error("Create actually doesn't support NetPerfMeterTransmitTimer");
			break;
		}

		case packet_t::NET_PERF_METER_DATA_MESSAGE: {
			// constructor without args
			*packet = new NetPerfMeterDataMessage();
			break;
		}
		
		case packet_t::PING_PAYLOAD: {
			*packet = new PingPayload("CreatedPacket", 0);
			break;
		}

		case packet_t::GENERIC_APP_MSG: {
			*packet = new GenericAppMsg("CreatedPacket", 0);
			break;
		}
		
		case packet_t::TRAFFIC_LIGHT_BASE: {
			*packet = new TrafficLightBase("CreatedPacket", 0);
			break;
		}

		case packet_t::TRAFFIC_LIGHT_CMD: {
			*packet = new TrafficLightCmd("CreatedPacket", 0);
			break;
		}

		case packet_t::TRAFFIC_LIGHT_STATUS: {
			*packet = new TrafficLightStatus("CreatedPacket", 0);
			break;
		}

		case packet_t::SIMPLE_VOIP_PACKET: {
			*packet = new SimpleVoIPPacket("CreatedPacket", 0);
			break;
		}

		// XXX add here other layer 5 packets
	}
	
	(*packet)->addPar("isFiltered");
	(*packet)->par("isFiltered").setBoolValue(true);
	(*packet)->addPar("isApplicationPacket");
	(*packet)->par("isApplicationPacket").setBoolValue(true);
	(*packet)->addPar("isToSend");
	(*packet)->par("isToSend").setBoolValue(false);

}


void Create::buildLayer4Packet (cPacket** packet, packet_t packetType) const {

	switch (packetType) {

		case packet_t::SCTP_SIMPLE_MESSAGE: {
			*packet = new SCTPSimpleMessage("CreatedPacket", 0);
			break;
		}

		case packet_t::SCTP_CHUNK: {
			*packet = new SCTPChunk("CreatedPacket", 0);
			break;
		}

		case packet_t::SCTP_INIT_CHUNK: {
			*packet = new SCTPInitChunk("CreatedPacket", 0);
			break;
		}

		case packet_t::SCTP_INIT_ACK_CHUNK: {
			*packet = new SCTPInitAckChunk("CreatedPacket", 0);
			break;
		}

		case packet_t::SCTP_COOKIE_ECHO_CHUNK: {
			*packet = new SCTPCookieEchoChunk("CreatedPacket", 0);
			break;
		}

		case packet_t::SCTP_COOKIE: {
			*packet = new SCTPCookie("CreatedPacket", 0);
			break;
		}
		
		case packet_t::SCTP_COOKIE_ACK_CHUNK: {
			*packet = new SCTPCookieAckChunk("CreatedPacket", 0);
			break;
		}

		case packet_t::SCTP_DATA_MSG: {
			*packet = new SCTPDataMsg("CreatedPacket", 0);
			break;
		}

		case packet_t::SCTP_DATA_CHUNK: {
			*packet = new SCTPDataChunk("CreatedPacket", 0);
			break;
		}

		case packet_t::SCTP_FORWARD_TSN_CHUNK: {
			*packet = new SCTPForwardTsnChunk("CreatedPacket", 0);
			break;
		}
		
		case packet_t::SCTP_SACK_CHUNK: {
			*packet = new SCTPSackChunk("CreatedPacket", 0);
			break;
		}

		case packet_t::SCTP_ABORT_CHUNK: {
			*packet = new SCTPAbortChunk("CreatedPacket", 0);
			break;
		}

		case packet_t::SCTP_HEARTBEAT_CHUNK: {
			*packet = new SCTPHeartbeatChunk("CreatedPacket", 0);
			break;
		}
		
		case packet_t::SCTP_HEARTBEAT_ACK_CHUNK: {
			*packet = new SCTPHeartbeatAckChunk("CreatedPacket", 0);
			break;
		}

		case packet_t::SCTP_SHUTDOWN_CHUNK: {
			*packet = new SCTPShutdownChunk("CreatedPacket", 0);
			break;
		}

		case packet_t::SCTP_SHUTDOWN_ACK_CHUNK: {
			*packet = new SCTPShutdownAckChunk("CreatedPacket", 0);
			break;
		}
		
		case packet_t::SCTP_SHUTDOWN_COMPLETE_CHUNK: {
			*packet = new SCTPShutdownCompleteChunk("CreatedPacket", 0);
			break;
		}

		case packet_t::SCTP_PACKET_DROP_CHUNK: {
			*packet = new SCTPPacketDropChunk("CreatedPacket", 0);
			break;
		}

		case packet_t::SCTP_PARAMETER: {
			*packet = new SCTPParameter("CreatedPacket", 0);
			break;
		}

		case packet_t::SCTP_OUTGOING_SSN_RESET_REQUEST_PARAMETER: {
			*packet = new SCTPOutgoingSSNResetRequestParameter("CreatedPacket", 0);
			break;
		}

		case packet_t::SCTP_SSN_TSN_RESET_REQUEST_PARAMETER: {
			*packet = new SCTPSSNTSNResetRequestParameter("CreatedPacket", 0);
			break;
		}

		case packet_t::SCTP_STREAM_RESET_RESPONSE_PARAMETER: {
			*packet = new SCTPStreamResetResponseParameter("CreatedPacket", 0);
			break;
		}

		case packet_t::SCTP_RESET_TIMER: {
			*packet = new SCTPResetTimer("CreatedPacket", 0);
			break;
		}
		
		case packet_t::SCTP_AUTHENTICATION_CHUNK: {
			*packet = new SCTPAuthenticationChunk("CreatedPacket", 0);
			break;
		}
			
		case packet_t::SCTP_ADD_IP_PARAMETER: {
			*packet = new SCTPAddIPParameter("CreatedPacket", 0);
			break;
		}
		
		case packet_t::SCTP_DELETE_IP_PARAMETER: {
			*packet = new SCTPDeleteIPParameter("CreatedPacket", 0);
			break;
		}
		
		case packet_t::SCTP_SET_PRIMARY_IP_PARAMETER: {
			*packet = new SCTPSetPrimaryIPParameter("CreatedPacket", 0);
			break;
		}
		
		case packet_t::SCTP_SUPPORTED_EXTENSIONS_PARAMETER: {
			*packet = new SCTPSupportedExtensionsParameter("CreatedPacket", 0);
			break;
		}

		case packet_t::SCTP_ERROR_CAUSE_PARAMETER: {
			*packet = new SCTPErrorCauseParameter("CreatedPacket", 0);
			break;
		}
		
		case packet_t::SCTP_SIMPLE_ERROR_CAUSE_PARAMETER: {
			*packet = new SCTPSimpleErrorCauseParameter("CreatedPacket", 0);
			break;
		}
		
		case packet_t::SCTP_SUCCESS_INDICATION: {
			*packet = new SCTPSuccessIndication("CreatedPacket", 0);
			break;
		}
		
		case packet_t::NAT_MESSAGE: {
			*packet = new NatMessage("CreatedPacket", 0);
			break;
		}
		
		case packet_t::TCP_SEGMENT: {
			*packet = new TCPSegment("CreatedPacket", 0);
			break;
		}
		
		case packet_t::UDP_PACKET: {
			*packet = new UDPPacket("CreatedPacket", 0);
			break;
		}

		// XXX add here other layer 4 packets
	}

	(*packet)->addPar("isFiltered");
	(*packet)->par("isFiltered").setBoolValue(true);
	(*packet)->addPar("isApplicationPacket");
	(*packet)->par("isApplicationPacket").setBoolValue(false);
	(*packet)->addPar("isToSend");
	(*packet)->par("isToSend").setBoolValue(false);

}


void Create::buildLayer3Packet (cPacket** packet, packet_t packetType) const {

	switch (packetType) {

		case packet_t::ARP_PACKET: {
			*packet = new ARPPacket("CreatedPacket", 0);
			break;
		}
		
		case packet_t::BGP_HEADER: {
			*packet = new BGPHeader("CreatedPacket", 0);
			break;
		}

		case packet_t::BGP_KEEP_ALIVE_MESSAGE: {
			*packet = new BGPKeepAliveMessage("CreatedPacket", 0);
			break;
		}

		case packet_t::BGP_OPEN_MESSAGE: {
			*packet = new BGPOpenMessage("CreatedPacket", 0);
			break;
		}

		case packet_t::BGP_UPDATE_MESSAGE: {
			*packet = new BGPUpdateMessage("CreatedPacket", 0);
			break;
		}
		
		case packet_t::ICMPV6_MESSAGE: {
			*packet = new ICMPv6Message("CreatedPacket", 0);
			break;
		}

		case packet_t::ICMPV6_DEST_UNREACHABLE_MSG: {
			*packet = new ICMPv6DestUnreachableMsg("CreatedPacket", 0);
			break;
		}
		
		case packet_t::ICMPV6_PACKET_TOO_BIG_MSG: {
			*packet = new ICMPv6PacketTooBigMsg("CreatedPacket", 0);
			break;
		}
		
		case packet_t::ICMPV6_TIME_EXCEEDED_MSG: {
			*packet = new ICMPv6TimeExceededMsg("CreatedPacket", 0);
			break;
		}
		
		case packet_t::ICMPV6_PARAM_PROBLEM_MSG: {
			*packet = new ICMPv6ParamProblemMsg("CreatedPacket", 0);
			break;
		}
		
		case packet_t::ICMPV6_ECHO_REQUEST_MSG: {
			*packet = new ICMPv6EchoRequestMsg("CreatedPacket", 0);
			break;
		}
		
		case packet_t::ICMPV6_ECHO_REPLY_MSG: {
			*packet = new ICMPv6EchoReplyMsg("CreatedPacket", 0);
			break;
		}
	
		case packet_t::IPV6_ND_MESSAGE: {
			*packet = new IPv6NDMessage("CreatedPacket", 0);
			break;
		}

		case packet_t::IPV6_ROUTER_SOLICITATION: {
			*packet = new IPv6RouterSolicitation("CreatedPacket", 0);
			break;
		}

		case packet_t::IPV6_ROUTER_ADVERTISEMENT: {
			*packet = new IPv6RouterAdvertisement("CreatedPacket", 0);
			break;
		}

		case packet_t::IPV6_NEIGHBOUR_SOLICITATION: {
			*packet = new IPv6NeighbourSolicitation("CreatedPacket", 0);
			break;
		}

		case packet_t::IPV6_NEIGHBOUR_ADVERTISEMENT: {
			*packet = new IPv6NeighbourAdvertisement("CreatedPacket", 0);
			break;
		}

		case packet_t::IPV6_REDIRECT: {
			*packet = new IPv6Redirect("CreatedPacket", 0);
			break;
		}
		
		case packet_t::ICMP_MESSAGE: {
			*packet = new ICMPMessage("CreatedPacket", 0);
			break;
		}
		
		case packet_t::IGMP_MESSAGE: {
			*packet = new IGMPMessage("CreatedPacket", 0);
			break;
		}
		
		case packet_t::IPV4_DATAGRAM: {
			*packet = new IPv4Datagram("CreatedPacket", 0);
			break;
		}
		
		case packet_t::IPV6_DATAGRAM: {
			*packet = new IPv6Datagram("CreatedPacket", 0);
			break;
		}

		case packet_t::LDP_PACKET: {
			*packet = new LDPPacket("CreatedPacket", 0);
			break;
		}

		case packet_t::LDP_LABEL_MAPPING: {
			*packet = new LDPLabelMapping("CreatedPacket", 0);
			break;
		}

		case packet_t::LDP_LABEL_REQUEST: {
			*packet = new LDPLabelRequest("CreatedPacket", 0);
			break;
		}

		case packet_t::LDP_HELLO: {
			*packet = new LDPHello("CreatedPacket", 0);
			break;
		}

		case packet_t::LDP_NOTIFY: {
			*packet = new LDPNotify("CreatedPacket", 0);
			break;
		}

		case packet_t::LDP_INI: {
			*packet = new LDPIni("CreatedPacket", 0);
			break;
		}

		case packet_t::LDP_ADDRESS: {
			*packet = new LDPAddress("CreatedPacket", 0);
			break;
		}
		
		case packet_t::AODV_MSG: {
			*packet = new AODV_msg("CreatedPacket");
			break;
		}
		
		case packet_t::RERR: {
			*packet = new AODVRERR("CreatedPacket");
			//*packet = new RERR("CreatedPacket");
			break;
		}
		
		case packet_t::RREP: {
			*packet = new AODVRREP("CreatedPacket");
			//*packet = new RREP("CreatedPacket");
			break;
		}
		
		case packet_t::RREQ: {
			*packet = new AODVRREQ("CreatedPacket");
			//*packet = new RREQ("CreatedPacket");
			break;
		}

		case packet_t::CONTROL_MANET_ROUTING: {
			*packet = new ControlManetRouting("CreatedPacket", 0);
			break;
		}

		case packet_t::BATMAN_PACKET: {
			*packet = new BatmanPacket("CreatedPacket", 0);
			break;
		}

		case packet_t::VIS_PACKET: {
			*packet = new visPacket("CreatedPacket", 0);
			break;
		}
		
		case packet_t::DSDV_HELLO_MESSAGE: {
			*packet = new DSDV_HelloMessage("CreatedPacket", 0);
			break;
		}

		case packet_t::DYMO_PACKET: {
			*packet = new DYMO_Packet("CreatedPacket", 0);
			break;
		}

		case packet_t::DYMO_PACKET_BB_MESSAGE: {
			*packet = new DYMO_PacketBBMessage("CreatedPacket", 0);
			break;
		}

		case packet_t::DYMO_RERR: {
			*packet = new DYMO_RERR("CreatedPacket", 0);
			break;
		}

		case packet_t::DYMO_RM: {
			*packet = new DYMO_RM("CreatedPacket", 0);
			break;
		}

		case packet_t::DYMO_RREP: {
			*packet = new DYMO_RREP("CreatedPacket", 0);
			break;
		}

		case packet_t::DYMO_RREQ: {
			*packet = new DYMO_RREQ("CreatedPacket", 0);
			break;
		}

		case packet_t::DYMO_TIMEOUT: {
			opp_error("Create actually doesn't support DYMO_Timeout");
			break;
		}

		case packet_t::DYMO_UERR: {
			*packet = new DYMO_UERR("CreatedPacket", 0);
			break;
		}
		
		case packet_t::OLSR_PKT: {
			*packet = new OLSR_pkt("CreatedPacket", 0);
			break;
		}
		
		case packet_t::OSPF_PACKET: {
			*packet = new OSPFPacket("CreatedPacket", 0);
			break;
		}
		
		case packet_t::OSPF_HELLO_PACKET: {
			*packet = new OSPFHelloPacket("CreatedPacket", 0);
			break;
		}
		
		case packet_t::OSPF_DATABASE_DESCRIPTION_PACKET: {
			*packet = new OSPFDatabaseDescriptionPacket("CreatedPacket", 0);
			break;
		}
		
		case packet_t::OSPF_LINK_STATE_REQUEST_PACKET: {
			*packet = new OSPFLinkStateRequestPacket("CreatedPacket", 0);
			break;
		}
		
		case packet_t::OSPF_LINK_STATE_UPDATE_PACKET: {
			*packet = new OSPFLinkStateUpdatePacket("CreatedPacket", 0);
			break;
		}
		
		case packet_t::OSPF_LINK_STATE_ACKNOWLEDGEMENT_PACKET: {
			*packet = new OSPFLinkStateAcknowledgementPacket("CreatedPacket", 0);
			break;
		}

		case packet_t::AODV_CONTROL_PACKET: {
			*packet = new AODVControlPacket("CreatedPacket", 0);
			break;
		}
		
		case packet_t::AODV_RREQ: {
			*packet = new AODVRREQ("CreatedPacket");
			break;
		}
		
		case packet_t::AODV_RREP: {
			*packet = new AODVRREP("CreatedPacket");
			break;
		}
		
		case packet_t::AODV_RERR: {
			*packet = new AODVRERR("CreatedPacket");
			break;
		}
		
		case packet_t::AODV_RREP_ACK: {
			*packet = new AODVRREPACK("CreatedPacket");
			break;
		}
		
		case packet_t::WAIT_FOR_RREP: {
			opp_error("Create actually doesn't support WaitForRREP");
			break;
		}

		case packet_t::GPSR_BEACON: {
			*packet = new GPSRBeacon("CreatedPacket", 0);
			break;
		}

		case packet_t::GPSR_PACKET: {
			*packet = new GPSRPacket("CreatedPacket", 0);
			break;
		}
		
		case packet_t::RIP_PACKET: {
			*packet = new RIPPacket("CreatedPacket", 0);
			break;
		}

		case packet_t::RSVP_MESSAGE: {
			*packet = new RSVPMessage("CreatedPacket", 0);
			break;
		}

		case packet_t::RSVP_HELLO_MSG: {
			*packet = new RSVPHelloMsg("CreatedPacket", 0);
			break;
		}

		case packet_t::RSVP_PACKET: {
			*packet = new RSVPPacket("CreatedPacket", 0);
			break;
		}

		case packet_t::RSVP_PATH_MSG: {
			*packet = new RSVPPathMsg("CreatedPacket", 0);
			break;
		}

		case packet_t::RSVP_PATH_TEAR: {
			*packet = new RSVPPathTear("CreatedPacket", 0);
			break;
		}

		case packet_t::RSVP_PATH_ERROR: {
			*packet = new RSVPPathError("CreatedPacket", 0);
			break;
		}

		case packet_t::RSVP_RESV_MSG: {
			*packet = new RSVPResvMsg("CreatedPacket", 0);
			break;
		}

		case packet_t::RSVP_RESV_TEAR: {
			*packet = new RSVPResvTear("CreatedPacket", 0);
			break;
		}

		case packet_t::RSVP_RESV_ERROR: {
			*packet = new RSVPResvError("CreatedPacket", 0);
			break;
		}
		
		case packet_t::LINK_STATE_MSG: {
			*packet = new LinkStateMsg("CreatedPacket", 0);
			break;
		}
		
		case packet_t::MOBILITY_HEADER: {
			*packet = new MobilityHeader("CreatedPacket", 0);
			break;
		}

		case packet_t::BINDING_UPDATE: {
			*packet = new BindingUpdate("CreatedPacket", 0);
			break;
		}

		case packet_t::BINDING_ACKNOWLEDGEMENT: {
			*packet = new BindingAcknowledgement("CreatedPacket", 0);
			break;
		}

		case packet_t::BINDING_ERROR: {
			*packet = new BindingError("CreatedPacket", 0);
			break;
		}

		case packet_t::HOME_TEST_INIT: {
			*packet = new HomeTestInit("CreatedPacket", 0);
			break;
		}

		case packet_t::HOME_TEST: {
			*packet = new HomeTest("CreatedPacket", 0);
			break;
		}

		case packet_t::CARE_OF_TEST_INIT: {
			*packet = new CareOfTestInit("CreatedPacket", 0);
			break;
		}

		case packet_t::CARE_OF_TEST: {
			*packet = new CareOfTest("CreatedPacket", 0);
			break;
		}

		case packet_t::BINDING_REFRESH_REQUEST: {
			*packet = new BindingRefreshRequest("CreatedPacket", 0);
			break;
		}
	
		// XXX add here other layer 3 packets
		
	}

	(*packet)->addPar("isFiltered");
	(*packet)->par("isFiltered").setBoolValue(true);
	(*packet)->addPar("isApplicationPacket");
	(*packet)->par("isApplicationPacket").setBoolValue(false);
	(*packet)->addPar("isToSend");
	(*packet)->par("isToSend").setBoolValue(false);

}


void Create::buildLayer2Packet (cPacket** packet, packet_t packetType) const {

	switch (packetType) {

		case packet_t::ETHER_TRAFFIC: {
			*packet = new EtherTraffic("CreatedPacket", 0);
			break;
		}

		case packet_t::ETHER_JAM: {
			*packet = new EtherJam("CreatedPacket", 0);
			break;
		}

		case packet_t::ETHER_FRAME: {
			*packet = new EtherFrame("CreatedPacket", 0);
			break;
		}

		case packet_t::ETHERNET_II_FRAME: {
			*packet = new EthernetIIFrame("CreatedPacket", 0);
			break;
		}

		case packet_t::ETHER_FRAME_WITH_LLC: {
			*packet = new EtherFrameWithLLC("CreatedPacket", 0);
			break;
		}

		case packet_t::ETHER_FRAME_WITH_SNAP: {
			*packet = new EtherFrameWithSNAP("CreatedPacket", 0);
			break;
		}

		case packet_t::ETHER_PAUSE_FRAME: {
			*packet = new EtherPauseFrame("CreatedPacket", 0);
			break;
		}

		case packet_t::ETHERNET_1Q_TAG: {
			*packet = new Ethernet1QTag("CreatedPacket", 0);
			break;
		}

		case packet_t::ETHERNET_1AH_ITAG: {
			*packet = new Ethernet1ahITag("CreatedPacket", 0);
			break;
		}
		
		case packet_t::EXT_FRAME: {
			opp_error("Create actually doesn't support ExtFrame");
			break;
		}

		case packet_t::IDEAL_WIRELESS_FRAME: {
			*packet = new IdealWirelessFrame("CreatedPacket", 0);
			break;
		}
		
		case packet_t::BPDU: {
			*packet = new BPDU("CreatedPacket", 0);
			break;
		}
		
		case packet_t::IEEE80211_FRAME: {
			*packet = new Ieee80211Frame("CreatedPacket", 0);
			break;
		}
		
		case packet_t::IEEE80211_ONE_ADDRESS_FRAME: {
			*packet = new Ieee80211OneAddressFrame("CreatedPacket", 0);
			break;
		}
		
		case packet_t::IEEE80211_ACK_FRAME: {
			*packet = new Ieee80211ACKFrame("CreatedPacket", 0);
			break;
		}
		
		case packet_t::IEEE80211_TWO_ADDRESS_FRAME: {
			*packet = new Ieee80211TwoAddressFrame("CreatedPacket", 0);
			break;
		}
		
		case packet_t::IEEE80211_RTS_FRAME: {
			*packet = new Ieee80211RTSFrame("CreatedPacket", 0);
			break;
		}
		
		case packet_t::IEEE80211_CTS_FRAME: {
			*packet = new Ieee80211CTSFrame("CreatedPacket", 0);
			break;
		}
		
		case packet_t::IEEE80211_DATE_OR_MGMT_FRAME: {
			*packet = new Ieee80211DataOrMgmtFrame("CreatedPacket", 0);
			break;
		}
		
		case packet_t::IEEE80211_DATA_FRAME: {
			*packet = new Ieee80211DataFrame("CreatedPacket", 0);
			break;
		}
		
		case packet_t::IEEE80211_DATA_FRAME_WITH_SNAP: {
			*packet = new Ieee80211DataFrameWithSNAP("CreatedPacket", 0);
			break;
		}
		
		case packet_t::IEEE80211_MANAGEMENT_FRAME: {
			*packet = new Ieee80211ManagementFrame("CreatedPacket", 0);
			break;
		}
		
		case packet_t::PPP_FRAME: {
			*packet = new PPPFrame("CreatedPacket", 0);
			break;
		}
		
		case packet_t::AIR_FRAME: {
			*packet = new AirFrame("CreatedPacket", 0);
			break;
		}
		
		case packet_t::IDEAL_AIR_FRAME: {
			*packet = new IdealAirFrame("CreatedPacket", 0);
			break;
		}

		// XXX add here other layer 2 packets

	}

	(*packet)->addPar("isFiltered");
	(*packet)->par("isFiltered").setBoolValue(true);
	(*packet)->addPar("isApplicationPacket");
	(*packet)->par("isApplicationPacket").setBoolValue(false);
	(*packet)->addPar("isToSend");
	(*packet)->par("isToSend").setBoolValue(false);

}


void Create::buildLayer5ControlInfo (cPacket** packet, controlInfo_t controlInfoType) const {

	// packets may not have control info
	if (controlInfoType == controlInfo_t::NONE) {
		return;	
	}
	
	cObject* controlInfo = nullptr;
	
	switch (controlInfoType) {
	
	
		case controlInfo_t::SCTP_COMMAND: {
			controlInfo = new SCTPCommand();
			break;
		}

		case controlInfo_t::SCTP_ERROR_INFO: {
			controlInfo = new SCTPErrorInfo();
			break;
		}

		case controlInfo_t::SCTP_OPEN_COMMAND: {
			controlInfo = new SCTPOpenCommand();
			break;
		}

		case controlInfo_t::SCTP_SEND_COMMAND: {
			controlInfo = new SCTPSendCommand();
			break;
		}

		case controlInfo_t::SCTP_CONNECT_INFO: {
			controlInfo = new SCTPConnectInfo();
			break;
		}

		case controlInfo_t::SCTP_STATUS_INFO: {
			controlInfo = new SCTPStatusInfo();
			break;
		}

		case controlInfo_t::SCTP_PATH_INFO: {
			controlInfo = new SCTPPathInfo();
			break;
		}

		case controlInfo_t::SCTP_RESET_INFO: {
			controlInfo = new SCTPResetInfo();
			break;
		}

		case controlInfo_t::SCTP_INFO: {
			controlInfo = new SCTPInfo();
			break;
		}
		
		case controlInfo_t::SCTP_RCV_COMMAND: {
			controlInfo = new SCTPRcvCommand();
			break;
		}

		case controlInfo_t::SCTP_SEND_QUEUE_ABATED: {
			controlInfo = new SCTPSendQueueAbated();
			break;
		}
			
		case controlInfo_t::TCP_COMMAND: {
			controlInfo = new TCPCommand();		
			break;		
		}
		
		case controlInfo_t::TCP_ERROR_INFO: {
			controlInfo = new TCPErrorInfo();
			break;		
		}

		case controlInfo_t::TCP_OPEN_COMMAND: {
			controlInfo = new TCPOpenCommand();
			break;		
		}

		case controlInfo_t::TCP_SEND_COMMAND: {
			controlInfo = new TCPSendCommand();
			break;		
		}

		case controlInfo_t::TCP_CONNECT_INFO: {
			controlInfo = new TCPConnectInfo();
			break;		
		}

		case controlInfo_t::TCP_STATUS_INFO: {
			controlInfo = new TCPStatusInfo();
			break;
		}
		
		case controlInfo_t::UDP_CONTROL_INFO: {
			controlInfo = new UDPControlInfo();
			break;
		}
		
		case controlInfo_t::UDP_BIND_COMMAND: {
			controlInfo = new UDPBindCommand();
			break;
		}

		case controlInfo_t::UDP_CONNECT_COMMAND: {
			controlInfo = new UDPConnectCommand();
			break;
		}
		
		case controlInfo_t::UDP_SEND_COMMAND: {
			controlInfo = new UDPSendCommand();
			break;
		}
		
		case controlInfo_t::UDP_CLOSE_COMMAND: {
			controlInfo = new UDPCloseCommand();
			break;
		}
		
		case controlInfo_t::UDP_DATA_INDICATION: {
			controlInfo = new UDPDataIndication();
			break;
		}
		
		case controlInfo_t::UDP_ERROR_INDICATION: {
			controlInfo = new UDPErrorIndication();
			break;
		}
		
		case controlInfo_t::UDP_SET_OPTION_COMMAND: {
			controlInfo = new UDPSetOptionCommand();
			break;
		}
				
		case controlInfo_t::UDP_SET_TIME_TO_LIVE_COMMAND: {
			controlInfo = new UDPSetTimeToLiveCommand();
			break;
		}
		
		case controlInfo_t::UDP_SET_TYPE_OF_SERVICE_COMMAND: {
			controlInfo = new UDPSetTypeOfServiceCommand();
			break;
		}
		
		case controlInfo_t::UDP_SET_BROADCAST_COMMAND: {
			controlInfo = new UDPSetBroadcastCommand();
			break;
		}
		
		case controlInfo_t::UDP_SET_MULTICAST_INTERFACE_COMMAND: {
			controlInfo = new UDPSetMulticastInterfaceCommand();
			break;
		}
		
		case controlInfo_t::UDP_SET_MULTICAST_LOOP_COMMAND: {
			controlInfo = new UDPSetMulticastLoopCommand();
			break;
		}
		
		case controlInfo_t::UDP_SET_REUSE_ADDRESS_COMMAND: {
			controlInfo = new UDPSetReuseAddressCommand();
			break;
		}
		
		case controlInfo_t::UDP_JOIN_MULTICAST_GROUPS_COMMAND: {
			controlInfo = new UDPJoinMulticastGroupsCommand();
			break;
		}
		
		case controlInfo_t::UDP_LEAVE_MULTICAST_GROUPS_COMMAND: {
			controlInfo = new UDPLeaveMulticastGroupsCommand();
			break;
		}
	
		//XXX add here other layer 5 controlInfo_t
	
	}	
	
	(*packet)->setControlInfo(controlInfo);

}


void Create::buildLayer4ControlInfo (cPacket** packet, controlInfo_t controlInfoType) const {

	// packets may not have control info
	if (controlInfoType == controlInfo_t::NONE) {
		return;	
	}
	
	cObject* controlInfo = nullptr;
	
	switch (controlInfoType) {

		case controlInfo_t::BGP_AS_PATH_SEGMENT: {
			controlInfo = new BGPASPathSegment();
			break;
		}
		
		case controlInfo_t::BGP_UPDATE_PATH_ATTRIBUTES: {
			controlInfo = new BGPUpdatePathAttributes();
			break;
		}
		
		case controlInfo_t::BGP_UPDATE_PATH_ATTRIBUTES_ORIGIN: {
			controlInfo = new BGPUpdatePathAttributesOrigin();
			break;
		}
		
		case controlInfo_t::BGP_UPDATE_PATH_ATTRIBUTES_AS_PATH: {
			controlInfo = new BGPUpdatePathAttributesASPath();
			break;
		}
		
		case controlInfo_t::BGP_UPDATE_PATH_ATTRIBUTES_NEXT_HOP: {
			controlInfo = new BGPUpdatePathAttributesNextHop();
			break;
		}
		
		case controlInfo_t::BGP_UPDATE_PATH_ATTRIBUTES_LOCAL_PREF: {
			controlInfo = new BGPUpdatePathAttributesLocalPref();
			break;
		}
		
		case controlInfo_t::BGP_UPDATE_PATH_ATTRIBUTES_ATOMIC_AGGREGATE: {
			controlInfo = new BGPUpdatePathAttributesAtomicAggregate();
			break;
		}
		
		case controlInfo_t::IP_REGISTER_PROTOCOL_COMMAND: {
			controlInfo = new IPRegisterProtocolCommand();
			break;
		}
		
		case controlInfo_t::IPV4_ROUTING_DECISION: {
			controlInfo = new IPv4RoutingDecision();
			break;
		}
		
		case controlInfo_t::IPV4_CONTROL_INFO: {
			controlInfo = new IPv4ControlInfo();
			break;
		}
		
		case controlInfo_t::IPV6_CONTROL_INFO: {
			controlInfo = new IPv6ControlInfo();
			break;
		}
		
		case controlInfo_t::IPV6_ND_PREFIX_INFORMATION: {
			controlInfo = new IPv6NDPrefixInformation();
			break;
		}
		
		case controlInfo_t::MIPV6_ND_ADVERTISEMENT_INTERVAL: {
			controlInfo = new MIPv6NDAdvertisementInterval();
			break;
		}
		
		case controlInfo_t::MIPV6_HA_INFORMATION: {
			controlInfo = new MIPv6HAInformation();
			break;
		}
		
		case controlInfo_t::IPV4_RECORD_ROUTE_OPTION: {
			controlInfo = new IPv4RecordRouteOption();
			break;
		}
		
		case controlInfo_t::IPV4_TIMESTAMP_OPTION: {
			controlInfo = new IPv4TimestampOption();
			break;
		}
		
		case controlInfo_t::IPV4_SOURCE_ROUTING_OPTION: {
			controlInfo = new IPv4SourceRoutingOption();
			break;
		}
		
		case controlInfo_t::IPV6_EXTENSION_HEADER: {
			controlInfo = new IPv6ExtensionHeader();
			break;
		}
		
		case controlInfo_t::IPV6_HOP_BY_HOP_OPTIONS_HEADER: {
			controlInfo = new IPv6HopByHopOptionsHeader();
			break;
		}
			
		case controlInfo_t::IPV6_ROUTING_HEADER: {
			controlInfo = new IPv6RoutingHeader();
			break;
		}
		
		case controlInfo_t::IPV6_FRAGMENT_HEADER: {
			controlInfo = new IPv6FragmentHeader();
			break;
		}
		
		case controlInfo_t::IPV6_DESTINATION_OPTIONS_HEADER: {
			controlInfo = new IPv6DestinationOptionsHeader();
			break;
		}
		
		case controlInfo_t::IPV6_AUTHENTICATION_HEADER: {
			controlInfo = new IPv6AuthenticationHeader();
			break;
		}
		
		case controlInfo_t::IPV6_ENCAPSULATING_SECURITY_PAYLOAD_HEADER: {
			controlInfo = new IPv6EncapsulatingSecurityPayloadHeader();
			break;
		}
		
		case controlInfo_t::CONTROL_INFO_BREAK_LINK: {
			controlInfo = new ControlInfoBreakLink();
			break;
		}
		
		case controlInfo_t::MESH_CONTROL_INFO: {
			controlInfo = new MeshControlInfo();
			break;
		}

		case controlInfo_t::OLSR_HELLO: {
			controlInfo = new OLSR_hello();
			break;
		}
		
		case controlInfo_t::OLSR_TC: {
			controlInfo = new OLSR_tc();
			break;
		}

		case controlInfo_t::OLSR_MID: {
			controlInfo = new OLSR_mid();
			break;
		}
			
		case controlInfo_t::OSPF_LSA_HEADER: {
			controlInfo = new OSPFLSAHeader();
			break;
		}
		
		case controlInfo_t::OSPF_LSA: {
			controlInfo = new OSPFLSA();
			break;
		}
		
		case controlInfo_t::LINK: {
			controlInfo = new Link();
			break;
		}
		
		case controlInfo_t::OSPF_ROUTER_LSA: {
			controlInfo = new OSPFRouterLSA();
			break;
		}
		
		case controlInfo_t::OSPF_NETWORK_LSA: {
			controlInfo = new OSPFNetworkLSA();
			break;
		}
		
		case controlInfo_t::OSPF_SUMMARY_LSA: {
			controlInfo = new OSPFSummaryLSA();
			break;
		}
		
		case controlInfo_t::OSPF_AS_EXTERNAL_LSA_CONTENTS: {
			controlInfo = new OSPFASExternalLSAContents();
			break;
		}
		
		case controlInfo_t::OSPF_AS_EXTERNAL_LSA: {
			controlInfo = new OSPFASExternalLSA();
			break;
		}

		case controlInfo_t::TED_CHANGE_INFO: {
			controlInfo = new TEDChangeInfo();
			break;
		}
		
		case controlInfo_t::HOME_ADDRESS_OPTION: {
			controlInfo = new HomeAddressOption();
			break;
		}
			
		//XXX add here other layer 4 controlInfo_t	
	}
	
	(*packet)->setControlInfo(controlInfo);	

}


void Create::buildLayer3ControlInfo (cPacket** packet, controlInfo_t controlInfoType) const {

	// packets may not have control info
	if (controlInfoType == controlInfo_t::NONE) {
		return;	
	}
	
	cObject* controlInfo = nullptr;
	
	switch (controlInfoType) {

		case controlInfo_t::IEEE802_CTRL: {
			controlInfo = new Ieee802Ctrl();
			break;
		}
		
		case controlInfo_t::PHY_CONTROL_INFO: {
			controlInfo = new PhyControlInfo();
			break;
		}
		
		case controlInfo_t::RADIO80211A_CONTROL_INFO: {
			controlInfo = new Radio80211aControlInfo();
			break;
		}

		//XXX add here other layer 3 controlInfo_t	
		
	}
	
	(*packet)->setControlInfo(controlInfo);	
}


void Create::buildLayer2ControlInfo (cPacket** packet, controlInfo_t controlInfoType) const {


}


Create::Create(const string layer5TypeCode, const string layer4TypeCode, const string layer3TypeCode, const string layer2TypeCode) : ActionBase(action_t::CREATE) {

	if (layer5TypeCode != "-1") {
		CreateInfo* createInfo = new CreateInfo();
		createInfo->layer = 5;
		createInfo->packetType = getPacketType(5, layer5TypeCode.substr(0,4));
		createInfo->controlInfoType = getControlInfoType(5, layer5TypeCode.substr(5,4));
		createInfos.push_back(createInfo);
	}
	
	if (layer4TypeCode != "-1") {
		CreateInfo* createInfo = new CreateInfo();
		createInfo->layer = 4;
		createInfo->packetType = getPacketType(4, layer5TypeCode.substr(0,4));
		createInfo->controlInfoType = getControlInfoType(4, layer5TypeCode.substr(5,4));
		createInfos.push_back(createInfo);	}
	
	if (layer3TypeCode != "-1") {
		CreateInfo* createInfo = new CreateInfo();
		createInfo->layer = 3;
		createInfo->packetType = getPacketType(3, layer5TypeCode.substr(0,4));
		createInfo->controlInfoType = getControlInfoType(3, layer5TypeCode.substr(5,4));
		createInfos.push_back(createInfo);
	}
	
	if (layer2TypeCode != "-1") {
		CreateInfo* createInfo = new CreateInfo();
		createInfo->layer = 2;
		createInfo->packetType = getPacketType(2, layer5TypeCode.substr(0,4));
		createInfo->controlInfoType = getControlInfoType(2, layer5TypeCode.substr(5,4));
		createInfos.push_back(createInfo);
	}
	
	involvedLayer = NONE_LAYER;

}


Create::~Create () {
	
	for (size_t i = 0; i < createInfos.size(); i++) {
		delete createInfos[i];
	}
  
}


void Create::execute (cPacket **packet) {

	cPacket* encapsulatedPacket = nullptr;

	int layer;
	packet_t packetType;
	controlInfo_t controlInfoType;

	for (size_t i = 0; i < createInfos.size(); i++) {
		layer = createInfos[i]->layer;
		packetType = createInfos[i]->packetType;
		controlInfoType = createInfos[i]->controlInfoType;
	
		buildNewPacket(&encapsulatedPacket, layer, packetType, controlInfoType);
	
		// top layer doesn't encapsulate packets
		if (i != 0) {
			encapsulatedPacket->encapsulate(*packet);
		}
		
		*packet = encapsulatedPacket;
	
	}
	
	setParameterRecursively(*packet, "isFiltered", true);

}


packet_t Create::getPacketType(int layer, string packetTypeCode) {

	switch (layer) {
	
		case 5: {
			
			if (packetTypeCode == "0000") {
				return packet_t::CPACKET;
			}
	
			if (packetTypeCode == "0100") {
				return packet_t::DHCP_MESSAGE;
			}
	
			if (packetTypeCode == "0200") {
				return packet_t::ETHER_APP_REQ;
			}
			
			if (packetTypeCode == "0201") {
				return packet_t::ETHER_APP_RESP;
			}
			
			if (packetTypeCode == "0300") {
				return packet_t::HTTP_BASE_MESSAGE;
			}
			
			if (packetTypeCode == "0301") {
				return packet_t::HTTP_REQUEST_MESSAGE;
			}
			
			if (packetTypeCode == "0302") {
				return packet_t::HTTP_REPLY_MESSAGE;
			}
			
			if (packetTypeCode == "0400") {
				return packet_t::HTTP_SERVER_STATUS_UPDATE_MSG;
			}
			
			if (packetTypeCode == "0500") {
				return packet_t::HTTP_SERVER_STATUS_UPDATE_MSG;
			}

			if (packetTypeCode == "0500") {
				return packet_t::NET_PERF_METER_TRANSMIT_TIMER;
			}
			
			if (packetTypeCode == "0501") {
				return packet_t::NET_PERF_METER_DATA_MESSAGE;
			}
			
			if (packetTypeCode == "0600") {
				return packet_t::PING_PAYLOAD;
			}
	
			if (packetTypeCode == "0700") {
				return packet_t::GENERIC_APP_MSG;
			}
			
			if (packetTypeCode == "0800") {
				return packet_t::TRAFFIC_LIGHT_BASE;
			}
			
			if (packetTypeCode == "0801") {
				return packet_t::TRAFFIC_LIGHT_CMD;
			}
			
			if (packetTypeCode == "0802") {
				return packet_t::TRAFFIC_LIGHT_STATUS;
			}
			
			if (packetTypeCode == "0900") {
				return packet_t::SIMPLE_VOIP_PACKET;
			}

			//XXX add here other layer 5 packet_t

			break;
		}
		
		case 4: {
						
			if (packetTypeCode == "0000") {
				return packet_t::SCTP_SIMPLE_MESSAGE;
			}
						
			if (packetTypeCode == "0001") {
				return packet_t::SCTP_CHUNK;
			}
			
			if (packetTypeCode == "0002") {
				return packet_t::SCTP_INIT_CHUNK;
			}
			
			if (packetTypeCode == "0003") {
				return packet_t::SCTP_INIT_ACK_CHUNK;
			}

			if (packetTypeCode == "0004") {
				return packet_t::SCTP_COOKIE_ECHO_CHUNK;
			}
			
			if (packetTypeCode == "0005") {
				return packet_t::SCTP_COOKIE;
			}
			
			if (packetTypeCode == "0006") {
				return packet_t::SCTP_COOKIE_ACK_CHUNK;
			}
			
			if (packetTypeCode == "0007") {
				return packet_t::SCTP_DATA_MSG;
			}
			
			if (packetTypeCode == "0008") {
				return packet_t::SCTP_DATA_CHUNK;
			}
			
			if (packetTypeCode == "0009") {
				return packet_t::SCTP_FORWARD_TSN_CHUNK;
			}
			
			if (packetTypeCode == "0010") {
				return packet_t::SCTP_SACK_CHUNK;
			}
			
			if (packetTypeCode == "0011") {
				return packet_t::SCTP_ABORT_CHUNK;
			}
			
			if (packetTypeCode == "0012") {
				return packet_t::SCTP_HEARTBEAT_CHUNK;
			}
			
			if (packetTypeCode == "0013") {
				return packet_t::SCTP_HEARTBEAT_ACK_CHUNK;
			}
			
			if (packetTypeCode == "0014") {
				return packet_t::SCTP_SHUTDOWN_CHUNK;
			}
			
			if (packetTypeCode == "0015") {
				return packet_t::SCTP_SHUTDOWN_ACK_CHUNK;
			}
			
			if (packetTypeCode == "0016") {
				return packet_t::SCTP_SHUTDOWN_COMPLETE_CHUNK;
			}
			
			if (packetTypeCode == "0017") {
				return packet_t::SCTP_PARAMETER;
			}
			
			if (packetTypeCode == "0018") {
				return packet_t::SCTP_PACKET_DROP_CHUNK;
			}
						
			if (packetTypeCode == "0019") {
				return packet_t::SCTP_OUTGOING_SSN_RESET_REQUEST_PARAMETER;
			}
			
			if (packetTypeCode == "0020") {
				return packet_t::SCTP_INCOMING_SSN_RESET_REQUEST_PARAMETER;
			}
			
			if (packetTypeCode == "0021") {
				return packet_t::SCTP_SSN_TSN_RESET_REQUEST_PARAMETER;
			}
			
			if (packetTypeCode == "0022") {
				return packet_t::SCTP_STREAM_RESET_RESPONSE_PARAMETER;
			}
			
			if (packetTypeCode == "0023") {
				return packet_t::SCTP_RESET_TIMER;
			}
			
			if (packetTypeCode == "0024") {
				return packet_t::SCTP_AUTHENTICATION_CHUNK;
			}
						
			if (packetTypeCode == "0025") {
				return packet_t::SCTP_ADD_IP_PARAMETER;
			}
			
			if (packetTypeCode == "0026") {
				return packet_t::SCTP_DELETE_IP_PARAMETER;
			}
			
			if (packetTypeCode == "0027") {
				return packet_t::SCTP_SET_PRIMARY_IP_PARAMETER;
			}
			
			if (packetTypeCode == "0028") {
				return packet_t::SCTP_SUPPORTED_EXTENSIONS_PARAMETER;
			}
			
			if (packetTypeCode == "0029") {
				return packet_t::SCTP_ERROR_CAUSE_PARAMETER;
			}
			
			if (packetTypeCode == "0030") {
				return packet_t::SCTP_SIMPLE_ERROR_CAUSE_PARAMETER;
			}
			
			if (packetTypeCode == "0031") {
				return packet_t::SCTP_SUCCESS_INDICATION;
			}
			
			if (packetTypeCode == "0032") {
				return packet_t::NAT_MESSAGE;
			}
			
			if (packetTypeCode == "0100") {
				return packet_t::TCP_SEGMENT;
			}
			
			if (packetTypeCode == "0200") {
				return packet_t::UDP_PACKET;
			}
				
			//XXX add here other layer 4 packet_t
		
			break;
		}
		
		case 3: {

			if (packetTypeCode == "0000") {
				return packet_t::ARP_PACKET;
			}
			
			if (packetTypeCode == "0100") {
				return packet_t::BGP_HEADER;
			}

			if (packetTypeCode == "0101") {
				return packet_t::BGP_KEEP_ALIVE_MESSAGE;
			}
			
			if (packetTypeCode == "0102") {
				return packet_t::BGP_OPEN_MESSAGE;
			}
			
			if (packetTypeCode == "0103") {
				return packet_t::BGP_UPDATE_MESSAGE;
			}

			if (packetTypeCode == "0200") {
				return packet_t::ICMPV6_MESSAGE;
			}

			if (packetTypeCode == "0201") {
				return packet_t::ICMPV6_DEST_UNREACHABLE_MSG;
			}

			if (packetTypeCode == "0202") {
				return packet_t::ICMPV6_PACKET_TOO_BIG_MSG;
			}

			if (packetTypeCode == "0203") {
				return packet_t::ICMPV6_TIME_EXCEEDED_MSG;
			}
			
			if (packetTypeCode == "0204") {
				return packet_t::ICMPV6_PARAM_PROBLEM_MSG;
			}
			
			if (packetTypeCode == "0205") {
				return packet_t::ICMPV6_ECHO_REQUEST_MSG;
			}

			if (packetTypeCode == "0206") {
				return packet_t::ICMPV6_ECHO_REPLY_MSG;
			}

			if (packetTypeCode == "0300") {
				return packet_t::IPV6_ND_MESSAGE;
			}

			if (packetTypeCode == "0301") {
				return packet_t::IPV6_ROUTER_SOLICITATION;
			}

			if (packetTypeCode == "0302") {
				return packet_t::IPV6_ROUTER_ADVERTISEMENT;
			}
			
			if (packetTypeCode == "0303") {
				return packet_t::IPV6_NEIGHBOUR_SOLICITATION;
			}

			if (packetTypeCode == "0304") {
				return packet_t::IPV6_NEIGHBOUR_ADVERTISEMENT;
			}

			if (packetTypeCode == "0305") {
				return packet_t::IPV6_REDIRECT;
			}
			
			if (packetTypeCode == "0400") {
				return packet_t::ICMP_MESSAGE;
			}
			
			if (packetTypeCode == "0401") {
				return packet_t::IGMP_MESSAGE;
			}
			
			if (packetTypeCode == "0500") {
				return packet_t::IPV4_DATAGRAM;
			}
			
			if (packetTypeCode == "0600") {
				return packet_t::IPV6_DATAGRAM;
			}
			
			if (packetTypeCode == "0700") {
				return packet_t::LDP_PACKET;
			}
			
			if (packetTypeCode == "0701") {
				return packet_t::LDP_LABEL_MAPPING;
			}
			
			if (packetTypeCode == "0702") {
				return packet_t::LDP_LABEL_REQUEST;
			}
			
			if (packetTypeCode == "0703") {
				return packet_t::LDP_HELLO;
			}
			
			if (packetTypeCode == "0704") {
				return packet_t::LDP_NOTIFY;
			}
			
			if (packetTypeCode == "0705") {
				return packet_t::LDP_INI;
			}
			
			if (packetTypeCode == "0706") {
				return packet_t::LDP_ADDRESS;
			}
		
			if (packetTypeCode == "0800") {
				return packet_t::AODV_MSG;
			}
			
			if (packetTypeCode == "0801") {
				return packet_t::RERR;
			}
			
			if (packetTypeCode == "0802") {
				return packet_t::RREP;
			}
			
			if (packetTypeCode == "0803") {
				return packet_t::RREQ;
			}
			
			if (packetTypeCode == "0900") {
				return packet_t::CONTROL_MANET_ROUTING;
			}
			
			if (packetTypeCode == "1000") {
				return packet_t::BATMAN_PACKET;
			}
			
			if (packetTypeCode == "1001") {
				return packet_t::VIS_PACKET;
			}
			
			if (packetTypeCode == "1100") {
				return packet_t::DSDV_HELLO_MESSAGE;
			}
			
			if (packetTypeCode == "1200") {
				return packet_t::DYMO_PACKET;
			}
			
			if (packetTypeCode == "1201") {
				return packet_t::DYMO_PACKET_BB_MESSAGE;
			}
			
			if (packetTypeCode == "1202") {
				return packet_t::DYMO_RERR;
			}
			
			if (packetTypeCode == "1203") {
				return packet_t::DYMO_RM;
			}
			
			if (packetTypeCode == "1204") {
				return packet_t::DYMO_RREP;
			}
			
			if (packetTypeCode == "1205") {
				return packet_t::DYMO_RREQ;
			}
			
			if (packetTypeCode == "1206") {
				return packet_t::DYMO_TIMEOUT;
			}
			
			if (packetTypeCode == "1207") {
				return packet_t::DYMO_UERR;
			}
			
			if (packetTypeCode == "1300") {
				return packet_t::OLSR_PKT;
			}
			
			if (packetTypeCode == "1400") {
				return packet_t::OSPF_PACKET;
			}
			
			if (packetTypeCode == "1401") {
				return packet_t::OSPF_HELLO_PACKET;
			}
			
			if (packetTypeCode == "1402") {
				return packet_t::OSPF_DATABASE_DESCRIPTION_PACKET;
			}
			
			if (packetTypeCode == "1403") {
				return packet_t::OSPF_LINK_STATE_REQUEST_PACKET;
			}
			
			if (packetTypeCode == "1404") {
				return packet_t::OSPF_LINK_STATE_UPDATE_PACKET;
			}
			
			if (packetTypeCode == "1405") {
				return packet_t::OSPF_LINK_STATE_ACKNOWLEDGEMENT_PACKET;
			}
			
			if (packetTypeCode == "1500") {
				return packet_t::AODV_CONTROL_PACKET;
			}

			if (packetTypeCode == "1501") {
				return packet_t::AODV_RREQ;
			}

			if (packetTypeCode == "1502") {
				return packet_t::AODV_RREP;
			}

			if (packetTypeCode == "1503") {
				return packet_t::AODV_RERR;
			}

			if (packetTypeCode == "1504") {
				return packet_t::AODV_RREP_ACK;
			}

			if (packetTypeCode == "1505") {
				return packet_t::WAIT_FOR_RREP;
			}
			
			if (packetTypeCode == "1600") {
				return packet_t::GPSR_BEACON;
			}
			
			if (packetTypeCode == "1601") {
				return packet_t::GPSR_PACKET;
			}
			
			if (packetTypeCode == "1700") {
				return packet_t::RIP_PACKET;
			}
				
			if (packetTypeCode == "1800") {
				return packet_t::RSVP_MESSAGE;
			}
		
			if (packetTypeCode == "1801") {
				return packet_t::RSVP_HELLO_MSG;
			}

			if (packetTypeCode == "1802") {
				return packet_t::RSVP_PACKET;
			}

			if (packetTypeCode == "1803") {
				return packet_t::RSVP_PATH_MSG;
			}

			if (packetTypeCode == "1804") {
				return packet_t::RSVP_PATH_TEAR;
			}

			if (packetTypeCode == "1805") {
				return packet_t::RSVP_PATH_ERROR;
			}

			if (packetTypeCode == "1806") {
				return packet_t::RSVP_RESV_MSG;
			}

			if (packetTypeCode == "1807") {
				return packet_t::RSVP_RESV_TEAR;
			}

			if (packetTypeCode == "1808") {
				return packet_t::RSVP_RESV_ERROR;
			}

			if (packetTypeCode == "1900") {
				return packet_t::LINK_STATE_MSG;
			}
			
			if (packetTypeCode == "2000") {
				return packet_t::MOBILITY_HEADER;
			}
			
			if (packetTypeCode == "2001") {
				return packet_t::BINDING_UPDATE;
			}
			
			if (packetTypeCode == "2002") {
				return packet_t::BINDING_ACKNOWLEDGEMENT;
			}
			
			if (packetTypeCode == "2003") {
				return packet_t::BINDING_ERROR;
			}
			
			if (packetTypeCode == "2004") {
				return packet_t::HOME_TEST_INIT;
			}
			
			if (packetTypeCode == "2005") {
				return packet_t::HOME_TEST;
			}
			
			if (packetTypeCode == "2006") {
				return packet_t::CARE_OF_TEST_INIT;
			}
			
			if (packetTypeCode == "2007") {
				return packet_t::CARE_OF_TEST;
			}
			
			if (packetTypeCode == "2008") {
				return packet_t::BINDING_REFRESH_REQUEST;
			}

			//XXX add here other layer 3 packet_t

			break;
		}
		
		case 2: {

			if (packetTypeCode == "0000") {
				return packet_t::ETHER_TRAFFIC;
			}
			
			if (packetTypeCode == "0001") {
				return packet_t::ETHER_JAM;
			}
			
			if (packetTypeCode == "0002") {
				return packet_t::ETHER_IFG;
			}
			
			if (packetTypeCode == "0003") {
				return packet_t::ETHER_FRAME;
			}
			
			if (packetTypeCode == "0004") {
				return packet_t::ETHERNET_II_FRAME;
			}
			
			if (packetTypeCode == "0005") {
				return packet_t::ETHER_FRAME_WITH_LLC;
			}
			
			if (packetTypeCode == "0006") {
				return packet_t::ETHER_FRAME_WITH_SNAP;
			}
			
			if (packetTypeCode == "0007") {
				return packet_t::ETHER_PAUSE_FRAME;
			}
			
			if (packetTypeCode == "0008") {
				return packet_t::ETHERNET_1Q_TAG;
			}
			
			if (packetTypeCode == "0009") {
				return packet_t::ETHERNET_1AH_ITAG;
			}
			
			if (packetTypeCode == "0100") {
				return packet_t::EXT_FRAME;
			}
			
			if (packetTypeCode == "0200") {
				return packet_t::IDEAL_WIRELESS_FRAME;
			}
			
			if (packetTypeCode == "0300") {
				return packet_t::BPDU;
			}
			
			if (packetTypeCode == "0400") {
				return packet_t::IEEE80211_FRAME;
			}
			
			if (packetTypeCode == "0401") {
				return packet_t::IEEE80211_ONE_ADDRESS_FRAME;
			}
			
			if (packetTypeCode == "0402") {
				return packet_t::IEEE80211_ACK_FRAME;
			}
			
			if (packetTypeCode == "0403") {
				return packet_t::IEEE80211_TWO_ADDRESS_FRAME;
			}
			
			if (packetTypeCode == "0404") {
				return packet_t::IEEE80211_RTS_FRAME;
			}
			
			if (packetTypeCode == "0405") {
				return packet_t::IEEE80211_CTS_FRAME;
			}
			
			if (packetTypeCode == "0406") {
				return packet_t::IEEE80211_DATE_OR_MGMT_FRAME;
			}
			
			if (packetTypeCode == "0407") {
				return packet_t::IEEE80211_DATA_FRAME;
			}
			
			if (packetTypeCode == "0408") {
				return packet_t::IEEE80211_DATA_FRAME_WITH_SNAP;
			}

			if (packetTypeCode == "0409") {
				return packet_t::IEEE80211_MANAGEMENT_FRAME;
			}
			
			if (packetTypeCode == "0500") {
				return packet_t::PPP_FRAME;
			}

			if (packetTypeCode == "0600") {
				return packet_t::AIR_FRAME;
			}
			
			if (packetTypeCode == "0601") {
				return packet_t::IDEAL_AIR_FRAME;
			}

			//XXX add here other layer 2 packet_t

			break;
		}
	
	}	

	opp_error("Create::getPacketType can't recognize the packet type");
	
}


controlInfo_t Create::getControlInfoType(int layer, string controlInfoTypeCode) {

	if (controlInfoTypeCode == "none") {
		return controlInfo_t::NONE;
	} 

	switch (layer) {
	
		case 5: {
			
			if (controlInfoTypeCode == "0000") {
				return controlInfo_t::SCTP_COMMAND;
			}
		
			if (controlInfoTypeCode == "0001") {
				return controlInfo_t::SCTP_ERROR_INFO;
			}

			if (controlInfoTypeCode == "0002") {
				return controlInfo_t::SCTP_OPEN_COMMAND;
			}

			if (controlInfoTypeCode == "0003") {
				return controlInfo_t::SCTP_SEND_COMMAND;
			}

			if (controlInfoTypeCode == "0004") {
				return controlInfo_t::SCTP_CONNECT_INFO;
			}

			if (controlInfoTypeCode == "0005") {
				return controlInfo_t::SCTP_STATUS_INFO;
			}

			if (controlInfoTypeCode == "0006") {
				return controlInfo_t::SCTP_PATH_INFO;
			}
			
			if (controlInfoTypeCode == "0007") {
				return controlInfo_t::SCTP_RESET_INFO;
			}
			
			if (controlInfoTypeCode == "0008") {
				return controlInfo_t::SCTP_RCV_COMMAND;
			}
			
			if (controlInfoTypeCode == "0009") {
				return controlInfo_t::SCTP_SEND_QUEUE_ABATED;
			}
			
			if (controlInfoTypeCode == "0100") {
				return controlInfo_t::TCP_COMMAND;
			}

			if (controlInfoTypeCode == "0101") {
				return controlInfo_t::TCP_ERROR_INFO;
			}

			if (controlInfoTypeCode == "0102") {
				return controlInfo_t::TCP_OPEN_COMMAND;
			}

			if (controlInfoTypeCode == "0103") {
				return controlInfo_t::TCP_SEND_COMMAND;
			}

			if (controlInfoTypeCode == "0104") {
				return controlInfo_t::TCP_CONNECT_INFO;
			}

			if (controlInfoTypeCode == "0105") {
				return controlInfo_t::TCP_STATUS_INFO;
			}

			if (controlInfoTypeCode == "0200") {
				return controlInfo_t::UDP_CONTROL_INFO;
			}

			if (controlInfoTypeCode == "0201") {
				return controlInfo_t::UDP_BIND_COMMAND;
			}
			
			if (controlInfoTypeCode == "0202") {
				return controlInfo_t::UDP_CONNECT_COMMAND;
			}

			if (controlInfoTypeCode == "0203") {
				return controlInfo_t::UDP_SEND_COMMAND;
			}
		
			if (controlInfoTypeCode == "0204") {
				return controlInfo_t::UDP_CLOSE_COMMAND;
			}

			if (controlInfoTypeCode == "0205") {
				return controlInfo_t::UDP_DATA_INDICATION;
			}

			if (controlInfoTypeCode == "0206") {
				return controlInfo_t::UDP_ERROR_INDICATION;
			}

			if (controlInfoTypeCode == "0207") {
				return controlInfo_t::UDP_SET_OPTION_COMMAND;
			}

			if (controlInfoTypeCode == "0208") {
				return controlInfo_t::UDP_SET_TIME_TO_LIVE_COMMAND;
			}

			if (controlInfoTypeCode == "0209") {
				return controlInfo_t::UDP_SET_TYPE_OF_SERVICE_COMMAND;
			}

			if (controlInfoTypeCode == "0210") {
				return controlInfo_t::UDP_SET_BROADCAST_COMMAND;
			}

			if (controlInfoTypeCode == "0211") {
				return controlInfo_t::UDP_SET_MULTICAST_INTERFACE_COMMAND;
			}

			if (controlInfoTypeCode == "0212") {
				return controlInfo_t::UDP_SET_MULTICAST_LOOP_COMMAND;
			}

			if (controlInfoTypeCode == "0213") {
				return controlInfo_t::UDP_SET_REUSE_ADDRESS_COMMAND;
			}

			if (controlInfoTypeCode == "0214") {
				return controlInfo_t::UDP_JOIN_MULTICAST_GROUPS_COMMAND;
			}

			if (controlInfoTypeCode == "0215") {
				return controlInfo_t::UDP_LEAVE_MULTICAST_GROUPS_COMMAND;
			}

			//XXX add here other layer 5 controlInfo_t
			
			break;
		}
		
		case 4: {
		
			if (controlInfoTypeCode == "0000") {
				return controlInfo_t::BGP_AS_PATH_SEGMENT;
			}
		
			if (controlInfoTypeCode == "0001") {
				return controlInfo_t::BGP_UPDATE_PATH_ATTRIBUTES;
			}

			if (controlInfoTypeCode == "0002") {
				return controlInfo_t::BGP_UPDATE_PATH_ATTRIBUTES_ORIGIN;
			}

			if (controlInfoTypeCode == "0003") {
				return controlInfo_t::BGP_UPDATE_PATH_ATTRIBUTES_AS_PATH;
			}

			if (controlInfoTypeCode == "0004") {
				return controlInfo_t::BGP_UPDATE_PATH_ATTRIBUTES_NEXT_HOP;
			}

			if (controlInfoTypeCode == "0005") {
				return controlInfo_t::BGP_UPDATE_PATH_ATTRIBUTES_LOCAL_PREF;
			}

			if (controlInfoTypeCode == "0006") {
				return controlInfo_t::BGP_UPDATE_PATH_ATTRIBUTES_ATOMIC_AGGREGATE;
			}

			if (controlInfoTypeCode == "0100") {
				return controlInfo_t::IP_REGISTER_PROTOCOL_COMMAND;
			}

			if (controlInfoTypeCode == "0101") {
				return controlInfo_t::IPV4_ROUTING_DECISION;
			}

			if (controlInfoTypeCode == "0102") {
				return controlInfo_t::IPV4_CONTROL_INFO;
			}
			
			if (controlInfoTypeCode == "0200") {
				return controlInfo_t::IPV6_CONTROL_INFO;
			}
			
			if (controlInfoTypeCode == "0300") {
				return controlInfo_t::IPV6_ND_PREFIX_INFORMATION;
			}
			
			if (controlInfoTypeCode == "0301") {
				return controlInfo_t::MIPV6_ND_ADVERTISEMENT_INTERVAL;
			}
			
			if (controlInfoTypeCode == "0302") {
				return controlInfo_t::MIPV6_HA_INFORMATION;
			}
			
			if (controlInfoTypeCode == "0400") {
				return controlInfo_t::IPV4_RECORD_ROUTE_OPTION;
			}
			
			if (controlInfoTypeCode == "0401") {
				return controlInfo_t::IPV4_TIMESTAMP_OPTION;
			}
			
			if (controlInfoTypeCode == "0402") {
				return controlInfo_t::IPV4_SOURCE_ROUTING_OPTION;
			}
			
			if (controlInfoTypeCode == "0500") {
				return controlInfo_t::IPV6_EXTENSION_HEADER;
			}
			
			if (controlInfoTypeCode == "0501") {
				return controlInfo_t::IPV6_HOP_BY_HOP_OPTIONS_HEADER;
			}
						
			if (controlInfoTypeCode == "0502") {
				return controlInfo_t::IPV6_ROUTING_HEADER;
			}
			
			if (controlInfoTypeCode == "0503") {
				return controlInfo_t::IPV6_FRAGMENT_HEADER;
			}
			
			if (controlInfoTypeCode == "0504") {
				return controlInfo_t::IPV6_DESTINATION_OPTIONS_HEADER;
			}
			
			if (controlInfoTypeCode == "0505") {
				return controlInfo_t::IPV6_AUTHENTICATION_HEADER;
			}
			
			if (controlInfoTypeCode == "0506") {
				return controlInfo_t::IPV6_ENCAPSULATING_SECURITY_PAYLOAD_HEADER;
			}	
		
			if (controlInfoTypeCode == "0600") {
				return controlInfo_t::CONTROL_INFO_BREAK_LINK;
			}	
		
			if (controlInfoTypeCode == "0700") {
				return controlInfo_t::MESH_CONTROL_INFO;
			}	
			
			if (controlInfoTypeCode == "0800") {
				return controlInfo_t::OLSR_HELLO;
			}	
			
			if (controlInfoTypeCode == "0801") {
				return controlInfo_t::OLSR_TC;
			}	
			
			if (controlInfoTypeCode == "0802") {
				return controlInfo_t::OLSR_MID;
			}
			
			if (controlInfoTypeCode == "0900") {
				return controlInfo_t::OSPF_LSA_HEADER;
			}	
			
			if (controlInfoTypeCode == "0901") {
				return controlInfo_t::OSPF_LSA;
			}	

			if (controlInfoTypeCode == "0902") {
				return controlInfo_t::LINK;
			}	

			if (controlInfoTypeCode == "0903") {
				return controlInfo_t::OSPF_ROUTER_LSA;
			}	

			if (controlInfoTypeCode == "0904") {
				return controlInfo_t::OSPF_NETWORK_LSA;
			}	

			if (controlInfoTypeCode == "0905") {
				return controlInfo_t::OSPF_SUMMARY_LSA;
			}	

			if (controlInfoTypeCode == "0906") {
				return controlInfo_t::OSPF_AS_EXTERNAL_LSA_CONTENTS;
			}	

			if (controlInfoTypeCode == "0907") {
				return controlInfo_t::OSPF_AS_EXTERNAL_LSA;
			}	
			
			if (controlInfoTypeCode == "1000") {
				return controlInfo_t::TED_CHANGE_INFO;
			}	

			if (controlInfoTypeCode == "1100") {
				return controlInfo_t::HOME_ADDRESS_OPTION;
			}	

			//XXX add here other layer 4 controlInfo_t

			break;
		}
		
		case 3: {
	
			if (controlInfoTypeCode == "0000") {
				return controlInfo_t::IEEE802_CTRL;
			}
			
			if (controlInfoTypeCode == "0100") {
				return controlInfo_t::PHY_CONTROL_INFO;
			}
			
			if (controlInfoTypeCode == "0200") {
				return controlInfo_t::RADIO80211A_CONTROL_INFO;
			}
				
			//XXX add here other layer 3 controlInfo_t

			break;			
		}
		
		case 2: {

			break;
		}

	}	

	opp_error("Create::getPacketType can't recognize the controlInfo type");

}


bool Create::isOuterPacket (int layer) const {

	for (size_t i = 0; i < createInfos.size(); i++) {
		if (layer > (createInfos[i]->layer)) {
			return false;
		}
	}
	return true;

}




