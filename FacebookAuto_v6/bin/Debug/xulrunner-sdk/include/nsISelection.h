/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsISelection.idl
 */

#ifndef __gen_nsISelection_h__
#define __gen_nsISelection_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMNode; /* forward declaration */

class nsIDOMRange; /* forward declaration */

class nsINode; /* forward declaration */


/* starting interface:    nsISelection */
#define NS_ISELECTION_IID_STR "e0a4d4b3-f34e-44bd-b1f2-4e3bde9b6915"

#define NS_ISELECTION_IID \
  {0xe0a4d4b3, 0xf34e, 0x44bd, \
    { 0xb1, 0xf2, 0x4e, 0x3b, 0xde, 0x9b, 0x69, 0x15 }}

class NS_NO_VTABLE nsISelection : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISELECTION_IID)

  /* readonly attribute nsIDOMNode anchorNode; */
  NS_IMETHOD GetAnchorNode(nsIDOMNode * *aAnchorNode) = 0;

  /* readonly attribute long anchorOffset; */
  NS_IMETHOD GetAnchorOffset(int32_t *aAnchorOffset) = 0;

  /* readonly attribute nsIDOMNode focusNode; */
  NS_IMETHOD GetFocusNode(nsIDOMNode * *aFocusNode) = 0;

  /* readonly attribute long focusOffset; */
  NS_IMETHOD GetFocusOffset(int32_t *aFocusOffset) = 0;

  /* readonly attribute boolean isCollapsed; */
  NS_IMETHOD GetIsCollapsed(bool *aIsCollapsed) = 0;

  /* [noscript,nostdcall,notxpcom] boolean collapsed (); */
  virtual bool Collapsed(void) = 0;

  /* readonly attribute long rangeCount; */
  NS_IMETHOD GetRangeCount(int32_t *aRangeCount) = 0;

  /* nsIDOMRange getRangeAt (in long index); */
  NS_IMETHOD GetRangeAt(int32_t index, nsIDOMRange * *_retval) = 0;

  /* void collapse (in nsIDOMNode parentNode, in long offset); */
  NS_IMETHOD Collapse(nsIDOMNode *parentNode, int32_t offset) = 0;

  /* [noscript] void collapseNative (in nsINode parentNode, in long offset); */
  NS_IMETHOD CollapseNative(nsINode *parentNode, int32_t offset) = 0;

  /* void extend (in nsIDOMNode parentNode, in long offset); */
  NS_IMETHOD Extend(nsIDOMNode *parentNode, int32_t offset) = 0;

  /* [noscript] void extendNative (in nsINode parentNode, in long offset); */
  NS_IMETHOD ExtendNative(nsINode *parentNode, int32_t offset) = 0;

  /* void collapseToStart (); */
  NS_IMETHOD CollapseToStart(void) = 0;

  /* void collapseToEnd (); */
  NS_IMETHOD CollapseToEnd(void) = 0;

  /* boolean containsNode (in nsIDOMNode node, in boolean partlyContained); */
  NS_IMETHOD ContainsNode(nsIDOMNode *node, bool partlyContained, bool *_retval) = 0;

  /* void selectAllChildren (in nsIDOMNode parentNode); */
  NS_IMETHOD SelectAllChildren(nsIDOMNode *parentNode) = 0;

  /* void addRange (in nsIDOMRange range); */
  NS_IMETHOD AddRange(nsIDOMRange *range) = 0;

  /* void removeRange (in nsIDOMRange range); */
  NS_IMETHOD RemoveRange(nsIDOMRange *range) = 0;

  /* void removeAllRanges (); */
  NS_IMETHOD RemoveAllRanges(void) = 0;

  /* void deleteFromDocument (); */
  NS_IMETHOD DeleteFromDocument(void) = 0;

  /* DOMString toString (); */
  NS_IMETHOD ToString(nsAString & _retval) = 0;

  /* void modify (in DOMString alter, in DOMString direction, in DOMString granularity); */
  NS_IMETHOD Modify(const nsAString & alter, const nsAString & direction, const nsAString & granularity) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsISelection, NS_ISELECTION_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISELECTION \
  NS_IMETHOD GetAnchorNode(nsIDOMNode * *aAnchorNode) override; \
  NS_IMETHOD GetAnchorOffset(int32_t *aAnchorOffset) override; \
  NS_IMETHOD GetFocusNode(nsIDOMNode * *aFocusNode) override; \
  NS_IMETHOD GetFocusOffset(int32_t *aFocusOffset) override; \
  NS_IMETHOD GetIsCollapsed(bool *aIsCollapsed) override; \
  virtual bool Collapsed(void) override; \
  NS_IMETHOD GetRangeCount(int32_t *aRangeCount) override; \
  NS_IMETHOD GetRangeAt(int32_t index, nsIDOMRange * *_retval) override; \
  NS_IMETHOD Collapse(nsIDOMNode *parentNode, int32_t offset) override; \
  NS_IMETHOD CollapseNative(nsINode *parentNode, int32_t offset) override; \
  NS_IMETHOD Extend(nsIDOMNode *parentNode, int32_t offset) override; \
  NS_IMETHOD ExtendNative(nsINode *parentNode, int32_t offset) override; \
  NS_IMETHOD CollapseToStart(void) override; \
  NS_IMETHOD CollapseToEnd(void) override; \
  NS_IMETHOD ContainsNode(nsIDOMNode *node, bool partlyContained, bool *_retval) override; \
  NS_IMETHOD SelectAllChildren(nsIDOMNode *parentNode) override; \
  NS_IMETHOD AddRange(nsIDOMRange *range) override; \
  NS_IMETHOD RemoveRange(nsIDOMRange *range) override; \
  NS_IMETHOD RemoveAllRanges(void) override; \
  NS_IMETHOD DeleteFromDocument(void) override; \
  NS_IMETHOD ToString(nsAString & _retval) override; \
  NS_IMETHOD Modify(const nsAString & alter, const nsAString & direction, const nsAString & granularity) override; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISELECTION(_to) \
  NS_IMETHOD GetAnchorNode(nsIDOMNode * *aAnchorNode) override { return _to GetAnchorNode(aAnchorNode); } \
  NS_IMETHOD GetAnchorOffset(int32_t *aAnchorOffset) override { return _to GetAnchorOffset(aAnchorOffset); } \
  NS_IMETHOD GetFocusNode(nsIDOMNode * *aFocusNode) override { return _to GetFocusNode(aFocusNode); } \
  NS_IMETHOD GetFocusOffset(int32_t *aFocusOffset) override { return _to GetFocusOffset(aFocusOffset); } \
  NS_IMETHOD GetIsCollapsed(bool *aIsCollapsed) override { return _to GetIsCollapsed(aIsCollapsed); } \
  virtual bool Collapsed(void) override { return _to Collapsed(); } \
  NS_IMETHOD GetRangeCount(int32_t *aRangeCount) override { return _to GetRangeCount(aRangeCount); } \
  NS_IMETHOD GetRangeAt(int32_t index, nsIDOMRange * *_retval) override { return _to GetRangeAt(index, _retval); } \
  NS_IMETHOD Collapse(nsIDOMNode *parentNode, int32_t offset) override { return _to Collapse(parentNode, offset); } \
  NS_IMETHOD CollapseNative(nsINode *parentNode, int32_t offset) override { return _to CollapseNative(parentNode, offset); } \
  NS_IMETHOD Extend(nsIDOMNode *parentNode, int32_t offset) override { return _to Extend(parentNode, offset); } \
  NS_IMETHOD ExtendNative(nsINode *parentNode, int32_t offset) override { return _to ExtendNative(parentNode, offset); } \
  NS_IMETHOD CollapseToStart(void) override { return _to CollapseToStart(); } \
  NS_IMETHOD CollapseToEnd(void) override { return _to CollapseToEnd(); } \
  NS_IMETHOD ContainsNode(nsIDOMNode *node, bool partlyContained, bool *_retval) override { return _to ContainsNode(node, partlyContained, _retval); } \
  NS_IMETHOD SelectAllChildren(nsIDOMNode *parentNode) override { return _to SelectAllChildren(parentNode); } \
  NS_IMETHOD AddRange(nsIDOMRange *range) override { return _to AddRange(range); } \
  NS_IMETHOD RemoveRange(nsIDOMRange *range) override { return _to RemoveRange(range); } \
  NS_IMETHOD RemoveAllRanges(void) override { return _to RemoveAllRanges(); } \
  NS_IMETHOD DeleteFromDocument(void) override { return _to DeleteFromDocument(); } \
  NS_IMETHOD ToString(nsAString & _retval) override { return _to ToString(_retval); } \
  NS_IMETHOD Modify(const nsAString & alter, const nsAString & direction, const nsAString & granularity) override { return _to Modify(alter, direction, granularity); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISELECTION(_to) \
  NS_IMETHOD GetAnchorNode(nsIDOMNode * *aAnchorNode) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAnchorNode(aAnchorNode); } \
  NS_IMETHOD GetAnchorOffset(int32_t *aAnchorOffset) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAnchorOffset(aAnchorOffset); } \
  NS_IMETHOD GetFocusNode(nsIDOMNode * *aFocusNode) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFocusNode(aFocusNode); } \
  NS_IMETHOD GetFocusOffset(int32_t *aFocusOffset) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFocusOffset(aFocusOffset); } \
  NS_IMETHOD GetIsCollapsed(bool *aIsCollapsed) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsCollapsed(aIsCollapsed); } \
  virtual bool Collapsed(void) override; \
  NS_IMETHOD GetRangeCount(int32_t *aRangeCount) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRangeCount(aRangeCount); } \
  NS_IMETHOD GetRangeAt(int32_t index, nsIDOMRange * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRangeAt(index, _retval); } \
  NS_IMETHOD Collapse(nsIDOMNode *parentNode, int32_t offset) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Collapse(parentNode, offset); } \
  NS_IMETHOD CollapseNative(nsINode *parentNode, int32_t offset) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CollapseNative(parentNode, offset); } \
  NS_IMETHOD Extend(nsIDOMNode *parentNode, int32_t offset) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Extend(parentNode, offset); } \
  NS_IMETHOD ExtendNative(nsINode *parentNode, int32_t offset) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ExtendNative(parentNode, offset); } \
  NS_IMETHOD CollapseToStart(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CollapseToStart(); } \
  NS_IMETHOD CollapseToEnd(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CollapseToEnd(); } \
  NS_IMETHOD ContainsNode(nsIDOMNode *node, bool partlyContained, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ContainsNode(node, partlyContained, _retval); } \
  NS_IMETHOD SelectAllChildren(nsIDOMNode *parentNode) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SelectAllChildren(parentNode); } \
  NS_IMETHOD AddRange(nsIDOMRange *range) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AddRange(range); } \
  NS_IMETHOD RemoveRange(nsIDOMRange *range) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveRange(range); } \
  NS_IMETHOD RemoveAllRanges(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveAllRanges(); } \
  NS_IMETHOD DeleteFromDocument(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->DeleteFromDocument(); } \
  NS_IMETHOD ToString(nsAString & _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ToString(_retval); } \
  NS_IMETHOD Modify(const nsAString & alter, const nsAString & direction, const nsAString & granularity) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Modify(alter, direction, granularity); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsSelection : public nsISelection
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISELECTION

  nsSelection();

