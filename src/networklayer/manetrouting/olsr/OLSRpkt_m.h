//
// Generated file, do not edit! Created by opp_msgc 4.5 from networklayer/manetrouting/olsr/OLSRpkt.msg.
//

#ifndef _OLSRPKT_M_H_
#define _OLSRPKT_M_H_

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
#include "OLSR_ETX_parameter.h"
#include "ManetAddress.h"
#include <string.h>

#ifndef nsaddr_t
typedef ManetAddress nsaddr_t;
#endif

/********** Message types **********/

#define OLSR_HELLO_MSG      1

#define OLSR_TC_MSG     2

#define OLSR_MID_MSG        3



#define OLSR_ETX_HELLO_MSG  OLSR_HELLO_MSG

#define OLSR_ETX_TC_MSG     OLSR_TC_MSG

#define OLSR_ETX_MID_MSG    OLSR_MID_MSG

/********** Packets stuff **********/









#ifdef OLSR_IPv6
#define ADDR_SIZE_DEFAULT   16
#else
#define ADDR_SIZE_DEFAULT   4
#endif



#define OLSR_MAX_MSGS       4
#define OLSR_ETX_MAX_MSGS OLSR_MAX_MSGS

#define OLSR_MAX_HELLOS     12
#define OLSR_ETX_MAX_HELLOS OLSR_MAX_HELLOS

#define OLSR_MAX_ADDRS      64
#define OLSR_ETX_MAX_ADDRS OLSR_MAX_ADDRS


#define OLSR_PKT_HDR_SIZE   4
#define OLSR_ETX_PKT_HDR_SIZE OLSR_PKT_HDR_SIZE


#define OLSR_MSG_HDR_SIZE   12
#define OLSR_ETX_MSG_HDR_SIZE OLSR_MSG_HDR_SIZE


#define OLSR_HELLO_HDR_SIZE 4
#define OLSR_ETX_HELLO_HDR_SIZE OLSR_HELLO_HDR_SIZE


#define OLSR_HELLO_MSG_HDR_SIZE 4
#define OLSR_ETX_HELLO_MSG_HDR_SIZE OLSR_HELLO_MSG_HDR_SIZE


#define OLSR_TC_HDR_SIZE    4
#define OLSR_ETX_TC_HDR_SIZE OLSR_TC_HDR_SIZE


class OlsrAddressSize
{
    public:
    static uint32_t ADDR_SIZE;
};

typedef struct OLSR_ETX_iface_address {

  
  nsaddr_t  iface_address_;

  
  double  link_quality_;
  double  nb_link_quality_;

  
  double  link_delay_;
  double  nb_link_delay_;
  int parameter_qos_;

  inline nsaddr_t& iface_address() { return iface_address_; }

  
  inline double& link_quality() { return link_quality_; }
  inline double& nb_link_quality() { return nb_link_quality_; }

  inline double  etx()  {
    double mult = (double) (link_quality() * nb_link_quality());
    switch (parameter_qos_) {
    case OLSR_ETX_BEHAVIOR_ETX:
      return (mult < 0.01) ? 100.0 : (double) 1.0 / (double) mult;
      break;

    case OLSR_ETX_BEHAVIOR_ML:
      return mult;
      break;

    case OLSR_ETX_BEHAVIOR_NONE:
    default:
      return 0.0;
      break;
    }
  }

  
  inline double& link_delay() { return link_delay_; }
  inline double& nb_link_delay() { return nb_link_delay_; }

} OLSR_ETX_iface_address;



typedef struct OLSR_hello_msg {

  
  uint8_t  link_code_;
  
  uint8_t  reserved_;
  
  uint16_t  link_msg_size_;
  
  OLSR_ETX_iface_address  nb_iface_addrs_[OLSR_MAX_ADDRS];
  
  int    count;

  inline uint8_t&  link_code()    { return link_code_; }
  inline uint8_t&  reserved()    { return reserved_; }
  inline uint16_t&  link_msg_size()    { return link_msg_size_; }
  inline OLSR_ETX_iface_address&  nb_etx_iface_addr(int i)  { return nb_iface_addrs_[i]; }
  inline nsaddr_t  & nb_iface_addr(int i)  { return nb_iface_addrs_[i].iface_address_;}
  inline void set_qos_behaviour(int bh) {for(int i=0;i<OLSR_MAX_ADDRS;i++) nb_iface_addrs_[i].parameter_qos_=bh;}

  inline uint32_t size() { return OLSR_HELLO_MSG_HDR_SIZE + count*OlsrAddressSize::ADDR_SIZE; }

} OLSR_ETX_hello_msg;

#if 0

