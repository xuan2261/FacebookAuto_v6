/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsICollection.idl
 */

#ifndef __gen_nsICollection_h__
#define __gen_nsICollection_h__


#ifndef __gen_nsISerializable_h__
#include "nsISerializable.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIEnumerator; /* forward declaration */


/* starting interface:    nsICollection */
#define NS_ICOLLECTION_IID_STR "83b6019c-cbc4-11d2-8cca-0060b0fc14a3"

#define NS_ICOLLECTION_IID \
  {0x83b6019c, 0xcbc4, 0x11d2, \
    { 0x8c, 0xca, 0x00, 0x60, 0xb0, 0xfc, 0x14, 0xa3 }}

class NS_NO_VTABLE nsICollection : public nsISerializable {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICOLLECTION_IID)

  /* uint32_t Count (); */
  NS_IMETHOD Count(uint32_t *_retval) = 0;

  /* nsISupports GetElementAt (in uint32_t index); */
  NS_IMETHOD GetElementAt(uint32_t index, nsISupports * *_retval) = 0;

  /* void QueryElementAt (in uint32_t index, in nsIIDRef uuid, [iid_is (uuid), retval] out nsQIResult result); */
  NS_IMETHOD QueryElementAt(uint32_t index, const nsIID & uuid, void **result) = 0;

  /* void SetElementAt (in uint32_t index, in nsISupports item); */
  NS_IMETHOD SetElementAt(uint32_t index, nsISupports *item) = 0;

  /* void AppendElement (in nsISupports item); */
  NS_IMETHOD AppendElement(nsISupports *item) = 0;

  /* void RemoveElement (in nsISupports item); */
  NS_IMETHOD RemoveElement(nsISupports *item) = 0;

  /* nsIEnumerator Enumerate (); */
  NS_IMETHOD Enumerate(nsIEnumerator * *_retval) = 0;

  /* void Clear (); */
  NS_IMETHOD Clear(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsICollection, NS_ICOLLECTION_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICOLLECTION \
  NS_IMETHOD Count(uint32_t *_retval) override; \
  NS_IMETHOD GetElementAt(uint32_t index, nsISupports * *_retval) override; \
  NS_IMETHOD QueryElementAt(uint32_t index, const nsIID & uuid, void **result) override; \
  NS_IMETHOD SetElementAt(uint32_t index, nsISupports *item) override; \
  NS_IMETHOD AppendElement(nsISupports *item) override; \
  NS_IMETHOD RemoveElement(nsISupports *item) override; \
  NS_IMETHOD Enumerate(nsIEnumerator * *_retval) override; \
  NS_IMETHOD Clear(void) override; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICOLLECTION(_to) \
  NS_IMETHOD Count(uint32_t *_retval) override { return _to Count(_retval); } \
  NS_IMETHOD GetElementAt(uint32_t index, nsISupports * *_retval) override { return _to GetElementAt(index, _retval); } \
  NS_IMETHOD QueryElementAt(uint32_t index, const nsIID & uuid, void **result) override { return _to QueryElementAt(index, uuid, result); } \
  NS_IMETHOD SetElementAt(uint32_t index, nsISupports *item) override { return _to SetElementAt(index, item); } \
  NS_IMETHOD AppendElement(nsISupports *item) override { return _to AppendElement(item); } \
  NS_IMETHOD RemoveElement(nsISupports *item) override { return _to RemoveElement(item); } \
  NS_IMETHOD Enumerate(nsIEnumerator * *_retval) override { return _to Enumerate(_retval); } \
  NS_IMETHOD Clear(void) override { return _to Clear(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICOLLECTION(_to) \
  NS_IMETHOD Count(uint32_t *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Count(_retval); } \
  NS_IMETHOD GetElementAt(uint32_t index, nsISupports * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetElementAt(index, _retval); } \
  NS_IMETHOD QueryElementAt(uint32_t index, const nsIID & uuid, void **result) override { return !_to ? NS_ERROR_NULL_POINTER : _to->QueryElementAt(index, uuid, result); } \
  NS_IMETHOD SetElementAt(uint32_t index, nsISupports *item) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetElementAt(index, item); } \
  NS_IMETHOD AppendElement(nsISupports *item) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AppendElement(item); } \
  NS_IMETHOD RemoveElement(nsISupports *item) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveElement(item); } \
  NS_IMETHOD Enumerate(nsIEnumerator * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Enumerate(_retval); } \
  NS_IMETHOD Clear(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Clear(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsCollection : public nsICollection
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICOLLECTION

  nsCollection();

private:
  ~nsCollection();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsCollection, nsICollection)

nsCollection::nsCollection()
{
  /* member initializers and constructor code */
}

nsCollection::~nsCollection()
{
  /* destructor code */
}

/* uint32_t Count (); */
NS_IMETHODIMP nsCollection::Count(uint32_t *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsISupports GetElementAt (in uint32_t index); */
NS_IMETHODIMP nsCollection::GetElementAt(uint32_t index, nsISupports * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void QueryElementAt (in uint32_t index, in nsIIDRef uuid, [iid_is (uuid), retval] out nsQIResult result); */
NS_IMETHODIMP nsCollection::QueryElementAt(uint32_t index, const nsIID & uuid, void **result)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetElementAt (in uint32_t index, in nsISupports item); */
NS_IMETHODIMP nsCollection::SetElementAt(uint32_t index, nsISupports *item)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void AppendElement (in nsISupports item); */
NS_IMETHODIMP nsCollection::AppendElement(nsISupports *item)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void RemoveElement (in nsISupports item); */
NS_IMETHODIMP nsCollection::RemoveElement(nsISupports *item)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIEnumerator Enumerate (); */
NS_IMETHODIMP nsCollection::Enumerate(nsIEnumerator * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void Clear (); */
NS_IMETHODIMP nsCollection::Clear()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#ifndef nsCOMPtr_h__
#include "nsCOMPtr.h"
#endif
class MOZ_STACK_CLASS nsQueryElementAt : public nsCOMPtr_helper
  {
    public:
      nsQueryElementAt( nsICollection* aCollection, uint32_t aIndex, nsresult* aErrorPtr )
          : mCollection(aCollection),
            mIndex(aIndex),
            mErrorPtr(aErrorPtr)
        {
          // nothing else to do here
        }
      virtual nsresult NS_FASTCALL operator()( const nsIID& aIID, void** )
        const override;
    private:
      nsICollection* MOZ_NON_OWNING_REF mCollection;
      uint32_t        mIndex;
      nsresult*       mErrorPtr;
  };
inline
const nsQueryElementAt
do_QueryElementAt( nsICollection* aCollection, uint32_t aIndex, nsresult* aErrorPtr = 0 )
  {
    return nsQueryElementAt(aCollection, aIndex, aErrorPtr);
  }

#endif /* __gen_nsICollection_h__ */
