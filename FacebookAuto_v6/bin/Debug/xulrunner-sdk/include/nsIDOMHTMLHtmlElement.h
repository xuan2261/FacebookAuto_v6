/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIDOMHTMLHtmlElement.idl
 */

#ifndef __gen_nsIDOMHTMLHtmlElement_h__
#define __gen_nsIDOMHTMLHtmlElement_h__


#ifndef __gen_nsIDOMHTMLElement_h__
#include "nsIDOMHTMLElement.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMHTMLHtmlElement */
#define NS_IDOMHTMLHTMLELEMENT_IID_STR "6a5d2ce7-2c45-43c1-bdab-9df7a06caed1"

#define NS_IDOMHTMLHTMLELEMENT_IID \
  {0x6a5d2ce7, 0x2c45, 0x43c1, \
    { 0xbd, 0xab, 0x9d, 0xf7, 0xa0, 0x6c, 0xae, 0xd1 }}

class NS_NO_VTABLE nsIDOMHTMLHtmlElement : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMHTMLHTMLELEMENT_IID)

  /* attribute DOMString version; */
  NS_IMETHOD GetVersion(nsAString & aVersion) = 0;
  NS_IMETHOD SetVersion(const nsAString & aVersion) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMHTMLHtmlElement, NS_IDOMHTMLHTMLELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMHTMLHTMLELEMENT \
  NS_IMETHOD GetVersion(nsAString & aVersion) override; \
  NS_IMETHOD SetVersion(const nsAString & aVersion) override; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMHTMLHTMLELEMENT(_to) \
  NS_IMETHOD GetVersion(nsAString & aVersion) override { return _to GetVersion(aVersion); } \
  NS_IMETHOD SetVersion(const nsAString & aVersion) override { return _to SetVersion(aVersion); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMHTMLHTMLELEMENT(_to) \
  NS_IMETHOD GetVersion(nsAString & aVersion) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVersion(aVersion); } \
  NS_IMETHOD SetVersion(const nsAString & aVersion) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVersion(aVersion); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMHTMLHtmlElement : public nsIDOMHTMLHtmlElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMHTMLHTMLELEMENT

  nsDOMHTMLHtmlElement();

private:
  ~nsDOMHTMLHtmlElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsDOMHTMLHtmlElement, nsIDOMHTMLHtmlElement)

nsDOMHTMLHtmlElement::nsDOMHTMLHtmlElement()
{
  /* member initializers and constructor code */
}

nsDOMHTMLHtmlElement::~nsDOMHTMLHtmlElement()
{
  /* destructor code */
}

/* attribute DOMString version; */
NS_IMETHODIMP nsDOMHTMLHtmlElement::GetVersion(nsAString & aVersion)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLHtmlElement::SetVersion(const nsAString & aVersion)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMHTMLHtmlElement_h__ */
