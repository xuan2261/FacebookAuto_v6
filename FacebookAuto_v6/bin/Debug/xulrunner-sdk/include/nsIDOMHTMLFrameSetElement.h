/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIDOMHTMLFrameSetElement.idl
 */

#ifndef __gen_nsIDOMHTMLFrameSetElement_h__
#define __gen_nsIDOMHTMLFrameSetElement_h__


#ifndef __gen_nsIDOMHTMLElement_h__
#include "nsIDOMHTMLElement.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
#include "jspubtd.h"

/* starting interface:    nsIDOMHTMLFrameSetElement */
#define NS_IDOMHTMLFRAMESETELEMENT_IID_STR "14b29269-c387-4cff-8463-b0871ca0be3a"

#define NS_IDOMHTMLFRAMESETELEMENT_IID \
  {0x14b29269, 0xc387, 0x4cff, \
    { 0x84, 0x63, 0xb0, 0x87, 0x1c, 0xa0, 0xbe, 0x3a }}

class NS_NO_VTABLE nsIDOMHTMLFrameSetElement : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMHTMLFRAMESETELEMENT_IID)

  /* attribute DOMString cols; */
  NS_IMETHOD GetCols(nsAString & aCols) = 0;
  NS_IMETHOD SetCols(const nsAString & aCols) = 0;

  /* attribute DOMString rows; */
  NS_IMETHOD GetRows(nsAString & aRows) = 0;
  NS_IMETHOD SetRows(const nsAString & aRows) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMHTMLFrameSetElement, NS_IDOMHTMLFRAMESETELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMHTMLFRAMESETELEMENT \
  NS_IMETHOD GetCols(nsAString & aCols) override; \
  NS_IMETHOD SetCols(const nsAString & aCols) override; \
  NS_IMETHOD GetRows(nsAString & aRows) override; \
  NS_IMETHOD SetRows(const nsAString & aRows) override; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMHTMLFRAMESETELEMENT(_to) \
  NS_IMETHOD GetCols(nsAString & aCols) override { return _to GetCols(aCols); } \
  NS_IMETHOD SetCols(const nsAString & aCols) override { return _to SetCols(aCols); } \
  NS_IMETHOD GetRows(nsAString & aRows) override { return _to GetRows(aRows); } \
  NS_IMETHOD SetRows(const nsAString & aRows) override { return _to SetRows(aRows); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMHTMLFRAMESETELEMENT(_to) \
  NS_IMETHOD GetCols(nsAString & aCols) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCols(aCols); } \
  NS_IMETHOD SetCols(const nsAString & aCols) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCols(aCols); } \
  NS_IMETHOD GetRows(nsAString & aRows) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRows(aRows); } \
  NS_IMETHOD SetRows(const nsAString & aRows) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRows(aRows); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMHTMLFrameSetElement : public nsIDOMHTMLFrameSetElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMHTMLFRAMESETELEMENT

  nsDOMHTMLFrameSetElement();

private:
  ~nsDOMHTMLFrameSetElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsDOMHTMLFrameSetElement, nsIDOMHTMLFrameSetElement)

nsDOMHTMLFrameSetElement::nsDOMHTMLFrameSetElement()
{
  /* member initializers and constructor code */
}

nsDOMHTMLFrameSetElement::~nsDOMHTMLFrameSetElement()
{
  /* destructor code */
}

/* attribute DOMString cols; */
NS_IMETHODIMP nsDOMHTMLFrameSetElement::GetCols(nsAString & aCols)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLFrameSetElement::SetCols(const nsAString & aCols)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString rows; */
NS_IMETHODIMP nsDOMHTMLFrameSetElement::GetRows(nsAString & aRows)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLFrameSetElement::SetRows(const nsAString & aRows)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMHTMLFrameSetElement_h__ */
