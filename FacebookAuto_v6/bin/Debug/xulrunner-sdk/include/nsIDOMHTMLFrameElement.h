/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIDOMHTMLFrameElement.idl
 */

#ifndef __gen_nsIDOMHTMLFrameElement_h__
#define __gen_nsIDOMHTMLFrameElement_h__


#ifndef __gen_nsIDOMHTMLElement_h__
#include "nsIDOMHTMLElement.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMHTMLFrameElement */
#define NS_IDOMHTMLFRAMEELEMENT_IID_STR "60ab25b9-3246-4f50-b0d4-21e73ba88cd6"

#define NS_IDOMHTMLFRAMEELEMENT_IID \
  {0x60ab25b9, 0x3246, 0x4f50, \
    { 0xb0, 0xd4, 0x21, 0xe7, 0x3b, 0xa8, 0x8c, 0xd6 }}

class NS_NO_VTABLE nsIDOMHTMLFrameElement : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMHTMLFRAMEELEMENT_IID)

  /* attribute DOMString frameBorder; */
  NS_IMETHOD GetFrameBorder(nsAString & aFrameBorder) = 0;
  NS_IMETHOD SetFrameBorder(const nsAString & aFrameBorder) = 0;

  /* attribute DOMString longDesc; */
  NS_IMETHOD GetLongDesc(nsAString & aLongDesc) = 0;
  NS_IMETHOD SetLongDesc(const nsAString & aLongDesc) = 0;

  /* attribute DOMString marginHeight; */
  NS_IMETHOD GetMarginHeight(nsAString & aMarginHeight) = 0;
  NS_IMETHOD SetMarginHeight(const nsAString & aMarginHeight) = 0;

  /* attribute DOMString marginWidth; */
  NS_IMETHOD GetMarginWidth(nsAString & aMarginWidth) = 0;
  NS_IMETHOD SetMarginWidth(const nsAString & aMarginWidth) = 0;

  /* attribute DOMString name; */
  NS_IMETHOD GetName(nsAString & aName) = 0;
  NS_IMETHOD SetName(const nsAString & aName) = 0;

  /* attribute boolean noResize; */
  NS_IMETHOD GetNoResize(bool *aNoResize) = 0;
  NS_IMETHOD SetNoResize(bool aNoResize) = 0;

  /* attribute DOMString scrolling; */
  NS_IMETHOD GetScrolling(nsAString & aScrolling) = 0;
  NS_IMETHOD SetScrolling(const nsAString & aScrolling) = 0;

  /* attribute DOMString src; */
  NS_IMETHOD GetSrc(nsAString & aSrc) = 0;
  NS_IMETHOD SetSrc(const nsAString & aSrc) = 0;

  /* readonly attribute nsIDOMDocument contentDocument; */
  NS_IMETHOD GetContentDocument(nsIDOMDocument * *aContentDocument) = 0;

  /* readonly attribute nsIDOMWindow contentWindow; */
  NS_IMETHOD GetContentWindow(nsIDOMWindow * *aContentWindow) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMHTMLFrameElement, NS_IDOMHTMLFRAMEELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMHTMLFRAMEELEMENT \
  NS_IMETHOD GetFrameBorder(nsAString & aFrameBorder) override; \
  NS_IMETHOD SetFrameBorder(const nsAString & aFrameBorder) override; \
  NS_IMETHOD GetLongDesc(nsAString & aLongDesc) override; \
  NS_IMETHOD SetLongDesc(const nsAString & aLongDesc) override; \
  NS_IMETHOD GetMarginHeight(nsAString & aMarginHeight) override; \
  NS_IMETHOD SetMarginHeight(const nsAString & aMarginHeight) override; \
  NS_IMETHOD GetMarginWidth(nsAString & aMarginWidth) override; \
  NS_IMETHOD SetMarginWidth(const nsAString & aMarginWidth) override; \
  NS_IMETHOD GetName(nsAString & aName) override; \
  NS_IMETHOD SetName(const nsAString & aName) override; \
  NS_IMETHOD GetNoResize(bool *aNoResize) override; \
  NS_IMETHOD SetNoResize(bool aNoResize) override; \
  NS_IMETHOD GetScrolling(nsAString & aScrolling) override; \
  NS_IMETHOD SetScrolling(const nsAString & aScrolling) override; \
  NS_IMETHOD GetSrc(nsAString & aSrc) override; \
  NS_IMETHOD SetSrc(const nsAString & aSrc) override; \
  NS_IMETHOD GetContentDocument(nsIDOMDocument * *aContentDocument) override; \
  NS_IMETHOD GetContentWindow(nsIDOMWindow * *aContentWindow) override; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMHTMLFRAMEELEMENT(_to) \
  NS_IMETHOD GetFrameBorder(nsAString & aFrameBorder) override { return _to GetFrameBorder(aFrameBorder); } \
  NS_IMETHOD SetFrameBorder(const nsAString & aFrameBorder) override { return _to SetFrameBorder(aFrameBorder); } \
  NS_IMETHOD GetLongDesc(nsAString & aLongDesc) override { return _to GetLongDesc(aLongDesc); } \
  NS_IMETHOD SetLongDesc(const nsAString & aLongDesc) override { return _to SetLongDesc(aLongDesc); } \
  NS_IMETHOD GetMarginHeight(nsAString & aMarginHeight) override { return _to GetMarginHeight(aMarginHeight); } \
  NS_IMETHOD SetMarginHeight(const nsAString & aMarginHeight) override { return _to SetMarginHeight(aMarginHeight); } \
  NS_IMETHOD GetMarginWidth(nsAString & aMarginWidth) override { return _to GetMarginWidth(aMarginWidth); } \
  NS_IMETHOD SetMarginWidth(const nsAString & aMarginWidth) override { return _to SetMarginWidth(aMarginWidth); } \
  NS_IMETHOD GetName(nsAString & aName) override { return _to GetName(aName); } \
  NS_IMETHOD SetName(const nsAString & aName) override { return _to SetName(aName); } \
  NS_IMETHOD GetNoResize(bool *aNoResize) override { return _to GetNoResize(aNoResize); } \
  NS_IMETHOD SetNoResize(bool aNoResize) override { return _to SetNoResize(aNoResize); } \
  NS_IMETHOD GetScrolling(nsAString & aScrolling) override { return _to GetScrolling(aScrolling); } \
  NS_IMETHOD SetScrolling(const nsAString & aScrolling) override { return _to SetScrolling(aScrolling); } \
  NS_IMETHOD GetSrc(nsAString & aSrc) override { return _to GetSrc(aSrc); } \
  NS_IMETHOD SetSrc(const nsAString & aSrc) override { return _to SetSrc(aSrc); } \
  NS_IMETHOD GetContentDocument(nsIDOMDocument * *aContentDocument) override { return _to GetContentDocument(aContentDocument); } \
  NS_IMETHOD GetContentWindow(nsIDOMWindow * *aContentWindow) override { return _to GetContentWindow(aContentWindow); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMHTMLFRAMEELEMENT(_to) \
  NS_IMETHOD GetFrameBorder(nsAString & aFrameBorder) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFrameBorder(aFrameBorder); } \
  NS_IMETHOD SetFrameBorder(const nsAString & aFrameBorder) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFrameBorder(aFrameBorder); } \
  NS_IMETHOD GetLongDesc(nsAString & aLongDesc) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLongDesc(aLongDesc); } \
  NS_IMETHOD SetLongDesc(const nsAString & aLongDesc) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLongDesc(aLongDesc); } \
  NS_IMETHOD GetMarginHeight(nsAString & aMarginHeight) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMarginHeight(aMarginHeight); } \
  NS_IMETHOD SetMarginHeight(const nsAString & aMarginHeight) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMarginHeight(aMarginHeight); } \
  NS_IMETHOD GetMarginWidth(nsAString & aMarginWidth) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMarginWidth(aMarginWidth); } \
  NS_IMETHOD SetMarginWidth(const nsAString & aMarginWidth) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMarginWidth(aMarginWidth); } \
  NS_IMETHOD GetName(nsAString & aName) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_IMETHOD SetName(const nsAString & aName) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetName(aName); } \
  NS_IMETHOD GetNoResize(bool *aNoResize) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNoResize(aNoResize); } \
  NS_IMETHOD SetNoResize(bool aNoResize) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetNoResize(aNoResize); } \
  NS_IMETHOD GetScrolling(nsAString & aScrolling) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetScrolling(aScrolling); } \
  NS_IMETHOD SetScrolling(const nsAString & aScrolling) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetScrolling(aScrolling); } \
  NS_IMETHOD GetSrc(nsAString & aSrc) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSrc(aSrc); } \
  NS_IMETHOD SetSrc(const nsAString & aSrc) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSrc(aSrc); } \
  NS_IMETHOD GetContentDocument(nsIDOMDocument * *aContentDocument) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContentDocument(aContentDocument); } \
  NS_IMETHOD GetContentWindow(nsIDOMWindow * *aContentWindow) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContentWindow(aContentWindow); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMHTMLFrameElement : public nsIDOMHTMLFrameElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMHTMLFRAMEELEMENT

  nsDOMHTMLFrameElement();