private:
  ~nsSelection();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsSelection, nsISelection)

nsSelection::nsSelection()
{
  /* member initializers and constructor code */
}

nsSelection::~nsSelection()
{
  /* destructor code */
}

/* readonly attribute nsIDOMNode anchorNode; */
NS_IMETHODIMP nsSelection::GetAnchorNode(nsIDOMNode * *aAnchorNode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long anchorOffset; */
NS_IMETHODIMP nsSelection::GetAnchorOffset(int32_t *aAnchorOffset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMNode focusNode; */
NS_IMETHODIMP nsSelection::GetFocusNode(nsIDOMNode * *aFocusNode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long focusOffset; */
NS_IMETHODIMP nsSelection::GetFocusOffset(int32_t *aFocusOffset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isCollapsed; */
NS_IMETHODIMP nsSelection::GetIsCollapsed(bool *aIsCollapsed)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,nostdcall,notxpcom] boolean collapsed (); */
bool nsSelection::Collapsed()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long rangeCount; */
NS_IMETHODIMP nsSelection::GetRangeCount(int32_t *aRangeCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMRange getRangeAt (in long index); */
NS_IMETHODIMP nsSelection::GetRangeAt(int32_t index, nsIDOMRange * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void collapse (in nsIDOMNode parentNode, in long offset); */
NS_IMETHODIMP nsSelection::Collapse(nsIDOMNode *parentNode, int32_t offset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void collapseNative (in nsINode parentNode, in long offset); */
NS_IMETHODIMP nsSelection::CollapseNative(nsINode *parentNode, int32_t offset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void extend (in nsIDOMNode parentNode, in long offset); */
NS_IMETHODIMP nsSelection::Extend(nsIDOMNode *parentNode, int32_t offset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void extendNative (in nsINode parentNode, in long offset); */
NS_IMETHODIMP nsSelection::ExtendNative(nsINode *parentNode, int32_t offset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void collapseToStart (); */
NS_IMETHODIMP nsSelection::CollapseToStart()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void collapseToEnd (); */
NS_IMETHODIMP nsSelection::CollapseToEnd()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean containsNode (in nsIDOMNode node, in boolean partlyContained); */
NS_IMETHODIMP nsSelection::ContainsNode(nsIDOMNode *node, bool partlyContained, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void selectAllChildren (in nsIDOMNode parentNode); */
NS_IMETHODIMP nsSelection::SelectAllChildren(nsIDOMNode *parentNode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addRange (in nsIDOMRange range); */
NS_IMETHODIMP nsSelection::AddRange(nsIDOMRange *range)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeRange (in nsIDOMRange range); */
NS_IMETHODIMP nsSelection::RemoveRange(nsIDOMRange *range)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeAllRanges (); */
NS_IMETHODIMP nsSelection::RemoveAllRanges()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void deleteFromDocument (); */
NS_IMETHODIMP nsSelection::DeleteFromDocument()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* DOMString toString (); */
NS_IMETHODIMP nsSelection::ToString(nsAString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void modify (in DOMString alter, in DOMString direction, in DOMString granularity); */
NS_IMETHODIMP nsSelection::Modify(const nsAString & alter, const nsAString & direction, const nsAString & granularity)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsISelection_h__ */
