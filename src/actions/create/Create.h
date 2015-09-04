/**
 * @file	Create.h
 * @author	Francesco Racciatti <racciatti.francesco@gmail.com>
 * @version	1.00
 * @date	2015 jun 22
 *
 * @brief	Create class makes possible the creation of packets and control info objects.
 *
 */


#ifndef CREATE_H
#define CREATE_H

#include "ActionBase.h"
#include <vector>

using namespace std;

// TODO handle cMessages properly (actually not supported)
// TODO handle nested fields properly
enum class packet_t : uint8_t{

	CPACKET = 0,								// APP.0000.xxxx
	DHCP_MESSAGE,								// APP.0100.xxxx
	ETHER_APP_REQ,								// APP.0200.xxxx
	ETHER_APP_RESP,								// APP.0201.xxxx
	HTTP_BASE_MESSAGE,							// APP.0300.xxxx
	HTTP_REQUEST_MESSAGE,						// APP.0301.xxxx
	HTTP_REPLY_MESSAGE,							// APP.0302.xxxx
	HTTP_SERVER_STATUS_UPDATE_MSG,				// APP.0400.xxxx
	NET_PERF_METER_TRANSMIT_TIMER,				// APP.0500.xxxx is cMessage (not supported)
	NET_PERF_METER_DATA_MESSAGE,				// APP.0501.xxxx
	PING_PAYLOAD,								// APP.0601.xxxx
	GENERIC_APP_MSG,							// APP.0700.xxxx
	TRAFFIC_LIGHT_BASE,							// APP.0800.xxxx
	TRAFFIC_LIGHT_CMD,							// APP.0801.xxxx
	TRAFFIC_LIGHT_STATUS,						// APP.0802.xxxx
	SIMPLE_VOIP_PACKET,							// APP.0900.xxxx
	
	// TODO add RTP (actually not supported)
	SCTP_SIMPLE_MESSAGE,						// TRA.0000.xxxx
	SCTP_CHUNK,									// TRA.0001.xxxx
	SCTP_INIT_CHUNK,							// TRA.0002.xxxx
	SCTP_INIT_ACK_CHUNK,						// TRA.0003.xxxx
	SCTP_COOKIE_ECHO_CHUNK,						// TRA.0004.xxxx
	SCTP_COOKIE,								// TRA.0005.xxxx
	SCTP_COOKIE_ACK_CHUNK,						// TRA.0006.xxxx
	SCTP_DATA_MSG,								// TRA.0007.xxxx
	SCTP_DATA_CHUNK,							// TRA.0008.xxxx
	SCTP_FORWARD_TSN_CHUNK,						// TRA.0009.xxxx
	SCTP_SACK_CHUNK,							// TRA.0010.xxxx
	SCTP_ABORT_CHUNK,							// TRA.0011.xxxx
	SCTP_HEARTBEAT_CHUNK,						// TRA.0012.xxxx
	SCTP_HEARTBEAT_ACK_CHUNK,					// TRA.0013.xxxx
	SCTP_SHUTDOWN_CHUNK,						// TRA.0014.xxxx
	SCTP_SHUTDOWN_ACK_CHUNK,					// TRA.0015.xxxx
	SCTP_SHUTDOWN_COMPLETE_CHUNK,				// TRA.0016.xxxx
	SCTP_PARAMETER,								// TRA.0017.xxxx
	SCTP_PACKET_DROP_CHUNK,						// TRA.0018.xxxx
	SCTP_OUTGOING_SSN_RESET_REQUEST_PARAMETER,	// TRA.0019.xxxx
	SCTP_INCOMING_SSN_RESET_REQUEST_PARAMETER,	// TRA.0020.xxxx
	SCTP_SSN_TSN_RESET_REQUEST_PARAMETER,		// TRA.0021.xxxx
	SCTP_STREAM_RESET_RESPONSE_PARAMETER,		// TRA.0022.xxxx
	SCTP_RESET_TIMER,							// TRA.0023.xxxx
	SCTP_AUTHENTICATION_CHUNK,					// TRA.0024.xxxx
	SCTP_ADD_IP_PARAMETER,						// TRA.0025.xxxx
	SCTP_DELETE_IP_PARAMETER,					// TRA.0026.xxxx
	SCTP_SET_PRIMARY_IP_PARAMETER,				// TRA.0027.xxxx
	SCTP_SUPPORTED_EXTENSIONS_PARAMETER,		// TRA.0028.xxxx
	SCTP_ERROR_CAUSE_PARAMETER,					// TRA.0029.xxxx
	SCTP_SIMPLE_ERROR_CAUSE_PARAMETER,			// TRA.0030.xxxx
	SCTP_SUCCESS_INDICATION,					// TRA.0031.xxxx
	NAT_MESSAGE,								// TRA.0032.xxxx
	TCP_SEGMENT,								// TRA.0100.xxxx
	UDP_PACKET,									// TRA.0200.xxxx

