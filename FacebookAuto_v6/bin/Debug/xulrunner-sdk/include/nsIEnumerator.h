/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIEnumerator.idl
 */

#ifndef __gen_nsIEnumerator_h__
#define __gen_nsIEnumerator_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
#define NS_ENUMERATOR_FALSE 1

/* starting interface:    nsIEnumerator */
#define NS_IENUMERATOR_IID_STR "ad385286-cbc4-11d2-8cca-0060b0fc14a3"

#define NS_IENUMERATOR_IID \
  {0xad385286, 0xcbc4, 0x11d2, \
    { 0x8c, 0xca, 0x00, 0x60, 0xb0, 0xfc, 0x14, 0xa3 }}

class NS_NO_VTABLE nsIEnumerator : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IENUMERATOR_IID)

  /* void first (); */
  NS_IMETHOD First(void) = 0;

  /* void next (); */
  NS_IMETHOD Next(void) = 0;

  /* nsISupports currentItem (); */
  NS_IMETHOD CurrentItem(nsISupports * *_retval) = 0;

  /* void isDone (); */
  NS_IMETHOD IsDone(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIEnumerator, NS_IENUMERATOR_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIENUMERATOR \
  NS_IMETHOD First(void) override; \
  NS_IMETHOD Next(void) override; \
  NS_IMETHOD CurrentItem(nsISupports * *_retval) override; \
  NS_IMETHOD IsDone(void) override; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIENUMERATOR(_to) \
  NS_IMETHOD First(void) override { return _to First(); } \
  NS_IMETHOD Next(void) override { return _to Next(); } \
  NS_IMETHOD CurrentItem(nsISupports * *_retval) override { return _to CurrentItem(_retval); } \
  NS_IMETHOD IsDone(void) override { return _to IsDone(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIENUMERATOR(_to) \
  NS_IMETHOD First(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->First(); } \
  NS_IMETHOD Next(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Next(); } \
  NS_IMETHOD CurrentItem(nsISupports * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CurrentItem(_retval); } \
  NS_IMETHOD IsDone(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->IsDone(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsEnumerator : public nsIEnumerator
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIENUMERATOR

  nsEnumerator();

private:
  ~nsEnumerator();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsEnumerator, nsIEnumerator)

nsEnumerator::nsEnumerator()
{
  /* member initializers and constructor code */
}

nsEnumerator::~nsEnumerator()
{
  /* destructor code */
}

/* void first (); */
NS_IMETHODIMP nsEnumerator::First()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void next (); */
NS_IMETHODIMP nsEnumerator::Next()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsISupports currentItem (); */
NS_IMETHODIMP nsEnumerator::CurrentItem(nsISupports * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void isDone (); */
NS_IMETHODIMP nsEnumerator::IsDone()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIBidirectionalEnumerator */
#define NS_IBIDIRECTIONALENUMERATOR_IID_STR "75f158a0-cadd-11d2-8cca-0060b0fc14a3"

#define NS_IBIDIRECTIONALENUMERATOR_IID \
  {0x75f158a0, 0xcadd, 0x11d2, \
    { 0x8c, 0xca, 0x00, 0x60, 0xb0, 0xfc, 0x14, 0xa3 }}

class NS_NO_VTABLE nsIBidirectionalEnumerator : public nsIEnumerator {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IBIDIRECTIONALENUMERATOR_IID)

  /* void last (); */
  NS_IMETHOD Last(void) = 0;

  /* void prev (); */
  NS_IMETHOD Prev(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIBidirectionalEnumerator, NS_IBIDIRECTIONALENUMERATOR_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIBIDIRECTIONALENUMERATOR \
  NS_IMETHOD Last(void) override; \
  NS_IMETHOD Prev(void) override; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIBIDIRECTIONALENUMERATOR(_to) \
  NS_IMETHOD Last(void) override { return _to Last(); } \
  NS_IMETHOD Prev(void) override { return _to Prev(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIBIDIRECTIONALENUMERATOR(_to) \
  NS_IMETHOD Last(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Last(); } \
  NS_IMETHOD Prev(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Prev(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsBidirectionalEnumerator : public nsIBidirectionalEnumerator
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIBIDIRECTIONALENUMERATOR

  nsBidirectionalEnumerator();

private:
  ~nsBidirectionalEnumerator();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsBidirectionalEnumerator, nsIBidirectionalEnumerator)

nsBidirectionalEnumerator::nsBidirectionalEnumerator()
{
  /* member initializers and constructor code */
}

nsBidirectionalEnumerator::~nsBidirectionalEnumerator()
{
  /* destructor code */
}

/* void last (); */
NS_IMETHODIMP nsBidirectionalEnumerator::Last()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void prev (); */
NS_IMETHODIMP nsBidirectionalEnumerator::Prev()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIEnumerator_h__ */
