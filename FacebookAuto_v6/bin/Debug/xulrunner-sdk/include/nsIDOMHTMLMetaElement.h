/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIDOMHTMLMetaElement.idl
 */

#ifndef __gen_nsIDOMHTMLMetaElement_h__
#define __gen_nsIDOMHTMLMetaElement_h__


#ifndef __gen_nsIDOMHTMLElement_h__
#include "nsIDOMHTMLElement.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMHTMLMetaElement */
#define NS_IDOMHTMLMETAELEMENT_IID_STR "2a3f789e-0667-464f-a8d7-6f58513443d9"

#define NS_IDOMHTMLMETAELEMENT_IID \
  {0x2a3f789e, 0x0667, 0x464f, \
    { 0xa8, 0xd7, 0x6f, 0x58, 0x51, 0x34, 0x43, 0xd9 }}

class NS_NO_VTABLE nsIDOMHTMLMetaElement : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMHTMLMETAELEMENT_IID)

  /* attribute DOMString content; */
  NS_IMETHOD GetContent(nsAString & aContent) = 0;
  NS_IMETHOD SetContent(const nsAString & aContent) = 0;

  /* attribute DOMString httpEquiv; */
  NS_IMETHOD GetHttpEquiv(nsAString & aHttpEquiv) = 0;
  NS_IMETHOD SetHttpEquiv(const nsAString & aHttpEquiv) = 0;

  /* attribute DOMString name; */
  NS_IMETHOD GetName(nsAString & aName) = 0;
  NS_IMETHOD SetName(const nsAString & aName) = 0;

  /* attribute DOMString scheme; */
  NS_IMETHOD GetScheme(nsAString & aScheme) = 0;
  NS_IMETHOD SetScheme(const nsAString & aScheme) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMHTMLMetaElement, NS_IDOMHTMLMETAELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMHTMLMETAELEMENT \
  NS_IMETHOD GetContent(nsAString & aContent) override; \
  NS_IMETHOD SetContent(const nsAString & aContent) override; \
  NS_IMETHOD GetHttpEquiv(nsAString & aHttpEquiv) override; \
  NS_IMETHOD SetHttpEquiv(const nsAString & aHttpEquiv) override; \
  NS_IMETHOD GetName(nsAString & aName) override; \
  NS_IMETHOD SetName(const nsAString & aName) override; \
  NS_IMETHOD GetScheme(nsAString & aScheme) override; \
  NS_IMETHOD SetScheme(const nsAString & aScheme) override; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMHTMLMETAELEMENT(_to) \
  NS_IMETHOD GetContent(nsAString & aContent) override { return _to GetContent(aContent); } \
  NS_IMETHOD SetContent(const nsAString & aContent) override { return _to SetContent(aContent); } \
  NS_IMETHOD GetHttpEquiv(nsAString & aHttpEquiv) override { return _to GetHttpEquiv(aHttpEquiv); } \
  NS_IMETHOD SetHttpEquiv(const nsAString & aHttpEquiv) override { return _to SetHttpEquiv(aHttpEquiv); } \
  NS_IMETHOD GetName(nsAString & aName) override { return _to GetName(aName); } \
  NS_IMETHOD SetName(const nsAString & aName) override { return _to SetName(aName); } \
  NS_IMETHOD GetScheme(nsAString & aScheme) override { return _to GetScheme(aScheme); } \
  NS_IMETHOD SetScheme(const nsAString & aScheme) override { return _to SetScheme(aScheme); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMHTMLMETAELEMENT(_to) \
  NS_IMETHOD GetContent(nsAString & aContent) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContent(aContent); } \
  NS_IMETHOD SetContent(const nsAString & aContent) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetContent(aContent); } \
  NS_IMETHOD GetHttpEquiv(nsAString & aHttpEquiv) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHttpEquiv(aHttpEquiv); } \
  NS_IMETHOD SetHttpEquiv(const nsAString & aHttpEquiv) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetHttpEquiv(aHttpEquiv); } \
  NS_IMETHOD GetName(nsAString & aName) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_IMETHOD SetName(const nsAString & aName) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetName(aName); } \
  NS_IMETHOD GetScheme(nsAString & aScheme) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetScheme(aScheme); } \
  NS_IMETHOD SetScheme(const nsAString & aScheme) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetScheme(aScheme); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMHTMLMetaElement : public nsIDOMHTMLMetaElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMHTMLMETAELEMENT

  nsDOMHTMLMetaElement();

private:
  ~nsDOMHTMLMetaElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsDOMHTMLMetaElement, nsIDOMHTMLMetaElement)

nsDOMHTMLMetaElement::nsDOMHTMLMetaElement()
{
  /* member initializers and constructor code */
}

nsDOMHTMLMetaElement::~nsDOMHTMLMetaElement()
{
  /* destructor code */
}

/* attribute DOMString content; */
NS_IMETHODIMP nsDOMHTMLMetaElement::GetContent(nsAString & aContent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLMetaElement::SetContent(const nsAString & aContent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString httpEquiv; */
NS_IMETHODIMP nsDOMHTMLMetaElement::GetHttpEquiv(nsAString & aHttpEquiv)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLMetaElement::SetHttpEquiv(const nsAString & aHttpEquiv)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString name; */
NS_IMETHODIMP nsDOMHTMLMetaElement::GetName(nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLMetaElement::SetName(const nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString scheme; */
NS_IMETHODIMP nsDOMHTMLMetaElement::GetScheme(nsAString & aScheme)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLMetaElement::SetScheme(const nsAString & aScheme)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMHTMLMetaElement_h__ */
