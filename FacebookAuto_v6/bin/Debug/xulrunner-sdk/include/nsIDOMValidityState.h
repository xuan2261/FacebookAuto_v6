/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIDOMValidityState.idl
 */

#ifndef __gen_nsIDOMValidityState_h__
#define __gen_nsIDOMValidityState_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMValidityState */
#define NS_IDOMVALIDITYSTATE_IID_STR "00bed276-f1f7-492f-a039-dbd9b9efc10b"

#define NS_IDOMVALIDITYSTATE_IID \
  {0x00bed276, 0xf1f7, 0x492f, \
    { 0xa0, 0x39, 0xdb, 0xd9, 0xb9, 0xef, 0xc1, 0x0b }}

class NS_NO_VTABLE nsIDOMValidityState : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMVALIDITYSTATE_IID)

  /* readonly attribute boolean valueMissing; */
  NS_IMETHOD GetValueMissing(bool *aValueMissing) = 0;

  /* readonly attribute boolean typeMismatch; */
  NS_IMETHOD GetTypeMismatch(bool *aTypeMismatch) = 0;

  /* readonly attribute boolean patternMismatch; */
  NS_IMETHOD GetPatternMismatch(bool *aPatternMismatch) = 0;

  /* readonly attribute boolean tooLong; */
  NS_IMETHOD GetTooLong(bool *aTooLong) = 0;

  /* readonly attribute boolean rangeUnderflow; */
  NS_IMETHOD GetRangeUnderflow(bool *aRangeUnderflow) = 0;

  /* readonly attribute boolean rangeOverflow; */
  NS_IMETHOD GetRangeOverflow(bool *aRangeOverflow) = 0;

  /* readonly attribute boolean stepMismatch; */
  NS_IMETHOD GetStepMismatch(bool *aStepMismatch) = 0;

  /* readonly attribute boolean badInput; */
  NS_IMETHOD GetBadInput(bool *aBadInput) = 0;

  /* readonly attribute boolean customError; */
  NS_IMETHOD GetCustomError(bool *aCustomError) = 0;

  /* readonly attribute boolean valid; */
  NS_IMETHOD GetValid(bool *aValid) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMValidityState, NS_IDOMVALIDITYSTATE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMVALIDITYSTATE \
  NS_IMETHOD GetValueMissing(bool *aValueMissing) override; \
  NS_IMETHOD GetTypeMismatch(bool *aTypeMismatch) override; \
  NS_IMETHOD GetPatternMismatch(bool *aPatternMismatch) override; \
  NS_IMETHOD GetTooLong(bool *aTooLong) override; \
  NS_IMETHOD GetRangeUnderflow(bool *aRangeUnderflow) override; \
  NS_IMETHOD GetRangeOverflow(bool *aRangeOverflow) override; \
  NS_IMETHOD GetStepMismatch(bool *aStepMismatch) override; \
  NS_IMETHOD GetBadInput(bool *aBadInput) override; \
  NS_IMETHOD GetCustomError(bool *aCustomError) override; \
  NS_IMETHOD GetValid(bool *aValid) override; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMVALIDITYSTATE(_to) \
  NS_IMETHOD GetValueMissing(bool *aValueMissing) override { return _to GetValueMissing(aValueMissing); } \
  NS_IMETHOD GetTypeMismatch(bool *aTypeMismatch) override { return _to GetTypeMismatch(aTypeMismatch); } \
  NS_IMETHOD GetPatternMismatch(bool *aPatternMismatch) override { return _to GetPatternMismatch(aPatternMismatch); } \
  NS_IMETHOD GetTooLong(bool *aTooLong) override { return _to GetTooLong(aTooLong); } \
  NS_IMETHOD GetRangeUnderflow(bool *aRangeUnderflow) override { return _to GetRangeUnderflow(aRangeUnderflow); } \
  NS_IMETHOD GetRangeOverflow(bool *aRangeOverflow) override { return _to GetRangeOverflow(aRangeOverflow); } \
  NS_IMETHOD GetStepMismatch(bool *aStepMismatch) override { return _to GetStepMismatch(aStepMismatch); } \
  NS_IMETHOD GetBadInput(bool *aBadInput) override { return _to GetBadInput(aBadInput); } \
  NS_IMETHOD GetCustomError(bool *aCustomError) override { return _to GetCustomError(aCustomError); } \
  NS_IMETHOD GetValid(bool *aValid) override { return _to GetValid(aValid); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMVALIDITYSTATE(_to) \
  NS_IMETHOD GetValueMissing(bool *aValueMissing) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetValueMissing(aValueMissing); } \
  NS_IMETHOD GetTypeMismatch(bool *aTypeMismatch) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTypeMismatch(aTypeMismatch); } \
  NS_IMETHOD GetPatternMismatch(bool *aPatternMismatch) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPatternMismatch(aPatternMismatch); } \
  NS_IMETHOD GetTooLong(bool *aTooLong) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTooLong(aTooLong); } \
  NS_IMETHOD GetRangeUnderflow(bool *aRangeUnderflow) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRangeUnderflow(aRangeUnderflow); } \
  NS_IMETHOD GetRangeOverflow(bool *aRangeOverflow) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRangeOverflow(aRangeOverflow); } \
  NS_IMETHOD GetStepMismatch(bool *aStepMismatch) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStepMismatch(aStepMismatch); } \
  NS_IMETHOD GetBadInput(bool *aBadInput) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBadInput(aBadInput); } \
  NS_IMETHOD GetCustomError(bool *aCustomError) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCustomError(aCustomError); } \
  NS_IMETHOD GetValid(bool *aValid) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetValid(aValid); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMValidityState : public nsIDOMValidityState
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMVALIDITYSTATE

  nsDOMValidityState();

private:
  ~nsDOMValidityState();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsDOMValidityState, nsIDOMValidityState)

nsDOMValidityState::nsDOMValidityState()
{
  /* member initializers and constructor code */
}

nsDOMValidityState::~nsDOMValidityState()
{
  /* destructor code */
}

/* readonly attribute boolean valueMissing; */
NS_IMETHODIMP nsDOMValidityState::GetValueMissing(bool *aValueMissing)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean typeMismatch; */
NS_IMETHODIMP nsDOMValidityState::GetTypeMismatch(bool *aTypeMismatch)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean patternMismatch; */
NS_IMETHODIMP nsDOMValidityState::GetPatternMismatch(bool *aPatternMismatch)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean tooLong; */
NS_IMETHODIMP nsDOMValidityState::GetTooLong(bool *aTooLong)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean rangeUnderflow; */
NS_IMETHODIMP nsDOMValidityState::GetRangeUnderflow(bool *aRangeUnderflow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean rangeOverflow; */
NS_IMETHODIMP nsDOMValidityState::GetRangeOverflow(bool *aRangeOverflow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean stepMismatch; */
NS_IMETHODIMP nsDOMValidityState::GetStepMismatch(bool *aStepMismatch)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean badInput; */
NS_IMETHODIMP nsDOMValidityState::GetBadInput(bool *aBadInput)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean customError; */
NS_IMETHODIMP nsDOMValidityState::GetCustomError(bool *aCustomError)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean valid; */
NS_IMETHODIMP nsDOMValidityState::GetValid(bool *aValid)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMValidityState_h__ */