	ARP_PACKET,									// NET.0000.xxxx
	BGP_HEADER,									// NET.0100.xxxx
	BGP_KEEP_ALIVE_MESSAGE,						// NET.0101.xxxx
	BGP_OPEN_MESSAGE,							// NET.0102.xxxx
	BGP_UPDATE_MESSAGE,							// NET.0103.xxxx
	ICMPV6_MESSAGE,								// NET.0200.xxxx
	ICMPV6_DEST_UNREACHABLE_MSG,				// NET.0201.xxxx
	ICMPV6_PACKET_TOO_BIG_MSG,					// NET.0202.xxxx
	ICMPV6_TIME_EXCEEDED_MSG,					// NET.0203.xxxx
	ICMPV6_PARAM_PROBLEM_MSG,					// NET.0204.xxxx
	ICMPV6_ECHO_REQUEST_MSG,					// NET.0205.xxxx
	ICMPV6_ECHO_REPLY_MSG,						// NET.0206.xxxx
	IPV6_ND_MESSAGE,							// NET.0300.xxxx
	IPV6_ROUTER_SOLICITATION,					// NET.0301.xxxx
	IPV6_ROUTER_ADVERTISEMENT,					// NET.0302.xxxx
	IPV6_NEIGHBOUR_SOLICITATION,				// NET.0303.xxxx
	IPV6_NEIGHBOUR_ADVERTISEMENT,				// NET.0304.xxxx
	IPV6_REDIRECT,								// NET.0305.xxxx
	ICMP_MESSAGE,								// NET.0400.xxxx
	IGMP_MESSAGE,								// NET.0401.xxxx
	IPV4_DATAGRAM,								// NET.0500.xxxx
	IPV6_DATAGRAM,								// NET.0600.xxxx	
	LDP_PACKET,									// NET.0700.xxxx
	LDP_LABEL_MAPPING,							// NET.0701.xxxx
	LDP_LABEL_REQUEST,							// NET.0702.xxxx
	LDP_HELLO,									// NET.0703.xxxx
	LDP_NOTIFY,									// NET.0704.xxxx
	LDP_INI,									// NET.0705.xxxx
	LDP_ADDRESS,								// NET.0706.xxxx
	AODV_MSG,									// NET.0800.xxxx
	RERR,										// NET.0801.xxxx
	RREP,										// NET.0802.xxxx
	RREQ,										// NET.0803.xxxx
	CONTROL_MANET_ROUTING,						// NET.0900.xxxx
	BATMAN_PACKET,								// NET.1000.xxxx
	VIS_PACKET,									// NET.1001.xxxx
	DSDV_HELLO_MESSAGE,							// NET.1100.xxxx
	DYMO_PACKET,								// NET.1200.xxxx
	DYMO_PACKET_BB_MESSAGE,						// NET.1201.xxxx
	DYMO_RERR,									// NET.1202.xxxx
	DYMO_RM,									// NET.1203.xxxx
	DYMO_RREP,									// NET.1204.xxxx
	DYMO_RREQ,									// NET.1205.xxxx
	DYMO_TIMEOUT,								// NET.1206.xxxx is cMessage (not supported)
	DYMO_UERR,									// NET.1207.xxxx
	OLSR_PKT,									// NET.1300.xxxx
	OSPF_PACKET,								// NET.1400.xxxx
	OSPF_HELLO_PACKET,							// NET.1401.xxxx
	OSPF_DATABASE_DESCRIPTION_PACKET,			// NET.1402.xxxx
	OSPF_LINK_STATE_REQUEST_PACKET,				// NET.1403.xxxx
	OSPF_LINK_STATE_UPDATE_PACKET,				// NET.1404.xxxx
	OSPF_LINK_STATE_ACKNOWLEDGEMENT_PACKET,		// NET.1405.xxxx
	AODV_CONTROL_PACKET,						// NET.1500.xxxx
	AODV_RREQ,									// NET.1501.xxxx
	AODV_RREP,									// NET.1502.xxxx
	AODV_RERR,									// NET.1503.xxxx
	AODV_RREP_ACK,								// NET.1504.xxxx
	WAIT_FOR_RREP,								// NET.1505.xxxx is cMessage (not supported)
	// TODO add specialized DYMO in src/networklayer/routing/dymo
	GPSR_BEACON,								// NET.1600.xxxx
	GPSR_PACKET,								// NET.1601.xxxx
	RIP_PACKET,									// NET.1700.xxxx
	RSVP_MESSAGE,								// NET.1800.xxxx
	RSVP_HELLO_MSG,								// NET.1801.xxxx
	RSVP_PACKET,								// NET.1802.xxxx
	RSVP_PATH_MSG,								// NET.1803.xxxx
	RSVP_PATH_TEAR,								// NET.1804.xxxx
	RSVP_PATH_ERROR,							// NET.1805.xxxx
	RSVP_RESV_MSG,								// NET.1806.xxxx
	RSVP_RESV_TEAR,								// NET.1807.xxxx
	RSVP_RESV_ERROR,							// NET.1808.xxxx
	// TODO add signalling msgs in src/networklayer/rsvp_te
	LINK_STATE_MSG,								// NET.1900.xxxx
	MOBILITY_HEADER,							// NET.2000.xxxx
	BINDING_UPDATE,								// NET.2001.xxxx
	BINDING_ACKNOWLEDGEMENT,					// NET.2002.xxxx
	BINDING_ERROR,								// NET.2003.xxxx
	HOME_TEST_INIT,								// NET.2004.xxxx
	HOME_TEST,									// NET.2005.xxxx
	CARE_OF_TEST_INIT,							// NET.2006.xxxx
	CARE_OF_TEST,								// NET.2007.xxxx
	BINDING_REFRESH_REQUEST,					// NET.2008.xxxx
	
