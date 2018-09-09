/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIDOMClientRect.idl
 */

#ifndef __gen_nsIDOMClientRect_h__
#define __gen_nsIDOMClientRect_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMClientRect */
#define NS_IDOMCLIENTRECT_IID_STR "b2f824c4-d9d3-499b-8d3b-45c8245497c6"

#define NS_IDOMCLIENTRECT_IID \
  {0xb2f824c4, 0xd9d3, 0x499b, \
    { 0x8d, 0x3b, 0x45, 0xc8, 0x24, 0x54, 0x97, 0xc6 }}

class NS_NO_VTABLE nsIDOMClientRect : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMCLIENTRECT_IID)

  /* readonly attribute float left; */
  NS_IMETHOD GetLeft(float *aLeft) = 0;

  /* readonly attribute float top; */
  NS_IMETHOD GetTop(float *aTop) = 0;

  /* readonly attribute float right; */
  NS_IMETHOD GetRight(float *aRight) = 0;

  /* readonly attribute float bottom; */
  NS_IMETHOD GetBottom(float *aBottom) = 0;

  /* readonly attribute float width; */
  NS_IMETHOD GetWidth(float *aWidth) = 0;

  /* readonly attribute float height; */
  NS_IMETHOD GetHeight(float *aHeight) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMClientRect, NS_IDOMCLIENTRECT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMCLIENTRECT \
  NS_IMETHOD GetLeft(float *aLeft) override; \
  NS_IMETHOD GetTop(float *aTop) override; \
  NS_IMETHOD GetRight(float *aRight) override; \
  NS_IMETHOD GetBottom(float *aBottom) override; \
  NS_IMETHOD GetWidth(float *aWidth) override; \
  NS_IMETHOD GetHeight(float *aHeight) override; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMCLIENTRECT(_to) \
  NS_IMETHOD GetLeft(float *aLeft) override { return _to GetLeft(aLeft); } \
  NS_IMETHOD GetTop(float *aTop) override { return _to GetTop(aTop); } \
  NS_IMETHOD GetRight(float *aRight) override { return _to GetRight(aRight); } \
  NS_IMETHOD GetBottom(float *aBottom) override { return _to GetBottom(aBottom); } \
  NS_IMETHOD GetWidth(float *aWidth) override { return _to GetWidth(aWidth); } \
  NS_IMETHOD GetHeight(float *aHeight) override { return _to GetHeight(aHeight); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMCLIENTRECT(_to) \
  NS_IMETHOD GetLeft(float *aLeft) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLeft(aLeft); } \
  NS_IMETHOD GetTop(float *aTop) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTop(aTop); } \
  NS_IMETHOD GetRight(float *aRight) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRight(aRight); } \
  NS_IMETHOD GetBottom(float *aBottom) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBottom(aBottom); } \
  NS_IMETHOD GetWidth(float *aWidth) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWidth(aWidth); } \
  NS_IMETHOD GetHeight(float *aHeight) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHeight(aHeight); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMClientRect : public nsIDOMClientRect
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMCLIENTRECT

  nsDOMClientRect();

private:
  ~nsDOMClientRect();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsDOMClientRect, nsIDOMClientRect)

nsDOMClientRect::nsDOMClientRect()
{
  /* member initializers and constructor code */
}

nsDOMClientRect::~nsDOMClientRect()
{
  /* destructor code */
}

/* readonly attribute float left; */
NS_IMETHODIMP nsDOMClientRect::GetLeft(float *aLeft)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute float top; */
NS_IMETHODIMP nsDOMClientRect::GetTop(float *aTop)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute float right; */
NS_IMETHODIMP nsDOMClientRect::GetRight(float *aRight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute float bottom; */
NS_IMETHODIMP nsDOMClientRect::GetBottom(float *aBottom)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute float width; */
NS_IMETHODIMP nsDOMClientRect::GetWidth(float *aWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute float height; */
NS_IMETHODIMP nsDOMClientRect::GetHeight(float *aHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMClientRect_h__ */
