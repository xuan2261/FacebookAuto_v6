/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIDOMHTMLInputElement.idl
 */

#ifndef __gen_nsIDOMHTMLInputElement_h__
#define __gen_nsIDOMHTMLInputElement_h__


#ifndef __gen_nsIDOMHTMLElement_h__
#include "nsIDOMHTMLElement.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIControllers; /* forward declaration */

class nsIDOMFileList; /* forward declaration */

class nsIDOMValidityState; /* forward declaration */


/* starting interface:    nsIDOMHTMLInputElement */
#define NS_IDOMHTMLINPUTELEMENT_IID_STR "64aeda0b-e9b5-4868-a4f9-e4776e32e733"

#define NS_IDOMHTMLINPUTELEMENT_IID \
  {0x64aeda0b, 0xe9b5, 0x4868, \
    { 0xa4, 0xf9, 0xe4, 0x77, 0x6e, 0x32, 0xe7, 0x33 }}

class NS_NO_VTABLE nsIDOMHTMLInputElement : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMHTMLINPUTELEMENT_IID)

  /* attribute DOMString accept; */
  NS_IMETHOD GetAccept(nsAString & aAccept) = 0;
  NS_IMETHOD SetAccept(const nsAString & aAccept) = 0;

  /* attribute DOMString alt; */
  NS_IMETHOD GetAlt(nsAString & aAlt) = 0;
  NS_IMETHOD SetAlt(const nsAString & aAlt) = 0;

  /* attribute DOMString autocomplete; */
  NS_IMETHOD GetAutocomplete(nsAString & aAutocomplete) = 0;
  NS_IMETHOD SetAutocomplete(const nsAString & aAutocomplete) = 0;

  /* attribute boolean autofocus; */
  NS_IMETHOD GetAutofocus(bool *aAutofocus) = 0;
  NS_IMETHOD SetAutofocus(bool aAutofocus) = 0;

  /* attribute boolean defaultChecked; */
  NS_IMETHOD GetDefaultChecked(bool *aDefaultChecked) = 0;
  NS_IMETHOD SetDefaultChecked(bool aDefaultChecked) = 0;

  /* attribute boolean checked; */
  NS_IMETHOD GetChecked(bool *aChecked) = 0;
  NS_IMETHOD SetChecked(bool aChecked) = 0;

  /* attribute boolean disabled; */
  NS_IMETHOD GetDisabled(bool *aDisabled) = 0;
  NS_IMETHOD SetDisabled(bool aDisabled) = 0;

  /* readonly attribute nsIDOMHTMLFormElement form; */
  NS_IMETHOD GetForm(nsIDOMHTMLFormElement * *aForm) = 0;

  /* attribute DOMString formAction; */
  NS_IMETHOD GetFormAction(nsAString & aFormAction) = 0;
  NS_IMETHOD SetFormAction(const nsAString & aFormAction) = 0;

  /* attribute DOMString formEnctype; */
  NS_IMETHOD GetFormEnctype(nsAString & aFormEnctype) = 0;
  NS_IMETHOD SetFormEnctype(const nsAString & aFormEnctype) = 0;

  /* attribute DOMString formMethod; */
  NS_IMETHOD GetFormMethod(nsAString & aFormMethod) = 0;
  NS_IMETHOD SetFormMethod(const nsAString & aFormMethod) = 0;

  /* attribute boolean formNoValidate; */
  NS_IMETHOD GetFormNoValidate(bool *aFormNoValidate) = 0;
  NS_IMETHOD SetFormNoValidate(bool aFormNoValidate) = 0;

  /* attribute DOMString formTarget; */
  NS_IMETHOD GetFormTarget(nsAString & aFormTarget) = 0;
  NS_IMETHOD SetFormTarget(const nsAString & aFormTarget) = 0;

  /* readonly attribute nsIDOMFileList files; */
  NS_IMETHOD GetFiles(nsIDOMFileList * *aFiles) = 0;

  /* attribute unsigned long height; */
  NS_IMETHOD GetHeight(uint32_t *aHeight) = 0;
  NS_IMETHOD SetHeight(uint32_t aHeight) = 0;

  /* attribute boolean indeterminate; */
  NS_IMETHOD GetIndeterminate(bool *aIndeterminate) = 0;
  NS_IMETHOD SetIndeterminate(bool aIndeterminate) = 0;

  /* attribute DOMString inputMode; */
  NS_IMETHOD GetInputMode(nsAString & aInputMode) = 0;
  NS_IMETHOD SetInputMode(const nsAString & aInputMode) = 0;

  /* readonly attribute nsIDOMHTMLElement list; */
  NS_IMETHOD GetList(nsIDOMHTMLElement * *aList) = 0;

  /* attribute DOMString max; */
  NS_IMETHOD GetMax(nsAString & aMax) = 0;
  NS_IMETHOD SetMax(const nsAString & aMax) = 0;

  /* attribute long maxLength; */
  NS_IMETHOD GetMaxLength(int32_t *aMaxLength) = 0;
  NS_IMETHOD SetMaxLength(int32_t aMaxLength) = 0;

  /* attribute DOMString min; */
  NS_IMETHOD GetMin(nsAString & aMin) = 0;
  NS_IMETHOD SetMin(const nsAString & aMin) = 0;

  /* attribute boolean multiple; */
  NS_IMETHOD GetMultiple(bool *aMultiple) = 0;
  NS_IMETHOD SetMultiple(bool aMultiple) = 0;

  /* attribute DOMString name; */
  NS_IMETHOD GetName(nsAString & aName) = 0;
  NS_IMETHOD SetName(const nsAString & aName) = 0;

  /* attribute DOMString pattern; */
  NS_IMETHOD GetPattern(nsAString & aPattern) = 0;
  NS_IMETHOD SetPattern(const nsAString & aPattern) = 0;

  /* attribute DOMString placeholder; */
  NS_IMETHOD GetPlaceholder(nsAString & aPlaceholder) = 0;
  NS_IMETHOD SetPlaceholder(const nsAString & aPlaceholder) = 0;

  /* attribute boolean readOnly; */
  NS_IMETHOD GetReadOnly(bool *aReadOnly) = 0;
  NS_IMETHOD SetReadOnly(bool aReadOnly) = 0;

  /* attribute boolean required; */
  NS_IMETHOD GetRequired(bool *aRequired) = 0;
  NS_IMETHOD SetRequired(bool aRequired) = 0;

  /* attribute DOMString step; */
  NS_IMETHOD GetStep(nsAString & aStep) = 0;
  NS_IMETHOD SetStep(const nsAString & aStep) = 0;

  /* attribute DOMString align; */
  NS_IMETHOD GetAlign(nsAString & aAlign) = 0;
  NS_IMETHOD SetAlign(const nsAString & aAlign) = 0;

  /* attribute unsigned long size; */
  NS_IMETHOD GetSize(uint32_t *aSize) = 0;
  NS_IMETHOD SetSize(uint32_t aSize) = 0;

  /* attribute unsigned long width; */
  NS_IMETHOD GetWidth(uint32_t *aWidth) = 0;
  NS_IMETHOD SetWidth(uint32_t aWidth) = 0;

  /* attribute DOMString src; */
  NS_IMETHOD GetSrc(nsAString & aSrc) = 0;
  NS_IMETHOD SetSrc(const nsAString & aSrc) = 0;

  /* attribute DOMString type; */
  NS_IMETHOD GetType(nsAString & aType) = 0;
  NS_IMETHOD SetType(const nsAString & aType) = 0;

  /* attribute DOMString defaultValue; */
  NS_IMETHOD GetDefaultValue(nsAString & aDefaultValue) = 0;
  NS_IMETHOD SetDefaultValue(const nsAString & aDefaultValue) = 0;

  /* attribute DOMString value; */
  NS_IMETHOD GetValue(nsAString & aValue) = 0;
  NS_IMETHOD SetValue(const nsAString & aValue) = 0;

  /* attribute double valueAsNumber; */
  NS_IMETHOD GetValueAsNumber(double *aValueAsNumber) = 0;
  NS_IMETHOD SetValueAsNumber(double aValueAsNumber) = 0;

  /* [optional_argc] void stepDown ([optional] in long n); */
  NS_IMETHOD StepDown(int32_t n, uint8_t _argc) = 0;

  /* [optional_argc] void stepUp ([optional] in long n); */
  NS_IMETHOD StepUp(int32_t n, uint8_t _argc) = 0;

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

  /* void select (); */
  NS_IMETHOD Select(void) = 0;

  /* attribute long selectionStart; */
  NS_IMETHOD GetSelectionStart(int32_t *aSelectionStart) = 0;
  NS_IMETHOD SetSelectionStart(int32_t aSelectionStart) = 0;

  /* attribute long selectionEnd; */
  NS_IMETHOD GetSelectionEnd(int32_t *aSelectionEnd) = 0;
  NS_IMETHOD SetSelectionEnd(int32_t aSelectionEnd) = 0;

  /* void setSelectionRange (in long selectionStart, in long selectionEnd, [optional] in DOMString direction); */
  NS_IMETHOD SetSelectionRange(int32_t selectionStart, int32_t selectionEnd, const nsAString & direction) = 0;

  /* attribute DOMString selectionDirection; */
  NS_IMETHOD GetSelectionDirection(nsAString & aSelectionDirection) = 0;
  NS_IMETHOD SetSelectionDirection(const nsAString & aSelectionDirection) = 0;

  /* attribute DOMString useMap; */
  NS_IMETHOD GetUseMap(nsAString & aUseMap) = 0;
  NS_IMETHOD SetUseMap(const nsAString & aUseMap) = 0;

  /* readonly attribute nsIControllers controllers; */
  NS_IMETHOD GetControllers(nsIControllers * *aControllers) = 0;

  /* readonly attribute long textLength; */
  NS_IMETHOD GetTextLength(int32_t *aTextLength) = 0;

  /* void mozGetFileNameArray ([optional] out unsigned long aLength, [array, size_is (aLength), retval] out wstring aFileNames); */
  NS_IMETHOD MozGetFileNameArray(uint32_t *aLength, char16_t * **aFileNames) = 0;

  /* void mozSetFileNameArray ([array, size_is (aLength)] in wstring aFileNames, in unsigned long aLength); */
  NS_IMETHOD MozSetFileNameArray(const char16_t * *aFileNames, uint32_t aLength) = 0;

  /* boolean mozIsTextField (in boolean aExcludePassword); */
  NS_IMETHOD MozIsTextField(bool aExcludePassword, bool *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMHTMLInputElement, NS_IDOMHTMLINPUTELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMHTMLINPUTELEMENT \
  NS_IMETHOD GetAccept(nsAString & aAccept) override; \
  NS_IMETHOD SetAccept(const nsAString & aAccept) override; \
  NS_IMETHOD GetAlt(nsAString & aAlt) override; \
  NS_IMETHOD SetAlt(const nsAString & aAlt) override; \
  NS_IMETHOD GetAutocomplete(nsAString & aAutocomplete) override; \
  NS_IMETHOD SetAutocomplete(const nsAString & aAutocomplete) override; \
  NS_IMETHOD GetAutofocus(bool *aAutofocus) override; \
  NS_IMETHOD SetAutofocus(bool aAutofocus) override; \
  NS_IMETHOD GetDefaultChecked(bool *aDefaultChecked) override; \
  NS_IMETHOD SetDefaultChecked(bool aDefaultChecked) override; \
  NS_IMETHOD GetChecked(bool *aChecked) override; \
  NS_IMETHOD SetChecked(bool aChecked) override; \
  NS_IMETHOD GetDisabled(bool *aDisabled) override; \
  NS_IMETHOD SetDisabled(bool aDisabled) override; \
  NS_IMETHOD GetForm(nsIDOMHTMLFormElement * *aForm) override; \
  NS_IMETHOD GetFormAction(nsAString & aFormAction) override; \
  NS_IMETHOD SetFormAction(const nsAString & aFormAction) override; \
  NS_IMETHOD GetFormEnctype(nsAString & aFormEnctype) override; \
  NS_IMETHOD SetFormEnctype(const nsAString & aFormEnctype) override; \
  NS_IMETHOD GetFormMethod(nsAString & aFormMethod) override; \
  NS_IMETHOD SetFormMethod(const nsAString & aFormMethod) override; \
  NS_IMETHOD GetFormNoValidate(bool *aFormNoValidate) override; \
  NS_IMETHOD SetFormNoValidate(bool aFormNoValidate) override; \
  NS_IMETHOD GetFormTarget(nsAString & aFormTarget) override; \
  NS_IMETHOD SetFormTarget(const nsAString & aFormTarget) override; \
  NS_IMETHOD GetFiles(nsIDOMFileList * *aFiles) override; \
  NS_IMETHOD GetHeight(uint32_t *aHeight) override; \
  NS_IMETHOD SetHeight(uint32_t aHeight) override; \
  NS_IMETHOD GetIndeterminate(bool *aIndeterminate) override; \
  NS_IMETHOD SetIndeterminate(bool aIndeterminate) override; \
  NS_IMETHOD GetInputMode(nsAString & aInputMode) override; \
  NS_IMETHOD SetInputMode(const nsAString & aInputMode) override; \
  NS_IMETHOD GetList(nsIDOMHTMLElement * *aList) override; \
  NS_IMETHOD GetMax(nsAString & aMax) override; \
  NS_IMETHOD SetMax(const nsAString & aMax) override; \
  NS_IMETHOD GetMaxLength(int32_t *aMaxLength) override; \
  NS_IMETHOD SetMaxLength(int32_t aMaxLength) override; \
  NS_IMETHOD GetMin(nsAString & aMin) override; \
  NS_IMETHOD SetMin(const nsAString & aMin) override; \
  NS_IMETHOD GetMultiple(bool *aMultiple) override; \
  NS_IMETHOD SetMultiple(bool aMultiple) override; \
  NS_IMETHOD GetName(nsAString & aName) override; \
  NS_IMETHOD SetName(const nsAString & aName) override; \
  NS_IMETHOD GetPattern(nsAString & aPattern) override; \
  NS_IMETHOD SetPattern(const nsAString & aPattern) override; \
  NS_IMETHOD GetPlaceholder(nsAString & aPlaceholder) override; \
  NS_IMETHOD SetPlaceholder(const nsAString & aPlaceholder) override; \
  NS_IMETHOD GetReadOnly(bool *aReadOnly) override; \
  NS_IMETHOD SetReadOnly(bool aReadOnly) override; \
  NS_IMETHOD GetRequired(bool *aRequired) override; \
  NS_IMETHOD SetRequired(bool aRequired) override; \
  NS_IMETHOD GetStep(nsAString & aStep) override; \
  NS_IMETHOD SetStep(const nsAString & aStep) override; \
  NS_IMETHOD GetAlign(nsAString & aAlign) override; \
  NS_IMETHOD SetAlign(const nsAString & aAlign) override; \
  NS_IMETHOD GetSize(uint32_t *aSize) override; \
  NS_IMETHOD SetSize(uint32_t aSize) override; \
  NS_IMETHOD GetWidth(uint32_t *aWidth) override; \
  NS_IMETHOD SetWidth(uint32_t aWidth) override; \
  NS_IMETHOD GetSrc(nsAString & aSrc) override; \
  NS_IMETHOD SetSrc(const nsAString & aSrc) override; \
  NS_IMETHOD GetType(nsAString & aType) override; \
  NS_IMETHOD SetType(const nsAString & aType) override; \
  NS_IMETHOD GetDefaultValue(nsAString & aDefaultValue) override; \
  NS_IMETHOD SetDefaultValue(const nsAString & aDefaultValue) override; \
  NS_IMETHOD GetValue(nsAString & aValue) override; \
  NS_IMETHOD SetValue(const nsAString & aValue) override; \
  NS_IMETHOD GetValueAsNumber(double *aValueAsNumber) override; \
  NS_IMETHOD SetValueAsNumber(double aValueAsNumber) override; \
  NS_IMETHOD StepDown(int32_t n, uint8_t _argc) override; \
  NS_IMETHOD StepUp(int32_t n, uint8_t _argc) override; \
  NS_IMETHOD GetWillValidate(bool *aWillValidate) override; \
  NS_IMETHOD GetValidity(nsIDOMValidityState * *aValidity) override; \
  NS_IMETHOD GetValidationMessage(nsAString & aValidationMessage) override; \
  NS_IMETHOD CheckValidity(bool *_retval) override; \
  NS_IMETHOD SetCustomValidity(const nsAString & error) override; \
  NS_IMETHOD Select(void) override; \
  NS_IMETHOD GetSelectionStart(int32_t *aSelectionStart) override; \
  NS_IMETHOD SetSelectionStart(int32_t aSelectionStart) override; \
  NS_IMETHOD GetSelectionEnd(int32_t *aSelectionEnd) override; \
  NS_IMETHOD SetSelectionEnd(int32_t aSelectionEnd) override; \
  NS_IMETHOD SetSelectionRange(int32_t selectionStart, int32_t selectionEnd, const nsAString & direction) override; \
  NS_IMETHOD GetSelectionDirection(nsAString & aSelectionDirection) override; \
  NS_IMETHOD SetSelectionDirection(const nsAString & aSelectionDirection) override; \
  NS_IMETHOD GetUseMap(nsAString & aUseMap) override; \
  NS_IMETHOD SetUseMap(const nsAString & aUseMap) override; \
  NS_IMETHOD GetControllers(nsIControllers * *aControllers) override; \
  NS_IMETHOD GetTextLength(int32_t *aTextLength) override; \
  NS_IMETHOD MozGetFileNameArray(uint32_t *aLength, char16_t * **aFileNames) override; \
  NS_IMETHOD MozSetFileNameArray(const char16_t * *aFileNames, uint32_t aLength) override; \
  NS_IMETHOD MozIsTextField(bool aExcludePassword, bool *_retval) override; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMHTMLINPUTELEMENT(_to) \
  NS_IMETHOD GetAccept(nsAString & aAccept) override { return _to GetAccept(aAccept); } \
  NS_IMETHOD SetAccept(const nsAString & aAccept) override { return _to SetAccept(aAccept); } \
  NS_IMETHOD GetAlt(nsAString & aAlt) override { return _to GetAlt(aAlt); } \
  NS_IMETHOD SetAlt(const nsAString & aAlt) override { return _to SetAlt(aAlt); } \
  NS_IMETHOD GetAutocomplete(nsAString & aAutocomplete) override { return _to GetAutocomplete(aAutocomplete); } \
  NS_IMETHOD SetAutocomplete(const nsAString & aAutocomplete) override { return _to SetAutocomplete(aAutocomplete); } \
  NS_IMETHOD GetAutofocus(bool *aAutofocus) override { return _to GetAutofocus(aAutofocus); } \
  NS_IMETHOD SetAutofocus(bool aAutofocus) override { return _to SetAutofocus(aAutofocus); } \
  NS_IMETHOD GetDefaultChecked(bool *aDefaultChecked) override { return _to GetDefaultChecked(aDefaultChecked); } \
  NS_IMETHOD SetDefaultChecked(bool aDefaultChecked) override { return _to SetDefaultChecked(aDefaultChecked); } \
  NS_IMETHOD GetChecked(bool *aChecked) override { return _to GetChecked(aChecked); } \
  NS_IMETHOD SetChecked(bool aChecked) override { return _to SetChecked(aChecked); } \
  NS_IMETHOD GetDisabled(bool *aDisabled) override { return _to GetDisabled(aDisabled); } \
  NS_IMETHOD SetDisabled(bool aDisabled) override { return _to SetDisabled(aDisabled); } \
  NS_IMETHOD GetForm(nsIDOMHTMLFormElement * *aForm) override { return _to GetForm(aForm); } \
  NS_IMETHOD GetFormAction(nsAString & aFormAction) override { return _to GetFormAction(aFormAction); } \
  NS_IMETHOD SetFormAction(const nsAString & aFormAction) override { return _to SetFormAction(aFormAction); } \
  NS_IMETHOD GetFormEnctype(nsAString & aFormEnctype) override { return _to GetFormEnctype(aFormEnctype); } \
  NS_IMETHOD SetFormEnctype(const nsAString & aFormEnctype) override { return _to SetFormEnctype(aFormEnctype); } \
  NS_IMETHOD GetFormMethod(nsAString & aFormMethod) override { return _to GetFormMethod(aFormMethod); } \
  NS_IMETHOD SetFormMethod(const nsAString & aFormMethod) override { return _to SetFormMethod(aFormMethod); } \
  NS_IMETHOD GetFormNoValidate(bool *aFormNoValidate) override { return _to GetFormNoValidate(aFormNoValidate); } \
  NS_IMETHOD SetFormNoValidate(bool aFormNoValidate) override { return _to SetFormNoValidate(aFormNoValidate); } \
  NS_IMETHOD GetFormTarget(nsAString & aFormTarget) override { return _to GetFormTarget(aFormTarget); } \
  NS_IMETHOD SetFormTarget(const nsAString & aFormTarget) override { return _to SetFormTarget(aFormTarget); } \
  NS_IMETHOD GetFiles(nsIDOMFileList * *aFiles) override { return _to GetFiles(aFiles); } \
  NS_IMETHOD GetHeight(uint32_t *aHeight) override { return _to GetHeight(aHeight); } \
  NS_IMETHOD SetHeight(uint32_t aHeight) override { return _to SetHeight(aHeight); } \
  NS_IMETHOD GetIndeterminate(bool *aIndeterminate) override { return _to GetIndeterminate(aIndeterminate); } \
  NS_IMETHOD SetIndeterminate(bool aIndeterminate) override { return _to SetIndeterminate(aIndeterminate); } \
  NS_IMETHOD GetInputMode(nsAString & aInputMode) override { return _to GetInputMode(aInputMode); } \
  NS_IMETHOD SetInputMode(const nsAString & aInputMode) override { return _to SetInputMode(aInputMode); } \
  NS_IMETHOD GetList(nsIDOMHTMLElement * *aList) override { return _to GetList(aList); } \
  NS_IMETHOD GetMax(nsAString & aMax) override { return _to GetMax(aMax); } \
  NS_IMETHOD SetMax(const nsAString & aMax) override { return _to SetMax(aMax); } \
  NS_IMETHOD GetMaxLength(int32_t *aMaxLength) override { return _to GetMaxLength(aMaxLength); } \
  NS_IMETHOD SetMaxLength(int32_t aMaxLength) override { return _to SetMaxLength(aMaxLength); } \
  NS_IMETHOD GetMin(nsAString & aMin) override { return _to GetMin(aMin); } \
  NS_IMETHOD SetMin(const nsAString & aMin) override { return _to SetMin(aMin); } \
  NS_IMETHOD GetMultiple(bool *aMultiple) override { return _to GetMultiple(aMultiple); } \
  NS_IMETHOD SetMultiple(bool aMultiple) override { return _to SetMultiple(aMultiple); } \
  NS_IMETHOD GetName(nsAString & aName) override { return _to GetName(aName); } \
  NS_IMETHOD SetName(const nsAString & aName) override { return _to SetName(aName); } \
  NS_IMETHOD GetPattern(nsAString & aPattern) override { return _to GetPattern(aPattern); } \
  NS_IMETHOD SetPattern(const nsAString & aPattern) override { return _to SetPattern(aPattern); } \
  NS_IMETHOD GetPlaceholder(nsAString & aPlaceholder) override { return _to GetPlaceholder(aPlaceholder); } \
  NS_IMETHOD SetPlaceholder(const nsAString & aPlaceholder) override { return _to SetPlaceholder(aPlaceholder); } \
  NS_IMETHOD GetReadOnly(bool *aReadOnly) override { return _to GetReadOnly(aReadOnly); } \
  NS_IMETHOD SetReadOnly(bool aReadOnly) override { return _to SetReadOnly(aReadOnly); } \
  NS_IMETHOD GetRequired(bool *aRequired) override { return _to GetRequired(aRequired); } \
  NS_IMETHOD SetRequired(bool aRequired) override { return _to SetRequired(aRequired); } \
  NS_IMETHOD GetStep(nsAString & aStep) override { return _to GetStep(aStep); } \
  NS_IMETHOD SetStep(const nsAString & aStep) override { return _to SetStep(aStep); } \
  NS_IMETHOD GetAlign(nsAString & aAlign) override { return _to GetAlign(aAlign); } \
  NS_IMETHOD SetAlign(const nsAString & aAlign) override { return _to SetAlign(aAlign); } \
  NS_IMETHOD GetSize(uint32_t *aSize) override { return _to GetSize(aSize); } \
  NS_IMETHOD SetSize(uint32_t aSize) override { return _to SetSize(aSize); } \
  NS_IMETHOD GetWidth(uint32_t *aWidth) override { return _to GetWidth(aWidth); } \
  NS_IMETHOD SetWidth(uint32_t aWidth) override { return _to SetWidth(aWidth); } \
  NS_IMETHOD GetSrc(nsAString & aSrc) override { return _to GetSrc(aSrc); } \
  NS_IMETHOD SetSrc(const nsAString & aSrc) override { return _to SetSrc(aSrc); } \
  NS_IMETHOD GetType(nsAString & aType) override { return _to GetType(aType); } \
  NS_IMETHOD SetType(const nsAString & aType) override { return _to SetType(aType); } \
  NS_IMETHOD GetDefaultValue(nsAString & aDefaultValue) override { return _to GetDefaultValue(aDefaultValue); } \
  NS_IMETHOD SetDefaultValue(const nsAString & aDefaultValue) override { return _to SetDefaultValue(aDefaultValue); } \
  NS_IMETHOD GetValue(nsAString & aValue) override { return _to GetValue(aValue); } \
  NS_IMETHOD SetValue(const nsAString & aValue) override { return _to SetValue(aValue); } \
  NS_IMETHOD GetValueAsNumber(double *aValueAsNumber) override { return _to GetValueAsNumber(aValueAsNumber); } \
  NS_IMETHOD SetValueAsNumber(double aValueAsNumber) override { return _to SetValueAsNumber(aValueAsNumber); } \
  NS_IMETHOD StepDown(int32_t n, uint8_t _argc) override { return _to StepDown(n, _argc); } \
  NS_IMETHOD StepUp(int32_t n, uint8_t _argc) override { return _to StepUp(n, _argc); } \
  NS_IMETHOD GetWillValidate(bool *aWillValidate) override { return _to GetWillValidate(aWillValidate); } \
  NS_IMETHOD GetValidity(nsIDOMValidityState * *aValidity) override { return _to GetValidity(aValidity); } \
  NS_IMETHOD GetValidationMessage(nsAString & aValidationMessage) override { return _to GetValidationMessage(aValidationMessage); } \
  NS_IMETHOD CheckValidity(bool *_retval) override { return _to CheckValidity(_retval); } \
  NS_IMETHOD SetCustomValidity(const nsAString & error) override { return _to SetCustomValidity(error); } \
  NS_IMETHOD Select(void) override { return _to Select(); } \
  NS_IMETHOD GetSelectionStart(int32_t *aSelectionStart) override { return _to GetSelectionStart(aSelectionStart); } \
  NS_IMETHOD SetSelectionStart(int32_t aSelectionStart) override { return _to SetSelectionStart(aSelectionStart); } \
  NS_IMETHOD GetSelectionEnd(int32_t *aSelectionEnd) override { return _to GetSelectionEnd(aSelectionEnd); } \
  NS_IMETHOD SetSelectionEnd(int32_t aSelectionEnd) override { return _to SetSelectionEnd(aSelectionEnd); } \
  NS_IMETHOD SetSelectionRange(int32_t selectionStart, int32_t selectionEnd, const nsAString & direction) override { return _to SetSelectionRange(selectionStart, selectionEnd, direction); } \
  NS_IMETHOD GetSelectionDirection(nsAString & aSelectionDirection) override { return _to GetSelectionDirection(aSelectionDirection); } \
  NS_IMETHOD SetSelectionDirection(const nsAString & aSelectionDirection) override { return _to SetSelectionDirection(aSelectionDirection); } \
  NS_IMETHOD GetUseMap(nsAString & aUseMap) override { return _to GetUseMap(aUseMap); } \
  NS_IMETHOD SetUseMap(const nsAString & aUseMap) override { return _to SetUseMap(aUseMap); } \
  NS_IMETHOD GetControllers(nsIControllers * *aControllers) override { return _to GetControllers(aControllers); } \
  NS_IMETHOD GetTextLength(int32_t *aTextLength) override { return _to GetTextLength(aTextLength); } \
  NS_IMETHOD MozGetFileNameArray(uint32_t *aLength, char16_t * **aFileNames) override { return _to MozGetFileNameArray(aLength, aFileNames); } \
  NS_IMETHOD MozSetFileNameArray(const char16_t * *aFileNames, uint32_t aLength) override { return _to MozSetFileNameArray(aFileNames, aLength); } \
  NS_IMETHOD MozIsTextField(bool aExcludePassword, bool *_retval) override { return _to MozIsTextField(aExcludePassword, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMHTMLINPUTELEMENT(_to) \
  NS_IMETHOD GetAccept(nsAString & aAccept) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAccept(aAccept); } \
  NS_IMETHOD SetAccept(const nsAString & aAccept) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAccept(aAccept); } \
  NS_IMETHOD GetAlt(nsAString & aAlt) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAlt(aAlt); } \
  NS_IMETHOD SetAlt(const nsAString & aAlt) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAlt(aAlt); } \
  NS_IMETHOD GetAutocomplete(nsAString & aAutocomplete) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAutocomplete(aAutocomplete); } \
  NS_IMETHOD SetAutocomplete(const nsAString & aAutocomplete) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAutocomplete(aAutocomplete); } \
  NS_IMETHOD GetAutofocus(bool *aAutofocus) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAutofocus(aAutofocus); } \
  NS_IMETHOD SetAutofocus(bool aAutofocus) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAutofocus(aAutofocus); } \
  NS_IMETHOD GetDefaultChecked(bool *aDefaultChecked) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDefaultChecked(aDefaultChecked); } \
  NS_IMETHOD SetDefaultChecked(bool aDefaultChecked) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDefaultChecked(aDefaultChecked); } \
  NS_IMETHOD GetChecked(bool *aChecked) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChecked(aChecked); } \
  NS_IMETHOD SetChecked(bool aChecked) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetChecked(aChecked); } \
  NS_IMETHOD GetDisabled(bool *aDisabled) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDisabled(aDisabled); } \
  NS_IMETHOD SetDisabled(bool aDisabled) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDisabled(aDisabled); } \
  NS_IMETHOD GetForm(nsIDOMHTMLFormElement * *aForm) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetForm(aForm); } \
  NS_IMETHOD GetFormAction(nsAString & aFormAction) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFormAction(aFormAction); } \
  NS_IMETHOD SetFormAction(const nsAString & aFormAction) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFormAction(aFormAction); } \
  NS_IMETHOD GetFormEnctype(nsAString & aFormEnctype) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFormEnctype(aFormEnctype); } \
  NS_IMETHOD SetFormEnctype(const nsAString & aFormEnctype) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFormEnctype(aFormEnctype); } \
  NS_IMETHOD GetFormMethod(nsAString & aFormMethod) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFormMethod(aFormMethod); } \
  NS_IMETHOD SetFormMethod(const nsAString & aFormMethod) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFormMethod(aFormMethod); } \
  NS_IMETHOD GetFormNoValidate(bool *aFormNoValidate) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFormNoValidate(aFormNoValidate); } \
  NS_IMETHOD SetFormNoValidate(bool aFormNoValidate) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFormNoValidate(aFormNoValidate); } \
  NS_IMETHOD GetFormTarget(nsAString & aFormTarget) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFormTarget(aFormTarget); } \
  NS_IMETHOD SetFormTarget(const nsAString & aFormTarget) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFormTarget(aFormTarget); } \
  NS_IMETHOD GetFiles(nsIDOMFileList * *aFiles) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFiles(aFiles); } \
  NS_IMETHOD GetHeight(uint32_t *aHeight) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHeight(aHeight); } \
  NS_IMETHOD SetHeight(uint32_t aHeight) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetHeight(aHeight); } \
  NS_IMETHOD GetIndeterminate(bool *aIndeterminate) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIndeterminate(aIndeterminate); } \
  NS_IMETHOD SetIndeterminate(bool aIndeterminate) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetIndeterminate(aIndeterminate); } \
  NS_IMETHOD GetInputMode(nsAString & aInputMode) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInputMode(aInputMode); } \
  NS_IMETHOD SetInputMode(const nsAString & aInputMode) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetInputMode(aInputMode); } \
  NS_IMETHOD GetList(nsIDOMHTMLElement * *aList) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetList(aList); } \
  NS_IMETHOD GetMax(nsAString & aMax) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMax(aMax); } \
  NS_IMETHOD SetMax(const nsAString & aMax) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMax(aMax); } \
  NS_IMETHOD GetMaxLength(int32_t *aMaxLength) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMaxLength(aMaxLength); } \
  NS_IMETHOD SetMaxLength(int32_t aMaxLength) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMaxLength(aMaxLength); } \
  NS_IMETHOD GetMin(nsAString & aMin) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMin(aMin); } \
  NS_IMETHOD SetMin(const nsAString & aMin) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMin(aMin); } \
  NS_IMETHOD GetMultiple(bool *aMultiple) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMultiple(aMultiple); } \
  NS_IMETHOD SetMultiple(bool aMultiple) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMultiple(aMultiple); } \
  NS_IMETHOD GetName(nsAString & aName) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_IMETHOD SetName(const nsAString & aName) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetName(aName); } \
  NS_IMETHOD GetPattern(nsAString & aPattern) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPattern(aPattern); } \
  NS_IMETHOD SetPattern(const nsAString & aPattern) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPattern(aPattern); } \
  NS_IMETHOD GetPlaceholder(nsAString & aPlaceholder) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPlaceholder(aPlaceholder); } \
  NS_IMETHOD SetPlaceholder(const nsAString & aPlaceholder) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPlaceholder(aPlaceholder); } \
  NS_IMETHOD GetReadOnly(bool *aReadOnly) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReadOnly(aReadOnly); } \
  NS_IMETHOD SetReadOnly(bool aReadOnly) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetReadOnly(aReadOnly); } \
  NS_IMETHOD GetRequired(bool *aRequired) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRequired(aRequired); } \
  NS_IMETHOD SetRequired(bool aRequired) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRequired(aRequired); } \
  NS_IMETHOD GetStep(nsAString & aStep) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStep(aStep); } \
  NS_IMETHOD SetStep(const nsAString & aStep) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetStep(aStep); } \
  NS_IMETHOD GetAlign(nsAString & aAlign) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAlign(aAlign); } \
  NS_IMETHOD SetAlign(const nsAString & aAlign) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAlign(aAlign); } \
  NS_IMETHOD GetSize(uint32_t *aSize) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSize(aSize); } \
  NS_IMETHOD SetSize(uint32_t aSize) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSize(aSize); } \
  NS_IMETHOD GetWidth(uint32_t *aWidth) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWidth(aWidth); } \
  NS_IMETHOD SetWidth(uint32_t aWidth) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetWidth(aWidth); } \
  NS_IMETHOD GetSrc(nsAString & aSrc) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSrc(aSrc); } \
  NS_IMETHOD SetSrc(const nsAString & aSrc) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSrc(aSrc); } \
  NS_IMETHOD GetType(nsAString & aType) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_IMETHOD SetType(const nsAString & aType) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetType(aType); } \
  NS_IMETHOD GetDefaultValue(nsAString & aDefaultValue) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDefaultValue(aDefaultValue); } \
  NS_IMETHOD SetDefaultValue(const nsAString & aDefaultValue) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDefaultValue(aDefaultValue); } \
  NS_IMETHOD GetValue(nsAString & aValue) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetValue(aValue); } \
  NS_IMETHOD SetValue(const nsAString & aValue) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetValue(aValue); } \
  NS_IMETHOD GetValueAsNumber(double *aValueAsNumber) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetValueAsNumber(aValueAsNumber); } \
  NS_IMETHOD SetValueAsNumber(double aValueAsNumber) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetValueAsNumber(aValueAsNumber); } \
  NS_IMETHOD StepDown(int32_t n, uint8_t _argc) override { return !_to ? NS_ERROR_NULL_POINTER : _to->StepDown(n, _argc); } \
  NS_IMETHOD StepUp(int32_t n, uint8_t _argc) override { return !_to ? NS_ERROR_NULL_POINTER : _to->StepUp(n, _argc); } \
  NS_IMETHOD GetWillValidate(bool *aWillValidate) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWillValidate(aWillValidate); } \
  NS_IMETHOD GetValidity(nsIDOMValidityState * *aValidity) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetValidity(aValidity); } \
  NS_IMETHOD GetValidationMessage(nsAString & aValidationMessage) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetValidationMessage(aValidationMessage); } \
  NS_IMETHOD CheckValidity(bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckValidity(_retval); } \
  NS_IMETHOD SetCustomValidity(const nsAString & error) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCustomValidity(error); } \
  NS_IMETHOD Select(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Select(); } \
  NS_IMETHOD GetSelectionStart(int32_t *aSelectionStart) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSelectionStart(aSelectionStart); } \
  NS_IMETHOD SetSelectionStart(int32_t aSelectionStart) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSelectionStart(aSelectionStart); } \
  NS_IMETHOD GetSelectionEnd(int32_t *aSelectionEnd) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSelectionEnd(aSelectionEnd); } \
  NS_IMETHOD SetSelectionEnd(int32_t aSelectionEnd) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSelectionEnd(aSelectionEnd); } \
  NS_IMETHOD SetSelectionRange(int32_t selectionStart, int32_t selectionEnd, const nsAString & direction) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSelectionRange(selectionStart, selectionEnd, direction); } \
  NS_IMETHOD GetSelectionDirection(nsAString & aSelectionDirection) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSelectionDirection(aSelectionDirection); } \
  NS_IMETHOD SetSelectionDirection(const nsAString & aSelectionDirection) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSelectionDirection(aSelectionDirection); } \
  NS_IMETHOD GetUseMap(nsAString & aUseMap) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUseMap(aUseMap); } \
  NS_IMETHOD SetUseMap(const nsAString & aUseMap) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetUseMap(aUseMap); } \
  NS_IMETHOD GetControllers(nsIControllers * *aControllers) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetControllers(aControllers); } \
  NS_IMETHOD GetTextLength(int32_t *aTextLength) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTextLength(aTextLength); } \
  NS_IMETHOD MozGetFileNameArray(uint32_t *aLength, char16_t * **aFileNames) override { return !_to ? NS_ERROR_NULL_POINTER : _to->MozGetFileNameArray(aLength, aFileNames); } \
  NS_IMETHOD MozSetFileNameArray(const char16_t * *aFileNames, uint32_t aLength) override { return !_to ? NS_ERROR_NULL_POINTER : _to->MozSetFileNameArray(aFileNames, aLength); } \
  NS_IMETHOD MozIsTextField(bool aExcludePassword, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->MozIsTextField(aExcludePassword, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMHTMLInputElement : public nsIDOMHTMLInputElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMHTMLINPUTELEMENT

  nsDOMHTMLInputElement();

private:
  ~nsDOMHTMLInputElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsDOMHTMLInputElement, nsIDOMHTMLInputElement)

nsDOMHTMLInputElement::nsDOMHTMLInputElement()
{
  /* member initializers and constructor code */
}

nsDOMHTMLInputElement::~nsDOMHTMLInputElement()
{
  /* destructor code */
}

/* attribute DOMString accept; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetAccept(nsAString & aAccept)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetAccept(const nsAString & aAccept)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString alt; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetAlt(nsAString & aAlt)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetAlt(const nsAString & aAlt)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString autocomplete; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetAutocomplete(nsAString & aAutocomplete)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetAutocomplete(const nsAString & aAutocomplete)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean autofocus; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetAutofocus(bool *aAutofocus)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetAutofocus(bool aAutofocus)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean defaultChecked; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetDefaultChecked(bool *aDefaultChecked)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetDefaultChecked(bool aDefaultChecked)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean checked; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetChecked(bool *aChecked)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetChecked(bool aChecked)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean disabled; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetDisabled(bool *aDisabled)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetDisabled(bool aDisabled)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMHTMLFormElement form; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetForm(nsIDOMHTMLFormElement * *aForm)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString formAction; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetFormAction(nsAString & aFormAction)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetFormAction(const nsAString & aFormAction)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString formEnctype; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetFormEnctype(nsAString & aFormEnctype)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetFormEnctype(const nsAString & aFormEnctype)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString formMethod; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetFormMethod(nsAString & aFormMethod)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetFormMethod(const nsAString & aFormMethod)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean formNoValidate; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetFormNoValidate(bool *aFormNoValidate)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetFormNoValidate(bool aFormNoValidate)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString formTarget; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetFormTarget(nsAString & aFormTarget)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetFormTarget(const nsAString & aFormTarget)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMFileList files; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetFiles(nsIDOMFileList * *aFiles)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long height; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetHeight(uint32_t *aHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetHeight(uint32_t aHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean indeterminate; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetIndeterminate(bool *aIndeterminate)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetIndeterminate(bool aIndeterminate)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString inputMode; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetInputMode(nsAString & aInputMode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetInputMode(const nsAString & aInputMode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMHTMLElement list; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetList(nsIDOMHTMLElement * *aList)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString max; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetMax(nsAString & aMax)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetMax(const nsAString & aMax)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long maxLength; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetMaxLength(int32_t *aMaxLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetMaxLength(int32_t aMaxLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString min; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetMin(nsAString & aMin)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetMin(const nsAString & aMin)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean multiple; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetMultiple(bool *aMultiple)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetMultiple(bool aMultiple)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString name; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetName(nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetName(const nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString pattern; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetPattern(nsAString & aPattern)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetPattern(const nsAString & aPattern)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString placeholder; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetPlaceholder(nsAString & aPlaceholder)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetPlaceholder(const nsAString & aPlaceholder)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean readOnly; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetReadOnly(bool *aReadOnly)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetReadOnly(bool aReadOnly)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean required; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetRequired(bool *aRequired)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetRequired(bool aRequired)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString step; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetStep(nsAString & aStep)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetStep(const nsAString & aStep)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString align; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetAlign(nsAString & aAlign)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetAlign(const nsAString & aAlign)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long size; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetSize(uint32_t *aSize)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetSize(uint32_t aSize)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long width; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetWidth(uint32_t *aWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetWidth(uint32_t aWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString src; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetSrc(nsAString & aSrc)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetSrc(const nsAString & aSrc)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString type; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetType(nsAString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetType(const nsAString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString defaultValue; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetDefaultValue(nsAString & aDefaultValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetDefaultValue(const nsAString & aDefaultValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString value; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetValue(nsAString & aValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetValue(const nsAString & aValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute double valueAsNumber; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetValueAsNumber(double *aValueAsNumber)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetValueAsNumber(double aValueAsNumber)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [optional_argc] void stepDown ([optional] in long n); */
NS_IMETHODIMP nsDOMHTMLInputElement::StepDown(int32_t n, uint8_t _argc)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [optional_argc] void stepUp ([optional] in long n); */
NS_IMETHODIMP nsDOMHTMLInputElement::StepUp(int32_t n, uint8_t _argc)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean willValidate; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetWillValidate(bool *aWillValidate)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMValidityState validity; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetValidity(nsIDOMValidityState * *aValidity)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString validationMessage; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetValidationMessage(nsAString & aValidationMessage)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean checkValidity (); */
NS_IMETHODIMP nsDOMHTMLInputElement::CheckValidity(bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setCustomValidity (in DOMString error); */
NS_IMETHODIMP nsDOMHTMLInputElement::SetCustomValidity(const nsAString & error)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void select (); */
NS_IMETHODIMP nsDOMHTMLInputElement::Select()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long selectionStart; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetSelectionStart(int32_t *aSelectionStart)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetSelectionStart(int32_t aSelectionStart)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long selectionEnd; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetSelectionEnd(int32_t *aSelectionEnd)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetSelectionEnd(int32_t aSelectionEnd)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setSelectionRange (in long selectionStart, in long selectionEnd, [optional] in DOMString direction); */
NS_IMETHODIMP nsDOMHTMLInputElement::SetSelectionRange(int32_t selectionStart, int32_t selectionEnd, const nsAString & direction)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString selectionDirection; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetSelectionDirection(nsAString & aSelectionDirection)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetSelectionDirection(const nsAString & aSelectionDirection)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString useMap; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetUseMap(nsAString & aUseMap)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetUseMap(const nsAString & aUseMap)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIControllers controllers; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetControllers(nsIControllers * *aControllers)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long textLength; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetTextLength(int32_t *aTextLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void mozGetFileNameArray ([optional] out unsigned long aLength, [array, size_is (aLength), retval] out wstring aFileNames); */
NS_IMETHODIMP nsDOMHTMLInputElement::MozGetFileNameArray(uint32_t *aLength, char16_t * **aFileNames)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void mozSetFileNameArray ([array, size_is (aLength)] in wstring aFileNames, in unsigned long aLength); */
NS_IMETHODIMP nsDOMHTMLInputElement::MozSetFileNameArray(const char16_t * *aFileNames, uint32_t aLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean mozIsTextField (in boolean aExcludePassword); */
NS_IMETHODIMP nsDOMHTMLInputElement::MozIsTextField(bool aExcludePassword, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMHTMLInputElement_h__ */
