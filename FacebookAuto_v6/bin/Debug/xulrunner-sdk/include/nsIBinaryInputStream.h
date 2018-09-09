/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIBinaryInputStream.idl
 */

#ifndef __gen_nsIBinaryInputStream_h__
#define __gen_nsIBinaryInputStream_h__


#ifndef __gen_nsIInputStream_h__
#include "nsIInputStream.h"
#endif

#include "js/Value.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIBinaryInputStream */
#define NS_IBINARYINPUTSTREAM_IID_STR "899b826b-2eb3-469c-8b31-4c29f5d341a6"

#define NS_IBINARYINPUTSTREAM_IID \
  {0x899b826b, 0x2eb3, 0x469c, \
    { 0x8b, 0x31, 0x4c, 0x29, 0xf5, 0xd3, 0x41, 0xa6 }}

class NS_NO_VTABLE nsIBinaryInputStream : public nsIInputStream {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IBINARYINPUTSTREAM_IID)

  /* void setInputStream (in nsIInputStream aInputStream); */
  NS_IMETHOD SetInputStream(nsIInputStream *aInputStream) = 0;

  /* boolean readBoolean (); */
  NS_IMETHOD ReadBoolean(bool *_retval) = 0;

  /* uint8_t read8 (); */
  NS_IMETHOD Read8(uint8_t *_retval) = 0;

  /* uint16_t read16 (); */
  NS_IMETHOD Read16(uint16_t *_retval) = 0;

  /* uint32_t read32 (); */
  NS_IMETHOD Read32(uint32_t *_retval) = 0;

  /* uint64_t read64 (); */
  NS_IMETHOD Read64(uint64_t *_retval) = 0;

  /* float readFloat (); */
  NS_IMETHOD ReadFloat(float *_retval) = 0;

  /* double readDouble (); */
  NS_IMETHOD ReadDouble(double *_retval) = 0;

  /* ACString readCString (); */
  NS_IMETHOD ReadCString(nsACString & _retval) = 0;

  /* AString readString (); */
  NS_IMETHOD ReadString(nsAString & _retval) = 0;

  /* void readBytes (in uint32_t aLength, [size_is (aLength), retval] out string aString); */
  NS_IMETHOD ReadBytes(uint32_t aLength, char * *aString) = 0;

  /* void readByteArray (in uint32_t aLength, [array, size_is (aLength), retval] out uint8_t aBytes); */
  NS_IMETHOD ReadByteArray(uint32_t aLength, uint8_t **aBytes) = 0;

  /* [implicit_jscontext] unsigned long readArrayBuffer (in uint32_t aLength, in jsval aArrayBuffer); */
  NS_IMETHOD ReadArrayBuffer(uint32_t aLength, JS::HandleValue aArrayBuffer, JSContext* cx, uint32_t *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIBinaryInputStream, NS_IBINARYINPUTSTREAM_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIBINARYINPUTSTREAM \
  NS_IMETHOD SetInputStream(nsIInputStream *aInputStream) override; \
  NS_IMETHOD ReadBoolean(bool *_retval) override; \
  NS_IMETHOD Read8(uint8_t *_retval) override; \
  NS_IMETHOD Read16(uint16_t *_retval) override; \
  NS_IMETHOD Read32(uint32_t *_retval) override; \
  NS_IMETHOD Read64(uint64_t *_retval) override; \
  NS_IMETHOD ReadFloat(float *_retval) override; \
  NS_IMETHOD ReadDouble(double *_retval) override; \
  NS_IMETHOD ReadCString(nsACString & _retval) override; \
  NS_IMETHOD ReadString(nsAString & _retval) override; \
  NS_IMETHOD ReadBytes(uint32_t aLength, char * *aString) override; \
  NS_IMETHOD ReadByteArray(uint32_t aLength, uint8_t **aBytes) override; \
  NS_IMETHOD ReadArrayBuffer(uint32_t aLength, JS::HandleValue aArrayBuffer, JSContext* cx, uint32_t *_retval) override; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIBINARYINPUTSTREAM(_to) \
  NS_IMETHOD SetInputStream(nsIInputStream *aInputStream) override { return _to SetInputStream(aInputStream); } \
  NS_IMETHOD ReadBoolean(bool *_retval) override { return _to ReadBoolean(_retval); } \
  NS_IMETHOD Read8(uint8_t *_retval) override { return _to Read8(_retval); } \
  NS_IMETHOD Read16(uint16_t *_retval) override { return _to Read16(_retval); } \
  NS_IMETHOD Read32(uint32_t *_retval) override { return _to Read32(_retval); } \
  NS_IMETHOD Read64(uint64_t *_retval) override { return _to Read64(_retval); } \
  NS_IMETHOD ReadFloat(float *_retval) override { return _to ReadFloat(_retval); } \
  NS_IMETHOD ReadDouble(double *_retval) override { return _to ReadDouble(_retval); } \
  NS_IMETHOD ReadCString(nsACString & _retval) override { return _to ReadCString(_retval); } \
  NS_IMETHOD ReadString(nsAString & _retval) override { return _to ReadString(_retval); } \
  NS_IMETHOD ReadBytes(uint32_t aLength, char * *aString) override { return _to ReadBytes(aLength, aString); } \
  NS_IMETHOD ReadByteArray(uint32_t aLength, uint8_t **aBytes) override { return _to ReadByteArray(aLength, aBytes); } \
  NS_IMETHOD ReadArrayBuffer(uint32_t aLength, JS::HandleValue aArrayBuffer, JSContext* cx, uint32_t *_retval) override { return _to ReadArrayBuffer(aLength, aArrayBuffer, cx, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIBINARYINPUTSTREAM(_to) \
  NS_IMETHOD SetInputStream(nsIInputStream *aInputStream) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetInputStream(aInputStream); } \
  NS_IMETHOD ReadBoolean(bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadBoolean(_retval); } \
  NS_IMETHOD Read8(uint8_t *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Read8(_retval); } \
  NS_IMETHOD Read16(uint16_t *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Read16(_retval); } \
  NS_IMETHOD Read32(uint32_t *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Read32(_retval); } \
  NS_IMETHOD Read64(uint64_t *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Read64(_retval); } \
  NS_IMETHOD ReadFloat(float *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadFloat(_retval); } \
  NS_IMETHOD ReadDouble(double *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadDouble(_retval); } \
  NS_IMETHOD ReadCString(nsACString & _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadCString(_retval); } \
  NS_IMETHOD ReadString(nsAString & _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadString(_retval); } \
  NS_IMETHOD ReadBytes(uint32_t aLength, char * *aString) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadBytes(aLength, aString); } \
  NS_IMETHOD ReadByteArray(uint32_t aLength, uint8_t **aBytes) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadByteArray(aLength, aBytes); } \
  NS_IMETHOD ReadArrayBuffer(uint32_t aLength, JS::HandleValue aArrayBuffer, JSContext* cx, uint32_t *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadArrayBuffer(aLength, aArrayBuffer, cx, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsBinaryInputStream : public nsIBinaryInputStream
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIBINARYINPUTSTREAM

  nsBinaryInputStream();

private:
  ~nsBinaryInputStream();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsBinaryInputStream, nsIBinaryInputStream)

nsBinaryInputStream::nsBinaryInputStream()
{
  /* member initializers and constructor code */
}

nsBinaryInputStream::~nsBinaryInputStream()
{
  /* destructor code */
}

/* void setInputStream (in nsIInputStream aInputStream); */
NS_IMETHODIMP nsBinaryInputStream::SetInputStream(nsIInputStream *aInputStream)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean readBoolean (); */
NS_IMETHODIMP nsBinaryInputStream::ReadBoolean(bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* uint8_t read8 (); */
NS_IMETHODIMP nsBinaryInputStream::Read8(uint8_t *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* uint16_t read16 (); */
NS_IMETHODIMP nsBinaryInputStream::Read16(uint16_t *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* uint32_t read32 (); */
NS_IMETHODIMP nsBinaryInputStream::Read32(uint32_t *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* uint64_t read64 (); */
NS_IMETHODIMP nsBinaryInputStream::Read64(uint64_t *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* float readFloat (); */
NS_IMETHODIMP nsBinaryInputStream::ReadFloat(float *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* double readDouble (); */
NS_IMETHODIMP nsBinaryInputStream::ReadDouble(double *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ACString readCString (); */
NS_IMETHODIMP nsBinaryInputStream::ReadCString(nsACString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString readString (); */
NS_IMETHODIMP nsBinaryInputStream::ReadString(nsAString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void readBytes (in uint32_t aLength, [size_is (aLength), retval] out string aString); */
NS_IMETHODIMP nsBinaryInputStream::ReadBytes(uint32_t aLength, char * *aString)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void readByteArray (in uint32_t aLength, [array, size_is (aLength), retval] out uint8_t aBytes); */
NS_IMETHODIMP nsBinaryInputStream::ReadByteArray(uint32_t aLength, uint8_t **aBytes)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] unsigned long readArrayBuffer (in uint32_t aLength, in jsval aArrayBuffer); */
NS_IMETHODIMP nsBinaryInputStream::ReadArrayBuffer(uint32_t aLength, JS::HandleValue aArrayBuffer, JSContext* cx, uint32_t *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#ifdef MOZILLA_INTERNAL_API
#include "nsString.h"
inline nsresult
NS_ReadOptionalCString(nsIBinaryInputStream* aStream, nsACString& aResult)
{
    bool nonnull;
    nsresult rv = aStream->ReadBoolean(&nonnull);
    if (NS_SUCCEEDED(rv)) {
        if (nonnull)
            rv = aStream->ReadCString(aResult);
        else
            aResult.Truncate();
    }
    return rv;
}
inline nsresult
NS_ReadOptionalString(nsIBinaryInputStream* aStream, nsAString& aResult)
{
    bool nonnull;
    nsresult rv = aStream->ReadBoolean(&nonnull);
    if (NS_SUCCEEDED(rv)) {
        if (nonnull)
            rv = aStream->ReadString(aResult);
        else
            aResult.Truncate();
    }
    return rv;
}
#endif

#endif /* __gen_nsIBinaryInputStream_h__ */
