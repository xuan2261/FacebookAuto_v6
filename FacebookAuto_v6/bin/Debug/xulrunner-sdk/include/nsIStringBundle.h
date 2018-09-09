/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIStringBundle.idl
 */

#ifndef __gen_nsIStringBundle_h__
#define __gen_nsIStringBundle_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsISimpleEnumerator_h__
#include "nsISimpleEnumerator.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

// Define Contractid and CID
// {D85A17C1-AA7C-11d2-9B8C-00805F8A16D9}
#define NS_STRINGBUNDLESERVICE_CID \
{ 0xd85a17c1, 0xaa7c, 0x11d2, \
  { 0x9b, 0x8c, 0x0, 0x80, 0x5f, 0x8a, 0x16, 0xd9 } }
#define NS_STRINGBUNDLE_CONTRACTID "@mozilla.org/intl/stringbundle;1"
/** 
 * observer needs to check if the bundle handle matches
 */
#define NS_STRBUNDLE_LOADED_TOPIC "strbundle-loaded"

/* starting interface:    nsIStringBundle */
#define NS_ISTRINGBUNDLE_IID_STR "d85a17c2-aa7c-11d2-9b8c-00805f8a16d9"

#define NS_ISTRINGBUNDLE_IID \
  {0xd85a17c2, 0xaa7c, 0x11d2, \
    { 0x9b, 0x8c, 0x00, 0x80, 0x5f, 0x8a, 0x16, 0xd9 }}

