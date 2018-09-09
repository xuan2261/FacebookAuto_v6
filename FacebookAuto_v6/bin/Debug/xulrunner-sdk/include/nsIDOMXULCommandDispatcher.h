/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIDOMXULCommandDispatcher.idl
 */

#ifndef __gen_nsIDOMXULCommandDispatcher_h__
#define __gen_nsIDOMXULCommandDispatcher_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMElement; /* forward declaration */

class nsIController; /* forward declaration */

class nsIControllers; /* forward declaration */

class nsIDOMWindow; /* forward declaration */


/* starting interface:    nsIDOMXULCommandDispatcher */
#define NS_IDOMXULCOMMANDDISPATCHER_IID_STR "f3c50361-14fe-11d3-bf87-00105a1b0627"

#define NS_IDOMXULCOMMANDDISPATCHER_IID \
  {0xf3c50361, 0x14fe, 0x11d3, \
    { 0xbf, 0x87, 0x00, 0x10, 0x5a, 0x1b, 0x06, 0x27 }}

class NS_NO_VTABLE nsIDOMXULCommandDispatcher : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMXULCOMMANDDISPATCHER_IID)

  /* attribute nsIDOMElement focusedElement; */
  NS_IMETHOD GetFocusedElement(nsIDOMElement * *aFocusedElement) = 0;
  NS_IMETHOD SetFocusedElement(nsIDOMElement *aFocusedElement) = 0;

  /* attribute nsIDOMWindow focusedWindow; */
  NS_IMETHOD GetFocusedWindow(nsIDOMWindow * *aFocusedWindow) = 0;
  NS_IMETHOD SetFocusedWindow(nsIDOMWindow *aFocusedWindow) = 0;

  /* void addCommandUpdater (in nsIDOMElement updater, in DOMString events, in DOMString targets); */
  NS_IMETHOD AddCommandUpdater(nsIDOMElement *updater, const nsAString & events, const nsAString & targets) = 0;

  /* void removeCommandUpdater (in nsIDOMElement updater); */
  NS_IMETHOD RemoveCommandUpdater(nsIDOMElement *updater) = 0;

  /* void updateCommands (in DOMString eventName); */
  NS_IMETHOD UpdateCommands(const nsAString & eventName) = 0;

  /* nsIController getControllerForCommand (in string command); */
  NS_IMETHOD GetControllerForCommand(const char * command, nsIController * *_retval) = 0;

  /* nsIControllers getControllers (); */
  NS_IMETHOD GetControllers(nsIControllers * *_retval) = 0;

  /* void advanceFocus (); */
  NS_IMETHOD AdvanceFocus(void) = 0;

  /* void rewindFocus (); */
  NS_IMETHOD RewindFocus(void) = 0;

  /* void advanceFocusIntoSubtree (in nsIDOMElement elt); */
  NS_IMETHOD AdvanceFocusIntoSubtree(nsIDOMElement *elt) = 0;

  /* attribute boolean suppressFocusScroll; */
  NS_IMETHOD GetSuppressFocusScroll(bool *aSuppressFocusScroll) = 0;
  NS_IMETHOD SetSuppressFocusScroll(bool aSuppressFocusScroll) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMXULCommandDispatcher, NS_IDOMXULCOMMANDDISPATCHER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMXULCOMMANDDISPATCHER \
  NS_IMETHOD GetFocusedElement(nsIDOMElement * *aFocusedElement) override; \
  NS_IMETHOD SetFocusedElement(nsIDOMElement *aFocusedElement) override; \
  NS_IMETHOD GetFocusedWindow(nsIDOMWindow * *aFocusedWindow) override; \
  NS_IMETHOD SetFocusedWindow(nsIDOMWindow *aFocusedWindow) override; \
  NS_IMETHOD AddCommandUpdater(nsIDOMElement *updater, const nsAString & events, const nsAString & targets) override; \
  NS_IMETHOD RemoveCommandUpdater(nsIDOMElement *updater) override; \
  NS_IMETHOD UpdateCommands(const nsAString & eventName) override; \
  NS_IMETHOD GetControllerForCommand(const char * command, nsIController * *_retval) override; \
  NS_IMETHOD GetControllers(nsIControllers * *_retval) override; \
  NS_IMETHOD AdvanceFocus(void) override; \
  NS_IMETHOD RewindFocus(void) override; \
  NS_IMETHOD AdvanceFocusIntoSubtree(nsIDOMElement *elt) override; \
  NS_IMETHOD GetSuppressFocusScroll(bool *aSuppressFocusScroll) override; \
  NS_IMETHOD SetSuppressFocusScroll(bool aSuppressFocusScroll) override; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMXULCOMMANDDISPATCHER(_to) \
  NS_IMETHOD GetFocusedElement(nsIDOMElement * *aFocusedElement) override { return _to GetFocusedElement(aFocusedElement); } \
  NS_IMETHOD SetFocusedElement(nsIDOMElement *aFocusedElement) override { return _to SetFocusedElement(aFocusedElement); } \
  NS_IMETHOD GetFocusedWindow(nsIDOMWindow * *aFocusedWindow) override { return _to GetFocusedWindow(aFocusedWindow); } \
  NS_IMETHOD SetFocusedWindow(nsIDOMWindow *aFocusedWindow) override { return _to SetFocusedWindow(aFocusedWindow); } \
  NS_IMETHOD AddCommandUpdater(nsIDOMElement *updater, const nsAString & events, const nsAString & targets) override { return _to AddCommandUpdater(updater, events, targets); } \
  NS_IMETHOD RemoveCommandUpdater(nsIDOMElement *updater) override { return _to RemoveCommandUpdater(updater); } \
  NS_IMETHOD UpdateCommands(const nsAString & eventName) override { return _to UpdateCommands(eventName); } \
  NS_IMETHOD GetControllerForCommand(const char * command, nsIController * *_retval) override { return _to GetControllerForCommand(command, _retval); } \
  NS_IMETHOD GetControllers(nsIControllers * *_retval) override { return _to GetControllers(_retval); } \
  NS_IMETHOD AdvanceFocus(void) override { return _to AdvanceFocus(); } \
  NS_IMETHOD RewindFocus(void) override { return _to RewindFocus(); } \
  NS_IMETHOD AdvanceFocusIntoSubtree(nsIDOMElement *elt) override { return _to AdvanceFocusIntoSubtree(elt); } \
  NS_IMETHOD GetSuppressFocusScroll(bool *aSuppressFocusScroll) override { return _to GetSuppressFocusScroll(aSuppressFocusScroll); } \
  NS_IMETHOD SetSuppressFocusScroll(bool aSuppressFocusScroll) override { return _to SetSuppressFocusScroll(aSuppressFocusScroll); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMXULCOMMANDDISPATCHER(_to) \
  NS_IMETHOD GetFocusedElement(nsIDOMElement * *aFocusedElement) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFocusedElement(aFocusedElement); } \
  NS_IMETHOD SetFocusedElement(nsIDOMElement *aFocusedElement) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFocusedElement(aFocusedElement); } \
  NS_IMETHOD GetFocusedWindow(nsIDOMWindow * *aFocusedWindow) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFocusedWindow(aFocusedWindow); } \
  NS_IMETHOD SetFocusedWindow(nsIDOMWindow *aFocusedWindow) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFocusedWindow(aFocusedWindow); } \
  NS_IMETHOD AddCommandUpdater(nsIDOMElement *updater, const nsAString & events, const nsAString & targets) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AddCommandUpdater(updater, events, targets); } \
  NS_IMETHOD RemoveCommandUpdater(nsIDOMElement *updater) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveCommandUpdater(updater); } \
  NS_IMETHOD UpdateCommands(const nsAString & eventName) override { return !_to ? NS_ERROR_NULL_POINTER : _to->UpdateCommands(eventName); } \
  NS_IMETHOD GetControllerForCommand(const char * command, nsIController * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetControllerForCommand(command, _retval); } \
  NS_IMETHOD GetControllers(nsIControllers * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetControllers(_retval); } \
  NS_IMETHOD AdvanceFocus(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AdvanceFocus(); } \
  NS_IMETHOD RewindFocus(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RewindFocus(); } \
  NS_IMETHOD AdvanceFocusIntoSubtree(nsIDOMElement *elt) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AdvanceFocusIntoSubtree(elt); } \
  NS_IMETHOD GetSuppressFocusScroll(bool *aSuppressFocusScroll) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSuppressFocusScroll(aSuppressFocusScroll); } \
  NS_IMETHOD SetSuppressFocusScroll(bool aSuppressFocusScroll) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSuppressFocusScroll(aSuppressFocusScroll); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMXULCommandDispatcher : public nsIDOMXULCommandDispatcher
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMXULCOMMANDDISPATCHER

  nsDOMXULCommandDispatcher();

