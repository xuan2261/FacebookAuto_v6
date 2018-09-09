/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIDisplayInfo.idl
 */

#ifndef __gen_nsIDisplayInfo_h__
#define __gen_nsIDisplayInfo_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDisplayInfo */
#define NS_IDISPLAYINFO_IID_STR "615bc23d-6346-4b15-9c10-add002f140b6"

#define NS_IDISPLAYINFO_IID \
  {0x615bc23d, 0x6346, 0x4b15, \
    { 0x9c, 0x10, 0xad, 0xd0, 0x02, 0xf1, 0x40, 0xb6 }}

class NS_NO_VTABLE nsIDisplayInfo : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDISPLAYINFO_IID)

  /* readonly attribute long id; */
  NS_IMETHOD GetId(int32_t *aId) = 0;

  /* readonly attribute boolean connected; */
  NS_IMETHOD GetConnected(bool *aConnected) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDisplayInfo, NS_IDISPLAYINFO_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDISPLAYINFO \
  NS_IMETHOD GetId(int32_t *aId) override; \
  NS_IMETHOD GetConnected(bool *aConnected) override; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDISPLAYINFO(_to) \
  NS_IMETHOD GetId(int32_t *aId) override { return _to GetId(aId); } \
  NS_IMETHOD GetConnected(bool *aConnected) override { return _to GetConnected(aConnected); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDISPLAYINFO(_to) \
  NS_IMETHOD GetId(int32_t *aId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetId(aId); } \
  NS_IMETHOD GetConnected(bool *aConnected) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetConnected(aConnected); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDisplayInfo : public nsIDisplayInfo
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDISPLAYINFO

  nsDisplayInfo();

private:
  ~nsDisplayInfo();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsDisplayInfo, nsIDisplayInfo)

nsDisplayInfo::nsDisplayInfo()
{
  /* member initializers and constructor code */
}

nsDisplayInfo::~nsDisplayInfo()
{
  /* destructor code */
}

/* readonly attribute long id; */
NS_IMETHODIMP nsDisplayInfo::GetId(int32_t *aId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean connected; */
NS_IMETHODIMP nsDisplayInfo::GetConnected(bool *aConnected)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDisplayInfo_h__ */
