//
// Generated file, do not edit! Created by opp_msgc 4.5 from networklayer/routing/rip/RIPPacket.msg.
//

#ifndef _RIPPACKET_M_H_
#define _RIPPACKET_M_H_

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
#include "IPvXAddress.h"

const int RIP_HEADER_SIZE = 4;
const int RIP_RTE_SIZE = 20;
// }}



/**
 * Enum generated from <tt>networklayer/routing/rip/RIPPacket.msg</tt> by opp_msgc.
 * <pre>
 * enum RIPCommand {
 *     RIP_REQUEST  = 1;
 *     RIP_RESPONSE = 2;
 * }
 * </pre>
 */
enum RIPCommand {
    RIP_REQUEST = 1,
    RIP_RESPONSE = 2
};

/**
 * Enum generated from <tt>networklayer/routing/rip/RIPPacket.msg</tt> by opp_msgc.
 * <pre>
 * enum RIP_AF {
 *     RIP_AF_NONE = 0;
 *     RIP_AF_INET = 2;
 *     
 * }
 * </pre>
 */
enum RIP_AF {
    RIP_AF_NONE = 0,
    RIP_AF_INET = 2
};

/**
 * Struct generated from networklayer/routing/rip/RIPPacket.msg by opp_msgc.
 */
struct INET_API RIPEntry
{
    RIPEntry();
    unsigned short addressFamilyId;
    unsigned short routeTag;
    IPvXAddress address;
    int prefixLength;
    IPvXAddress nextHop;
    unsigned int metric;
};

void INET_API doPacking(cCommBuffer *b, RIPEntry& a);
void INET_API doUnpacking(cCommBuffer *b, RIPEntry& a);

/**
 * Class generated from <tt>networklayer/routing/rip/RIPPacket.msg</tt> by opp_msgc.
 * <pre>
 * packet RIPPacket {
 *     unsigned char command @enum(RIPCommand);
 *     
 *     RIPEntry entry[];
 * }
 * </pre>
 */
class INET_API RIPPacket : public ::cPacket
{
  protected:
    unsigned char command_var;
    RIPEntry *entry_var; // array ptr
    unsigned int entry_arraysize;

  private:
    void copy(const RIPPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RIPPacket&);

  public:
    RIPPacket(const char *name=NULL, int kind=0);
    RIPPacket(const RIPPacket& other);
    virtual ~RIPPacket();
    RIPPacket& operator=(const RIPPacket& other);
    virtual RIPPacket *dup() const {return new RIPPacket(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned char getCommand() const;
    virtual void setCommand(unsigned char command);
    virtual void setEntryArraySize(unsigned int size);
    virtual unsigned int getEntryArraySize() const;
    virtual RIPEntry& getEntry(unsigned int k);
    virtual const RIPEntry& getEntry(unsigned int k) const {return const_cast<RIPPacket*>(this)->getEntry(k);}
    virtual void setEntry(unsigned int k, const RIPEntry& entry);
};

inline void doPacking(cCommBuffer *b, RIPPacket& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, RIPPacket& obj) {obj.parsimUnpack(b);}


#endif // _RIPPACKET_M_H_
