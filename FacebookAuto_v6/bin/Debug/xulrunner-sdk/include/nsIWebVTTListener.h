/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIWebVTTListener.idl
 */

#ifndef __gen_nsIWebVTTListener_h__
#define __gen_nsIWebVTTListener_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#include "js/Value.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIWebVTTListener */
#define NS_IWEBVTTLISTENER_IID_STR "8a2d7780-2045-4a29-99f4-df15cae5fc49"

#define NS_IWEBVTTLISTENER_IID \
  {0x8a2d7780, 0x2045, 0x4a29, \
    { 0x99, 0xf4, 0xdf, 0x15, 0xca, 0xe5, 0xfc, 0x49 }}

class NS_NO_VTABLE nsIWebVTTListener : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWEBVTTLISTENER_IID)

  /* [implicit_jscontext] void onCue (in jsval cue); */
  NS_IMETHOD OnCue(JS::HandleValue cue, JSContext* cx) = 0;

  /* [implicit_jscontext] void onRegion (in jsval region); */
  NS_IMETHOD OnRegion(JS::HandleValue region, JSContext* cx) = 0;

  /* [implicit_jscontext] void onParsingError (in long errorCode); */
  NS_IMETHOD OnParsingError(int32_t errorCode, JSContext* cx) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWebVTTListener, NS_IWEBVTTLISTENER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWEBVTTLISTENER \
  NS_IMETHOD OnCue(JS::HandleValue cue, JSContext* cx) override; \
  NS_IMETHOD OnRegion(JS::HandleValue region, JSContext* cx) override; \
  NS_IMETHOD OnParsingError(int32_t errorCode, JSContext* cx) override; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWEBVTTLISTENER(_to) \
  NS_IMETHOD OnCue(JS::HandleValue cue, JSContext* cx) override { return _to OnCue(cue, cx); } \
  NS_IMETHOD OnRegion(JS::HandleValue region, JSContext* cx) override { return _to OnRegion(region, cx); } \
  NS_IMETHOD OnParsingError(int32_t errorCode, JSContext* cx) override { return _to OnParsingError(errorCode, cx); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWEBVTTLISTENER(_to) \
  NS_IMETHOD OnCue(JS::HandleValue cue, JSContext* cx) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OnCue(cue, cx); } \
  NS_IMETHOD OnRegion(JS::HandleValue region, JSContext* cx) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OnRegion(region, cx); } \
  NS_IMETHOD OnParsingError(int32_t errorCode, JSContext* cx) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OnParsingError(errorCode, cx); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWebVTTListener : public nsIWebVTTListener
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWEBVTTLISTENER

  nsWebVTTListener();

private:
  ~nsWebVTTListener();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsWebVTTListener, nsIWebVTTListener)

nsWebVTTListener::nsWebVTTListener()
{
  /* member initializers and constructor code */
}

nsWebVTTListener::~nsWebVTTListener()
{
  /* destructor code */
}

/* [implicit_jscontext] void onCue (in jsval cue); */
NS_IMETHODIMP nsWebVTTListener::OnCue(JS::HandleValue cue, JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] void onRegion (in jsval region); */
NS_IMETHODIMP nsWebVTTListener::OnRegion(JS::HandleValue region, JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] void onParsingError (in long errorCode); */
NS_IMETHODIMP nsWebVTTListener::OnParsingError(int32_t errorCode, JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIWebVTTListener_h__ */
