/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIAppShellService.idl
 */

#ifndef __gen_nsIAppShellService_h__
#define __gen_nsIAppShellService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIXULWindow; /* forward declaration */

class nsIWebNavigation; /* forward declaration */

class nsIURI; /* forward declaration */

class nsIDOMWindow; /* forward declaration */

class nsIAppShell; /* forward declaration */

class nsITabParent; /* forward declaration */

#include "js/TypeDecls.h"

/* starting interface:    nsIAppShellService */
#define NS_IAPPSHELLSERVICE_IID_STR "83f23c7e-6ce0-433f-9fe2-f287ae8c6e0c"

#define NS_IAPPSHELLSERVICE_IID \
  {0x83f23c7e, 0x6ce0, 0x433f, \
    { 0x9f, 0xe2, 0xf2, 0x87, 0xae, 0x8c, 0x6e, 0x0c }}

class NS_NO_VTABLE nsIAppShellService : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IAPPSHELLSERVICE_IID)

  enum {
    SIZE_TO_CONTENT = -1
  };

  /* nsIXULWindow createTopLevelWindow (in nsIXULWindow aParent, in nsIURI aUrl, in uint32_t aChromeMask, in long aInitialWidth, in long aInitialHeight, in nsITabParent aOpeningTab); */
  NS_IMETHOD CreateTopLevelWindow(nsIXULWindow *aParent, nsIURI *aUrl, uint32_t aChromeMask, int32_t aInitialWidth, int32_t aInitialHeight, nsITabParent *aOpeningTab, nsIXULWindow * *_retval) = 0;

  /* nsIWebNavigation createWindowlessBrowser ([optional] in bool aIsChrome); */
  NS_IMETHOD CreateWindowlessBrowser(bool aIsChrome, nsIWebNavigation * *_retval) = 0;

  /* [noscript] void createHiddenWindow (); */
  NS_IMETHOD CreateHiddenWindow(void) = 0;

  /* void destroyHiddenWindow (); */
  NS_IMETHOD DestroyHiddenWindow(void) = 0;

  /* [noscript] void setScreenId (in uint32_t aScreenId); */
  NS_IMETHOD SetScreenId(uint32_t aScreenId) = 0;

  /* readonly attribute nsIXULWindow hiddenWindow; */
  NS_IMETHOD GetHiddenWindow(nsIXULWindow * *aHiddenWindow) = 0;

  /* readonly attribute nsIDOMWindow hiddenDOMWindow; */
  NS_IMETHOD GetHiddenDOMWindow(nsIDOMWindow * *aHiddenDOMWindow) = 0;

  /* readonly attribute nsIXULWindow hiddenPrivateWindow; */
  NS_IMETHOD GetHiddenPrivateWindow(nsIXULWindow * *aHiddenPrivateWindow) = 0;

  /* readonly attribute nsIDOMWindow hiddenPrivateDOMWindow; */
  NS_IMETHOD GetHiddenPrivateDOMWindow(nsIDOMWindow * *aHiddenPrivateDOMWindow) = 0;

  /* [noscript] void getHiddenWindowAndJSContext (out nsIDOMWindow aHiddenDOMWindow, out JSContext aJSContext); */
  NS_IMETHOD GetHiddenWindowAndJSContext(nsIDOMWindow * *aHiddenDOMWindow, JSContext **aJSContext) = 0;

  /* readonly attribute boolean applicationProvidedHiddenWindow; */
  NS_IMETHOD GetApplicationProvidedHiddenWindow(bool *aApplicationProvidedHiddenWindow) = 0;

  /* void registerTopLevelWindow (in nsIXULWindow aWindow); */
  NS_IMETHOD RegisterTopLevelWindow(nsIXULWindow *aWindow) = 0;

  /* void unregisterTopLevelWindow (in nsIXULWindow aWindow); */
  NS_IMETHOD UnregisterTopLevelWindow(nsIXULWindow *aWindow) = 0;

  /* [noscript] readonly attribute boolean hasHiddenPrivateWindow; */
  NS_IMETHOD GetHasHiddenPrivateWindow(bool *aHasHiddenPrivateWindow) = 0;

  /* bool startEventLoopLagTracking (); */
  NS_IMETHOD StartEventLoopLagTracking(bool *_retval) = 0;

  /* void stopEventLoopLagTracking (); */
  NS_IMETHOD StopEventLoopLagTracking(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIAppShellService, NS_IAPPSHELLSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIAPPSHELLSERVICE \
  NS_IMETHOD CreateTopLevelWindow(nsIXULWindow *aParent, nsIURI *aUrl, uint32_t aChromeMask, int32_t aInitialWidth, int32_t aInitialHeight, nsITabParent *aOpeningTab, nsIXULWindow * *_retval) override; \
  NS_IMETHOD CreateWindowlessBrowser(bool aIsChrome, nsIWebNavigation * *_retval) override; \
  NS_IMETHOD CreateHiddenWindow(void) override; \
  NS_IMETHOD DestroyHiddenWindow(void) override; \
  NS_IMETHOD SetScreenId(uint32_t aScreenId) override; \
  NS_IMETHOD GetHiddenWindow(nsIXULWindow * *aHiddenWindow) override; \
  NS_IMETHOD GetHiddenDOMWindow(nsIDOMWindow * *aHiddenDOMWindow) override; \
  NS_IMETHOD GetHiddenPrivateWindow(nsIXULWindow * *aHiddenPrivateWindow) override; \
  NS_IMETHOD GetHiddenPrivateDOMWindow(nsIDOMWindow * *aHiddenPrivateDOMWindow) override; \
  NS_IMETHOD GetHiddenWindowAndJSContext(nsIDOMWindow * *aHiddenDOMWindow, JSContext **aJSContext) override; \
  NS_IMETHOD GetApplicationProvidedHiddenWindow(bool *aApplicationProvidedHiddenWindow) override; \
  NS_IMETHOD RegisterTopLevelWindow(nsIXULWindow *aWindow) override; \
  NS_IMETHOD UnregisterTopLevelWindow(nsIXULWindow *aWindow) override; \
  NS_IMETHOD GetHasHiddenPrivateWindow(bool *aHasHiddenPrivateWindow) override; \
  NS_IMETHOD StartEventLoopLagTracking(bool *_retval) override; \
  NS_IMETHOD StopEventLoopLagTracking(void) override; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIAPPSHELLSERVICE(_to) \
  NS_IMETHOD CreateTopLevelWindow(nsIXULWindow *aParent, nsIURI *aUrl, uint32_t aChromeMask, int32_t aInitialWidth, int32_t aInitialHeight, nsITabParent *aOpeningTab, nsIXULWindow * *_retval) override { return _to CreateTopLevelWindow(aParent, aUrl, aChromeMask, aInitialWidth, aInitialHeight, aOpeningTab, _retval); } \
  NS_IMETHOD CreateWindowlessBrowser(bool aIsChrome, nsIWebNavigation * *_retval) override { return _to CreateWindowlessBrowser(aIsChrome, _retval); } \
  NS_IMETHOD CreateHiddenWindow(void) override { return _to CreateHiddenWindow(); } \
  NS_IMETHOD DestroyHiddenWindow(void) override { return _to DestroyHiddenWindow(); } \
  NS_IMETHOD SetScreenId(uint32_t aScreenId) override { return _to SetScreenId(aScreenId); } \
  NS_IMETHOD GetHiddenWindow(nsIXULWindow * *aHiddenWindow) override { return _to GetHiddenWindow(aHiddenWindow); } \
  NS_IMETHOD GetHiddenDOMWindow(nsIDOMWindow * *aHiddenDOMWindow) override { return _to GetHiddenDOMWindow(aHiddenDOMWindow); } \
  NS_IMETHOD GetHiddenPrivateWindow(nsIXULWindow * *aHiddenPrivateWindow) override { return _to GetHiddenPrivateWindow(aHiddenPrivateWindow); } \
  NS_IMETHOD GetHiddenPrivateDOMWindow(nsIDOMWindow * *aHiddenPrivateDOMWindow) override { return _to GetHiddenPrivateDOMWindow(aHiddenPrivateDOMWindow); } \
  NS_IMETHOD GetHiddenWindowAndJSContext(nsIDOMWindow * *aHiddenDOMWindow, JSContext **aJSContext) override { return _to GetHiddenWindowAndJSContext(aHiddenDOMWindow, aJSContext); } \
  NS_IMETHOD GetApplicationProvidedHiddenWindow(bool *aApplicationProvidedHiddenWindow) override { return _to GetApplicationProvidedHiddenWindow(aApplicationProvidedHiddenWindow); } \
  NS_IMETHOD RegisterTopLevelWindow(nsIXULWindow *aWindow) override { return _to RegisterTopLevelWindow(aWindow); } \
  NS_IMETHOD UnregisterTopLevelWindow(nsIXULWindow *aWindow) override { return _to UnregisterTopLevelWindow(aWindow); } \
  NS_IMETHOD GetHasHiddenPrivateWindow(bool *aHasHiddenPrivateWindow) override { return _to GetHasHiddenPrivateWindow(aHasHiddenPrivateWindow); } \
  NS_IMETHOD StartEventLoopLagTracking(bool *_retval) override { return _to StartEventLoopLagTracking(_retval); } \
  NS_IMETHOD StopEventLoopLagTracking(void) override { return _to StopEventLoopLagTracking(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIAPPSHELLSERVICE(_to) \
  NS_IMETHOD CreateTopLevelWindow(nsIXULWindow *aParent, nsIURI *aUrl, uint32_t aChromeMask, int32_t aInitialWidth, int32_t aInitialHeight, nsITabParent *aOpeningTab, nsIXULWindow * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateTopLevelWindow(aParent, aUrl, aChromeMask, aInitialWidth, aInitialHeight, aOpeningTab, _retval); } \
  NS_IMETHOD CreateWindowlessBrowser(bool aIsChrome, nsIWebNavigation * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateWindowlessBrowser(aIsChrome, _retval); } \
  NS_IMETHOD CreateHiddenWindow(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateHiddenWindow(); } \
  NS_IMETHOD DestroyHiddenWindow(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->DestroyHiddenWindow(); } \
  NS_IMETHOD SetScreenId(uint32_t aScreenId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetScreenId(aScreenId); } \
  NS_IMETHOD GetHiddenWindow(nsIXULWindow * *aHiddenWindow) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHiddenWindow(aHiddenWindow); } \
  NS_IMETHOD GetHiddenDOMWindow(nsIDOMWindow * *aHiddenDOMWindow) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHiddenDOMWindow(aHiddenDOMWindow); } \
  NS_IMETHOD GetHiddenPrivateWindow(nsIXULWindow * *aHiddenPrivateWindow) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHiddenPrivateWindow(aHiddenPrivateWindow); } \
  NS_IMETHOD GetHiddenPrivateDOMWindow(nsIDOMWindow * *aHiddenPrivateDOMWindow) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHiddenPrivateDOMWindow(aHiddenPrivateDOMWindow); } \
  NS_IMETHOD GetHiddenWindowAndJSContext(nsIDOMWindow * *aHiddenDOMWindow, JSContext **aJSContext) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHiddenWindowAndJSContext(aHiddenDOMWindow, aJSContext); } \
  NS_IMETHOD GetApplicationProvidedHiddenWindow(bool *aApplicationProvidedHiddenWindow) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetApplicationProvidedHiddenWindow(aApplicationProvidedHiddenWindow); } \
  NS_IMETHOD RegisterTopLevelWindow(nsIXULWindow *aWindow) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RegisterTopLevelWindow(aWindow); } \
  NS_IMETHOD UnregisterTopLevelWindow(nsIXULWindow *aWindow) override { return !_to ? NS_ERROR_NULL_POINTER : _to->UnregisterTopLevelWindow(aWindow); } \
  NS_IMETHOD GetHasHiddenPrivateWindow(bool *aHasHiddenPrivateWindow) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHasHiddenPrivateWindow(aHasHiddenPrivateWindow); } \
  NS_IMETHOD StartEventLoopLagTracking(bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->StartEventLoopLagTracking(_retval); } \
  NS_IMETHOD StopEventLoopLagTracking(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->StopEventLoopLagTracking(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsAppShellService : public nsIAppShellService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIAPPSHELLSERVICE

  nsAppShellService();

private:
  ~nsAppShellService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsAppShellService, nsIAppShellService)

nsAppShellService::nsAppShellService()
{
  /* member initializers and constructor code */
}

nsAppShellService::~nsAppShellService()
{
  /* destructor code */
}

/* nsIXULWindow createTopLevelWindow (in nsIXULWindow aParent, in nsIURI aUrl, in uint32_t aChromeMask, in long aInitialWidth, in long aInitialHeight, in nsITabParent aOpeningTab); */
NS_IMETHODIMP nsAppShellService::CreateTopLevelWindow(nsIXULWindow *aParent, nsIURI *aUrl, uint32_t aChromeMask, int32_t aInitialWidth, int32_t aInitialHeight, nsITabParent *aOpeningTab, nsIXULWindow * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIWebNavigation createWindowlessBrowser ([optional] in bool aIsChrome); */
NS_IMETHODIMP nsAppShellService::CreateWindowlessBrowser(bool aIsChrome, nsIWebNavigation * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void createHiddenWindow (); */
NS_IMETHODIMP nsAppShellService::CreateHiddenWindow()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void destroyHiddenWindow (); */
NS_IMETHODIMP nsAppShellService::DestroyHiddenWindow()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void setScreenId (in uint32_t aScreenId); */
NS_IMETHODIMP nsAppShellService::SetScreenId(uint32_t aScreenId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIXULWindow hiddenWindow; */
NS_IMETHODIMP nsAppShellService::GetHiddenWindow(nsIXULWindow * *aHiddenWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMWindow hiddenDOMWindow; */
NS_IMETHODIMP nsAppShellService::GetHiddenDOMWindow(nsIDOMWindow * *aHiddenDOMWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIXULWindow hiddenPrivateWindow; */
NS_IMETHODIMP nsAppShellService::GetHiddenPrivateWindow(nsIXULWindow * *aHiddenPrivateWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMWindow hiddenPrivateDOMWindow; */
NS_IMETHODIMP nsAppShellService::GetHiddenPrivateDOMWindow(nsIDOMWindow * *aHiddenPrivateDOMWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void getHiddenWindowAndJSContext (out nsIDOMWindow aHiddenDOMWindow, out JSContext aJSContext); */
NS_IMETHODIMP nsAppShellService::GetHiddenWindowAndJSContext(nsIDOMWindow * *aHiddenDOMWindow, JSContext **aJSContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean applicationProvidedHiddenWindow; */
NS_IMETHODIMP nsAppShellService::GetApplicationProvidedHiddenWindow(bool *aApplicationProvidedHiddenWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void registerTopLevelWindow (in nsIXULWindow aWindow); */
NS_IMETHODIMP nsAppShellService::RegisterTopLevelWindow(nsIXULWindow *aWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void unregisterTopLevelWindow (in nsIXULWindow aWindow); */
NS_IMETHODIMP nsAppShellService::UnregisterTopLevelWindow(nsIXULWindow *aWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] readonly attribute boolean hasHiddenPrivateWindow; */
NS_IMETHODIMP nsAppShellService::GetHasHiddenPrivateWindow(bool *aHasHiddenPrivateWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* bool startEventLoopLagTracking (); */
NS_IMETHODIMP nsAppShellService::StartEventLoopLagTracking(bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void stopEventLoopLagTracking (); */
NS_IMETHODIMP nsAppShellService::StopEventLoopLagTracking()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIAppShellService_h__ */