	ETHER_TRAFFIC,								// MAC.0000.xxxx
	ETHER_JAM,									// MAC.0001.xxxx
	ETHER_IFG,									// MAC.0002.xxxx
	ETHER_FRAME,								// MAC.0003.xxxx
	ETHERNET_II_FRAME,							// MAC.0004.xxxx
	ETHER_FRAME_WITH_LLC,						// MAC.0005.xxxx
	ETHER_FRAME_WITH_SNAP,						// MAC.0006.xxxx
	ETHER_PAUSE_FRAME,							// MAC.0007.xxxx
	ETHERNET_1Q_TAG,							// MAC.0008.xxxx
	ETHERNET_1AH_ITAG,							// MAC.0009.xxxx
	EXT_FRAME,									// MAC.0100.xxxx is cMessage (not supported)
	IDEAL_WIRELESS_FRAME,						// MAC.0200.xxxx
	BPDU,										// MAC.0300.xxxx
	IEEE80211_FRAME,							// MAC.0400.xxxx
	IEEE80211_ONE_ADDRESS_FRAME	,				// MAC.0401.xxxx
	IEEE80211_ACK_FRAME,						// MAC.0402.xxxx
	IEEE80211_TWO_ADDRESS_FRAME,				// MAC.0403.xxxx
	IEEE80211_RTS_FRAME,						// MAC.0404.xxxx
	IEEE80211_CTS_FRAME,						// MAC.0405.xxxx
	IEEE80211_DATE_OR_MGMT_FRAME,				// MAC.0406.xxxx
	IEEE80211_DATA_FRAME,						// MAC.0407.xxxx
	IEEE80211_DATA_FRAME_WITH_SNAP,				// MAC.0408.xxxx
	IEEE80211_MANAGEMENT_FRAME,					// MAC.0409.xxxx
	PPP_FRAME,									// MAC.0500.xxxx
	AIR_FRAME,									// MAC.0600.xxxx
	IDEAL_AIR_FRAME,							// MAC.0601.xxxx

