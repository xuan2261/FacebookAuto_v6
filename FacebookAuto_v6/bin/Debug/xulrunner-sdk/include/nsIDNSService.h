/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIDNSService.idl
 */

#ifndef __gen_nsIDNSService_h__
#define __gen_nsIDNSService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsICancelable; /* forward declaration */

class nsIEventTarget; /* forward declaration */

class nsIDNSRecord; /* forward declaration */

class nsIDNSListener; /* forward declaration */

template<class T> class nsTArray;
namespace mozilla { namespace net {
    struct DNSCacheEntries;
} }

/* starting interface:    nsIDNSService */
#define NS_IDNSSERVICE_IID_STR "de5642c6-61fc-4fcf-9a47-03226b0d4e21"

#define NS_IDNSSERVICE_IID \
  {0xde5642c6, 0x61fc, 0x4fcf, \
    { 0x9a, 0x47, 0x03, 0x22, 0x6b, 0x0d, 0x4e, 0x21 }}

class NS_NO_VTABLE nsIDNSService : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDNSSERVICE_IID)

  /* nsICancelable asyncResolve (in AUTF8String aHostName, in unsigned long aFlags, in nsIDNSListener aListener, in nsIEventTarget aListenerTarget); */
  NS_IMETHOD AsyncResolve(const nsACString & aHostName, uint32_t aFlags, nsIDNSListener *aListener, nsIEventTarget *aListenerTarget, nsICancelable * *_retval) = 0;

  /* void cancelAsyncResolve (in AUTF8String aHostName, in unsigned long aFlags, in nsIDNSListener aListener, in nsresult aReason); */
  NS_IMETHOD CancelAsyncResolve(const nsACString & aHostName, uint32_t aFlags, nsIDNSListener *aListener, nsresult aReason) = 0;

  /* nsIDNSRecord resolve (in AUTF8String aHostName, in unsigned long aFlags); */
  NS_IMETHOD Resolve(const nsACString & aHostName, uint32_t aFlags, nsIDNSRecord * *_retval) = 0;

  /* nsICancelable asyncResolveExtended (in AUTF8String aHostName, in unsigned long aFlags, in AUTF8String aNetworkInterface, in nsIDNSListener aListener, in nsIEventTarget aListenerTarget); */
  NS_IMETHOD AsyncResolveExtended(const nsACString & aHostName, uint32_t aFlags, const nsACString & aNetworkInterface, nsIDNSListener *aListener, nsIEventTarget *aListenerTarget, nsICancelable * *_retval) = 0;

  /* void cancelAsyncResolveExtended (in AUTF8String aHostName, in unsigned long aFlags, in AUTF8String aNetworkInterface, in nsIDNSListener aListener, in nsresult aReason); */
  NS_IMETHOD CancelAsyncResolveExtended(const nsACString & aHostName, uint32_t aFlags, const nsACString & aNetworkInterface, nsIDNSListener *aListener, nsresult aReason) = 0;

  /* [noscript] void getDNSCacheEntries (in EntriesArray args); */
  NS_IMETHOD GetDNSCacheEntries(nsTArray<mozilla::net::DNSCacheEntries> *args) = 0;

  /* readonly attribute AUTF8String myHostName; */
  NS_IMETHOD GetMyHostName(nsACString & aMyHostName) = 0;

  enum {
    RESOLVE_BYPASS_CACHE = 1U,
    RESOLVE_CANONICAL_NAME = 2U,
    RESOLVE_PRIORITY_MEDIUM = 4U,
    RESOLVE_PRIORITY_LOW = 8U,
    RESOLVE_SPECULATE = 16U,
    RESOLVE_DISABLE_IPV6 = 32U,
    RESOLVE_OFFLINE = 64U,
    RESOLVE_DISABLE_IPV4 = 128U,
    RESOLVE_ALLOW_NAME_COLLISION = 256U
  };

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDNSService, NS_IDNSSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDNSSERVICE \
  NS_IMETHOD AsyncResolve(const nsACString & aHostName, uint32_t aFlags, nsIDNSListener *aListener, nsIEventTarget *aListenerTarget, nsICancelable * *_retval) override; \
  NS_IMETHOD CancelAsyncResolve(const nsACString & aHostName, uint32_t aFlags, nsIDNSListener *aListener, nsresult aReason) override; \
  NS_IMETHOD Resolve(const nsACString & aHostName, uint32_t aFlags, nsIDNSRecord * *_retval) override; \
  NS_IMETHOD AsyncResolveExtended(const nsACString & aHostName, uint32_t aFlags, const nsACString & aNetworkInterface, nsIDNSListener *aListener, nsIEventTarget *aListenerTarget, nsICancelable * *_retval) override; \
  NS_IMETHOD CancelAsyncResolveExtended(const nsACString & aHostName, uint32_t aFlags, const nsACString & aNetworkInterface, nsIDNSListener *aListener, nsresult aReason) override; \
  NS_IMETHOD GetDNSCacheEntries(nsTArray<mozilla::net::DNSCacheEntries> *args) override; \
  NS_IMETHOD GetMyHostName(nsACString & aMyHostName) override; \

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDNSSERVICE(_to) \
  NS_IMETHOD AsyncResolve(const nsACString & aHostName, uint32_t aFlags, nsIDNSListener *aListener, nsIEventTarget *aListenerTarget, nsICancelable * *_retval) override { return _to AsyncResolve(aHostName, aFlags, aListener, aListenerTarget, _retval); } \
  NS_IMETHOD CancelAsyncResolve(const nsACString & aHostName, uint32_t aFlags, nsIDNSListener *aListener, nsresult aReason) override { return _to CancelAsyncResolve(aHostName, aFlags, aListener, aReason); } \
  NS_IMETHOD Resolve(const nsACString & aHostName, uint32_t aFlags, nsIDNSRecord * *_retval) override { return _to Resolve(aHostName, aFlags, _retval); } \
  NS_IMETHOD AsyncResolveExtended(const nsACString & aHostName, uint32_t aFlags, const nsACString & aNetworkInterface, nsIDNSListener *aListener, nsIEventTarget *aListenerTarget, nsICancelable * *_retval) override { return _to AsyncResolveExtended(aHostName, aFlags, aNetworkInterface, aListener, aListenerTarget, _retval); } \
  NS_IMETHOD CancelAsyncResolveExtended(const nsACString & aHostName, uint32_t aFlags, const nsACString & aNetworkInterface, nsIDNSListener *aListener, nsresult aReason) override { return _to CancelAsyncResolveExtended(aHostName, aFlags, aNetworkInterface, aListener, aReason); } \
  NS_IMETHOD GetDNSCacheEntries(nsTArray<mozilla::net::DNSCacheEntries> *args) override { return _to GetDNSCacheEntries(args); } \
  NS_IMETHOD GetMyHostName(nsACString & aMyHostName) override { return _to GetMyHostName(aMyHostName); } \

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDNSSERVICE(_to) \
  NS_IMETHOD AsyncResolve(const nsACString & aHostName, uint32_t aFlags, nsIDNSListener *aListener, nsIEventTarget *aListenerTarget, nsICancelable * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AsyncResolve(aHostName, aFlags, aListener, aListenerTarget, _retval); } \
  NS_IMETHOD CancelAsyncResolve(const nsACString & aHostName, uint32_t aFlags, nsIDNSListener *aListener, nsresult aReason) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CancelAsyncResolve(aHostName, aFlags, aListener, aReason); } \
  NS_IMETHOD Resolve(const nsACString & aHostName, uint32_t aFlags, nsIDNSRecord * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Resolve(aHostName, aFlags, _retval); } \
  NS_IMETHOD AsyncResolveExtended(const nsACString & aHostName, uint32_t aFlags, const nsACString & aNetworkInterface, nsIDNSListener *aListener, nsIEventTarget *aListenerTarget, nsICancelable * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AsyncResolveExtended(aHostName, aFlags, aNetworkInterface, aListener, aListenerTarget, _retval); } \
  NS_IMETHOD CancelAsyncResolveExtended(const nsACString & aHostName, uint32_t aFlags, const nsACString & aNetworkInterface, nsIDNSListener *aListener, nsresult aReason) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CancelAsyncResolveExtended(aHostName, aFlags, aNetworkInterface, aListener, aReason); } \
  NS_IMETHOD GetDNSCacheEntries(nsTArray<mozilla::net::DNSCacheEntries> *args) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDNSCacheEntries(args); } \
  NS_IMETHOD GetMyHostName(nsACString & aMyHostName) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMyHostName(aMyHostName); } \

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDNSService : public nsIDNSService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDNSSERVICE

  nsDNSService();

