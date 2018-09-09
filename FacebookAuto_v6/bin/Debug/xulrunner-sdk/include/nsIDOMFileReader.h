/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIDOMFileReader.idl
 */

#ifndef __gen_nsIDOMFileReader_h__
#define __gen_nsIDOMFileReader_h__


#ifndef __gen_nsIDOMEventTarget_h__
#include "nsIDOMEventTarget.h"
#endif

#include "js/Value.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMEventListener; /* forward declaration */

class nsIDOMBlob; /* forward declaration */


/* starting interface:    nsIDOMFileReader */
#define NS_IDOMFILEREADER_IID_STR "2f34c719-bc14-4546-9fb9-2bab75e56e45"

#define NS_IDOMFILEREADER_IID \
  {0x2f34c719, 0xbc14, 0x4546, \
    { 0x9f, 0xb9, 0x2b, 0xab, 0x75, 0xe5, 0x6e, 0x45 }}

class NS_NO_VTABLE nsIDOMFileReader : public nsIDOMEventTarget {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMFILEREADER_IID)

  /* [implicit_jscontext] void readAsArrayBuffer (in nsIDOMBlob filedata); */
  NS_IMETHOD ReadAsArrayBuffer(nsIDOMBlob *filedata, JSContext* cx) = 0;

  /* void readAsBinaryString (in nsIDOMBlob filedata); */
  NS_IMETHOD ReadAsBinaryString(nsIDOMBlob *filedata) = 0;

  /* void readAsText (in nsIDOMBlob filedata, [optional] in DOMString encoding); */
  NS_IMETHOD ReadAsText(nsIDOMBlob *filedata, const nsAString & encoding) = 0;

  /* void readAsDataURL (in nsIDOMBlob file); */
  NS_IMETHOD ReadAsDataURL(nsIDOMBlob *file) = 0;

  /* void abort (); */
  NS_IMETHOD Abort(void) = 0;

  enum {
    EMPTY = 0U,
    LOADING = 1U,
    DONE = 2U
  };

  /* readonly attribute unsigned short readyState; */
  NS_IMETHOD GetReadyState(uint16_t *aReadyState) = 0;

  /* [implicit_jscontext] readonly attribute jsval result; */
  NS_IMETHOD GetResult(JSContext* cx, JS::MutableHandleValue aResult) = 0;

  /* readonly attribute nsISupports error; */
  NS_IMETHOD GetError(nsISupports * *aError) = 0;

  /* [implicit_jscontext] attribute jsval onloadstart; */
  NS_IMETHOD GetOnloadstart(JSContext* cx, JS::MutableHandleValue aOnloadstart) = 0;
  NS_IMETHOD SetOnloadstart(JSContext* cx, JS::HandleValue aOnloadstart) = 0;

  /* [implicit_jscontext] attribute jsval onprogress; */
  NS_IMETHOD GetOnprogress(JSContext* cx, JS::MutableHandleValue aOnprogress) = 0;
  NS_IMETHOD SetOnprogress(JSContext* cx, JS::HandleValue aOnprogress) = 0;

  /* [implicit_jscontext] attribute jsval onload; */
  NS_IMETHOD GetOnload(JSContext* cx, JS::MutableHandleValue aOnload) = 0;
  NS_IMETHOD SetOnload(JSContext* cx, JS::HandleValue aOnload) = 0;

  /* [implicit_jscontext] attribute jsval onabort; */
  NS_IMETHOD GetOnabort(JSContext* cx, JS::MutableHandleValue aOnabort) = 0;
  NS_IMETHOD SetOnabort(JSContext* cx, JS::HandleValue aOnabort) = 0;

  /* [implicit_jscontext] attribute jsval onerror; */
  NS_IMETHOD GetOnerror(JSContext* cx, JS::MutableHandleValue aOnerror) = 0;
  NS_IMETHOD SetOnerror(JSContext* cx, JS::HandleValue aOnerror) = 0;

  /* [implicit_jscontext] attribute jsval onloadend; */
  NS_IMETHOD GetOnloadend(JSContext* cx, JS::MutableHandleValue aOnloadend) = 0;
  NS_IMETHOD SetOnloadend(JSContext* cx, JS::HandleValue aOnloadend) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMFileReader, NS_IDOMFILEREADER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMFILEREADER \
  NS_IMETHOD ReadAsArrayBuffer(nsIDOMBlob *filedata, JSContext* cx) override; \
  NS_IMETHOD ReadAsBinaryString(nsIDOMBlob *filedata) override; \
  NS_IMETHOD ReadAsText(nsIDOMBlob *filedata, const nsAString & encoding) override; \
  NS_IMETHOD ReadAsDataURL(nsIDOMBlob *file) override; \
  NS_IMETHOD Abort(void) override; \
  NS_IMETHOD GetReadyState(uint16_t *aReadyState) override; \
  NS_IMETHOD GetResult(JSContext* cx, JS::MutableHandleValue aResult) override; \
  NS_IMETHOD GetError(nsISupports * *aError) override; \
  NS_IMETHOD GetOnloadstart(JSContext* cx, JS::MutableHandleValue aOnloadstart) override; \
  NS_IMETHOD SetOnloadstart(JSContext* cx, JS::HandleValue aOnloadstart) override; \
  NS_IMETHOD GetOnprogress(JSContext* cx, JS::MutableHandleValue aOnprogress) override; \
  NS_IMETHOD SetOnprogress(JSContext* cx, JS::HandleValue aOnprogress) override; \
  NS_IMETHOD GetOnload(JSContext* cx, JS::MutableHandleValue aOnload) override; \
  NS_IMETHOD SetOnload(JSContext* cx, JS::HandleValue aOnload) override; \
  NS_IMETHOD GetOnabort(JSContext* cx, JS::MutableHandleValue aOnabort) override; \
  NS_IMETHOD SetOnabort(JSContext* cx, JS::HandleValue aOnabort) override; \
  NS_IMETHOD GetOnerror(JSContext* cx, JS::MutableHandleValue aOnerror) override; \
  NS_IMETHOD SetOnerror(JSContext* cx, JS::HandleValue aOnerror) override; \
  NS_IMETHOD GetOnloadend(JSContext* cx, JS::MutableHandleValue aOnloadend) override; \
  NS_IMETHOD SetOnloadend(JSContext* cx, JS::HandleValue aOnloadend) override; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMFILEREADER(_to) \
  NS_IMETHOD ReadAsArrayBuffer(nsIDOMBlob *filedata, JSContext* cx) override { return _to ReadAsArrayBuffer(filedata, cx); } \
  NS_IMETHOD ReadAsBinaryString(nsIDOMBlob *filedata) override { return _to ReadAsBinaryString(filedata); } \
  NS_IMETHOD ReadAsText(nsIDOMBlob *filedata, const nsAString & encoding) override { return _to ReadAsText(filedata, encoding); } \
  NS_IMETHOD ReadAsDataURL(nsIDOMBlob *file) override { return _to ReadAsDataURL(file); } \
  NS_IMETHOD Abort(void) override { return _to Abort(); } \
  NS_IMETHOD GetReadyState(uint16_t *aReadyState) override { return _to GetReadyState(aReadyState); } \
  NS_IMETHOD GetResult(JSContext* cx, JS::MutableHandleValue aResult) override { return _to GetResult(cx, aResult); } \
  NS_IMETHOD GetError(nsISupports * *aError) override { return _to GetError(aError); } \
  NS_IMETHOD GetOnloadstart(JSContext* cx, JS::MutableHandleValue aOnloadstart) override { return _to GetOnloadstart(cx, aOnloadstart); } \
  NS_IMETHOD SetOnloadstart(JSContext* cx, JS::HandleValue aOnloadstart) override { return _to SetOnloadstart(cx, aOnloadstart); } \
  NS_IMETHOD GetOnprogress(JSContext* cx, JS::MutableHandleValue aOnprogress) override { return _to GetOnprogress(cx, aOnprogress); } \
  NS_IMETHOD SetOnprogress(JSContext* cx, JS::HandleValue aOnprogress) override { return _to SetOnprogress(cx, aOnprogress); } \
  NS_IMETHOD GetOnload(JSContext* cx, JS::MutableHandleValue aOnload) override { return _to GetOnload(cx, aOnload); } \
  NS_IMETHOD SetOnload(JSContext* cx, JS::HandleValue aOnload) override { return _to SetOnload(cx, aOnload); } \
  NS_IMETHOD GetOnabort(JSContext* cx, JS::MutableHandleValue aOnabort) override { return _to GetOnabort(cx, aOnabort); } \
  NS_IMETHOD SetOnabort(JSContext* cx, JS::HandleValue aOnabort) override { return _to SetOnabort(cx, aOnabort); } \
  NS_IMETHOD GetOnerror(JSContext* cx, JS::MutableHandleValue aOnerror) override { return _to GetOnerror(cx, aOnerror); } \
  NS_IMETHOD SetOnerror(JSContext* cx, JS::HandleValue aOnerror) override { return _to SetOnerror(cx, aOnerror); } \
  NS_IMETHOD GetOnloadend(JSContext* cx, JS::MutableHandleValue aOnloadend) override { return _to GetOnloadend(cx, aOnloadend); } \
  NS_IMETHOD SetOnloadend(JSContext* cx, JS::HandleValue aOnloadend) override { return _to SetOnloadend(cx, aOnloadend); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMFILEREADER(_to) \
  NS_IMETHOD ReadAsArrayBuffer(nsIDOMBlob *filedata, JSContext* cx) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadAsArrayBuffer(filedata, cx); } \
  NS_IMETHOD ReadAsBinaryString(nsIDOMBlob *filedata) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadAsBinaryString(filedata); } \
  NS_IMETHOD ReadAsText(nsIDOMBlob *filedata, const nsAString & encoding) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadAsText(filedata, encoding); } \
  NS_IMETHOD ReadAsDataURL(nsIDOMBlob *file) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadAsDataURL(file); } \
  NS_IMETHOD Abort(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Abort(); } \
  NS_IMETHOD GetReadyState(uint16_t *aReadyState) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReadyState(aReadyState); } \
  NS_IMETHOD GetResult(JSContext* cx, JS::MutableHandleValue aResult) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResult(cx, aResult); } \
  NS_IMETHOD GetError(nsISupports * *aError) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetError(aError); } \
  NS_IMETHOD GetOnloadstart(JSContext* cx, JS::MutableHandleValue aOnloadstart) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnloadstart(cx, aOnloadstart); } \
  NS_IMETHOD SetOnloadstart(JSContext* cx, JS::HandleValue aOnloadstart) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnloadstart(cx, aOnloadstart); } \
  NS_IMETHOD GetOnprogress(JSContext* cx, JS::MutableHandleValue aOnprogress) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnprogress(cx, aOnprogress); } \
  NS_IMETHOD SetOnprogress(JSContext* cx, JS::HandleValue aOnprogress) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnprogress(cx, aOnprogress); } \
  NS_IMETHOD GetOnload(JSContext* cx, JS::MutableHandleValue aOnload) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnload(cx, aOnload); } \
  NS_IMETHOD SetOnload(JSContext* cx, JS::HandleValue aOnload) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnload(cx, aOnload); } \
  NS_IMETHOD GetOnabort(JSContext* cx, JS::MutableHandleValue aOnabort) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnabort(cx, aOnabort); } \
  NS_IMETHOD SetOnabort(JSContext* cx, JS::HandleValue aOnabort) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnabort(cx, aOnabort); } \
  NS_IMETHOD GetOnerror(JSContext* cx, JS::MutableHandleValue aOnerror) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnerror(cx, aOnerror); } \
  NS_IMETHOD SetOnerror(JSContext* cx, JS::HandleValue aOnerror) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnerror(cx, aOnerror); } \
  NS_IMETHOD GetOnloadend(JSContext* cx, JS::MutableHandleValue aOnloadend) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnloadend(cx, aOnloadend); } \
  NS_IMETHOD SetOnloadend(JSContext* cx, JS::HandleValue aOnloadend) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnloadend(cx, aOnloadend); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMFileReader : public nsIDOMFileReader
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMFILEREADER

  nsDOMFileReader();

