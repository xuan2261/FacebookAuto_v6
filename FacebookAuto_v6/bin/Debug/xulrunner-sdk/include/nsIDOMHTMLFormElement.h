/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIDOMHTMLFormElement.idl
 */

#ifndef __gen_nsIDOMHTMLFormElement_h__
#define __gen_nsIDOMHTMLFormElement_h__


#ifndef __gen_nsIDOMHTMLElement_h__
#include "nsIDOMHTMLElement.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMHTMLFormElement */
#define NS_IDOMHTMLFORMELEMENT_IID_STR "ad9b2ad0-9d29-43f6-b1a2-a1fd24627e6b"

#define NS_IDOMHTMLFORMELEMENT_IID \
  {0xad9b2ad0, 0x9d29, 0x43f6, \
    { 0xb1, 0xa2, 0xa1, 0xfd, 0x24, 0x62, 0x7e, 0x6b }}

class NS_NO_VTABLE nsIDOMHTMLFormElement : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMHTMLFORMELEMENT_IID)

  /* attribute DOMString acceptCharset; */
  NS_IMETHOD GetAcceptCharset(nsAString & aAcceptCharset) = 0;
  NS_IMETHOD SetAcceptCharset(const nsAString & aAcceptCharset) = 0;

  /* attribute DOMString action; */
  NS_IMETHOD GetAction(nsAString & aAction) = 0;
  NS_IMETHOD SetAction(const nsAString & aAction) = 0;

  /* attribute DOMString autocomplete; */
  NS_IMETHOD GetAutocomplete(nsAString & aAutocomplete) = 0;
  NS_IMETHOD SetAutocomplete(const nsAString & aAutocomplete) = 0;

  /* attribute DOMString enctype; */
  NS_IMETHOD GetEnctype(nsAString & aEnctype) = 0;
  NS_IMETHOD SetEnctype(const nsAString & aEnctype) = 0;

  /* attribute DOMString encoding; */
  NS_IMETHOD GetEncoding(nsAString & aEncoding) = 0;
  NS_IMETHOD SetEncoding(const nsAString & aEncoding) = 0;

  /* attribute DOMString method; */
  NS_IMETHOD GetMethod(nsAString & aMethod) = 0;
  NS_IMETHOD SetMethod(const nsAString & aMethod) = 0;

  /* attribute DOMString name; */
  NS_IMETHOD GetName(nsAString & aName) = 0;
  NS_IMETHOD SetName(const nsAString & aName) = 0;

  /* attribute boolean noValidate; */
  NS_IMETHOD GetNoValidate(bool *aNoValidate) = 0;
  NS_IMETHOD SetNoValidate(bool aNoValidate) = 0;

  /* attribute DOMString target; */
  NS_IMETHOD GetTarget(nsAString & aTarget) = 0;
  NS_IMETHOD SetTarget(const nsAString & aTarget) = 0;

  /* readonly attribute nsIDOMHTMLCollection elements; */
  NS_IMETHOD GetElements(nsIDOMHTMLCollection * *aElements) = 0;

  /* readonly attribute long length; */
  NS_IMETHOD GetLength(int32_t *aLength) = 0;

  /* void submit (); */
  NS_IMETHOD Submit(void) = 0;

  /* void reset (); */
  NS_IMETHOD Reset(void) = 0;

  /* boolean checkValidity (); */
  NS_IMETHOD CheckValidity(bool *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMHTMLFormElement, NS_IDOMHTMLFORMELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMHTMLFORMELEMENT \
  NS_IMETHOD GetAcceptCharset(nsAString & aAcceptCharset) override; \
  NS_IMETHOD SetAcceptCharset(const nsAString & aAcceptCharset) override; \
  NS_IMETHOD GetAction(nsAString & aAction) override; \
  NS_IMETHOD SetAction(const nsAString & aAction) override; \
  NS_IMETHOD GetAutocomplete(nsAString & aAutocomplete) override; \
  NS_IMETHOD SetAutocomplete(const nsAString & aAutocomplete) override; \
  NS_IMETHOD GetEnctype(nsAString & aEnctype) override; \
  NS_IMETHOD SetEnctype(const nsAString & aEnctype) override; \
  NS_IMETHOD GetEncoding(nsAString & aEncoding) override; \
  NS_IMETHOD SetEncoding(const nsAString & aEncoding) override; \
  NS_IMETHOD GetMethod(nsAString & aMethod) override; \
  NS_IMETHOD SetMethod(const nsAString & aMethod) override; \
  NS_IMETHOD GetName(nsAString & aName) override; \
  NS_IMETHOD SetName(const nsAString & aName) override; \
  NS_IMETHOD GetNoValidate(bool *aNoValidate) override; \
  NS_IMETHOD SetNoValidate(bool aNoValidate) override; \
  NS_IMETHOD GetTarget(nsAString & aTarget) override; \
  NS_IMETHOD SetTarget(const nsAString & aTarget) override; \
  NS_IMETHOD GetElements(nsIDOMHTMLCollection * *aElements) override; \
  NS_IMETHOD GetLength(int32_t *aLength) override; \
  NS_IMETHOD Submit(void) override; \
  NS_IMETHOD Reset(void) override; \
  NS_IMETHOD CheckValidity(bool *_retval) override; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMHTMLFORMELEMENT(_to) \
  NS_IMETHOD GetAcceptCharset(nsAString & aAcceptCharset) override { return _to GetAcceptCharset(aAcceptCharset); } \
  NS_IMETHOD SetAcceptCharset(const nsAString & aAcceptCharset) override { return _to SetAcceptCharset(aAcceptCharset); } \
  NS_IMETHOD GetAction(nsAString & aAction) override { return _to GetAction(aAction); } \
  NS_IMETHOD SetAction(const nsAString & aAction) override { return _to SetAction(aAction); } \
  NS_IMETHOD GetAutocomplete(nsAString & aAutocomplete) override { return _to GetAutocomplete(aAutocomplete); } \
  NS_IMETHOD SetAutocomplete(const nsAString & aAutocomplete) override { return _to SetAutocomplete(aAutocomplete); } \
  NS_IMETHOD GetEnctype(nsAString & aEnctype) override { return _to GetEnctype(aEnctype); } \
  NS_IMETHOD SetEnctype(const nsAString & aEnctype) override { return _to SetEnctype(aEnctype); } \
  NS_IMETHOD GetEncoding(nsAString & aEncoding) override { return _to GetEncoding(aEncoding); } \
  NS_IMETHOD SetEncoding(const nsAString & aEncoding) override { return _to SetEncoding(aEncoding); } \
  NS_IMETHOD GetMethod(nsAString & aMethod) override { return _to GetMethod(aMethod); } \
  NS_IMETHOD SetMethod(const nsAString & aMethod) override { return _to SetMethod(aMethod); } \
  NS_IMETHOD GetName(nsAString & aName) override { return _to GetName(aName); } \
  NS_IMETHOD SetName(const nsAString & aName) override { return _to SetName(aName); } \
  NS_IMETHOD GetNoValidate(bool *aNoValidate) override { return _to GetNoValidate(aNoValidate); } \
  NS_IMETHOD SetNoValidate(bool aNoValidate) override { return _to SetNoValidate(aNoValidate); } \
  NS_IMETHOD GetTarget(nsAString & aTarget) override { return _to GetTarget(aTarget); } \
  NS_IMETHOD SetTarget(const nsAString & aTarget) override { return _to SetTarget(aTarget); } \
  NS_IMETHOD GetElements(nsIDOMHTMLCollection * *aElements) override { return _to GetElements(aElements); } \
  NS_IMETHOD GetLength(int32_t *aLength) override { return _to GetLength(aLength); } \
  NS_IMETHOD Submit(void) override { return _to Submit(); } \
  NS_IMETHOD Reset(void) override { return _to Reset(); } \
  NS_IMETHOD CheckValidity(bool *_retval) override { return _to CheckValidity(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMHTMLFORMELEMENT(_to) \
  NS_IMETHOD GetAcceptCharset(nsAString & aAcceptCharset) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAcceptCharset(aAcceptCharset); } \
  NS_IMETHOD SetAcceptCharset(const nsAString & aAcceptCharset) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAcceptCharset(aAcceptCharset); } \
  NS_IMETHOD GetAction(nsAString & aAction) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAction(aAction); } \
  NS_IMETHOD SetAction(const nsAString & aAction) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAction(aAction); } \
  NS_IMETHOD GetAutocomplete(nsAString & aAutocomplete) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAutocomplete(aAutocomplete); } \
  NS_IMETHOD SetAutocomplete(const nsAString & aAutocomplete) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAutocomplete(aAutocomplete); } \
  NS_IMETHOD GetEnctype(nsAString & aEnctype) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEnctype(aEnctype); } \
  NS_IMETHOD SetEnctype(const nsAString & aEnctype) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetEnctype(aEnctype); } \
  NS_IMETHOD GetEncoding(nsAString & aEncoding) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEncoding(aEncoding); } \
  NS_IMETHOD SetEncoding(const nsAString & aEncoding) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetEncoding(aEncoding); } \
  NS_IMETHOD GetMethod(nsAString & aMethod) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMethod(aMethod); } \
  NS_IMETHOD SetMethod(const nsAString & aMethod) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMethod(aMethod); } \
  NS_IMETHOD GetName(nsAString & aName) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_IMETHOD SetName(const nsAString & aName) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetName(aName); } \
  NS_IMETHOD GetNoValidate(bool *aNoValidate) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNoValidate(aNoValidate); } \
  NS_IMETHOD SetNoValidate(bool aNoValidate) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetNoValidate(aNoValidate); } \
  NS_IMETHOD GetTarget(nsAString & aTarget) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTarget(aTarget); } \
  NS_IMETHOD SetTarget(const nsAString & aTarget) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTarget(aTarget); } \
  NS_IMETHOD GetElements(nsIDOMHTMLCollection * *aElements) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetElements(aElements); } \
  NS_IMETHOD GetLength(int32_t *aLength) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLength(aLength); } \
  NS_IMETHOD Submit(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Submit(); } \
  NS_IMETHOD Reset(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Reset(); } \
  NS_IMETHOD CheckValidity(bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckValidity(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMHTMLFormElement : public nsIDOMHTMLFormElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMHTMLFORMELEMENT

  nsDOMHTMLFormElement();

private:
  ~nsDOMHTMLFormElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsDOMHTMLFormElement, nsIDOMHTMLFormElement)

nsDOMHTMLFormElement::nsDOMHTMLFormElement()
{
  /* member initializers and constructor code */
}

nsDOMHTMLFormElement::~nsDOMHTMLFormElement()
{
  /* destructor code */
}

/* attribute DOMString acceptCharset; */
NS_IMETHODIMP nsDOMHTMLFormElement::GetAcceptCharset(nsAString & aAcceptCharset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLFormElement::SetAcceptCharset(const nsAString & aAcceptCharset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString action; */
NS_IMETHODIMP nsDOMHTMLFormElement::GetAction(nsAString & aAction)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLFormElement::SetAction(const nsAString & aAction)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString autocomplete; */
NS_IMETHODIMP nsDOMHTMLFormElement::GetAutocomplete(nsAString & aAutocomplete)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLFormElement::SetAutocomplete(const nsAString & aAutocomplete)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString enctype; */
NS_IMETHODIMP nsDOMHTMLFormElement::GetEnctype(nsAString & aEnctype)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLFormElement::SetEnctype(const nsAString & aEnctype)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString encoding; */
NS_IMETHODIMP nsDOMHTMLFormElement::GetEncoding(nsAString & aEncoding)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLFormElement::SetEncoding(const nsAString & aEncoding)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString method; */
NS_IMETHODIMP nsDOMHTMLFormElement::GetMethod(nsAString & aMethod)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLFormElement::SetMethod(const nsAString & aMethod)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString name; */
NS_IMETHODIMP nsDOMHTMLFormElement::GetName(nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLFormElement::SetName(const nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean noValidate; */
NS_IMETHODIMP nsDOMHTMLFormElement::GetNoValidate(bool *aNoValidate)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLFormElement::SetNoValidate(bool aNoValidate)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString target; */
NS_IMETHODIMP nsDOMHTMLFormElement::GetTarget(nsAString & aTarget)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLFormElement::SetTarget(const nsAString & aTarget)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMHTMLCollection elements; */
NS_IMETHODIMP nsDOMHTMLFormElement::GetElements(nsIDOMHTMLCollection * *aElements)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long length; */
NS_IMETHODIMP nsDOMHTMLFormElement::GetLength(int32_t *aLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void submit (); */
NS_IMETHODIMP nsDOMHTMLFormElement::Submit()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void reset (); */
NS_IMETHODIMP nsDOMHTMLFormElement::Reset()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean checkValidity (); */
NS_IMETHODIMP nsDOMHTMLFormElement::CheckValidity(bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMHTMLFormElement_h__ */