private:
  ~nsDOMXULCommandDispatcher();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsDOMXULCommandDispatcher, nsIDOMXULCommandDispatcher)

nsDOMXULCommandDispatcher::nsDOMXULCommandDispatcher()
{
  /* member initializers and constructor code */
}

nsDOMXULCommandDispatcher::~nsDOMXULCommandDispatcher()
{
  /* destructor code */
}

/* attribute nsIDOMElement focusedElement; */
NS_IMETHODIMP nsDOMXULCommandDispatcher::GetFocusedElement(nsIDOMElement * *aFocusedElement)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMXULCommandDispatcher::SetFocusedElement(nsIDOMElement *aFocusedElement)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMWindow focusedWindow; */
NS_IMETHODIMP nsDOMXULCommandDispatcher::GetFocusedWindow(nsIDOMWindow * *aFocusedWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMXULCommandDispatcher::SetFocusedWindow(nsIDOMWindow *aFocusedWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addCommandUpdater (in nsIDOMElement updater, in DOMString events, in DOMString targets); */
NS_IMETHODIMP nsDOMXULCommandDispatcher::AddCommandUpdater(nsIDOMElement *updater, const nsAString & events, const nsAString & targets)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeCommandUpdater (in nsIDOMElement updater); */
NS_IMETHODIMP nsDOMXULCommandDispatcher::RemoveCommandUpdater(nsIDOMElement *updater)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void updateCommands (in DOMString eventName); */
NS_IMETHODIMP nsDOMXULCommandDispatcher::UpdateCommands(const nsAString & eventName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIController getControllerForCommand (in string command); */
NS_IMETHODIMP nsDOMXULCommandDispatcher::GetControllerForCommand(const char * command, nsIController * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIControllers getControllers (); */
NS_IMETHODIMP nsDOMXULCommandDispatcher::GetControllers(nsIControllers * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void advanceFocus (); */
NS_IMETHODIMP nsDOMXULCommandDispatcher::AdvanceFocus()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void rewindFocus (); */
NS_IMETHODIMP nsDOMXULCommandDispatcher::RewindFocus()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void advanceFocusIntoSubtree (in nsIDOMElement elt); */
NS_IMETHODIMP nsDOMXULCommandDispatcher::AdvanceFocusIntoSubtree(nsIDOMElement *elt)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean suppressFocusScroll; */
NS_IMETHODIMP nsDOMXULCommandDispatcher::GetSuppressFocusScroll(bool *aSuppressFocusScroll)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMXULCommandDispatcher::SetSuppressFocusScroll(bool aSuppressFocusScroll)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMXULCommandDispatcher_h__ */