	// XXX add here other packet_t
};


// TODO handle nested fields properly
enum class controlInfo_t : uint8_t{
	
	NONE = 0,
	
	SCTP_COMMAND,									// APP.xxxx.0000
	SCTP_ERROR_INFO,								// APP.xxxx.0001
	SCTP_OPEN_COMMAND,								// APP.xxxx.0002
	SCTP_SEND_COMMAND,								// APP.xxxx.0003
	SCTP_CONNECT_INFO,								// APP.xxxx.0004
	SCTP_STATUS_INFO,								// APP.xxxx.0005
	SCTP_PATH_INFO,									// APP.xxxx.0006
	SCTP_RESET_INFO,								// APP.xxxx.0007
	SCTP_INFO,										// APP.xxxx.0008
	SCTP_RCV_COMMAND,								// APP.xxxx.0009
	SCTP_SEND_QUEUE_ABATED,							// APP.xxxx.0010
	TCP_COMMAND,									// APP.xxxx.0100
	TCP_ERROR_INFO,									// APP.xxxx.0101
	TCP_OPEN_COMMAND,								// APP.xxxx.0102
	TCP_SEND_COMMAND,								// APP.xxxx.0103
	TCP_CONNECT_INFO,								// APP.xxxx.0104
	TCP_STATUS_INFO,								// APP.xxxx.0105
	UDP_CONTROL_INFO,								// APP.xxxx.0200
	UDP_BIND_COMMAND,								// APP.xxxx.0201
	UDP_CONNECT_COMMAND,							// APP.xxxx.0202
	UDP_SEND_COMMAND,								// APP.xxxx.0203
	UDP_CLOSE_COMMAND,								// APP.xxxx.0204
	UDP_DATA_INDICATION,							// APP.xxxx.0205
	UDP_ERROR_INDICATION,							// APP.xxxx.0206
	UDP_SET_OPTION_COMMAND,							// APP.xxxx.0207
	UDP_SET_TIME_TO_LIVE_COMMAND,					// APP.xxxx.0208
	UDP_SET_TYPE_OF_SERVICE_COMMAND,				// APP.xxxx.0209
	UDP_SET_BROADCAST_COMMAND,						// APP.xxxx.0210
	UDP_SET_MULTICAST_INTERFACE_COMMAND,			// APP.xxxx.0211
	UDP_SET_MULTICAST_LOOP_COMMAND,					// APP.xxxx.0212
	UDP_SET_REUSE_ADDRESS_COMMAND,					// APP.xxxx.0213
	UDP_JOIN_MULTICAST_GROUPS_COMMAND,				// APP.xxxx.0214
	UDP_LEAVE_MULTICAST_GROUPS_COMMAND,				// APP.xxxx.0215

