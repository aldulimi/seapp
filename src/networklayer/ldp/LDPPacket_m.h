//
// Generated file, do not edit! Created by opp_msgc 4.5 from networklayer/ldp/LDPPacket.msg.
//

#ifndef _LDPPACKET_M_H_
#define _LDPPACKET_M_H_

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
#include "IPv4Address.h"


#define LDP_BASEHEADER_BYTES  10



#define LDP_HEADER_BYTES  (LDP_BASEHEADER_BYTES+20)
// }}



/**
 * Enum generated from <tt>networklayer/ldp/LDPPacket.msg</tt> by opp_msgc.
 * <pre>
 * enum LDP_MESSAGE_TYPES
 * {
 * 
 *     NOTIFICATION = 10;
 *     HELLO = 11;
 *     INITIALIZATION = 12;
 *     KEEP_ALIVE = 13;
 *     ADDRESS = 14;
 *     ADDRESS_WITHDRAW = 15;
 *     LABEL_MAPPING = 16;
 *     LABEL_REQUEST = 17;
 *     LABEL_WITHDRAW = 18;
 *     LABEL_RELEASE = 19;
 *     UNKNOWN = 20;
 * }
 * </pre>
 */
enum LDP_MESSAGE_TYPES {
    NOTIFICATION = 10,
    HELLO = 11,
    INITIALIZATION = 12,
    KEEP_ALIVE = 13,
    ADDRESS = 14,
    ADDRESS_WITHDRAW = 15,
    LABEL_MAPPING = 16,
    LABEL_REQUEST = 17,
    LABEL_WITHDRAW = 18,
    LABEL_RELEASE = 19,
    UNKNOWN = 20
};

/**
 * Enum generated from <tt>networklayer/ldp/LDPPacket.msg</tt> by opp_msgc.
 * <pre>
 * enum LDP_STATUS_TYPES
 * {
 * 
 *     NO_ROUTE = 13;
 * }
 * </pre>
 */
enum LDP_STATUS_TYPES {
    NO_ROUTE = 13
};

/**
 * Struct generated from networklayer/ldp/LDPPacket.msg by opp_msgc.
 */
struct INET_API FEC_TLV
{
    FEC_TLV();
    IPv4Address addr;
    int length;
};

void INET_API doPacking(cCommBuffer *b, FEC_TLV& a);
void INET_API doUnpacking(cCommBuffer *b, FEC_TLV& a);

/**
 * Class generated from <tt>networklayer/ldp/LDPPacket.msg</tt> by opp_msgc.
 * <pre>
 * packet LDPPacket
 * {
 *     int type;
 *     IPv4Address senderAddress;
 *     IPv4Address receiverAddress;
 * }
 * </pre>
 */
class INET_API LDPPacket : public ::cPacket
{
  protected:
    int type_var;
    IPv4Address senderAddress_var;
    IPv4Address receiverAddress_var;

  private:
    void copy(const LDPPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const LDPPacket&);

