/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIDashboard.idl
 */

#ifndef __gen_nsIDashboard_h__
#define __gen_nsIDashboard_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#include "js/Value.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    NetDashboardCallback */
#define NETDASHBOARDCALLBACK_IID_STR "19d7f24f-a95a-4fd9-87e2-d96e9e4b1f6d"

#define NETDASHBOARDCALLBACK_IID \
  {0x19d7f24f, 0xa95a, 0x4fd9, \
    { 0x87, 0xe2, 0xd9, 0x6e, 0x9e, 0x4b, 0x1f, 0x6d }}

class NS_NO_VTABLE NetDashboardCallback : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NETDASHBOARDCALLBACK_IID)

  /* void onDashboardDataAvailable (in jsval data); */
  NS_IMETHOD OnDashboardDataAvailable(JS::HandleValue data) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(NetDashboardCallback, NETDASHBOARDCALLBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NETDASHBOARDCALLBACK \
  NS_IMETHOD OnDashboardDataAvailable(JS::HandleValue data) override; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NETDASHBOARDCALLBACK(_to) \
  NS_IMETHOD OnDashboardDataAvailable(JS::HandleValue data) override { return _to OnDashboardDataAvailable(data); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NETDASHBOARDCALLBACK(_to) \
  NS_IMETHOD OnDashboardDataAvailable(JS::HandleValue data) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OnDashboardDataAvailable(data); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public NetDashboardCallback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NETDASHBOARDCALLBACK

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(_MYCLASS_, NetDashboardCallback)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void onDashboardDataAvailable (in jsval data); */
NS_IMETHODIMP _MYCLASS_::OnDashboardDataAvailable(JS::HandleValue data)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDashboard */
#define NS_IDASHBOARD_IID_STR "c79eb3c6-091a-45a6-8544-5a8d1ab79537"

#define NS_IDASHBOARD_IID \
  {0xc79eb3c6, 0x091a, 0x45a6, \
    { 0x85, 0x44, 0x5a, 0x8d, 0x1a, 0xb7, 0x95, 0x37 }}

class NS_NO_VTABLE nsIDashboard : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDASHBOARD_IID)

  /* void requestSockets (in NetDashboardCallback cb); */
  NS_IMETHOD RequestSockets(NetDashboardCallback *cb) = 0;

  /* void requestHttpConnections (in NetDashboardCallback cb); */
  NS_IMETHOD RequestHttpConnections(NetDashboardCallback *cb) = 0;

  /* void requestWebsocketConnections (in NetDashboardCallback cb); */
  NS_IMETHOD RequestWebsocketConnections(NetDashboardCallback *cb) = 0;

  /* void requestDNSInfo (in NetDashboardCallback cb); */
  NS_IMETHOD RequestDNSInfo(NetDashboardCallback *cb) = 0;

  /* void requestConnection (in ACString aHost, in unsigned long aPort, in string aProtocol, in unsigned long aTimeout, in NetDashboardCallback cb); */
  NS_IMETHOD RequestConnection(const nsACString & aHost, uint32_t aPort, const char * aProtocol, uint32_t aTimeout, NetDashboardCallback *cb) = 0;

  /* attribute boolean enableLogging; */
  NS_IMETHOD GetEnableLogging(bool *aEnableLogging) = 0;
  NS_IMETHOD SetEnableLogging(bool aEnableLogging) = 0;

  /* void requestDNSLookup (in ACString aHost, in NetDashboardCallback cb); */
  NS_IMETHOD RequestDNSLookup(const nsACString & aHost, NetDashboardCallback *cb) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDashboard, NS_IDASHBOARD_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDASHBOARD \
  NS_IMETHOD RequestSockets(NetDashboardCallback *cb) override; \
  NS_IMETHOD RequestHttpConnections(NetDashboardCallback *cb) override; \
  NS_IMETHOD RequestWebsocketConnections(NetDashboardCallback *cb) override; \
  NS_IMETHOD RequestDNSInfo(NetDashboardCallback *cb) override; \
  NS_IMETHOD RequestConnection(const nsACString & aHost, uint32_t aPort, const char * aProtocol, uint32_t aTimeout, NetDashboardCallback *cb) override; \
  NS_IMETHOD GetEnableLogging(bool *aEnableLogging) override; \
  NS_IMETHOD SetEnableLogging(bool aEnableLogging) override; \
  NS_IMETHOD RequestDNSLookup(const nsACString & aHost, NetDashboardCallback *cb) override; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDASHBOARD(_to) \
  NS_IMETHOD RequestSockets(NetDashboardCallback *cb) override { return _to RequestSockets(cb); } \
  NS_IMETHOD RequestHttpConnections(NetDashboardCallback *cb) override { return _to RequestHttpConnections(cb); } \
  NS_IMETHOD RequestWebsocketConnections(NetDashboardCallback *cb) override { return _to RequestWebsocketConnections(cb); } \
  NS_IMETHOD RequestDNSInfo(NetDashboardCallback *cb) override { return _to RequestDNSInfo(cb); } \
  NS_IMETHOD RequestConnection(const nsACString & aHost, uint32_t aPort, const char * aProtocol, uint32_t aTimeout, NetDashboardCallback *cb) override { return _to RequestConnection(aHost, aPort, aProtocol, aTimeout, cb); } \
  NS_IMETHOD GetEnableLogging(bool *aEnableLogging) override { return _to GetEnableLogging(aEnableLogging); } \
  NS_IMETHOD SetEnableLogging(bool aEnableLogging) override { return _to SetEnableLogging(aEnableLogging); } \
  NS_IMETHOD RequestDNSLookup(const nsACString & aHost, NetDashboardCallback *cb) override { return _to RequestDNSLookup(aHost, cb); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDASHBOARD(_to) \
  NS_IMETHOD RequestSockets(NetDashboardCallback *cb) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RequestSockets(cb); } \
  NS_IMETHOD RequestHttpConnections(NetDashboardCallback *cb) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RequestHttpConnections(cb); } \
  NS_IMETHOD RequestWebsocketConnections(NetDashboardCallback *cb) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RequestWebsocketConnections(cb); } \
  NS_IMETHOD RequestDNSInfo(NetDashboardCallback *cb) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RequestDNSInfo(cb); } \
  NS_IMETHOD RequestConnection(const nsACString & aHost, uint32_t aPort, const char * aProtocol, uint32_t aTimeout, NetDashboardCallback *cb) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RequestConnection(aHost, aPort, aProtocol, aTimeout, cb); } \
  NS_IMETHOD GetEnableLogging(bool *aEnableLogging) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEnableLogging(aEnableLogging); } \
  NS_IMETHOD SetEnableLogging(bool aEnableLogging) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetEnableLogging(aEnableLogging); } \
  NS_IMETHOD RequestDNSLookup(const nsACString & aHost, NetDashboardCallback *cb) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RequestDNSLookup(aHost, cb); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDashboard : public nsIDashboard
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDASHBOARD

  nsDashboard();

