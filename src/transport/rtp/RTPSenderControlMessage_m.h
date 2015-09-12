//
// Generated file, do not edit! Created by opp_msgc 4.5 from transport/rtp/RTPSenderControlMessage.msg.
//

#ifndef _RTPSENDERCONTROLMESSAGE_M_H_
#define _RTPSENDERCONTROLMESSAGE_M_H_

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
 * Enum generated from <tt>transport/rtp/RTPSenderControlMessage.msg</tt> by opp_msgc.
 * <pre>
 * enum RTPSenderControlMessageCommands
 * {
 *     RTP_CONTROL_PLAY = 1;
 *     RTP_CONTROL_PLAY_UNTIL_TIME = 2;
 *     RTP_CONTROL_PLAY_UNTIL_BYTE = 3;
 *     RTP_CONTROL_PAUSE = 4;
 *     RTP_CONTROL_STOP = 5;
 *     RTP_CONTROL_SEEK_TIME = 6;
 *     RTP_CONTROL_SEEK_BYTE = 7;
 * };
 * </pre>
 */
enum RTPSenderControlMessageCommands {
    RTP_CONTROL_PLAY = 1,
    RTP_CONTROL_PLAY_UNTIL_TIME = 2,
    RTP_CONTROL_PLAY_UNTIL_BYTE = 3,
    RTP_CONTROL_PAUSE = 4,
    RTP_CONTROL_STOP = 5,
    RTP_CONTROL_SEEK_TIME = 6,
    RTP_CONTROL_SEEK_BYTE = 7
};

/**
 * Class generated from <tt>transport/rtp/RTPSenderControlMessage.msg</tt> by opp_msgc.
 * <pre>
 * packet RTPSenderControlMessage
 * {
 *     short command @enum(RTPSenderControlMessageCommands);
 *     float commandParameter1;
 *     float commandParameter2;
 * };
 * </pre>
 */
class INET_API RTPSenderControlMessage : public ::cPacket
{
  protected:
    short command_var;
    float commandParameter1_var;
    float commandParameter2_var;

  private:
    void copy(const RTPSenderControlMessage& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RTPSenderControlMessage&);

  public:
    RTPSenderControlMessage(const char *name=NULL, int kind=0);
    RTPSenderControlMessage(const RTPSenderControlMessage& other);
    virtual ~RTPSenderControlMessage();
    RTPSenderControlMessage& operator=(const RTPSenderControlMessage& other);
    virtual RTPSenderControlMessage *dup() const {return new RTPSenderControlMessage(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual short getCommand() const;
    virtual void setCommand(short command);
    virtual float getCommandParameter1() const;
    virtual void setCommandParameter1(float commandParameter1);
    virtual float getCommandParameter2() const;
    virtual void setCommandParameter2(float commandParameter2);
};

inline void doPacking(cCommBuffer *b, RTPSenderControlMessage& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, RTPSenderControlMessage& obj) {obj.parsimUnpack(b);}


#endif // _RTPSENDERCONTROLMESSAGE_M_H_
