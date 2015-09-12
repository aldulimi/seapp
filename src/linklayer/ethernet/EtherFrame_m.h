//
// Generated file, do not edit! Created by opp_msgc 4.5 from linklayer/ethernet/EtherFrame.msg.
//

#ifndef _ETHERFRAME_M_H_
#define _ETHERFRAME_M_H_

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
#include "Ethernet.h"
#include "MACAddress.h"
#include "Ieee802Ctrl_m.h"
// }}



/**
 * Class generated from <tt>linklayer/ethernet/EtherFrame.msg</tt> by opp_msgc.
 * <pre>
 * packet EtherTraffic
 * {
 * }
 * </pre>
 */
class INET_API EtherTraffic : public ::cPacket
{
  protected:

  private:
    void copy(const EtherTraffic& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const EtherTraffic&);

  public:
    EtherTraffic(const char *name=NULL, int kind=0);
    EtherTraffic(const EtherTraffic& other);
    virtual ~EtherTraffic();
    EtherTraffic& operator=(const EtherTraffic& other);
    virtual EtherTraffic *dup() const {return new EtherTraffic(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, EtherTraffic& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, EtherTraffic& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>linklayer/ethernet/EtherFrame.msg</tt> by opp_msgc.
 * <pre>
 * packet EtherJam extends EtherTraffic
 * {
 *     long abortedPkTreeID = 0;  
 * }
 * </pre>
 */
class INET_API EtherJam : public ::EtherTraffic
{
  protected:
    long abortedPkTreeID_var;

  private:
    void copy(const EtherJam& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const EtherJam&);

  public:
    EtherJam(const char *name=NULL, int kind=0);
    EtherJam(const EtherJam& other);
    virtual ~EtherJam();
    EtherJam& operator=(const EtherJam& other);
    virtual EtherJam *dup() const {return new EtherJam(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual long getAbortedPkTreeID() const;
    virtual void setAbortedPkTreeID(long abortedPkTreeID);
};

inline void doPacking(cCommBuffer *b, EtherJam& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, EtherJam& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>linklayer/ethernet/EtherFrame.msg</tt> by opp_msgc.
 * <pre>
 * packet EtherIFG extends EtherTraffic
 * {
 *     bitLength = INTERFRAME_GAP_BITS;
 * }
 * </pre>
 */
class INET_API EtherIFG : public ::EtherTraffic
{
  protected:

  private:
    void copy(const EtherIFG& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const EtherIFG&);

  public:
    EtherIFG(const char *name=NULL, int kind=0);
    EtherIFG(const EtherIFG& other);
    virtual ~EtherIFG();
    EtherIFG& operator=(const EtherIFG& other);
    virtual EtherIFG *dup() const {return new EtherIFG(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, EtherIFG& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, EtherIFG& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>linklayer/ethernet/EtherFrame.msg</tt> by opp_msgc.
 * <pre>
 * packet EtherFrame extends EtherTraffic
 * {
 *     MACAddress dest;
 *     MACAddress src;
 *     int frameByteLength;  
 * }
 * </pre>
 */
class INET_API EtherFrame : public ::EtherTraffic
{
  protected:
    MACAddress dest_var;
    MACAddress src_var;
    int frameByteLength_var;

  private:
    void copy(const EtherFrame& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const EtherFrame&);

  public:
    EtherFrame(const char *name=NULL, int kind=0);
    EtherFrame(const EtherFrame& other);
    virtual ~EtherFrame();
    EtherFrame& operator=(const EtherFrame& other);
    virtual EtherFrame *dup() const {return new EtherFrame(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual MACAddress& getDest();
    virtual const MACAddress& getDest() const {return const_cast<EtherFrame*>(this)->getDest();}
    virtual void setDest(const MACAddress& dest);
    virtual MACAddress& getSrc();
    virtual const MACAddress& getSrc() const {return const_cast<EtherFrame*>(this)->getSrc();}
    virtual void setSrc(const MACAddress& src);
    virtual int getFrameByteLength() const;
    virtual void setFrameByteLength(int frameByteLength);
};

inline void doPacking(cCommBuffer *b, EtherFrame& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, EtherFrame& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>linklayer/ethernet/EtherFrame.msg</tt> by opp_msgc.
 * <pre>
 * packet EthernetIIFrame extends EtherFrame
 * {
 *     int etherType @enum(EtherType);
 * }
 * </pre>
 */
class INET_API EthernetIIFrame : public ::EtherFrame
{
  protected:
    int etherType_var;

  private:
    void copy(const EthernetIIFrame& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const EthernetIIFrame&);

  public:
    EthernetIIFrame(const char *name=NULL, int kind=0);
    EthernetIIFrame(const EthernetIIFrame& other);
    virtual ~EthernetIIFrame();
    EthernetIIFrame& operator=(const EthernetIIFrame& other);
    virtual EthernetIIFrame *dup() const {return new EthernetIIFrame(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getEtherType() const;
    virtual void setEtherType(int etherType);
};

inline void doPacking(cCommBuffer *b, EthernetIIFrame& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, EthernetIIFrame& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>linklayer/ethernet/EtherFrame.msg</tt> by opp_msgc.
 * <pre>
 * packet EtherFrameWithLLC extends EtherFrame
 * {
 *     int dsap;
 *     int ssap;
 *     int control;
 * }
 * </pre>
 */
class INET_API EtherFrameWithLLC : public ::EtherFrame
{
  protected:
    int dsap_var;
    int ssap_var;
    int control_var;

  private:
    void copy(const EtherFrameWithLLC& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const EtherFrameWithLLC&);

  public:
    EtherFrameWithLLC(const char *name=NULL, int kind=0);
    EtherFrameWithLLC(const EtherFrameWithLLC& other);
    virtual ~EtherFrameWithLLC();
    EtherFrameWithLLC& operator=(const EtherFrameWithLLC& other);
    virtual EtherFrameWithLLC *dup() const {return new EtherFrameWithLLC(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getDsap() const;
    virtual void setDsap(int dsap);
    virtual int getSsap() const;
    virtual void setSsap(int ssap);
    virtual int getControl() const;
    virtual void setControl(int control);
};

inline void doPacking(cCommBuffer *b, EtherFrameWithLLC& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, EtherFrameWithLLC& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>linklayer/ethernet/EtherFrame.msg</tt> by opp_msgc.
 * <pre>
 * packet EtherFrameWithSNAP extends EtherFrameWithLLC
 * {
 *     dsap = 0xAA;
 *     ssap = 0xAA;
 *     control = 0x03;
 *     int orgCode;   
 *     int localcode; 
 * }
 * </pre>
 */
class INET_API EtherFrameWithSNAP : public ::EtherFrameWithLLC
{
  protected:
    int orgCode_var;
    int localcode_var;

  private:
    void copy(const EtherFrameWithSNAP& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const EtherFrameWithSNAP&);

  public:
    EtherFrameWithSNAP(const char *name=NULL, int kind=0);
    EtherFrameWithSNAP(const EtherFrameWithSNAP& other);
    virtual ~EtherFrameWithSNAP();
    EtherFrameWithSNAP& operator=(const EtherFrameWithSNAP& other);
    virtual EtherFrameWithSNAP *dup() const {return new EtherFrameWithSNAP(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getOrgCode() const;
    virtual void setOrgCode(int orgCode);
    virtual int getLocalcode() const;
    virtual void setLocalcode(int localcode);
};

inline void doPacking(cCommBuffer *b, EtherFrameWithSNAP& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, EtherFrameWithSNAP& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>linklayer/ethernet/EtherFrame.msg</tt> by opp_msgc.
 * <pre>
 * packet EtherPauseFrame extends EtherFrame
 * {
 *     int pauseTime; 
 * }
 * </pre>
 */
class INET_API EtherPauseFrame : public ::EtherFrame
{
  protected:
    int pauseTime_var;

  private:
    void copy(const EtherPauseFrame& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const EtherPauseFrame&);

  public:
    EtherPauseFrame(const char *name=NULL, int kind=0);
    EtherPauseFrame(const EtherPauseFrame& other);
    virtual ~EtherPauseFrame();
    EtherPauseFrame& operator=(const EtherPauseFrame& other);
    virtual EtherPauseFrame *dup() const {return new EtherPauseFrame(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getPauseTime() const;
    virtual void setPauseTime(int pauseTime);
};

inline void doPacking(cCommBuffer *b, EtherPauseFrame& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, EtherPauseFrame& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>linklayer/ethernet/EtherFrame.msg</tt> by opp_msgc.
 * <pre>
 * packet Ethernet1QTag
 * {
 *     uint8_t pcp;    
 *                     
 *     bool de;        
 *     short VID=0;   
 *                     
 *                     
 *                     
 *                     
 * }
 * </pre>
 */
class INET_API Ethernet1QTag : public ::cPacket
{
  protected:
    uint8_t pcp_var;
    bool de_var;
    short VID_var;

  private:
    void copy(const Ethernet1QTag& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ethernet1QTag&);

  public:
    Ethernet1QTag(const char *name=NULL, int kind=0);
    Ethernet1QTag(const Ethernet1QTag& other);
    virtual ~Ethernet1QTag();
    Ethernet1QTag& operator=(const Ethernet1QTag& other);
    virtual Ethernet1QTag *dup() const {return new Ethernet1QTag(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual uint8_t getPcp() const;
    virtual void setPcp(uint8_t pcp);
    virtual bool getDe() const;
    virtual void setDe(bool de);
    virtual short getVID() const;
    virtual void setVID(short VID);
};

inline void doPacking(cCommBuffer *b, Ethernet1QTag& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ethernet1QTag& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>linklayer/ethernet/EtherFrame.msg</tt> by opp_msgc.
 * <pre>
 * packet Ethernet1ahITag
 * {
 *     int ISid=0; 
 * }
 * </pre>
 */
class INET_API Ethernet1ahITag : public ::cPacket
{
  protected:
    int ISid_var;

  private:
    void copy(const Ethernet1ahITag& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ethernet1ahITag&);

  public:
    Ethernet1ahITag(const char *name=NULL, int kind=0);
    Ethernet1ahITag(const Ethernet1ahITag& other);
    virtual ~Ethernet1ahITag();
    Ethernet1ahITag& operator=(const Ethernet1ahITag& other);
    virtual Ethernet1ahITag *dup() const {return new Ethernet1ahITag(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getISid() const;
    virtual void setISid(int ISid);
};

inline void doPacking(cCommBuffer *b, Ethernet1ahITag& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ethernet1ahITag& obj) {obj.parsimUnpack(b);}


#endif // _ETHERFRAME_M_H_