  public:
    LDPPacket(const char *name=NULL, int kind=0);
    LDPPacket(const LDPPacket& other);
    virtual ~LDPPacket();
    LDPPacket& operator=(const LDPPacket& other);
    virtual LDPPacket *dup() const {return new LDPPacket(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getType() const;
    virtual void setType(int type);
    virtual IPv4Address& getSenderAddress();
    virtual const IPv4Address& getSenderAddress() const {return const_cast<LDPPacket*>(this)->getSenderAddress();}
    virtual void setSenderAddress(const IPv4Address& senderAddress);
    virtual IPv4Address& getReceiverAddress();
    virtual const IPv4Address& getReceiverAddress() const {return const_cast<LDPPacket*>(this)->getReceiverAddress();}
    virtual void setReceiverAddress(const IPv4Address& receiverAddress);
};

inline void doPacking(cCommBuffer *b, LDPPacket& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, LDPPacket& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>networklayer/ldp/LDPPacket.msg</tt> by opp_msgc.
 * <pre>
 * packet LDPLabelMapping extends LDPPacket
 * {
 *     FEC_TLV fec;
 *     int label;
 * }
 * </pre>
 */
class INET_API LDPLabelMapping : public ::LDPPacket
{
  protected:
    FEC_TLV fec_var;
    int label_var;

  private:
    void copy(const LDPLabelMapping& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const LDPLabelMapping&);

  public:
    LDPLabelMapping(const char *name=NULL, int kind=0);
    LDPLabelMapping(const LDPLabelMapping& other);
    virtual ~LDPLabelMapping();
    LDPLabelMapping& operator=(const LDPLabelMapping& other);
    virtual LDPLabelMapping *dup() const {return new LDPLabelMapping(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual FEC_TLV& getFec();
    virtual const FEC_TLV& getFec() const {return const_cast<LDPLabelMapping*>(this)->getFec();}
    virtual void setFec(const FEC_TLV& fec);
    virtual int getLabel() const;
    virtual void setLabel(int label);
};

inline void doPacking(cCommBuffer *b, LDPLabelMapping& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, LDPLabelMapping& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>networklayer/ldp/LDPPacket.msg</tt> by opp_msgc.
 * <pre>
 * packet LDPLabelRequest extends LDPPacket
 * {
 *     FEC_TLV fec;
 * }
 * </pre>
 */
class INET_API LDPLabelRequest : public ::LDPPacket
{
  protected:
    FEC_TLV fec_var;

  private:
    void copy(const LDPLabelRequest& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const LDPLabelRequest&);

  public:
    LDPLabelRequest(const char *name=NULL, int kind=0);
    LDPLabelRequest(const LDPLabelRequest& other);
    virtual ~LDPLabelRequest();
    LDPLabelRequest& operator=(const LDPLabelRequest& other);
    virtual LDPLabelRequest *dup() const {return new LDPLabelRequest(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual FEC_TLV& getFec();
    virtual const FEC_TLV& getFec() const {return const_cast<LDPLabelRequest*>(this)->getFec();}
    virtual void setFec(const FEC_TLV& fec);
};

inline void doPacking(cCommBuffer *b, LDPLabelRequest& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, LDPLabelRequest& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>networklayer/ldp/LDPPacket.msg</tt> by opp_msgc.
 * <pre>
 * packet LDPHello extends LDPPacket
 * {
 *     double holdTime;
 *     bool tbit;
 *     bool rbit;
 * }
 * </pre>
 */
class INET_API LDPHello : public ::LDPPacket
{
  protected:
    double holdTime_var;
    bool tbit_var;
    bool rbit_var;

  private:
    void copy(const LDPHello& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const LDPHello&);

  public:
    LDPHello(const char *name=NULL, int kind=0);
    LDPHello(const LDPHello& other);
    virtual ~LDPHello();
    LDPHello& operator=(const LDPHello& other);
    virtual LDPHello *dup() const {return new LDPHello(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual double getHoldTime() const;
    virtual void setHoldTime(double holdTime);
    virtual bool getTbit() const;
    virtual void setTbit(bool tbit);
    virtual bool getRbit() const;
    virtual void setRbit(bool rbit);
};

inline void doPacking(cCommBuffer *b, LDPHello& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, LDPHello& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>networklayer/ldp/LDPPacket.msg</tt> by opp_msgc.
 * <pre>
 * packet LDPNotify extends LDPPacket
 * {
 *     int status;
 *     FEC_TLV fec;
 * }
 * </pre>
 */
class INET_API LDPNotify : public ::LDPPacket
{
  protected:
    int status_var;
    FEC_TLV fec_var;

  private:
    void copy(const LDPNotify& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const LDPNotify&);

  public:
    LDPNotify(const char *name=NULL, int kind=0);
    LDPNotify(const LDPNotify& other);
    virtual ~LDPNotify();
    LDPNotify& operator=(const LDPNotify& other);
    virtual LDPNotify *dup() const {return new LDPNotify(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getStatus() const;
    virtual void setStatus(int status);
    virtual FEC_TLV& getFec();
    virtual const FEC_TLV& getFec() const {return const_cast<LDPNotify*>(this)->getFec();}
    virtual void setFec(const FEC_TLV& fec);
};

inline void doPacking(cCommBuffer *b, LDPNotify& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, LDPNotify& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>networklayer/ldp/LDPPacket.msg</tt> by opp_msgc.
 * <pre>
 * packet LDPIni extends LDPPacket
 * {
 *     double keepAliveTime;
 *     bool abit;
 *     bool dbit;
 *     int pvLim;
 *     string receiverLDPIdentifier;
 * }
 * </pre>
 */
class INET_API LDPIni : public ::LDPPacket
{
  protected:
    double keepAliveTime_var;
    bool abit_var;
    bool dbit_var;
    int pvLim_var;
    opp_string receiverLDPIdentifier_var;

  private:
    void copy(const LDPIni& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const LDPIni&);

  public:
    LDPIni(const char *name=NULL, int kind=0);
    LDPIni(const LDPIni& other);
    virtual ~LDPIni();
    LDPIni& operator=(const LDPIni& other);
    virtual LDPIni *dup() const {return new LDPIni(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual double getKeepAliveTime() const;
    virtual void setKeepAliveTime(double keepAliveTime);
    virtual bool getAbit() const;
    virtual void setAbit(bool abit);
    virtual bool getDbit() const;
    virtual void setDbit(bool dbit);
    virtual int getPvLim() const;
    virtual void setPvLim(int pvLim);
    virtual const char * getReceiverLDPIdentifier() const;
    virtual void setReceiverLDPIdentifier(const char * receiverLDPIdentifier);
};

inline void doPacking(cCommBuffer *b, LDPIni& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, LDPIni& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>networklayer/ldp/LDPPacket.msg</tt> by opp_msgc.
 * <pre>
 * packet LDPAddress extends LDPPacket
 * {
 *     bool isWithdraw;
 *     string family;
 *     string addresses[];
 * }
 * </pre>
 */
class INET_API LDPAddress : public ::LDPPacket
{
  protected:
    bool isWithdraw_var;
    opp_string family_var;
    opp_string *addresses_var; // array ptr
    unsigned int addresses_arraysize;

  private:
    void copy(const LDPAddress& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const LDPAddress&);

  public:
    LDPAddress(const char *name=NULL, int kind=0);
    LDPAddress(const LDPAddress& other);
    virtual ~LDPAddress();
    LDPAddress& operator=(const LDPAddress& other);
    virtual LDPAddress *dup() const {return new LDPAddress(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual bool getIsWithdraw() const;
    virtual void setIsWithdraw(bool isWithdraw);
    virtual const char * getFamily() const;
    virtual void setFamily(const char * family);
    virtual void setAddressesArraySize(unsigned int size);
    virtual unsigned int getAddressesArraySize() const;
    virtual const char * getAddresses(unsigned int k) const;
    virtual void setAddresses(unsigned int k, const char * addresses);
};

inline void doPacking(cCommBuffer *b, LDPAddress& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, LDPAddress& obj) {obj.parsimUnpack(b);}


#endif // _LDPPACKET_M_H_