typedef struct OLSR_hello_msg {

        
    uint8_t link_code_;
    
    uint8_t reserved_;
    
    uint16_t    link_msg_size_;
    
    nsaddr_t    nb_iface_addrs_[OLSR_MAX_ADDRS];
    
    int     count;

    inline uint8_t& link_code()     { return link_code_; }
    inline uint8_t& reserved()      { return reserved_; }
    inline uint16_t&    link_msg_size()     { return link_msg_size_; }
    inline nsaddr_t&    nb_iface_addr(int i)    { return nb_iface_addrs_[i]; }

    inline uint32_t size() { return OLSR_HELLO_MSG_HDR_SIZE + count*OlsrAddressSize::ADDR_SIZE; }

} OLSR_hello_msg;
#endif



typedef struct OLSR_hello :cObject {

    
    uint16_t    reserved_;
    
    uint8_t htime_;
    
    uint8_t willingness_;
    
    OLSR_hello_msg  hello_body_[OLSR_MAX_HELLOS];
    
    int     count;

    inline uint16_t&    reserved()      { return reserved_; }
    inline uint8_t& htime()         { return htime_; }
    inline uint8_t& willingness()       { return willingness_; }
    inline OLSR_hello_msg&  hello_msg(int i)    { return hello_body_[i]; }

    inline uint32_t size() {
        uint32_t sz = OLSR_HELLO_HDR_SIZE;
        for (int i = 0; i < count; i++)
            sz += hello_msg(i).size();
        return sz;
    }
} OLSR_hello;



typedef struct OLSR_tc :cObject{

        
    uint16_t    ansn_;
    
    uint16_t    reserved_;
    
    OLSR_ETX_iface_address  nb_main_addrs_[OLSR_MAX_ADDRS];
    
    int     count;

    inline  uint16_t&   ansn()          { return ansn_; }
    inline  uint16_t&   reserved()      { return reserved_; }
    inline  nsaddr_t&   nb_main_addr(int i) { return nb_main_addrs_[i].iface_address_; }
    inline  OLSR_ETX_iface_address& nb_etx_main_addr(int i) { return nb_main_addrs_[i]; }
    inline void set_qos_behaviour(int bh) {for(int i=0;i<OLSR_MAX_ADDRS;i++) nb_main_addrs_[i].parameter_qos_=bh;}
    inline  uint32_t size() { return OLSR_TC_HDR_SIZE + count*OlsrAddressSize::ADDR_SIZE; }
} OLSR_tc;

#if 0

typedef struct OLSR_tc :cObject{

        
    uint16_t    ansn_;
    
    uint16_t    reserved_;
    
    nsaddr_t    nb_main_addrs_[OLSR_MAX_ADDRS];
    
    int     count;

    inline  uint16_t&   ansn()          { return ansn_; }
    inline  uint16_t&   reserved()      { return reserved_; }
    inline  nsaddr_t&   nb_main_addr(int i) { return nb_main_addrs_[i]; }

    inline  uint32_t size() { return OLSR_TC_HDR_SIZE + count*OlsrAddressSize::ADDR_SIZE; }

} OLSR_tc;
#endif


typedef struct OLSR_mid :cObject{

    
    nsaddr_t    iface_addrs_[OLSR_MAX_ADDRS];
    
    int     count;

    inline nsaddr_t & iface_addr(int i) { return iface_addrs_[i]; }
    void    setIface_addr(int i,nsaddr_t a) {iface_addrs_[i]=a; }

    inline uint32_t size()          { return count*OlsrAddressSize::ADDR_SIZE; }

} OLSR_mid;

#define MidSize sizeof (OLSR_mid)
#define HelloSize sizeof (OLSR_hello)
#define TcSize sizeof(OLSR_tc)

#define MAXBODY (HelloSize > TcSize ?  (HelloSize > MidSize? HelloSize: MidSize):(TcSize > MidSize? TcSize:MidSize))


class   MsgBody {
public:
    OLSR_hello  hello_;
    OLSR_tc     tc_;
    OLSR_mid    mid_;


    MsgBody(MsgBody &other){
            memcpy(&hello_,&other.hello_,sizeof(OLSR_hello));
            memcpy(&tc_,&other.tc_,sizeof(OLSR_tc));
            memcpy(&mid_,&other.mid_,sizeof(OLSR_mid));
        }
    MsgBody(){
            memset(&hello_,0,sizeof(OLSR_hello));
            memset(&tc_,0,sizeof(OLSR_tc));
            memset(&mid_,0,sizeof(OLSR_mid));
          }
    ~MsgBody(){}
    MsgBody & operator =  (const MsgBody &other){
            if (this==&other) return *this;
                            memcpy(&hello_,&other.hello_,sizeof(OLSR_hello));
                            memcpy(&tc_,&other.tc_,sizeof(OLSR_tc));
                            memcpy(&mid_,&other.mid_,sizeof(OLSR_mid));
                return *this;
            }
    OLSR_hello  * hello(){return &hello_;}
    OLSR_tc * tc(){return &tc_;}
    OLSR_mid* mid(){return &mid_;}


};


