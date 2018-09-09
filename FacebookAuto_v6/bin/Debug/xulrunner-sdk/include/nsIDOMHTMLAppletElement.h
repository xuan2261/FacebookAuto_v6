/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIDOMHTMLAppletElement.idl
 */

#ifndef __gen_nsIDOMHTMLAppletElement_h__
#define __gen_nsIDOMHTMLAppletElement_h__


#ifndef __gen_nsIDOMHTMLElement_h__
#include "nsIDOMHTMLElement.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMHTMLAppletElement */
#define NS_IDOMHTMLAPPLETELEMENT_IID_STR "0b7d12c9-4cd3-47db-99c6-0b5ff910446c"

#define NS_IDOMHTMLAPPLETELEMENT_IID \
  {0x0b7d12c9, 0x4cd3, 0x47db, \
    { 0x99, 0xc6, 0x0b, 0x5f, 0xf9, 0x10, 0x44, 0x6c }}

class NS_NO_VTABLE nsIDOMHTMLAppletElement : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMHTMLAPPLETELEMENT_IID)

  /* attribute DOMString align; */
  NS_IMETHOD GetAlign(nsAString & aAlign) = 0;
  NS_IMETHOD SetAlign(const nsAString & aAlign) = 0;

  /* attribute DOMString alt; */
  NS_IMETHOD GetAlt(nsAString & aAlt) = 0;
  NS_IMETHOD SetAlt(const nsAString & aAlt) = 0;

  /* attribute DOMString archive; */
  NS_IMETHOD GetArchive(nsAString & aArchive) = 0;
  NS_IMETHOD SetArchive(const nsAString & aArchive) = 0;

  /* attribute DOMString code; */
  NS_IMETHOD GetCode(nsAString & aCode) = 0;
  NS_IMETHOD SetCode(const nsAString & aCode) = 0;

  /* attribute DOMString codeBase; */
  NS_IMETHOD GetCodeBase(nsAString & aCodeBase) = 0;
  NS_IMETHOD SetCodeBase(const nsAString & aCodeBase) = 0;

  /* attribute DOMString height; */
  NS_IMETHOD GetHeight(nsAString & aHeight) = 0;
  NS_IMETHOD SetHeight(const nsAString & aHeight) = 0;

  /* attribute long hspace; */
  NS_IMETHOD GetHspace(int32_t *aHspace) = 0;
  NS_IMETHOD SetHspace(int32_t aHspace) = 0;

  /* attribute DOMString name; */
  NS_IMETHOD GetName(nsAString & aName) = 0;
  NS_IMETHOD SetName(const nsAString & aName) = 0;

  /* attribute DOMString object; */
  NS_IMETHOD GetObject(nsAString & aObject) = 0;
  NS_IMETHOD SetObject(const nsAString & aObject) = 0;

  /* attribute long vspace; */
  NS_IMETHOD GetVspace(int32_t *aVspace) = 0;
  NS_IMETHOD SetVspace(int32_t aVspace) = 0;

  /* attribute DOMString width; */
  NS_IMETHOD GetWidth(nsAString & aWidth) = 0;
  NS_IMETHOD SetWidth(const nsAString & aWidth) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMHTMLAppletElement, NS_IDOMHTMLAPPLETELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMHTMLAPPLETELEMENT \
  NS_IMETHOD GetAlign(nsAString & aAlign) override; \
  NS_IMETHOD SetAlign(const nsAString & aAlign) override; \
  NS_IMETHOD GetAlt(nsAString & aAlt) override; \
  NS_IMETHOD SetAlt(const nsAString & aAlt) override; \
  NS_IMETHOD GetArchive(nsAString & aArchive) override; \
  NS_IMETHOD SetArchive(const nsAString & aArchive) override; \
  NS_IMETHOD GetCode(nsAString & aCode) override; \
  NS_IMETHOD SetCode(const nsAString & aCode) override; \
  NS_IMETHOD GetCodeBase(nsAString & aCodeBase) override; \
  NS_IMETHOD SetCodeBase(const nsAString & aCodeBase) override; \
  NS_IMETHOD GetHeight(nsAString & aHeight) override; \
  NS_IMETHOD SetHeight(const nsAString & aHeight) override; \
  NS_IMETHOD GetHspace(int32_t *aHspace) override; \
  NS_IMETHOD SetHspace(int32_t aHspace) override; \
  NS_IMETHOD GetName(nsAString & aName) override; \
  NS_IMETHOD SetName(const nsAString & aName) override; \
  NS_IMETHOD GetObject(nsAString & aObject) override; \
  NS_IMETHOD SetObject(const nsAString & aObject) override; \
  NS_IMETHOD GetVspace(int32_t *aVspace) override; \
  NS_IMETHOD SetVspace(int32_t aVspace) override; \
  NS_IMETHOD GetWidth(nsAString & aWidth) override; \
  NS_IMETHOD SetWidth(const nsAString & aWidth) override; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMHTMLAPPLETELEMENT(_to) \
  NS_IMETHOD GetAlign(nsAString & aAlign) override { return _to GetAlign(aAlign); } \
  NS_IMETHOD SetAlign(const nsAString & aAlign) override { return _to SetAlign(aAlign); } \
  NS_IMETHOD GetAlt(nsAString & aAlt) override { return _to GetAlt(aAlt); } \
  NS_IMETHOD SetAlt(const nsAString & aAlt) override { return _to SetAlt(aAlt); } \
  NS_IMETHOD GetArchive(nsAString & aArchive) override { return _to GetArchive(aArchive); } \
  NS_IMETHOD SetArchive(const nsAString & aArchive) override { return _to SetArchive(aArchive); } \
  NS_IMETHOD GetCode(nsAString & aCode) override { return _to GetCode(aCode); } \
  NS_IMETHOD SetCode(const nsAString & aCode) override { return _to SetCode(aCode); } \
  NS_IMETHOD GetCodeBase(nsAString & aCodeBase) override { return _to GetCodeBase(aCodeBase); } \
  NS_IMETHOD SetCodeBase(const nsAString & aCodeBase) override { return _to SetCodeBase(aCodeBase); } \
  NS_IMETHOD GetHeight(nsAString & aHeight) override { return _to GetHeight(aHeight); } \
  NS_IMETHOD SetHeight(const nsAString & aHeight) override { return _to SetHeight(aHeight); } \
  NS_IMETHOD GetHspace(int32_t *aHspace) override { return _to GetHspace(aHspace); } \
  NS_IMETHOD SetHspace(int32_t aHspace) override { return _to SetHspace(aHspace); } \
  NS_IMETHOD GetName(nsAString & aName) override { return _to GetName(aName); } \
  NS_IMETHOD SetName(const nsAString & aName) override { return _to SetName(aName); } \
  NS_IMETHOD GetObject(nsAString & aObject) override { return _to GetObject(aObject); } \
  NS_IMETHOD SetObject(const nsAString & aObject) override { return _to SetObject(aObject); } \
  NS_IMETHOD GetVspace(int32_t *aVspace) override { return _to GetVspace(aVspace); } \
  NS_IMETHOD SetVspace(int32_t aVspace) override { return _to SetVspace(aVspace); } \
  NS_IMETHOD GetWidth(nsAString & aWidth) override { return _to GetWidth(aWidth); } \
  NS_IMETHOD SetWidth(const nsAString & aWidth) override { return _to SetWidth(aWidth); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMHTMLAPPLETELEMENT(_to) \
  NS_IMETHOD GetAlign(nsAString & aAlign) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAlign(aAlign); } \
  NS_IMETHOD SetAlign(const nsAString & aAlign) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAlign(aAlign); } \
  NS_IMETHOD GetAlt(nsAString & aAlt) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAlt(aAlt); } \
  NS_IMETHOD SetAlt(const nsAString & aAlt) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAlt(aAlt); } \
  NS_IMETHOD GetArchive(nsAString & aArchive) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetArchive(aArchive); } \
  NS_IMETHOD SetArchive(const nsAString & aArchive) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetArchive(aArchive); } \
  NS_IMETHOD GetCode(nsAString & aCode) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCode(aCode); } \
  NS_IMETHOD SetCode(const nsAString & aCode) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCode(aCode); } \
  NS_IMETHOD GetCodeBase(nsAString & aCodeBase) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCodeBase(aCodeBase); } \
  NS_IMETHOD SetCodeBase(const nsAString & aCodeBase) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCodeBase(aCodeBase); } \
  NS_IMETHOD GetHeight(nsAString & aHeight) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHeight(aHeight); } \
  NS_IMETHOD SetHeight(const nsAString & aHeight) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetHeight(aHeight); } \
  NS_IMETHOD GetHspace(int32_t *aHspace) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHspace(aHspace); } \
  NS_IMETHOD SetHspace(int32_t aHspace) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetHspace(aHspace); } \
  NS_IMETHOD GetName(nsAString & aName) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_IMETHOD SetName(const nsAString & aName) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetName(aName); } \
  NS_IMETHOD GetObject(nsAString & aObject) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetObject(aObject); } \
  NS_IMETHOD SetObject(const nsAString & aObject) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetObject(aObject); } \
  NS_IMETHOD GetVspace(int32_t *aVspace) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVspace(aVspace); } \
  NS_IMETHOD SetVspace(int32_t aVspace) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVspace(aVspace); } \
  NS_IMETHOD GetWidth(nsAString & aWidth) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWidth(aWidth); } \
  NS_IMETHOD SetWidth(const nsAString & aWidth) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetWidth(aWidth); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMHTMLAppletElement : public nsIDOMHTMLAppletElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMHTMLAPPLETELEMENT

  nsDOMHTMLAppletElement();