	BGP_AS_PATH_SEGMENT,							// TRA.xxxx.0000
	BGP_UPDATE_PATH_ATTRIBUTES,						// TRA.xxxx.0001
	BGP_UPDATE_PATH_ATTRIBUTES_ORIGIN,				// TRA.xxxx.0002
	BGP_UPDATE_PATH_ATTRIBUTES_AS_PATH,				// TRA.xxxx.0003
	BGP_UPDATE_PATH_ATTRIBUTES_NEXT_HOP,			// TRA.xxxx.0004
	BGP_UPDATE_PATH_ATTRIBUTES_LOCAL_PREF,			// TRA.xxxx.0005
	BGP_UPDATE_PATH_ATTRIBUTES_ATOMIC_AGGREGATE,	// TRA.xxxx.0006
	IP_REGISTER_PROTOCOL_COMMAND,					// TRA.xxxx.0100
	IPV4_ROUTING_DECISION,							// TRA.xxxx.0101
	IPV4_CONTROL_INFO,								// TRA.xxxx.0102
	IPV6_CONTROL_INFO,								// TRA.xxxx.0200
	IPV6_ND_PREFIX_INFORMATION,						// TRA.xxxx.0300
	MIPV6_ND_ADVERTISEMENT_INTERVAL,				// TRA.xxxx.0301
	MIPV6_HA_INFORMATION,							// TRA.xxxx.0302
	IPV4_RECORD_ROUTE_OPTION,						// TRA.xxxx.0400
	IPV4_TIMESTAMP_OPTION,							// TRA.xxxx.0401
	IPV4_SOURCE_ROUTING_OPTION,						// TRA.xxxx.0402
	IPV6_EXTENSION_HEADER,							// TRA.xxxx.0500
	IPV6_HOP_BY_HOP_OPTIONS_HEADER,					// TRA.xxxx.0501
	IPV6_ROUTING_HEADER,							// TRA.xxxx.0502
	IPV6_FRAGMENT_HEADER,							// TRA.xxxx.0503
	IPV6_DESTINATION_OPTIONS_HEADER,				// TRA.xxxx.0504
	IPV6_AUTHENTICATION_HEADER,						// TRA.xxxx.0505
	IPV6_ENCAPSULATING_SECURITY_PAYLOAD_HEADER,		// TRA.xxxx.0506
	CONTROL_INFO_BREAK_LINK,						// TRA.xxxx.0600
	MESH_CONTROL_INFO,								// TRA.xxxx.0700
	OLSR_HELLO,										// TRA.xxxx.0800
	OLSR_TC,										// TRA.xxxx.0801
	OLSR_MID,										// TRA.xxxx.0802
	OSPF_LSA_HEADER,								// TRA.xxxx.0900
	OSPF_LSA,										// TRA.xxxx.0901
	LINK,											// TRA.xxxx.0902
	OSPF_ROUTER_LSA,								// TRA.xxxx.0903
	OSPF_NETWORK_LSA,								// TRA.xxxx.0904
	OSPF_SUMMARY_LSA,								// TRA.xxxx.0905
	OSPF_AS_EXTERNAL_LSA_CONTENTS,					// TRA.xxxx.0906
	OSPF_AS_EXTERNAL_LSA,							// TRA.xxxx.0907
	TED_CHANGE_INFO,								// TRA.xxxx.1000
	HOME_ADDRESS_OPTION,							// TRA.xxxx.1100

	IEEE802_CTRL,									// NET.xxxx.0000
	PHY_CONTROL_INFO,								// NET.xxxx.0100
	// TODO add signalling msgs in src/linklayer/ieee80211/Ieee80211MgmtFrames_m.h
	// TODO add signalling msgs in src/linklayer/ieee80211/Ieee80211Primitives_m.h
	RADIO80211A_CONTROL_INFO,						// NET.xxxx.0200
	
	// XXX add here other controlInfo_t
};


class CreateInfo {

	public:
		int layer;
		packet_t packetType;
		controlInfo_t controlInfoType;
		
	public:
		CreateInfo();
		~CreateInfo();
};


class Create : public ActionBase {

	private:
		vector<CreateInfo*> createInfos;

	private:
		void buildNewPacket(cPacket** packet, int layer, packet_t packetType, controlInfo_t controlInfoType) const;
		void buildLayer5Packet(cPacket** packet, packet_t packetType) const;
		void buildLayer4Packet(cPacket** packet, packet_t packetType) const;
		void buildLayer3Packet(cPacket** packet, packet_t packetType) const;
		void buildLayer2Packet(cPacket** packet, packet_t packetType) const;
		void buildLayer5ControlInfo(cPacket** packet, controlInfo_t packetType) const;
		void buildLayer4ControlInfo(cPacket** packet, controlInfo_t packetType) const;
		void buildLayer3ControlInfo(cPacket** packet, controlInfo_t packetType) const;
		void buildLayer2ControlInfo(cPacket** packet, controlInfo_t packetType) const;

		packet_t getPacketType(int layer, string packetTypeCode);
		controlInfo_t getControlInfoType(int layer, string controlInfoTypeCode);
		bool isOuterPacket(int layer) const;
		
		
	public:
		/**
		 * @brief Constructor
		 */
		Create(const string layer5TypeCode, const string layer4TypeCode, const string layer3TypeCode, const string layer2TypeCode);
		
		/**
		 * @brief Destructor
		 */
		virtual ~Create();

		/**
		 * @brief execute the create action
		 */
		void execute(cPacket** packet);
			
};



#endif
