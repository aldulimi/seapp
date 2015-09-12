//
// Generated file, do not edit! Created by opp_msgc 4.5 from applications/httptools/HttpMessages.msg.
//

#ifndef _HTTPMESSAGES_M_H_
#define _HTTPMESSAGES_M_H_

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



/**
 * Enum generated from <tt>applications/httptools/HttpMessages.msg</tt> by opp_msgc.
 * <pre>
 * enum HttpContentType
 * {
 *     CT_UNKNOWN = 0;
 *     CT_HTML = 1;
 *     CT_IMAGE = 2;
 *     CT_TEXT = 3;
 * };
 * </pre>
 */
enum HttpContentType {
    CT_UNKNOWN = 0,
    CT_HTML = 1,
    CT_IMAGE = 2,
    CT_TEXT = 3
};

/**
 * Class generated from <tt>applications/httptools/HttpMessages.msg</tt> by opp_msgc.
 * <pre>
 * packet HttpBaseMessage
 * {
 *     @omitGetVerb(true);
 *     string targetUrl;               
 *     string originatorUrl = "";      
 *     int protocol = 11;              
 *     bool keepAlive = true;          
 *     int serial = 0;                 
 *     string heading = "";                
 *     string payload = "";                
 * }
 * </pre>
 */
class INET_API HttpBaseMessage : public ::cPacket
{
  protected:
    opp_string targetUrl_var;
    opp_string originatorUrl_var;
    int protocol_var;
    bool keepAlive_var;
    int serial_var;
    opp_string heading_var;
    opp_string payload_var;

  private:
    void copy(const HttpBaseMessage& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const HttpBaseMessage&);

  public:
    HttpBaseMessage(const char *name=NULL, int kind=0);
    HttpBaseMessage(const HttpBaseMessage& other);
    virtual ~HttpBaseMessage();
    HttpBaseMessage& operator=(const HttpBaseMessage& other);
    virtual HttpBaseMessage *dup() const {return new HttpBaseMessage(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual const char * targetUrl() const;
    virtual void setTargetUrl(const char * targetUrl);
    virtual const char * originatorUrl() const;
    virtual void setOriginatorUrl(const char * originatorUrl);
    virtual int protocol() const;
    virtual void setProtocol(int protocol);
    virtual bool keepAlive() const;
    virtual void setKeepAlive(bool keepAlive);
    virtual int serial() const;
    virtual void setSerial(int serial);
    virtual const char * heading() const;
    virtual void setHeading(const char * heading);
    virtual const char * payload() const;
    virtual void setPayload(const char * payload);
};

inline void doPacking(cCommBuffer *b, HttpBaseMessage& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, HttpBaseMessage& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>applications/httptools/HttpMessages.msg</tt> by opp_msgc.
 * <pre>
 * packet HttpRequestMessage extends HttpBaseMessage
 * {
 *     @omitGetVerb(true);         
 *     bool badRequest = false;    
 * }
 * </pre>
 */
class INET_API HttpRequestMessage : public ::HttpBaseMessage
{
  protected:
    bool badRequest_var;

  private:
    void copy(const HttpRequestMessage& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const HttpRequestMessage&);

  public:
    HttpRequestMessage(const char *name=NULL, int kind=0);
    HttpRequestMessage(const HttpRequestMessage& other);
    virtual ~HttpRequestMessage();
    HttpRequestMessage& operator=(const HttpRequestMessage& other);
    virtual HttpRequestMessage *dup() const {return new HttpRequestMessage(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual bool badRequest() const;
    virtual void setBadRequest(bool badRequest);
};

inline void doPacking(cCommBuffer *b, HttpRequestMessage& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, HttpRequestMessage& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>applications/httptools/HttpMessages.msg</tt> by opp_msgc.
 * <pre>
 * packet HttpReplyMessage extends HttpBaseMessage
 * {
 *     @omitGetVerb(true);
 *     int result = 0;      
 *     int contentType @enum(HttpContentType) = CT_UNKNOWN;
 * }
 * </pre>
 */
class INET_API HttpReplyMessage : public ::HttpBaseMessage
{
  protected:
    int result_var;
    int contentType_var;

  private:
    void copy(const HttpReplyMessage& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const HttpReplyMessage&);

  public:
    HttpReplyMessage(const char *name=NULL, int kind=0);
    HttpReplyMessage(const HttpReplyMessage& other);
    virtual ~HttpReplyMessage();
    HttpReplyMessage& operator=(const HttpReplyMessage& other);
    virtual HttpReplyMessage *dup() const {return new HttpReplyMessage(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int result() const;
    virtual void setResult(int result);
    virtual int contentType() const;
    virtual void setContentType(int contentType);
};

inline void doPacking(cCommBuffer *b, HttpReplyMessage& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, HttpReplyMessage& obj) {obj.parsimUnpack(b);}


#endif // _HTTPMESSAGES_M_H_