typedef struct OLSR_msg {

    uint8_t msg_type_;  
    uint8_t vtime_;     
    uint16_t    msg_size_;  
    nsaddr_t    orig_addr_; 
    uint8_t ttl_;       
    uint8_t hop_count_; 
    uint16_t    msg_seq_num_;   

    MsgBody msg_body_;          
    inline  uint8_t&    msg_type()  { return msg_type_; }
    inline  uint8_t&    vtime()     { return vtime_; }
    inline  uint16_t&   msg_size()  { return msg_size_; }
    inline  nsaddr_t    & orig_addr()   { return orig_addr_; }
    inline  void    setOrig_addr(nsaddr_t a)    {orig_addr_=a; }
    inline  uint8_t&    ttl()       { return ttl_; }
    inline  uint8_t&    hop_count() { return hop_count_; }
    inline  uint16_t&   msg_seq_num()   { return msg_seq_num_; }
    inline  OLSR_hello& hello()     { return *(msg_body_.hello()); }
    inline  OLSR_tc&    tc()        { return *(msg_body_.tc()); }
    inline  OLSR_mid&   mid()       { return *(msg_body_.mid()); }


    inline uint32_t size() {
        uint32_t sz = OLSR_MSG_HDR_SIZE;
        if (msg_type() == OLSR_HELLO_MSG)
            sz += hello().size();
        else if (msg_type() == OLSR_TC_MSG)
            sz += tc().size();
        else if (msg_type() == OLSR_MID_MSG)
            sz += mid().size();
        return sz;
    }
    OLSR_msg(){}
    OLSR_msg(const OLSR_msg &other)
    {
        msg_type_=other.msg_type_;  
        vtime_=other.vtime_;        
        msg_size_=other.msg_size_;  
        orig_addr_=other.orig_addr_;    
        ttl_=other.ttl_;        
        hop_count_=other.hop_count_;    
        msg_seq_num_=other.msg_seq_num_;    
        msg_body_=other.msg_body_;          
    }

    OLSR_msg & operator = (const OLSR_msg &other)
    {
        if (this==&other) return *this;
        msg_type_=other.msg_type_;  
        vtime_=other.vtime_;        
        msg_size_=other.msg_size_;  
        orig_addr_=other.orig_addr_;    
        ttl_=other.ttl_;        
        hop_count_=other.hop_count_;    
        msg_seq_num_=other.msg_seq_num_;    
        msg_body_=other.msg_body_;          
        return *this;
    }

} OLSR_msg;
// }}



/**
 * Class generated from <tt>networklayer/manetrouting/olsr/OLSRpkt.msg</tt> by opp_msgc.
 * <pre>
 * packet OLSR_pkt
 * {
 *     @omitGetVerb(true);
 *     bool reduceFuncionality=false;
 *     short pkt_seq_num;          
 *     long sn;                    
 *     double send_time;           
 *     OLSR_msg msg[];             
 * }
 * </pre>
 */
class INET_API OLSR_pkt : public ::cPacket
{
  protected:
    bool reduceFuncionality_var;
    short pkt_seq_num_var;
    long sn_var;
    double send_time_var;
    OLSR_msg *msg_var; // array ptr
    unsigned int msg_arraysize;

  private:
    void copy(const OLSR_pkt& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const OLSR_pkt&);

  public:
    OLSR_pkt(const char *name=NULL, int kind=0);
    OLSR_pkt(const OLSR_pkt& other);
    virtual ~OLSR_pkt();
    OLSR_pkt& operator=(const OLSR_pkt& other);
    virtual OLSR_pkt *dup() const {return new OLSR_pkt(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual bool reduceFuncionality() const;
    virtual void setReduceFuncionality(bool reduceFuncionality);
    virtual short pkt_seq_num() const;
    virtual void setPkt_seq_num(short pkt_seq_num);
    virtual long sn() const;
    virtual void setSn(long sn);
    virtual double send_time() const;
    virtual void setSend_time(double send_time);
    virtual void setMsgArraySize(unsigned int size);
    virtual unsigned int msgArraySize() const;
    virtual OLSR_msg& msg(unsigned int k);
    virtual const OLSR_msg& msg(unsigned int k) const {return const_cast<OLSR_pkt*>(this)->msg(k);}
    virtual void setMsg(unsigned int k, const OLSR_msg& msg);
};

inline void doPacking(cCommBuffer *b, OLSR_pkt& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, OLSR_pkt& obj) {obj.parsimUnpack(b);}


#endif // _OLSRPKT_M_H_
