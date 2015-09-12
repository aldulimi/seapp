//
// Generated file, do not edit! Created by opp_msgc 4.5 from transport/rtp/RTCPPacket2.msg.
//

#ifndef _RTCPPACKET2_M_H_
#define _RTCPPACKET2_M_H_

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
#include "RTCPPacket1.h"
#include "reports.h"
#include "sdes.h"
// }}



/**
 * Class generated from <tt>transport/rtp/RTCPPacket2.msg</tt> by opp_msgc.
 * <pre>
 * packet RTCPReceiverReportPacket extends RTCPPacket
 * {
 *     packetType = RTCP_PT_RR;
 *     @customize(true);  
 *     uint32 ssrc = 0;
 *     cArray receptionReports;
 * }
 * </pre>
 *
 * RTCPReceiverReportPacket_Base is only useful if it gets subclassed, and RTCPReceiverReportPacket is derived from it.
 * The minimum code to be written for RTCPReceiverReportPacket is the following:
 *
 * <pre>
 * class INET_API RTCPReceiverReportPacket : public RTCPReceiverReportPacket_Base
 * {
 *   private:
 *     void copy(const RTCPReceiverReportPacket& other) { ... }

 *   public:
 *     RTCPReceiverReportPacket(const char *name=NULL, int kind=0) : RTCPReceiverReportPacket_Base(name,kind) {}
 *     RTCPReceiverReportPacket(const RTCPReceiverReportPacket& other) : RTCPReceiverReportPacket_Base(other) {copy(other);}
 *     RTCPReceiverReportPacket& operator=(const RTCPReceiverReportPacket& other) {if (this==&other) return *this; RTCPReceiverReportPacket_Base::operator=(other); copy(other); return *this;}
 *     virtual RTCPReceiverReportPacket *dup() const {return new RTCPReceiverReportPacket(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from RTCPReceiverReportPacket_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(RTCPReceiverReportPacket);
 * </pre>
 */
class INET_API RTCPReceiverReportPacket_Base : public ::RTCPPacket
{
  protected:
    uint32 ssrc_var;
    cArray receptionReports_var;

  private:
    void copy(const RTCPReceiverReportPacket_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RTCPReceiverReportPacket_Base&);
    // make constructors protected to avoid instantiation
    RTCPReceiverReportPacket_Base(const char *name=NULL, int kind=0);
    RTCPReceiverReportPacket_Base(const RTCPReceiverReportPacket_Base& other);
    // make assignment operator protected to force the user override it
    RTCPReceiverReportPacket_Base& operator=(const RTCPReceiverReportPacket_Base& other);

  public:
    virtual ~RTCPReceiverReportPacket_Base();
    virtual RTCPReceiverReportPacket_Base *dup() const {throw cRuntimeError("You forgot to manually add a dup() function to class RTCPReceiverReportPacket");}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual uint32 getSsrc() const;
    virtual void setSsrc(uint32 ssrc);
    virtual cArray& getReceptionReports();
    virtual const cArray& getReceptionReports() const {return const_cast<RTCPReceiverReportPacket_Base*>(this)->getReceptionReports();}
    virtual void setReceptionReports(const cArray& receptionReports);
};

/**
 * Class generated from <tt>transport/rtp/RTCPPacket2.msg</tt> by opp_msgc.
 * <pre>
 * packet RTCPSDESPacket extends RTCPPacket
 * {
 *     packetType = RTCP_PT_SDES;
 *     @customize(true);  
 *     cArray sdesChunks;
 * }
 * </pre>
 *
 * RTCPSDESPacket_Base is only useful if it gets subclassed, and RTCPSDESPacket is derived from it.
 * The minimum code to be written for RTCPSDESPacket is the following:
 *
 * <pre>
 * class INET_API RTCPSDESPacket : public RTCPSDESPacket_Base
 * {
 *   private:
 *     void copy(const RTCPSDESPacket& other) { ... }

 *   public:
 *     RTCPSDESPacket(const char *name=NULL, int kind=0) : RTCPSDESPacket_Base(name,kind) {}
 *     RTCPSDESPacket(const RTCPSDESPacket& other) : RTCPSDESPacket_Base(other) {copy(other);}
 *     RTCPSDESPacket& operator=(const RTCPSDESPacket& other) {if (this==&other) return *this; RTCPSDESPacket_Base::operator=(other); copy(other); return *this;}
 *     virtual RTCPSDESPacket *dup() const {return new RTCPSDESPacket(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from RTCPSDESPacket_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(RTCPSDESPacket);
 * </pre>
 */
