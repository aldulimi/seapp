//
// Generated file, do not edit! Created by opp_msgc 4.5 from networklayer/diffserv/DSCP.msg.
//

#ifndef _DSCP_M_H_
#define _DSCP_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0405
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif

// dll export symbol
#ifndef INET_API 
#  if defined(INET_EXPORT)
#    define INET_API  OPP_DLLEXPORT
#  elif defined(INET_IMPORT)
#    define INET_API  OPP_DLLIMPORT
#  else
#    define INET_API 
#  endif
#endif

// cplusplus {{
#include "INETDefs.h"
// }}



/**
 * Enum generated from <tt>networklayer/diffserv/DSCP.msg</tt> by opp_msgc.
 * <pre>
 * enum DSCP
 * {
 *     
 *     DSCP_BE = 0;
 * 
 *     
 *     DSCP_AF11 = 0x0A; 
 *     DSCP_AF12 = 0x0C; 
 *     DSCP_AF13 = 0x0E; 
 * 
 *     DSCP_AF21 = 0x12; 
 *     DSCP_AF22 = 0x14; 
 *     DSCP_AF23 = 0x16; 
 * 
 *     DSCP_AF31 = 0x1A; 
 *     DSCP_AF32 = 0x1C; 
 *     DSCP_AF33 = 0x1E; 
 * 
 *     DSCP_AF41 = 0x22; 
 *     DSCP_AF42 = 0x24; 
 *     DSCP_AF43 = 0x26; 
 * 
 *     
 *     DSCP_EF   = 0x2E; 
 * 
 *     
 *     DSCP_CS1  = 0x08; 
 *     DSCP_CS2  = 0x10; 
 *     DSCP_CS3  = 0x18; 
 *     DSCP_CS4  = 0x20; 
 *     DSCP_CS5  = 0x28; 
 *     DSCP_CS6  = 0x30; 
 *     DSCP_CS7  = 0x38; 
 * 
 *     
 *     DSCP_MAX = 0x40;
 * }
 * </pre>
 */
enum DSCP {
    DSCP_BE = 0,
    DSCP_AF11 = 0x0A,
    DSCP_AF12 = 0x0C,
    DSCP_AF13 = 0x0E,
    DSCP_AF21 = 0x12,
    DSCP_AF22 = 0x14,
    DSCP_AF23 = 0x16,
    DSCP_AF31 = 0x1A,
    DSCP_AF32 = 0x1C,
    DSCP_AF33 = 0x1E,
    DSCP_AF41 = 0x22,
    DSCP_AF42 = 0x24,
    DSCP_AF43 = 0x26,
    DSCP_EF = 0x2E,
    DSCP_CS1 = 0x08,
    DSCP_CS2 = 0x10,
    DSCP_CS3 = 0x18,
    DSCP_CS4 = 0x20,
    DSCP_CS5 = 0x28,
    DSCP_CS6 = 0x30,
    DSCP_CS7 = 0x38,
    DSCP_MAX = 0x40
};


#endif // _DSCP_M_H_