class NS_NO_VTABLE nsIStringBundle : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISTRINGBUNDLE_IID)

  /* wstring GetStringFromID (in long aID); */
  NS_IMETHOD GetStringFromID(int32_t aID, char16_t * *_retval) = 0;

  /* wstring GetStringFromName (in wstring aName); */
  NS_IMETHOD GetStringFromName(const char16_t * aName, char16_t * *_retval) = 0;

  /* wstring formatStringFromID (in long aID, [array, size_is (length)] in wstring params, in unsigned long length); */
  NS_IMETHOD FormatStringFromID(int32_t aID, const char16_t * *params, uint32_t length, char16_t * *_retval) = 0;

  /* wstring formatStringFromName (in wstring aName, [array, size_is (length)] in wstring params, in unsigned long length); */
  NS_IMETHOD FormatStringFromName(const char16_t * aName, const char16_t * *params, uint32_t length, char16_t * *_retval) = 0;

  /* nsISimpleEnumerator getSimpleEnumeration (); */
  NS_IMETHOD GetSimpleEnumeration(nsISimpleEnumerator * *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIStringBundle, NS_ISTRINGBUNDLE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISTRINGBUNDLE \
  NS_IMETHOD GetStringFromID(int32_t aID, char16_t * *_retval) override; \
  NS_IMETHOD GetStringFromName(const char16_t * aName, char16_t * *_retval) override; \
  NS_IMETHOD FormatStringFromID(int32_t aID, const char16_t * *params, uint32_t length, char16_t * *_retval) override; \
  NS_IMETHOD FormatStringFromName(const char16_t * aName, const char16_t * *params, uint32_t length, char16_t * *_retval) override; \
  NS_IMETHOD GetSimpleEnumeration(nsISimpleEnumerator * *_retval) override; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISTRINGBUNDLE(_to) \
  NS_IMETHOD GetStringFromID(int32_t aID, char16_t * *_retval) override { return _to GetStringFromID(aID, _retval); } \
  NS_IMETHOD GetStringFromName(const char16_t * aName, char16_t * *_retval) override { return _to GetStringFromName(aName, _retval); } \
  NS_IMETHOD FormatStringFromID(int32_t aID, const char16_t * *params, uint32_t length, char16_t * *_retval) override { return _to FormatStringFromID(aID, params, length, _retval); } \
  NS_IMETHOD FormatStringFromName(const char16_t * aName, const char16_t * *params, uint32_t length, char16_t * *_retval) override { return _to FormatStringFromName(aName, params, length, _retval); } \
  NS_IMETHOD GetSimpleEnumeration(nsISimpleEnumerator * *_retval) override { return _to GetSimpleEnumeration(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISTRINGBUNDLE(_to) \
  NS_IMETHOD GetStringFromID(int32_t aID, char16_t * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStringFromID(aID, _retval); } \
  NS_IMETHOD GetStringFromName(const char16_t * aName, char16_t * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStringFromName(aName, _retval); } \
  NS_IMETHOD FormatStringFromID(int32_t aID, const char16_t * *params, uint32_t length, char16_t * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->FormatStringFromID(aID, params, length, _retval); } \
  NS_IMETHOD FormatStringFromName(const char16_t * aName, const char16_t * *params, uint32_t length, char16_t * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->FormatStringFromName(aName, params, length, _retval); } \
  NS_IMETHOD GetSimpleEnumeration(nsISimpleEnumerator * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSimpleEnumeration(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsStringBundle : public nsIStringBundle
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISTRINGBUNDLE

  nsStringBundle();

private:
  ~nsStringBundle();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsStringBundle, nsIStringBundle)

nsStringBundle::nsStringBundle()
{
  /* member initializers and constructor code */
}

nsStringBundle::~nsStringBundle()
{
  /* destructor code */
}

/* wstring GetStringFromID (in long aID); */
NS_IMETHODIMP nsStringBundle::GetStringFromID(int32_t aID, char16_t * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* wstring GetStringFromName (in wstring aName); */
NS_IMETHODIMP nsStringBundle::GetStringFromName(const char16_t * aName, char16_t * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* wstring formatStringFromID (in long aID, [array, size_is (length)] in wstring params, in unsigned long length); */
NS_IMETHODIMP nsStringBundle::FormatStringFromID(int32_t aID, const char16_t * *params, uint32_t length, char16_t * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* wstring formatStringFromName (in wstring aName, [array, size_is (length)] in wstring params, in unsigned long length); */
NS_IMETHODIMP nsStringBundle::FormatStringFromName(const char16_t * aName, const char16_t * *params, uint32_t length, char16_t * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsISimpleEnumerator getSimpleEnumeration (); */
NS_IMETHODIMP nsStringBundle::GetSimpleEnumeration(nsISimpleEnumerator * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIStringBundleService */
#define NS_ISTRINGBUNDLESERVICE_IID_STR "d85a17c0-aa7c-11d2-9b8c-00805f8a16d9"

#define NS_ISTRINGBUNDLESERVICE_IID \
  {0xd85a17c0, 0xaa7c, 0x11d2, \
    { 0x9b, 0x8c, 0x00, 0x80, 0x5f, 0x8a, 0x16, 0xd9 }}

class NS_NO_VTABLE nsIStringBundleService : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISTRINGBUNDLESERVICE_IID)

  /* nsIStringBundle createBundle (in string aURLSpec); */
  NS_IMETHOD CreateBundle(const char * aURLSpec, nsIStringBundle * *_retval) = 0;

  /* nsIStringBundle createExtensibleBundle (in string aRegistryKey); */
  NS_IMETHOD CreateExtensibleBundle(const char * aRegistryKey, nsIStringBundle * *_retval) = 0;

  /* wstring formatStatusMessage (in nsresult aStatus, in wstring aStatusArg); */
  NS_IMETHOD FormatStatusMessage(nsresult aStatus, const char16_t * aStatusArg, char16_t * *_retval) = 0;

  /* void flushBundles (); */
  NS_IMETHOD FlushBundles(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIStringBundleService, NS_ISTRINGBUNDLESERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISTRINGBUNDLESERVICE \
  NS_IMETHOD CreateBundle(const char * aURLSpec, nsIStringBundle * *_retval) override; \
  NS_IMETHOD CreateExtensibleBundle(const char * aRegistryKey, nsIStringBundle * *_retval) override; \
  NS_IMETHOD FormatStatusMessage(nsresult aStatus, const char16_t * aStatusArg, char16_t * *_retval) override; \
  NS_IMETHOD FlushBundles(void) override; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISTRINGBUNDLESERVICE(_to) \
  NS_IMETHOD CreateBundle(const char * aURLSpec, nsIStringBundle * *_retval) override { return _to CreateBundle(aURLSpec, _retval); } \
  NS_IMETHOD CreateExtensibleBundle(const char * aRegistryKey, nsIStringBundle * *_retval) override { return _to CreateExtensibleBundle(aRegistryKey, _retval); } \
  NS_IMETHOD FormatStatusMessage(nsresult aStatus, const char16_t * aStatusArg, char16_t * *_retval) override { return _to FormatStatusMessage(aStatus, aStatusArg, _retval); } \
  NS_IMETHOD FlushBundles(void) override { return _to FlushBundles(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISTRINGBUNDLESERVICE(_to) \
  NS_IMETHOD CreateBundle(const char * aURLSpec, nsIStringBundle * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateBundle(aURLSpec, _retval); } \
  NS_IMETHOD CreateExtensibleBundle(const char * aRegistryKey, nsIStringBundle * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateExtensibleBundle(aRegistryKey, _retval); } \
  NS_IMETHOD FormatStatusMessage(nsresult aStatus, const char16_t * aStatusArg, char16_t * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->FormatStatusMessage(aStatus, aStatusArg, _retval); } \
  NS_IMETHOD FlushBundles(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->FlushBundles(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsStringBundleService : public nsIStringBundleService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISTRINGBUNDLESERVICE

  nsStringBundleService();

private:
  ~nsStringBundleService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsStringBundleService, nsIStringBundleService)

nsStringBundleService::nsStringBundleService()
{
  /* member initializers and constructor code */
}

nsStringBundleService::~nsStringBundleService()
{
  /* destructor code */
}

/* nsIStringBundle createBundle (in string aURLSpec); */
NS_IMETHODIMP nsStringBundleService::CreateBundle(const char * aURLSpec, nsIStringBundle * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIStringBundle createExtensibleBundle (in string aRegistryKey); */
NS_IMETHODIMP nsStringBundleService::CreateExtensibleBundle(const char * aRegistryKey, nsIStringBundle * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* wstring formatStatusMessage (in nsresult aStatus, in wstring aStatusArg); */
NS_IMETHODIMP nsStringBundleService::FormatStatusMessage(nsresult aStatus, const char16_t * aStatusArg, char16_t * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void flushBundles (); */
NS_IMETHODIMP nsStringBundleService::FlushBundles()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIStringBundle_h__ */