private:
  ~nsDOMHTMLAppletElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsDOMHTMLAppletElement, nsIDOMHTMLAppletElement)

nsDOMHTMLAppletElement::nsDOMHTMLAppletElement()
{
  /* member initializers and constructor code */
}

nsDOMHTMLAppletElement::~nsDOMHTMLAppletElement()
{
  /* destructor code */
}

/* attribute DOMString align; */
NS_IMETHODIMP nsDOMHTMLAppletElement::GetAlign(nsAString & aAlign)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLAppletElement::SetAlign(const nsAString & aAlign)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString alt; */
NS_IMETHODIMP nsDOMHTMLAppletElement::GetAlt(nsAString & aAlt)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLAppletElement::SetAlt(const nsAString & aAlt)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString archive; */
NS_IMETHODIMP nsDOMHTMLAppletElement::GetArchive(nsAString & aArchive)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLAppletElement::SetArchive(const nsAString & aArchive)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString code; */
NS_IMETHODIMP nsDOMHTMLAppletElement::GetCode(nsAString & aCode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLAppletElement::SetCode(const nsAString & aCode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString codeBase; */
NS_IMETHODIMP nsDOMHTMLAppletElement::GetCodeBase(nsAString & aCodeBase)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLAppletElement::SetCodeBase(const nsAString & aCodeBase)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString height; */
NS_IMETHODIMP nsDOMHTMLAppletElement::GetHeight(nsAString & aHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLAppletElement::SetHeight(const nsAString & aHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long hspace; */
NS_IMETHODIMP nsDOMHTMLAppletElement::GetHspace(int32_t *aHspace)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLAppletElement::SetHspace(int32_t aHspace)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString name; */
NS_IMETHODIMP nsDOMHTMLAppletElement::GetName(nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLAppletElement::SetName(const nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString object; */
NS_IMETHODIMP nsDOMHTMLAppletElement::GetObject(nsAString & aObject)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLAppletElement::SetObject(const nsAString & aObject)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long vspace; */
NS_IMETHODIMP nsDOMHTMLAppletElement::GetVspace(int32_t *aVspace)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLAppletElement::SetVspace(int32_t aVspace)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString width; */
NS_IMETHODIMP nsDOMHTMLAppletElement::GetWidth(nsAString & aWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLAppletElement::SetWidth(const nsAString & aWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMHTMLAppletElement_h__ */
