/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIDOMHTMLFieldSetElement.idl
 */

#ifndef __gen_nsIDOMHTMLFieldSetElement_h__
#define __gen_nsIDOMHTMLFieldSetElement_h__


#ifndef __gen_nsIDOMHTMLElement_h__
#include "nsIDOMHTMLElement.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMValidityState; /* forward declaration */


/* starting interface:    nsIDOMHTMLFieldSetElement */
#define NS_IDOMHTMLFIELDSETELEMENT_IID_STR "e3d91535-9da3-4c4b-a809-f17d85a4fb9f"

#define NS_IDOMHTMLFIELDSETELEMENT_IID \
  {0xe3d91535, 0x9da3, 0x4c4b, \
    { 0xa8, 0x09, 0xf1, 0x7d, 0x85, 0xa4, 0xfb, 0x9f }}

class NS_NO_VTABLE nsIDOMHTMLFieldSetElement : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMHTMLFIELDSETELEMENT_IID)

  /* attribute boolean disabled; */
  NS_IMETHOD GetDisabled(bool *aDisabled) = 0;
  NS_IMETHOD SetDisabled(bool aDisabled) = 0;

  /* readonly attribute nsIDOMHTMLFormElement form; */
  NS_IMETHOD GetForm(nsIDOMHTMLFormElement * *aForm) = 0;

  /* attribute DOMString name; */
  NS_IMETHOD GetName(nsAString & aName) = 0;
  NS_IMETHOD SetName(const nsAString & aName) = 0;

  /* readonly attribute DOMString type; */
  NS_IMETHOD GetType(nsAString & aType) = 0;

  /* readonly attribute nsIDOMHTMLCollection elements; */
  NS_IMETHOD GetElements(nsIDOMHTMLCollection * *aElements) = 0;

  /* readonly attribute boolean willValidate; */
  NS_IMETHOD GetWillValidate(bool *aWillValidate) = 0;

  /* readonly attribute nsIDOMValidityState validity; */
  NS_IMETHOD GetValidity(nsIDOMValidityState * *aValidity) = 0;

  /* readonly attribute DOMString validationMessage; */
  NS_IMETHOD GetValidationMessage(nsAString & aValidationMessage) = 0;

  /* boolean checkValidity (); */
  NS_IMETHOD CheckValidity(bool *_retval) = 0;

  /* void setCustomValidity (in DOMString error); */
  NS_IMETHOD SetCustomValidity(const nsAString & error) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMHTMLFieldSetElement, NS_IDOMHTMLFIELDSETELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMHTMLFIELDSETELEMENT \
  NS_IMETHOD GetDisabled(bool *aDisabled) override; \
  NS_IMETHOD SetDisabled(bool aDisabled) override; \
  NS_IMETHOD GetForm(nsIDOMHTMLFormElement * *aForm) override; \
  NS_IMETHOD GetName(nsAString & aName) override; \
  NS_IMETHOD SetName(const nsAString & aName) override; \
  NS_IMETHOD GetType(nsAString & aType) override; \
  NS_IMETHOD GetElements(nsIDOMHTMLCollection * *aElements) override; \
  NS_IMETHOD GetWillValidate(bool *aWillValidate) override; \
  NS_IMETHOD GetValidity(nsIDOMValidityState * *aValidity) override; \
  NS_IMETHOD GetValidationMessage(nsAString & aValidationMessage) override; \
  NS_IMETHOD CheckValidity(bool *_retval) override; \
  NS_IMETHOD SetCustomValidity(const nsAString & error) override; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMHTMLFIELDSETELEMENT(_to) \
  NS_IMETHOD GetDisabled(bool *aDisabled) override { return _to GetDisabled(aDisabled); } \
  NS_IMETHOD SetDisabled(bool aDisabled) override { return _to SetDisabled(aDisabled); } \
  NS_IMETHOD GetForm(nsIDOMHTMLFormElement * *aForm) override { return _to GetForm(aForm); } \
  NS_IMETHOD GetName(nsAString & aName) override { return _to GetName(aName); } \
  NS_IMETHOD SetName(const nsAString & aName) override { return _to SetName(aName); } \
  NS_IMETHOD GetType(nsAString & aType) override { return _to GetType(aType); } \
  NS_IMETHOD GetElements(nsIDOMHTMLCollection * *aElements) override { return _to GetElements(aElements); } \
  NS_IMETHOD GetWillValidate(bool *aWillValidate) override { return _to GetWillValidate(aWillValidate); } \
  NS_IMETHOD GetValidity(nsIDOMValidityState * *aValidity) override { return _to GetValidity(aValidity); } \
  NS_IMETHOD GetValidationMessage(nsAString & aValidationMessage) override { return _to GetValidationMessage(aValidationMessage); } \
  NS_IMETHOD CheckValidity(bool *_retval) override { return _to CheckValidity(_retval); } \
  NS_IMETHOD SetCustomValidity(const nsAString & error) override { return _to SetCustomValidity(error); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMHTMLFIELDSETELEMENT(_to) \
  NS_IMETHOD GetDisabled(bool *aDisabled) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDisabled(aDisabled); } \
  NS_IMETHOD SetDisabled(bool aDisabled) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDisabled(aDisabled); } \
  NS_IMETHOD GetForm(nsIDOMHTMLFormElement * *aForm) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetForm(aForm); } \
  NS_IMETHOD GetName(nsAString & aName) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_IMETHOD SetName(const nsAString & aName) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetName(aName); } \
  NS_IMETHOD GetType(nsAString & aType) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_IMETHOD GetElements(nsIDOMHTMLCollection * *aElements) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetElements(aElements); } \
  NS_IMETHOD GetWillValidate(bool *aWillValidate) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWillValidate(aWillValidate); } \
  NS_IMETHOD GetValidity(nsIDOMValidityState * *aValidity) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetValidity(aValidity); } \
  NS_IMETHOD GetValidationMessage(nsAString & aValidationMessage) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetValidationMessage(aValidationMessage); } \
  NS_IMETHOD CheckValidity(bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckValidity(_retval); } \
  NS_IMETHOD SetCustomValidity(const nsAString & error) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCustomValidity(error); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMHTMLFieldSetElement : public nsIDOMHTMLFieldSetElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMHTMLFIELDSETELEMENT

  nsDOMHTMLFieldSetElement();

