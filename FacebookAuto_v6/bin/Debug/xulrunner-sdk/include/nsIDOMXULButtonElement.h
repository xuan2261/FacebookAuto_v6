/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIDOMXULButtonElement.idl
 */

#ifndef __gen_nsIDOMXULButtonElement_h__
#define __gen_nsIDOMXULButtonElement_h__


#ifndef __gen_nsIDOMXULLabeledControlEl_h__
#include "nsIDOMXULLabeledControlEl.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMXULButtonElement */
#define NS_IDOMXULBUTTONELEMENT_IID_STR "d56f1f8f-fc4e-4650-9a85-25108bbd1980"

#define NS_IDOMXULBUTTONELEMENT_IID \
  {0xd56f1f8f, 0xfc4e, 0x4650, \
    { 0x9a, 0x85, 0x25, 0x10, 0x8b, 0xbd, 0x19, 0x80 }}

class NS_NO_VTABLE nsIDOMXULButtonElement : public nsIDOMXULLabeledControlElement {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMXULBUTTONELEMENT_IID)

  enum {
    CHECKSTATE_UNCHECKED = 0,
    CHECKSTATE_CHECKED = 1,
    CHECKSTATE_MIXED = 2
  };

  /* attribute DOMString type; */
  NS_IMETHOD GetType(nsAString & aType) = 0;
  NS_IMETHOD SetType(const nsAString & aType) = 0;

  /* attribute DOMString dlgType; */
  NS_IMETHOD GetDlgType(nsAString & aDlgType) = 0;
  NS_IMETHOD SetDlgType(const nsAString & aDlgType) = 0;

  /* attribute boolean open; */
  NS_IMETHOD GetOpen(bool *aOpen) = 0;
  NS_IMETHOD SetOpen(bool aOpen) = 0;

  /* attribute boolean checked; */
  NS_IMETHOD GetChecked(bool *aChecked) = 0;
  NS_IMETHOD SetChecked(bool aChecked) = 0;

  /* attribute long checkState; */
  NS_IMETHOD GetCheckState(int32_t *aCheckState) = 0;
  NS_IMETHOD SetCheckState(int32_t aCheckState) = 0;

  /* attribute boolean autoCheck; */
  NS_IMETHOD GetAutoCheck(bool *aAutoCheck) = 0;
  NS_IMETHOD SetAutoCheck(bool aAutoCheck) = 0;

  /* attribute DOMString group; */
  NS_IMETHOD GetGroup(nsAString & aGroup) = 0;
  NS_IMETHOD SetGroup(const nsAString & aGroup) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMXULButtonElement, NS_IDOMXULBUTTONELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMXULBUTTONELEMENT \
  NS_IMETHOD GetType(nsAString & aType) override; \
  NS_IMETHOD SetType(const nsAString & aType) override; \
  NS_IMETHOD GetDlgType(nsAString & aDlgType) override; \
  NS_IMETHOD SetDlgType(const nsAString & aDlgType) override; \
  NS_IMETHOD GetOpen(bool *aOpen) override; \
  NS_IMETHOD SetOpen(bool aOpen) override; \
  NS_IMETHOD GetChecked(bool *aChecked) override; \
  NS_IMETHOD SetChecked(bool aChecked) override; \
  NS_IMETHOD GetCheckState(int32_t *aCheckState) override; \
  NS_IMETHOD SetCheckState(int32_t aCheckState) override; \
  NS_IMETHOD GetAutoCheck(bool *aAutoCheck) override; \
  NS_IMETHOD SetAutoCheck(bool aAutoCheck) override; \
  NS_IMETHOD GetGroup(nsAString & aGroup) override; \
  NS_IMETHOD SetGroup(const nsAString & aGroup) override; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMXULBUTTONELEMENT(_to) \
  NS_IMETHOD GetType(nsAString & aType) override { return _to GetType(aType); } \
  NS_IMETHOD SetType(const nsAString & aType) override { return _to SetType(aType); } \
  NS_IMETHOD GetDlgType(nsAString & aDlgType) override { return _to GetDlgType(aDlgType); } \
  NS_IMETHOD SetDlgType(const nsAString & aDlgType) override { return _to SetDlgType(aDlgType); } \
  NS_IMETHOD GetOpen(bool *aOpen) override { return _to GetOpen(aOpen); } \
  NS_IMETHOD SetOpen(bool aOpen) override { return _to SetOpen(aOpen); } \
  NS_IMETHOD GetChecked(bool *aChecked) override { return _to GetChecked(aChecked); } \
  NS_IMETHOD SetChecked(bool aChecked) override { return _to SetChecked(aChecked); } \
  NS_IMETHOD GetCheckState(int32_t *aCheckState) override { return _to GetCheckState(aCheckState); } \
  NS_IMETHOD SetCheckState(int32_t aCheckState) override { return _to SetCheckState(aCheckState); } \
  NS_IMETHOD GetAutoCheck(bool *aAutoCheck) override { return _to GetAutoCheck(aAutoCheck); } \
  NS_IMETHOD SetAutoCheck(bool aAutoCheck) override { return _to SetAutoCheck(aAutoCheck); } \
  NS_IMETHOD GetGroup(nsAString & aGroup) override { return _to GetGroup(aGroup); } \
  NS_IMETHOD SetGroup(const nsAString & aGroup) override { return _to SetGroup(aGroup); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMXULBUTTONELEMENT(_to) \
  NS_IMETHOD GetType(nsAString & aType) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_IMETHOD SetType(const nsAString & aType) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetType(aType); } \
  NS_IMETHOD GetDlgType(nsAString & aDlgType) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDlgType(aDlgType); } \
  NS_IMETHOD SetDlgType(const nsAString & aDlgType) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDlgType(aDlgType); } \
  NS_IMETHOD GetOpen(bool *aOpen) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOpen(aOpen); } \
  NS_IMETHOD SetOpen(bool aOpen) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOpen(aOpen); } \
  NS_IMETHOD GetChecked(bool *aChecked) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChecked(aChecked); } \
  NS_IMETHOD SetChecked(bool aChecked) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetChecked(aChecked); } \
  NS_IMETHOD GetCheckState(int32_t *aCheckState) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCheckState(aCheckState); } \
  NS_IMETHOD SetCheckState(int32_t aCheckState) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCheckState(aCheckState); } \
  NS_IMETHOD GetAutoCheck(bool *aAutoCheck) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAutoCheck(aAutoCheck); } \
  NS_IMETHOD SetAutoCheck(bool aAutoCheck) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAutoCheck(aAutoCheck); } \
  NS_IMETHOD GetGroup(nsAString & aGroup) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetGroup(aGroup); } \
  NS_IMETHOD SetGroup(const nsAString & aGroup) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetGroup(aGroup); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMXULButtonElement : public nsIDOMXULButtonElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMXULBUTTONELEMENT

  nsDOMXULButtonElement();

