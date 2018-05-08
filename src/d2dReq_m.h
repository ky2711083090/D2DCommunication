//
// Generated file, do not edit! Created by nedtool 5.3 from d2dReq.msg.
//

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#ifndef __D2DREQ_M_H
#define __D2DREQ_M_H

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0503
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



/**
 * Class generated from <tt>d2dReq.msg:19</tt> by nedtool.
 * <pre>
 * //
 * // TODO generated message class
 * //
 * message D2dReq
 * {
 *     int userId;
 *     int fileId;
 * }
 * </pre>
 */
class D2dReq : public ::omnetpp::cMessage
{
  protected:
    int userId;
    int fileId;

  private:
    void copy(const D2dReq& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const D2dReq&);

  public:
    D2dReq(const char *name=nullptr, short kind=0);
    D2dReq(const D2dReq& other);
    virtual ~D2dReq();
    D2dReq& operator=(const D2dReq& other);
    virtual D2dReq *dup() const override {return new D2dReq(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual int getUserId() const;
    virtual void setUserId(int userId);
    virtual int getFileId() const;
    virtual void setFileId(int fileId);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const D2dReq& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, D2dReq& obj) {obj.parsimUnpack(b);}


#endif // ifndef __D2DREQ_M_H

