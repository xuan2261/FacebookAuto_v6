/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIProgressEventSink.idl
 */

#ifndef __gen_nsIProgressEventSink_h__
#define __gen_nsIProgressEventSink_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIURI; /* forward declaration */

class nsIRequest; /* forward declaration */


/* starting interface:    nsIProgressEventSink */
#define NS_IPROGRESSEVENTSINK_IID_STR "87d55fba-cb7e-4f38-84c1-5c6c2b2a55e9"

#define NS_IPROGRESSEVENTSINK_IID \
  {0x87d55fba, 0xcb7e, 0x4f38, \
    { 0x84, 0xc1, 0x5c, 0x6c, 0x2b, 0x2a, 0x55, 0xe9 }}

class NS_NO_VTABLE nsIProgressEventSink : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPROGRESSEVENTSINK_IID)

  /* void onProgress (in nsIRequest aRequest, in nsISupports aContext, in long long aProgress, in long long aProgressMax); */
  NS_IMETHOD OnProgress(nsIRequest *aRequest, nsISupports *aContext, int64_t aProgress, int64_t aProgressMax) = 0;

  /* void onStatus (in nsIRequest aRequest, in nsISupports aContext, in nsresult aStatus, in wstring aStatusArg); */
  NS_IMETHOD OnStatus(nsIRequest *aRequest, nsISupports *aContext, nsresult aStatus, const char16_t * aStatusArg) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIProgressEventSink, NS_IPROGRESSEVENTSINK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPROGRESSEVENTSINK \
  NS_IMETHOD OnProgress(nsIRequest *aRequest, nsISupports *aContext, int64_t aProgress, int64_t aProgressMax) override; \
  NS_IMETHOD OnStatus(nsIRequest *aRequest, nsISupports *aContext, nsresult aStatus, const char16_t * aStatusArg) override; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPROGRESSEVENTSINK(_to) \
  NS_IMETHOD OnProgress(nsIRequest *aRequest, nsISupports *aContext, int64_t aProgress, int64_t aProgressMax) override { return _to OnProgress(aRequest, aContext, aProgress, aProgressMax); } \
  NS_IMETHOD OnStatus(nsIRequest *aRequest, nsISupports *aContext, nsresult aStatus, const char16_t * aStatusArg) override { return _to OnStatus(aRequest, aContext, aStatus, aStatusArg); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPROGRESSEVENTSINK(_to) \
  NS_IMETHOD OnProgress(nsIRequest *aRequest, nsISupports *aContext, int64_t aProgress, int64_t aProgressMax) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OnProgress(aRequest, aContext, aProgress, aProgressMax); } \
  NS_IMETHOD OnStatus(nsIRequest *aRequest, nsISupports *aContext, nsresult aStatus, const char16_t * aStatusArg) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OnStatus(aRequest, aContext, aStatus, aStatusArg); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsProgressEventSink : public nsIProgressEventSink
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPROGRESSEVENTSINK

  nsProgressEventSink();

private:
  ~nsProgressEventSink();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsProgressEventSink, nsIProgressEventSink)

nsProgressEventSink::nsProgressEventSink()
{
  /* member initializers and constructor code */
}

nsProgressEventSink::~nsProgressEventSink()
{
  /* destructor code */
}

/* void onProgress (in nsIRequest aRequest, in nsISupports aContext, in long long aProgress, in long long aProgressMax); */
NS_IMETHODIMP nsProgressEventSink::OnProgress(nsIRequest *aRequest, nsISupports *aContext, int64_t aProgress, int64_t aProgressMax)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onStatus (in nsIRequest aRequest, in nsISupports aContext, in nsresult aStatus, in wstring aStatusArg); */
NS_IMETHODIMP nsProgressEventSink::OnStatus(nsIRequest *aRequest, nsISupports *aContext, nsresult aStatus, const char16_t * aStatusArg)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIProgressEventSink_h__ */
