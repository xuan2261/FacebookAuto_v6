/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIScreenManager.idl
 */

#ifndef __gen_nsIScreenManager_h__
#define __gen_nsIScreenManager_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIScreen_h__
#include "nsIScreen.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIScreenManager */
#define NS_ISCREENMANAGER_IID_STR "e8a96e60-6b61-4a14-bacc-53891604b502"

#define NS_ISCREENMANAGER_IID \
  {0xe8a96e60, 0x6b61, 0x4a14, \
    { 0xba, 0xcc, 0x53, 0x89, 0x16, 0x04, 0xb5, 0x02 }}

class NS_NO_VTABLE nsIScreenManager : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISCREENMANAGER_IID)

  /* nsIScreen screenForRect (in long left, in long top, in long width, in long height); */
  NS_IMETHOD ScreenForRect(int32_t left, int32_t top, int32_t width, int32_t height, nsIScreen * *_retval) = 0;

  /* nsIScreen screenForId (in unsigned long id); */
  NS_IMETHOD ScreenForId(uint32_t id, nsIScreen * *_retval) = 0;

  /* readonly attribute nsIScreen primaryScreen; */
  NS_IMETHOD GetPrimaryScreen(nsIScreen * *aPrimaryScreen) = 0;

  /* readonly attribute unsigned long numberOfScreens; */
  NS_IMETHOD GetNumberOfScreens(uint32_t *aNumberOfScreens) = 0;

  /* readonly attribute float systemDefaultScale; */
  NS_IMETHOD GetSystemDefaultScale(float *aSystemDefaultScale) = 0;

  /* [noscript] nsIScreen screenForNativeWidget (in voidPtr nativeWidget); */
  NS_IMETHOD ScreenForNativeWidget(void *nativeWidget, nsIScreen * *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIScreenManager, NS_ISCREENMANAGER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISCREENMANAGER \
  NS_IMETHOD ScreenForRect(int32_t left, int32_t top, int32_t width, int32_t height, nsIScreen * *_retval) override; \
  NS_IMETHOD ScreenForId(uint32_t id, nsIScreen * *_retval) override; \
  NS_IMETHOD GetPrimaryScreen(nsIScreen * *aPrimaryScreen) override; \
  NS_IMETHOD GetNumberOfScreens(uint32_t *aNumberOfScreens) override; \
  NS_IMETHOD GetSystemDefaultScale(float *aSystemDefaultScale) override; \
  NS_IMETHOD ScreenForNativeWidget(void *nativeWidget, nsIScreen * *_retval) override; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISCREENMANAGER(_to) \
  NS_IMETHOD ScreenForRect(int32_t left, int32_t top, int32_t width, int32_t height, nsIScreen * *_retval) override { return _to ScreenForRect(left, top, width, height, _retval); } \
  NS_IMETHOD ScreenForId(uint32_t id, nsIScreen * *_retval) override { return _to ScreenForId(id, _retval); } \
  NS_IMETHOD GetPrimaryScreen(nsIScreen * *aPrimaryScreen) override { return _to GetPrimaryScreen(aPrimaryScreen); } \
  NS_IMETHOD GetNumberOfScreens(uint32_t *aNumberOfScreens) override { return _to GetNumberOfScreens(aNumberOfScreens); } \
  NS_IMETHOD GetSystemDefaultScale(float *aSystemDefaultScale) override { return _to GetSystemDefaultScale(aSystemDefaultScale); } \
  NS_IMETHOD ScreenForNativeWidget(void *nativeWidget, nsIScreen * *_retval) override { return _to ScreenForNativeWidget(nativeWidget, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISCREENMANAGER(_to) \
  NS_IMETHOD ScreenForRect(int32_t left, int32_t top, int32_t width, int32_t height, nsIScreen * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ScreenForRect(left, top, width, height, _retval); } \
  NS_IMETHOD ScreenForId(uint32_t id, nsIScreen * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ScreenForId(id, _retval); } \
  NS_IMETHOD GetPrimaryScreen(nsIScreen * *aPrimaryScreen) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPrimaryScreen(aPrimaryScreen); } \
  NS_IMETHOD GetNumberOfScreens(uint32_t *aNumberOfScreens) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNumberOfScreens(aNumberOfScreens); } \
  NS_IMETHOD GetSystemDefaultScale(float *aSystemDefaultScale) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSystemDefaultScale(aSystemDefaultScale); } \
  NS_IMETHOD ScreenForNativeWidget(void *nativeWidget, nsIScreen * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ScreenForNativeWidget(nativeWidget, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsScreenManager : public nsIScreenManager
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISCREENMANAGER

  nsScreenManager();

private:
  ~nsScreenManager();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsScreenManager, nsIScreenManager)

nsScreenManager::nsScreenManager()
{
  /* member initializers and constructor code */
}

nsScreenManager::~nsScreenManager()
{
  /* destructor code */
}

/* nsIScreen screenForRect (in long left, in long top, in long width, in long height); */
NS_IMETHODIMP nsScreenManager::ScreenForRect(int32_t left, int32_t top, int32_t width, int32_t height, nsIScreen * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIScreen screenForId (in unsigned long id); */
NS_IMETHODIMP nsScreenManager::ScreenForId(uint32_t id, nsIScreen * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIScreen primaryScreen; */
NS_IMETHODIMP nsScreenManager::GetPrimaryScreen(nsIScreen * *aPrimaryScreen)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long numberOfScreens; */
NS_IMETHODIMP nsScreenManager::GetNumberOfScreens(uint32_t *aNumberOfScreens)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute float systemDefaultScale; */
NS_IMETHODIMP nsScreenManager::GetSystemDefaultScale(float *aSystemDefaultScale)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] nsIScreen screenForNativeWidget (in voidPtr nativeWidget); */
NS_IMETHODIMP nsScreenManager::ScreenForNativeWidget(void *nativeWidget, nsIScreen * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif



#endif /* __gen_nsIScreenManager_h__ */