private:
  ~nsDashboard();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsDashboard, nsIDashboard)

nsDashboard::nsDashboard()
{
  /* member initializers and constructor code */
}

nsDashboard::~nsDashboard()
{
  /* destructor code */
}

/* void requestSockets (in NetDashboardCallback cb); */
NS_IMETHODIMP nsDashboard::RequestSockets(NetDashboardCallback *cb)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void requestHttpConnections (in NetDashboardCallback cb); */
NS_IMETHODIMP nsDashboard::RequestHttpConnections(NetDashboardCallback *cb)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void requestWebsocketConnections (in NetDashboardCallback cb); */
NS_IMETHODIMP nsDashboard::RequestWebsocketConnections(NetDashboardCallback *cb)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void requestDNSInfo (in NetDashboardCallback cb); */
NS_IMETHODIMP nsDashboard::RequestDNSInfo(NetDashboardCallback *cb)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void requestConnection (in ACString aHost, in unsigned long aPort, in string aProtocol, in unsigned long aTimeout, in NetDashboardCallback cb); */
NS_IMETHODIMP nsDashboard::RequestConnection(const nsACString & aHost, uint32_t aPort, const char * aProtocol, uint32_t aTimeout, NetDashboardCallback *cb)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean enableLogging; */
NS_IMETHODIMP nsDashboard::GetEnableLogging(bool *aEnableLogging)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDashboard::SetEnableLogging(bool aEnableLogging)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void requestDNSLookup (in ACString aHost, in NetDashboardCallback cb); */
NS_IMETHODIMP nsDashboard::RequestDNSLookup(const nsACString & aHost, NetDashboardCallback *cb)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDashboard_h__ */
