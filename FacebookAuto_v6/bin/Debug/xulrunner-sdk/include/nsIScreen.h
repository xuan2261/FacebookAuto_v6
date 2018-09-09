/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIScreen.idl
 */

#ifndef __gen_nsIScreen_h__
#define __gen_nsIScreen_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIScreen */
#define NS_ISCREEN_IID_STR "826e80c8-d70f-42e2-8aa9-82c05f2a370a"

#define NS_ISCREEN_IID \
  {0x826e80c8, 0xd70f, 0x42e2, \
    { 0x8a, 0xa9, 0x82, 0xc0, 0x5f, 0x2a, 0x37, 0x0a }}

class NS_NO_VTABLE nsIScreen : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISCREEN_IID)

  enum {
    BRIGHTNESS_DIM = 0U,
    BRIGHTNESS_FULL = 1U,
    BRIGHTNESS_LEVELS = 2U,
    ROTATION_0_DEG = 0U,
    ROTATION_90_DEG = 1U,
    ROTATION_180_DEG = 2U,
    ROTATION_270_DEG = 3U
  };

  /* readonly attribute unsigned long id; */
  NS_IMETHOD GetId(uint32_t *aId) = 0;

  /* void GetRect (out long left, out long top, out long width, out long height); */
  NS_IMETHOD GetRect(int32_t *left, int32_t *top, int32_t *width, int32_t *height) = 0;

  /* void GetAvailRect (out long left, out long top, out long width, out long height); */
  NS_IMETHOD GetAvailRect(int32_t *left, int32_t *top, int32_t *width, int32_t *height) = 0;

  /* void GetRectDisplayPix (out long left, out long top, out long width, out long height); */
  NS_IMETHOD GetRectDisplayPix(int32_t *left, int32_t *top, int32_t *width, int32_t *height) = 0;

  /* void GetAvailRectDisplayPix (out long left, out long top, out long width, out long height); */
  NS_IMETHOD GetAvailRectDisplayPix(int32_t *left, int32_t *top, int32_t *width, int32_t *height) = 0;

  /* void lockMinimumBrightness (in unsigned long brightness); */
  NS_IMETHOD LockMinimumBrightness(uint32_t brightness) = 0;

  /* void unlockMinimumBrightness (in unsigned long brightness); */
  NS_IMETHOD UnlockMinimumBrightness(uint32_t brightness) = 0;

  /* readonly attribute long pixelDepth; */
  NS_IMETHOD GetPixelDepth(int32_t *aPixelDepth) = 0;

  /* readonly attribute long colorDepth; */
  NS_IMETHOD GetColorDepth(int32_t *aColorDepth) = 0;

  /* attribute unsigned long rotation; */
  NS_IMETHOD GetRotation(uint32_t *aRotation) = 0;
  NS_IMETHOD SetRotation(uint32_t aRotation) = 0;

  /* readonly attribute double contentsScaleFactor; */
  NS_IMETHOD GetContentsScaleFactor(double *aContentsScaleFactor) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIScreen, NS_ISCREEN_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISCREEN \
  NS_IMETHOD GetId(uint32_t *aId) override; \
  NS_IMETHOD GetRect(int32_t *left, int32_t *top, int32_t *width, int32_t *height) override; \
  NS_IMETHOD GetAvailRect(int32_t *left, int32_t *top, int32_t *width, int32_t *height) override; \
  NS_IMETHOD GetRectDisplayPix(int32_t *left, int32_t *top, int32_t *width, int32_t *height) override; \
  NS_IMETHOD GetAvailRectDisplayPix(int32_t *left, int32_t *top, int32_t *width, int32_t *height) override; \
  NS_IMETHOD LockMinimumBrightness(uint32_t brightness) override; \
  NS_IMETHOD UnlockMinimumBrightness(uint32_t brightness) override; \
  NS_IMETHOD GetPixelDepth(int32_t *aPixelDepth) override; \
  NS_IMETHOD GetColorDepth(int32_t *aColorDepth) override; \
  NS_IMETHOD GetRotation(uint32_t *aRotation) override; \
  NS_IMETHOD SetRotation(uint32_t aRotation) override; \
  NS_IMETHOD GetContentsScaleFactor(double *aContentsScaleFactor) override; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISCREEN(_to) \
  NS_IMETHOD GetId(uint32_t *aId) override { return _to GetId(aId); } \
  NS_IMETHOD GetRect(int32_t *left, int32_t *top, int32_t *width, int32_t *height) override { return _to GetRect(left, top, width, height); } \
  NS_IMETHOD GetAvailRect(int32_t *left, int32_t *top, int32_t *width, int32_t *height) override { return _to GetAvailRect(left, top, width, height); } \
  NS_IMETHOD GetRectDisplayPix(int32_t *left, int32_t *top, int32_t *width, int32_t *height) override { return _to GetRectDisplayPix(left, top, width, height); } \
  NS_IMETHOD GetAvailRectDisplayPix(int32_t *left, int32_t *top, int32_t *width, int32_t *height) override { return _to GetAvailRectDisplayPix(left, top, width, height); } \
  NS_IMETHOD LockMinimumBrightness(uint32_t brightness) override { return _to LockMinimumBrightness(brightness); } \
  NS_IMETHOD UnlockMinimumBrightness(uint32_t brightness) override { return _to UnlockMinimumBrightness(brightness); } \
  NS_IMETHOD GetPixelDepth(int32_t *aPixelDepth) override { return _to GetPixelDepth(aPixelDepth); } \
  NS_IMETHOD GetColorDepth(int32_t *aColorDepth) override { return _to GetColorDepth(aColorDepth); } \
  NS_IMETHOD GetRotation(uint32_t *aRotation) override { return _to GetRotation(aRotation); } \
  NS_IMETHOD SetRotation(uint32_t aRotation) override { return _to SetRotation(aRotation); } \
  NS_IMETHOD GetContentsScaleFactor(double *aContentsScaleFactor) override { return _to GetContentsScaleFactor(aContentsScaleFactor); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISCREEN(_to) \
  NS_IMETHOD GetId(uint32_t *aId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetId(aId); } \
  NS_IMETHOD GetRect(int32_t *left, int32_t *top, int32_t *width, int32_t *height) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRect(left, top, width, height); } \
  NS_IMETHOD GetAvailRect(int32_t *left, int32_t *top, int32_t *width, int32_t *height) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAvailRect(left, top, width, height); } \
  NS_IMETHOD GetRectDisplayPix(int32_t *left, int32_t *top, int32_t *width, int32_t *height) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRectDisplayPix(left, top, width, height); } \
  NS_IMETHOD GetAvailRectDisplayPix(int32_t *left, int32_t *top, int32_t *width, int32_t *height) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAvailRectDisplayPix(left, top, width, height); } \
  NS_IMETHOD LockMinimumBrightness(uint32_t brightness) override { return !_to ? NS_ERROR_NULL_POINTER : _to->LockMinimumBrightness(brightness); } \
  NS_IMETHOD UnlockMinimumBrightness(uint32_t brightness) override { return !_to ? NS_ERROR_NULL_POINTER : _to->UnlockMinimumBrightness(brightness); } \
  NS_IMETHOD GetPixelDepth(int32_t *aPixelDepth) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPixelDepth(aPixelDepth); } \
  NS_IMETHOD GetColorDepth(int32_t *aColorDepth) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetColorDepth(aColorDepth); } \
  NS_IMETHOD GetRotation(uint32_t *aRotation) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRotation(aRotation); } \
  NS_IMETHOD SetRotation(uint32_t aRotation) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRotation(aRotation); } \
  NS_IMETHOD GetContentsScaleFactor(double *aContentsScaleFactor) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContentsScaleFactor(aContentsScaleFactor); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsScreen : public nsIScreen
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISCREEN

  nsScreen();