private:
  ~nsDOMFileReader();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsDOMFileReader, nsIDOMFileReader)

nsDOMFileReader::nsDOMFileReader()
{
  /* member initializers and constructor code */
}

nsDOMFileReader::~nsDOMFileReader()
{
  /* destructor code */
}

/* [implicit_jscontext] void readAsArrayBuffer (in nsIDOMBlob filedata); */
NS_IMETHODIMP nsDOMFileReader::ReadAsArrayBuffer(nsIDOMBlob *filedata, JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void readAsBinaryString (in nsIDOMBlob filedata); */
NS_IMETHODIMP nsDOMFileReader::ReadAsBinaryString(nsIDOMBlob *filedata)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void readAsText (in nsIDOMBlob filedata, [optional] in DOMString encoding); */
NS_IMETHODIMP nsDOMFileReader::ReadAsText(nsIDOMBlob *filedata, const nsAString & encoding)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void readAsDataURL (in nsIDOMBlob file); */
NS_IMETHODIMP nsDOMFileReader::ReadAsDataURL(nsIDOMBlob *file)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void abort (); */
NS_IMETHODIMP nsDOMFileReader::Abort()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned short readyState; */
NS_IMETHODIMP nsDOMFileReader::GetReadyState(uint16_t *aReadyState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] readonly attribute jsval result; */
NS_IMETHODIMP nsDOMFileReader::GetResult(JSContext* cx, JS::MutableHandleValue aResult)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsISupports error; */
NS_IMETHODIMP nsDOMFileReader::GetError(nsISupports * *aError)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] attribute jsval onloadstart; */
NS_IMETHODIMP nsDOMFileReader::GetOnloadstart(JSContext* cx, JS::MutableHandleValue aOnloadstart)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMFileReader::SetOnloadstart(JSContext* cx, JS::HandleValue aOnloadstart)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] attribute jsval onprogress; */
NS_IMETHODIMP nsDOMFileReader::GetOnprogress(JSContext* cx, JS::MutableHandleValue aOnprogress)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMFileReader::SetOnprogress(JSContext* cx, JS::HandleValue aOnprogress)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] attribute jsval onload; */
NS_IMETHODIMP nsDOMFileReader::GetOnload(JSContext* cx, JS::MutableHandleValue aOnload)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMFileReader::SetOnload(JSContext* cx, JS::HandleValue aOnload)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] attribute jsval onabort; */
NS_IMETHODIMP nsDOMFileReader::GetOnabort(JSContext* cx, JS::MutableHandleValue aOnabort)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMFileReader::SetOnabort(JSContext* cx, JS::HandleValue aOnabort)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] attribute jsval onerror; */
NS_IMETHODIMP nsDOMFileReader::GetOnerror(JSContext* cx, JS::MutableHandleValue aOnerror)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMFileReader::SetOnerror(JSContext* cx, JS::HandleValue aOnerror)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] attribute jsval onloadend; */
NS_IMETHODIMP nsDOMFileReader::GetOnloadend(JSContext* cx, JS::MutableHandleValue aOnloadend)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMFileReader::SetOnloadend(JSContext* cx, JS::HandleValue aOnloadend)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

#define NS_FILEREADER_CID                            \
{0x06aa7c21, 0xfe05, 0x4cf2,                         \
{0xb1, 0xc4, 0x0c, 0x71, 0x26, 0xa4, 0xf7, 0x13}}
#define NS_FILEREADER_CONTRACTID \
"@mozilla.org/files/filereader;1"

#endif /* __gen_nsIDOMFileReader_h__ */