private:
  ~nsDNSService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsDNSService, nsIDNSService)

nsDNSService::nsDNSService()
{
  /* member initializers and constructor code */
}

nsDNSService::~nsDNSService()
{
  /* destructor code */
}

/* nsICancelable asyncResolve (in AUTF8String aHostName, in unsigned long aFlags, in nsIDNSListener aListener, in nsIEventTarget aListenerTarget); */
NS_IMETHODIMP nsDNSService::AsyncResolve(const nsACString & aHostName, uint32_t aFlags, nsIDNSListener *aListener, nsIEventTarget *aListenerTarget, nsICancelable * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void cancelAsyncResolve (in AUTF8String aHostName, in unsigned long aFlags, in nsIDNSListener aListener, in nsresult aReason); */
NS_IMETHODIMP nsDNSService::CancelAsyncResolve(const nsACString & aHostName, uint32_t aFlags, nsIDNSListener *aListener, nsresult aReason)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDNSRecord resolve (in AUTF8String aHostName, in unsigned long aFlags); */
NS_IMETHODIMP nsDNSService::Resolve(const nsACString & aHostName, uint32_t aFlags, nsIDNSRecord * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsICancelable asyncResolveExtended (in AUTF8String aHostName, in unsigned long aFlags, in AUTF8String aNetworkInterface, in nsIDNSListener aListener, in nsIEventTarget aListenerTarget); */
NS_IMETHODIMP nsDNSService::AsyncResolveExtended(const nsACString & aHostName, uint32_t aFlags, const nsACString & aNetworkInterface, nsIDNSListener *aListener, nsIEventTarget *aListenerTarget, nsICancelable * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void cancelAsyncResolveExtended (in AUTF8String aHostName, in unsigned long aFlags, in AUTF8String aNetworkInterface, in nsIDNSListener aListener, in nsresult aReason); */
NS_IMETHODIMP nsDNSService::CancelAsyncResolveExtended(const nsACString & aHostName, uint32_t aFlags, const nsACString & aNetworkInterface, nsIDNSListener *aListener, nsresult aReason)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void getDNSCacheEntries (in EntriesArray args); */
NS_IMETHODIMP nsDNSService::GetDNSCacheEntries(nsTArray<mozilla::net::DNSCacheEntries> *args)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AUTF8String myHostName; */
NS_IMETHODIMP nsDNSService::GetMyHostName(nsACString & aMyHostName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDNSService_h__ */