class INET_API RTCPSDESPacket_Base : public ::RTCPPacket
{
  protected:
    cArray sdesChunks_var;

  private:
    void copy(const RTCPSDESPacket_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RTCPSDESPacket_Base&);
    // make constructors protected to avoid instantiation
    RTCPSDESPacket_Base(const char *name=NULL, int kind=0);
    RTCPSDESPacket_Base(const RTCPSDESPacket_Base& other);
    // make assignment operator protected to force the user override it
    RTCPSDESPacket_Base& operator=(const RTCPSDESPacket_Base& other);

  public:
    virtual ~RTCPSDESPacket_Base();
    virtual RTCPSDESPacket_Base *dup() const {throw cRuntimeError("You forgot to manually add a dup() function to class RTCPSDESPacket");}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual cArray& getSdesChunks();
    virtual const cArray& getSdesChunks() const {return const_cast<RTCPSDESPacket_Base*>(this)->getSdesChunks();}
    virtual void setSdesChunks(const cArray& sdesChunks);
};

/**
 * Class generated from <tt>transport/rtp/RTCPPacket2.msg</tt> by opp_msgc.
 * <pre>
 * packet RTCPByePacket extends RTCPPacket
 * {
 *     packetType = RTCP_PT_BYE;
 *     count = 1;
 *     @customize(true);  
 *     uint32 ssrc = 0;
 * }
 * </pre>
 *
 * RTCPByePacket_Base is only useful if it gets subclassed, and RTCPByePacket is derived from it.
 * The minimum code to be written for RTCPByePacket is the following:
 *
 * <pre>
 * class INET_API RTCPByePacket : public RTCPByePacket_Base
 * {
 *   private:
 *     void copy(const RTCPByePacket& other) { ... }

 *   public:
 *     RTCPByePacket(const char *name=NULL, int kind=0) : RTCPByePacket_Base(name,kind) {}
 *     RTCPByePacket(const RTCPByePacket& other) : RTCPByePacket_Base(other) {copy(other);}
 *     RTCPByePacket& operator=(const RTCPByePacket& other) {if (this==&other) return *this; RTCPByePacket_Base::operator=(other); copy(other); return *this;}
 *     virtual RTCPByePacket *dup() const {return new RTCPByePacket(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from RTCPByePacket_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(RTCPByePacket);
 * </pre>
 */
class INET_API RTCPByePacket_Base : public ::RTCPPacket
{
  protected:
    uint32 ssrc_var;

  private:
    void copy(const RTCPByePacket_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RTCPByePacket_Base&);
    // make constructors protected to avoid instantiation
    RTCPByePacket_Base(const char *name=NULL, int kind=0);
    RTCPByePacket_Base(const RTCPByePacket_Base& other);
    // make assignment operator protected to force the user override it
    RTCPByePacket_Base& operator=(const RTCPByePacket_Base& other);

  public:
    virtual ~RTCPByePacket_Base();
    virtual RTCPByePacket_Base *dup() const {throw cRuntimeError("You forgot to manually add a dup() function to class RTCPByePacket");}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual uint32 getSsrc() const;
    virtual void setSsrc(uint32 ssrc);
};


#endif // _RTCPPACKET2_M_H_
