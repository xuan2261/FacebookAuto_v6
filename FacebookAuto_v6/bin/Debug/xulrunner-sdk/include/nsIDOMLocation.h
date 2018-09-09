/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIDOMLocation.idl
 */

#ifndef __gen_nsIDOMLocation_h__
#define __gen_nsIDOMLocation_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMLocation */
#define NS_IDOMLOCATION_IID_STR "79de76e5-994e-4f6b-81aa-42d9adb6e67e"

#define NS_IDOMLOCATION_IID \
  {0x79de76e5, 0x994e, 0x4f6b, \
    { 0x81, 0xaa, 0x42, 0xd9, 0xad, 0xb6, 0xe6, 0x7e }}

class NS_NO_VTABLE nsIDOMLocation : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMLOCATION_IID)

  /* attribute DOMString hash; */
  NS_IMETHOD GetHash(nsAString & aHash) = 0;
  NS_IMETHOD SetHash(const nsAString & aHash) = 0;

  /* attribute DOMString host; */
  NS_IMETHOD GetHost(nsAString & aHost) = 0;
  NS_IMETHOD SetHost(const nsAString & aHost) = 0;

  /* attribute DOMString hostname; */
  NS_IMETHOD GetHostname(nsAString & aHostname) = 0;
  NS_IMETHOD SetHostname(const nsAString & aHostname) = 0;

  /* attribute DOMString href; */
  NS_IMETHOD GetHref(nsAString & aHref) = 0;
  NS_IMETHOD SetHref(const nsAString & aHref) = 0;

  /* attribute DOMString pathname; */
  NS_IMETHOD GetPathname(nsAString & aPathname) = 0;
  NS_IMETHOD SetPathname(const nsAString & aPathname) = 0;

  /* attribute DOMString port; */
  NS_IMETHOD GetPort(nsAString & aPort) = 0;
  NS_IMETHOD SetPort(const nsAString & aPort) = 0;

  /* attribute DOMString protocol; */
  NS_IMETHOD GetProtocol(nsAString & aProtocol) = 0;
  NS_IMETHOD SetProtocol(const nsAString & aProtocol) = 0;

  /* attribute DOMString search; */
  NS_IMETHOD GetSearch(nsAString & aSearch) = 0;
  NS_IMETHOD SetSearch(const nsAString & aSearch) = 0;

  /* readonly attribute DOMString origin; */
  NS_IMETHOD GetOrigin(nsAString & aOrigin) = 0;

  /* void reload ([optional] in boolean forceget); */
  NS_IMETHOD Reload(bool forceget) = 0;

  /* void replace (in DOMString url); */
  NS_IMETHOD Replace(const nsAString & url) = 0;

  /* void assign (in DOMString url); */
  NS_IMETHOD Assign(const nsAString & url) = 0;

  /* DOMString toString (); */
  NS_IMETHOD ToString(nsAString & _retval) = 0;

  /* nsIDOMLocation valueOf (); */
  NS_IMETHOD ValueOf(nsIDOMLocation * *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMLocation, NS_IDOMLOCATION_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMLOCATION \
  NS_IMETHOD GetHash(nsAString & aHash) override; \
  NS_IMETHOD SetHash(const nsAString & aHash) override; \
  NS_IMETHOD GetHost(nsAString & aHost) override; \
  NS_IMETHOD SetHost(const nsAString & aHost) override; \
  NS_IMETHOD GetHostname(nsAString & aHostname) override; \
  NS_IMETHOD SetHostname(const nsAString & aHostname) override; \
  NS_IMETHOD GetHref(nsAString & aHref) override; \
  NS_IMETHOD SetHref(const nsAString & aHref) override; \
  NS_IMETHOD GetPathname(nsAString & aPathname) override; \
  NS_IMETHOD SetPathname(const nsAString & aPathname) override; \
  NS_IMETHOD GetPort(nsAString & aPort) override; \
  NS_IMETHOD SetPort(const nsAString & aPort) override; \
  NS_IMETHOD GetProtocol(nsAString & aProtocol) override; \
  NS_IMETHOD SetProtocol(const nsAString & aProtocol) override; \
  NS_IMETHOD GetSearch(nsAString & aSearch) override; \
  NS_IMETHOD SetSearch(const nsAString & aSearch) override; \
  NS_IMETHOD GetOrigin(nsAString & aOrigin) override; \
  NS_IMETHOD Reload(bool forceget) override; \
  NS_IMETHOD Replace(const nsAString & url) override; \
  NS_IMETHOD Assign(const nsAString & url) override; \
  NS_IMETHOD ToString(nsAString & _retval) override; \
  NS_IMETHOD ValueOf(nsIDOMLocation * *_retval) override; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMLOCATION(_to) \
  NS_IMETHOD GetHash(nsAString & aHash) override { return _to GetHash(aHash); } \
  NS_IMETHOD SetHash(const nsAString & aHash) override { return _to SetHash(aHash); } \
  NS_IMETHOD GetHost(nsAString & aHost) override { return _to GetHost(aHost); } \
  NS_IMETHOD SetHost(const nsAString & aHost) override { return _to SetHost(aHost); } \
  NS_IMETHOD GetHostname(nsAString & aHostname) override { return _to GetHostname(aHostname); } \
  NS_IMETHOD SetHostname(const nsAString & aHostname) override { return _to SetHostname(aHostname); } \
  NS_IMETHOD GetHref(nsAString & aHref) override { return _to GetHref(aHref); } \
  NS_IMETHOD SetHref(const nsAString & aHref) override { return _to SetHref(aHref); } \
  NS_IMETHOD GetPathname(nsAString & aPathname) override { return _to GetPathname(aPathname); } \
  NS_IMETHOD SetPathname(const nsAString & aPathname) override { return _to SetPathname(aPathname); } \
  NS_IMETHOD GetPort(nsAString & aPort) override { return _to GetPort(aPort); } \
  NS_IMETHOD SetPort(const nsAString & aPort) override { return _to SetPort(aPort); } \
  NS_IMETHOD GetProtocol(nsAString & aProtocol) override { return _to GetProtocol(aProtocol); } \
  NS_IMETHOD SetProtocol(const nsAString & aProtocol) override { return _to SetProtocol(aProtocol); } \
  NS_IMETHOD GetSearch(nsAString & aSearch) override { return _to GetSearch(aSearch); } \
  NS_IMETHOD SetSearch(const nsAString & aSearch) override { return _to SetSearch(aSearch); } \
  NS_IMETHOD GetOrigin(nsAString & aOrigin) override { return _to GetOrigin(aOrigin); } \
  NS_IMETHOD Reload(bool forceget) override { return _to Reload(forceget); } \
  NS_IMETHOD Replace(const nsAString & url) override { return _to Replace(url); } \
  NS_IMETHOD Assign(const nsAString & url) override { return _to Assign(url); } \
  NS_IMETHOD ToString(nsAString & _retval) override { return _to ToString(_retval); } \
  NS_IMETHOD ValueOf(nsIDOMLocation * *_retval) override { return _to ValueOf(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMLOCATION(_to) \
  NS_IMETHOD GetHash(nsAString & aHash) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHash(aHash); } \
  NS_IMETHOD SetHash(const nsAString & aHash) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetHash(aHash); } \
  NS_IMETHOD GetHost(nsAString & aHost) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHost(aHost); } \
  NS_IMETHOD SetHost(const nsAString & aHost) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetHost(aHost); } \
  NS_IMETHOD GetHostname(nsAString & aHostname) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHostname(aHostname); } \
  NS_IMETHOD SetHostname(const nsAString & aHostname) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetHostname(aHostname); } \
  NS_IMETHOD GetHref(nsAString & aHref) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHref(aHref); } \
  NS_IMETHOD SetHref(const nsAString & aHref) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetHref(aHref); } \
  NS_IMETHOD GetPathname(nsAString & aPathname) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPathname(aPathname); } \
  NS_IMETHOD SetPathname(const nsAString & aPathname) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPathname(aPathname); } \
  NS_IMETHOD GetPort(nsAString & aPort) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPort(aPort); } \
  NS_IMETHOD SetPort(const nsAString & aPort) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPort(aPort); } \
  NS_IMETHOD GetProtocol(nsAString & aProtocol) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetProtocol(aProtocol); } \
  NS_IMETHOD SetProtocol(const nsAString & aProtocol) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetProtocol(aProtocol); } \
  NS_IMETHOD GetSearch(nsAString & aSearch) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSearch(aSearch); } \
  NS_IMETHOD SetSearch(const nsAString & aSearch) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSearch(aSearch); } \
  NS_IMETHOD GetOrigin(nsAString & aOrigin) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOrigin(aOrigin); } \
  NS_IMETHOD Reload(bool forceget) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Reload(forceget); } \
  NS_IMETHOD Replace(const nsAString & url) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Replace(url); } \
  NS_IMETHOD Assign(const nsAString & url) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Assign(url); } \
  NS_IMETHOD ToString(nsAString & _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ToString(_retval); } \
  NS_IMETHOD ValueOf(nsIDOMLocation * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ValueOf(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMLocation : public nsIDOMLocation
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMLOCATION

  nsDOMLocation();

private:
  ~nsDOMLocation();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsDOMLocation, nsIDOMLocation)

nsDOMLocation::nsDOMLocation()
{
  /* member initializers and constructor code */
}

nsDOMLocation::~nsDOMLocation()
{
  /* destructor code */
}

/* attribute DOMString hash; */
NS_IMETHODIMP nsDOMLocation::GetHash(nsAString & aHash)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMLocation::SetHash(const nsAString & aHash)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString host; */
NS_IMETHODIMP nsDOMLocation::GetHost(nsAString & aHost)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMLocation::SetHost(const nsAString & aHost)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString hostname; */
NS_IMETHODIMP nsDOMLocation::GetHostname(nsAString & aHostname)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMLocation::SetHostname(const nsAString & aHostname)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString href; */
NS_IMETHODIMP nsDOMLocation::GetHref(nsAString & aHref)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMLocation::SetHref(const nsAString & aHref)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString pathname; */
NS_IMETHODIMP nsDOMLocation::GetPathname(nsAString & aPathname)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMLocation::SetPathname(const nsAString & aPathname)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString port; */
NS_IMETHODIMP nsDOMLocation::GetPort(nsAString & aPort)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMLocation::SetPort(const nsAString & aPort)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString protocol; */
NS_IMETHODIMP nsDOMLocation::GetProtocol(nsAString & aProtocol)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMLocation::SetProtocol(const nsAString & aProtocol)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString search; */
NS_IMETHODIMP nsDOMLocation::GetSearch(nsAString & aSearch)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMLocation::SetSearch(const nsAString & aSearch)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString origin; */
NS_IMETHODIMP nsDOMLocation::GetOrigin(nsAString & aOrigin)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void reload ([optional] in boolean forceget); */
NS_IMETHODIMP nsDOMLocation::Reload(bool forceget)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void replace (in DOMString url); */
NS_IMETHODIMP nsDOMLocation::Replace(const nsAString & url)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void assign (in DOMString url); */
NS_IMETHODIMP nsDOMLocation::Assign(const nsAString & url)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* DOMString toString (); */
NS_IMETHODIMP nsDOMLocation::ToString(nsAString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMLocation valueOf (); */
NS_IMETHODIMP nsDOMLocation::ValueOf(nsIDOMLocation * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMLocation_h__ */