private:
  ~nsDOMXULButtonElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsDOMXULButtonElement, nsIDOMXULButtonElement)

nsDOMXULButtonElement::nsDOMXULButtonElement()
{
  /* member initializers and constructor code */
}

nsDOMXULButtonElement::~nsDOMXULButtonElement()
{
  /* destructor code */
}

/* attribute DOMString type; */
NS_IMETHODIMP nsDOMXULButtonElement::GetType(nsAString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMXULButtonElement::SetType(const nsAString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString dlgType; */
NS_IMETHODIMP nsDOMXULButtonElement::GetDlgType(nsAString & aDlgType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMXULButtonElement::SetDlgType(const nsAString & aDlgType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean open; */
NS_IMETHODIMP nsDOMXULButtonElement::GetOpen(bool *aOpen)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMXULButtonElement::SetOpen(bool aOpen)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean checked; */
NS_IMETHODIMP nsDOMXULButtonElement::GetChecked(bool *aChecked)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMXULButtonElement::SetChecked(bool aChecked)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long checkState; */
NS_IMETHODIMP nsDOMXULButtonElement::GetCheckState(int32_t *aCheckState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMXULButtonElement::SetCheckState(int32_t aCheckState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean autoCheck; */
NS_IMETHODIMP nsDOMXULButtonElement::GetAutoCheck(bool *aAutoCheck)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMXULButtonElement::SetAutoCheck(bool aAutoCheck)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString group; */
NS_IMETHODIMP nsDOMXULButtonElement::GetGroup(nsAString & aGroup)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMXULButtonElement::SetGroup(const nsAString & aGroup)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMXULButtonElement_h__ */