private:
  ~nsScreen();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsScreen, nsIScreen)

nsScreen::nsScreen()
{
  /* member initializers and constructor code */
}

nsScreen::~nsScreen()
{
  /* destructor code */
}

/* readonly attribute unsigned long id; */
NS_IMETHODIMP nsScreen::GetId(uint32_t *aId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetRect (out long left, out long top, out long width, out long height); */
NS_IMETHODIMP nsScreen::GetRect(int32_t *left, int32_t *top, int32_t *width, int32_t *height)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetAvailRect (out long left, out long top, out long width, out long height); */
NS_IMETHODIMP nsScreen::GetAvailRect(int32_t *left, int32_t *top, int32_t *width, int32_t *height)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetRectDisplayPix (out long left, out long top, out long width, out long height); */
NS_IMETHODIMP nsScreen::GetRectDisplayPix(int32_t *left, int32_t *top, int32_t *width, int32_t *height)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetAvailRectDisplayPix (out long left, out long top, out long width, out long height); */
NS_IMETHODIMP nsScreen::GetAvailRectDisplayPix(int32_t *left, int32_t *top, int32_t *width, int32_t *height)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void lockMinimumBrightness (in unsigned long brightness); */
NS_IMETHODIMP nsScreen::LockMinimumBrightness(uint32_t brightness)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void unlockMinimumBrightness (in unsigned long brightness); */
NS_IMETHODIMP nsScreen::UnlockMinimumBrightness(uint32_t brightness)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long pixelDepth; */
NS_IMETHODIMP nsScreen::GetPixelDepth(int32_t *aPixelDepth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long colorDepth; */
NS_IMETHODIMP nsScreen::GetColorDepth(int32_t *aColorDepth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long rotation; */
NS_IMETHODIMP nsScreen::GetRotation(uint32_t *aRotation)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsScreen::SetRotation(uint32_t aRotation)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute double contentsScaleFactor; */
NS_IMETHODIMP nsScreen::GetContentsScaleFactor(double *aContentsScaleFactor)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIScreen_h__ */