private:
  ~nsDOMHTMLFieldSetElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsDOMHTMLFieldSetElement, nsIDOMHTMLFieldSetElement)

nsDOMHTMLFieldSetElement::nsDOMHTMLFieldSetElement()
{
  /* member initializers and constructor code */
}

nsDOMHTMLFieldSetElement::~nsDOMHTMLFieldSetElement()
{
  /* destructor code */
}

/* attribute boolean disabled; */
NS_IMETHODIMP nsDOMHTMLFieldSetElement::GetDisabled(bool *aDisabled)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLFieldSetElement::SetDisabled(bool aDisabled)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMHTMLFormElement form; */
NS_IMETHODIMP nsDOMHTMLFieldSetElement::GetForm(nsIDOMHTMLFormElement * *aForm)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString name; */
NS_IMETHODIMP nsDOMHTMLFieldSetElement::GetName(nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLFieldSetElement::SetName(const nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString type; */
NS_IMETHODIMP nsDOMHTMLFieldSetElement::GetType(nsAString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMHTMLCollection elements; */
NS_IMETHODIMP nsDOMHTMLFieldSetElement::GetElements(nsIDOMHTMLCollection * *aElements)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean willValidate; */
NS_IMETHODIMP nsDOMHTMLFieldSetElement::GetWillValidate(bool *aWillValidate)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMValidityState validity; */
NS_IMETHODIMP nsDOMHTMLFieldSetElement::GetValidity(nsIDOMValidityState * *aValidity)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString validationMessage; */
NS_IMETHODIMP nsDOMHTMLFieldSetElement::GetValidationMessage(nsAString & aValidationMessage)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean checkValidity (); */
NS_IMETHODIMP nsDOMHTMLFieldSetElement::CheckValidity(bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setCustomValidity (in DOMString error); */
NS_IMETHODIMP nsDOMHTMLFieldSetElement::SetCustomValidity(const nsAString & error)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMHTMLFieldSetElement_h__ */