private:
  ~nsDOMHTMLFrameElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsDOMHTMLFrameElement, nsIDOMHTMLFrameElement)

nsDOMHTMLFrameElement::nsDOMHTMLFrameElement()
{
  /* member initializers and constructor code */
}

nsDOMHTMLFrameElement::~nsDOMHTMLFrameElement()
{
  /* destructor code */
}

/* attribute DOMString frameBorder; */
NS_IMETHODIMP nsDOMHTMLFrameElement::GetFrameBorder(nsAString & aFrameBorder)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLFrameElement::SetFrameBorder(const nsAString & aFrameBorder)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString longDesc; */
NS_IMETHODIMP nsDOMHTMLFrameElement::GetLongDesc(nsAString & aLongDesc)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLFrameElement::SetLongDesc(const nsAString & aLongDesc)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString marginHeight; */
NS_IMETHODIMP nsDOMHTMLFrameElement::GetMarginHeight(nsAString & aMarginHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLFrameElement::SetMarginHeight(const nsAString & aMarginHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString marginWidth; */
NS_IMETHODIMP nsDOMHTMLFrameElement::GetMarginWidth(nsAString & aMarginWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLFrameElement::SetMarginWidth(const nsAString & aMarginWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString name; */
NS_IMETHODIMP nsDOMHTMLFrameElement::GetName(nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLFrameElement::SetName(const nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean noResize; */
NS_IMETHODIMP nsDOMHTMLFrameElement::GetNoResize(bool *aNoResize)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLFrameElement::SetNoResize(bool aNoResize)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString scrolling; */
NS_IMETHODIMP nsDOMHTMLFrameElement::GetScrolling(nsAString & aScrolling)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLFrameElement::SetScrolling(const nsAString & aScrolling)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString src; */
NS_IMETHODIMP nsDOMHTMLFrameElement::GetSrc(nsAString & aSrc)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLFrameElement::SetSrc(const nsAString & aSrc)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMDocument contentDocument; */
NS_IMETHODIMP nsDOMHTMLFrameElement::GetContentDocument(nsIDOMDocument * *aContentDocument)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMWindow contentWindow; */
NS_IMETHODIMP nsDOMHTMLFrameElement::GetContentWindow(nsIDOMWindow * *aContentWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMHTMLFrameElement_h__ */
