/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsISHEntry.idl
 */

#ifndef __gen_nsISHEntry_h__
#define __gen_nsISHEntry_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsILayoutHistoryState; /* forward declaration */

class nsIContentViewer; /* forward declaration */

class nsIURI; /* forward declaration */

class nsIInputStream; /* forward declaration */

class nsIDocShellTreeItem; /* forward declaration */

class nsISupportsArray; /* forward declaration */

class nsIStructuredCloneContainer; /* forward declaration */

class nsIBFCacheEntry; /* forward declaration */

#include "nsRect.h"
class nsDocShellEditorData;
class nsSHEntryShared;

/* starting interface:    nsISHEntry */
#define NS_ISHENTRY_IID_STR "d5fbeb10-f373-4677-b69a-2694aa706cac"

#define NS_ISHENTRY_IID \
  {0xd5fbeb10, 0xf373, 0x4677, \
    { 0xb6, 0x9a, 0x26, 0x94, 0xaa, 0x70, 0x6c, 0xac }}

class NS_NO_VTABLE nsISHEntry : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISHENTRY_IID)

  /* readonly attribute nsIURI URI; */
  NS_IMETHOD GetURI(nsIURI * *aURI) = 0;

  /* readonly attribute wstring title; */
  NS_IMETHOD GetTitle(char16_t * *aTitle) = 0;

  /* readonly attribute boolean isSubFrame; */
  NS_IMETHOD GetIsSubFrame(bool *aIsSubFrame) = 0;

  /* void setURI (in nsIURI aURI); */
  NS_IMETHOD SetURI(nsIURI *aURI) = 0;

  /* attribute nsIURI referrerURI; */
  NS_IMETHOD GetReferrerURI(nsIURI * *aReferrerURI) = 0;
  NS_IMETHOD SetReferrerURI(nsIURI *aReferrerURI) = 0;

  /* attribute unsigned long referrerPolicy; */
  NS_IMETHOD GetReferrerPolicy(uint32_t *aReferrerPolicy) = 0;
  NS_IMETHOD SetReferrerPolicy(uint32_t aReferrerPolicy) = 0;

  /* attribute nsIContentViewer contentViewer; */
  NS_IMETHOD GetContentViewer(nsIContentViewer * *aContentViewer) = 0;
  NS_IMETHOD SetContentViewer(nsIContentViewer *aContentViewer) = 0;

  /* attribute boolean sticky; */
  NS_IMETHOD GetSticky(bool *aSticky) = 0;
  NS_IMETHOD SetSticky(bool aSticky) = 0;

  /* attribute nsISupports windowState; */
  NS_IMETHOD GetWindowState(nsISupports * *aWindowState) = 0;
  NS_IMETHOD SetWindowState(nsISupports *aWindowState) = 0;

  /* [noscript] void getViewerBounds (in nsIntRect bounds); */
  NS_IMETHOD GetViewerBounds(nsIntRect & bounds) = 0;

  /* [noscript] void setViewerBounds ([const] in nsIntRect bounds); */
  NS_IMETHOD SetViewerBounds(const nsIntRect & bounds) = 0;

  /* void addChildShell (in nsIDocShellTreeItem shell); */
  NS_IMETHOD AddChildShell(nsIDocShellTreeItem *shell) = 0;

  /* nsIDocShellTreeItem childShellAt (in long index); */
  NS_IMETHOD ChildShellAt(int32_t index, nsIDocShellTreeItem * *_retval) = 0;

  /* void clearChildShells (); */
  NS_IMETHOD ClearChildShells(void) = 0;

  /* attribute nsISupportsArray refreshURIList; */
  NS_IMETHOD GetRefreshURIList(nsISupportsArray * *aRefreshURIList) = 0;
  NS_IMETHOD SetRefreshURIList(nsISupportsArray *aRefreshURIList) = 0;

  /* void syncPresentationState (); */
  NS_IMETHOD SyncPresentationState(void) = 0;

  /* void setTitle (in AString aTitle); */
  NS_IMETHOD SetTitle(const nsAString & aTitle) = 0;

  /* attribute nsIInputStream postData; */
  NS_IMETHOD GetPostData(nsIInputStream * *aPostData) = 0;
  NS_IMETHOD SetPostData(nsIInputStream *aPostData) = 0;

  /* attribute nsILayoutHistoryState layoutHistoryState; */
  NS_IMETHOD GetLayoutHistoryState(nsILayoutHistoryState * *aLayoutHistoryState) = 0;
  NS_IMETHOD SetLayoutHistoryState(nsILayoutHistoryState *aLayoutHistoryState) = 0;

  /* attribute nsISHEntry parent; */
  NS_IMETHOD GetParent(nsISHEntry * *aParent) = 0;
  NS_IMETHOD SetParent(nsISHEntry *aParent) = 0;

  /* attribute unsigned long loadType; */
  NS_IMETHOD GetLoadType(uint32_t *aLoadType) = 0;
  NS_IMETHOD SetLoadType(uint32_t aLoadType) = 0;

  /* attribute unsigned long ID; */
  NS_IMETHOD GetID(uint32_t *aID) = 0;
  NS_IMETHOD SetID(uint32_t aID) = 0;

  /* attribute nsISupports cacheKey; */
  NS_IMETHOD GetCacheKey(nsISupports * *aCacheKey) = 0;
  NS_IMETHOD SetCacheKey(nsISupports *aCacheKey) = 0;

  /* attribute boolean saveLayoutStateFlag; */
  NS_IMETHOD GetSaveLayoutStateFlag(bool *aSaveLayoutStateFlag) = 0;
  NS_IMETHOD SetSaveLayoutStateFlag(bool aSaveLayoutStateFlag) = 0;

  /* attribute boolean expirationStatus; */
  NS_IMETHOD GetExpirationStatus(bool *aExpirationStatus) = 0;
  NS_IMETHOD SetExpirationStatus(bool aExpirationStatus) = 0;

  /* attribute ACString contentType; */
  NS_IMETHOD GetContentType(nsACString & aContentType) = 0;
  NS_IMETHOD SetContentType(const nsACString & aContentType) = 0;

  /* attribute boolean URIWasModified; */
  NS_IMETHOD GetURIWasModified(bool *aURIWasModified) = 0;
  NS_IMETHOD SetURIWasModified(bool aURIWasModified) = 0;

  /* void setScrollPosition (in long x, in long y); */
  NS_IMETHOD SetScrollPosition(int32_t x, int32_t y) = 0;

  /* void getScrollPosition (out long x, out long y); */
  NS_IMETHOD GetScrollPosition(int32_t *x, int32_t *y) = 0;

  /* [noscript] void create (in nsIURI URI, in AString title, in nsIInputStream inputStream, in nsILayoutHistoryState layoutHistoryState, in nsISupports cacheKey, in ACString contentType, in nsISupports owner, in unsigned long long docshellID, in boolean dynamicCreation); */
  NS_IMETHOD Create(nsIURI *URI, const nsAString & title, nsIInputStream *inputStream, nsILayoutHistoryState *layoutHistoryState, nsISupports *cacheKey, const nsACString & contentType, nsISupports *owner, uint64_t docshellID, bool dynamicCreation) = 0;

  /* nsISHEntry clone (); */
  NS_IMETHOD Clone(nsISHEntry * *_retval) = 0;

  /* void setIsSubFrame (in boolean aFlag); */
  NS_IMETHOD SetIsSubFrame(bool aFlag) = 0;

  /* nsIContentViewer getAnyContentViewer (out nsISHEntry ownerEntry); */
  NS_IMETHOD GetAnyContentViewer(nsISHEntry * *ownerEntry, nsIContentViewer * *_retval) = 0;

  /* attribute nsISupports owner; */
  NS_IMETHOD GetOwner(nsISupports * *aOwner) = 0;
  NS_IMETHOD SetOwner(nsISupports *aOwner) = 0;

  /* attribute nsIStructuredCloneContainer stateData; */
  NS_IMETHOD GetStateData(nsIStructuredCloneContainer * *aStateData) = 0;
  NS_IMETHOD SetStateData(nsIStructuredCloneContainer *aStateData) = 0;

  /* [noscript,notxpcom] nsDocShellEditorDataPtr forgetEditorData (); */
  NS_IMETHOD_(nsDocShellEditorData *) ForgetEditorData(void) = 0;

  /* [noscript,notxpcom] void setEditorData (in nsDocShellEditorDataPtr aData); */
  NS_IMETHOD_(void) SetEditorData(nsDocShellEditorData *aData) = 0;

  /* [noscript,notxpcom] boolean hasDetachedEditor (); */
  NS_IMETHOD_(bool) HasDetachedEditor(void) = 0;

  /* boolean isDynamicallyAdded (); */
  NS_IMETHOD IsDynamicallyAdded(bool *_retval) = 0;

  /* boolean hasDynamicallyAddedChild (); */
  NS_IMETHOD HasDynamicallyAddedChild(bool *_retval) = 0;

  /* attribute unsigned long long docshellID; */
  NS_IMETHOD GetDocshellID(uint64_t *aDocshellID) = 0;
  NS_IMETHOD SetDocshellID(uint64_t aDocshellID) = 0;

  /* readonly attribute nsIBFCacheEntry BFCacheEntry; */
  NS_IMETHOD GetBFCacheEntry(nsIBFCacheEntry * *aBFCacheEntry) = 0;

  /* [noscript,notxpcom] boolean hasBFCacheEntry (in nsIBFCacheEntry aEntry); */
  NS_IMETHOD_(bool) HasBFCacheEntry(nsIBFCacheEntry *aEntry) = 0;

  /* void adoptBFCacheEntry (in nsISHEntry aEntry); */
  NS_IMETHOD AdoptBFCacheEntry(nsISHEntry *aEntry) = 0;

  /* void abandonBFCacheEntry (); */
  NS_IMETHOD AbandonBFCacheEntry(void) = 0;

  /* boolean sharesDocumentWith (in nsISHEntry aEntry); */
  NS_IMETHOD SharesDocumentWith(nsISHEntry *aEntry, bool *_retval) = 0;

  /* readonly attribute boolean isSrcdocEntry; */
  NS_IMETHOD GetIsSrcdocEntry(bool *aIsSrcdocEntry) = 0;

  /* attribute AString srcdocData; */
  NS_IMETHOD GetSrcdocData(nsAString & aSrcdocData) = 0;
  NS_IMETHOD SetSrcdocData(const nsAString & aSrcdocData) = 0;

  /* attribute nsIURI baseURI; */
  NS_IMETHOD GetBaseURI(nsIURI * *aBaseURI) = 0;
  NS_IMETHOD SetBaseURI(nsIURI *aBaseURI) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsISHEntry, NS_ISHENTRY_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISHENTRY \
  NS_IMETHOD GetURI(nsIURI * *aURI) override; \
  NS_IMETHOD GetTitle(char16_t * *aTitle) override; \
  NS_IMETHOD GetIsSubFrame(bool *aIsSubFrame) override; \
  NS_IMETHOD SetURI(nsIURI *aURI) override; \
  NS_IMETHOD GetReferrerURI(nsIURI * *aReferrerURI) override; \
  NS_IMETHOD SetReferrerURI(nsIURI *aReferrerURI) override; \
  NS_IMETHOD GetReferrerPolicy(uint32_t *aReferrerPolicy) override; \
  NS_IMETHOD SetReferrerPolicy(uint32_t aReferrerPolicy) override; \
  NS_IMETHOD GetContentViewer(nsIContentViewer * *aContentViewer) override; \
  NS_IMETHOD SetContentViewer(nsIContentViewer *aContentViewer) override; \
  NS_IMETHOD GetSticky(bool *aSticky) override; \
  NS_IMETHOD SetSticky(bool aSticky) override; \
  NS_IMETHOD GetWindowState(nsISupports * *aWindowState) override; \
  NS_IMETHOD SetWindowState(nsISupports *aWindowState) override; \
  NS_IMETHOD GetViewerBounds(nsIntRect & bounds) override; \
  NS_IMETHOD SetViewerBounds(const nsIntRect & bounds) override; \
  NS_IMETHOD AddChildShell(nsIDocShellTreeItem *shell) override; \
  NS_IMETHOD ChildShellAt(int32_t index, nsIDocShellTreeItem * *_retval) override; \
  NS_IMETHOD ClearChildShells(void) override; \
  NS_IMETHOD GetRefreshURIList(nsISupportsArray * *aRefreshURIList) override; \
  NS_IMETHOD SetRefreshURIList(nsISupportsArray *aRefreshURIList) override; \
  NS_IMETHOD SyncPresentationState(void) override; \
  NS_IMETHOD SetTitle(const nsAString & aTitle) override; \
  NS_IMETHOD GetPostData(nsIInputStream * *aPostData) override; \
  NS_IMETHOD SetPostData(nsIInputStream *aPostData) override; \
  NS_IMETHOD GetLayoutHistoryState(nsILayoutHistoryState * *aLayoutHistoryState) override; \
  NS_IMETHOD SetLayoutHistoryState(nsILayoutHistoryState *aLayoutHistoryState) override; \
  NS_IMETHOD GetParent(nsISHEntry * *aParent) override; \
  NS_IMETHOD SetParent(nsISHEntry *aParent) override; \
  NS_IMETHOD GetLoadType(uint32_t *aLoadType) override; \
  NS_IMETHOD SetLoadType(uint32_t aLoadType) override; \
  NS_IMETHOD GetID(uint32_t *aID) override; \
  NS_IMETHOD SetID(uint32_t aID) override; \
  NS_IMETHOD GetCacheKey(nsISupports * *aCacheKey) override; \
  NS_IMETHOD SetCacheKey(nsISupports *aCacheKey) override; \
  NS_IMETHOD GetSaveLayoutStateFlag(bool *aSaveLayoutStateFlag) override; \
  NS_IMETHOD SetSaveLayoutStateFlag(bool aSaveLayoutStateFlag) override; \
  NS_IMETHOD GetExpirationStatus(bool *aExpirationStatus) override; \
  NS_IMETHOD SetExpirationStatus(bool aExpirationStatus) override; \
  NS_IMETHOD GetContentType(nsACString & aContentType) override; \
  NS_IMETHOD SetContentType(const nsACString & aContentType) override; \
  NS_IMETHOD GetURIWasModified(bool *aURIWasModified) override; \
  NS_IMETHOD SetURIWasModified(bool aURIWasModified) override; \
  NS_IMETHOD SetScrollPosition(int32_t x, int32_t y) override; \
  NS_IMETHOD GetScrollPosition(int32_t *x, int32_t *y) override; \
  NS_IMETHOD Create(nsIURI *URI, const nsAString & title, nsIInputStream *inputStream, nsILayoutHistoryState *layoutHistoryState, nsISupports *cacheKey, const nsACString & contentType, nsISupports *owner, uint64_t docshellID, bool dynamicCreation) override; \
  NS_IMETHOD Clone(nsISHEntry * *_retval) override; \
  NS_IMETHOD SetIsSubFrame(bool aFlag) override; \
  NS_IMETHOD GetAnyContentViewer(nsISHEntry * *ownerEntry, nsIContentViewer * *_retval) override; \
  NS_IMETHOD GetOwner(nsISupports * *aOwner) override; \
  NS_IMETHOD SetOwner(nsISupports *aOwner) override; \
  NS_IMETHOD GetStateData(nsIStructuredCloneContainer * *aStateData) override; \
  NS_IMETHOD SetStateData(nsIStructuredCloneContainer *aStateData) override; \
  NS_IMETHOD_(nsDocShellEditorData *) ForgetEditorData(void) override; \
  NS_IMETHOD_(void) SetEditorData(nsDocShellEditorData *aData) override; \
  NS_IMETHOD_(bool) HasDetachedEditor(void) override; \
  NS_IMETHOD IsDynamicallyAdded(bool *_retval) override; \
  NS_IMETHOD HasDynamicallyAddedChild(bool *_retval) override; \
  NS_IMETHOD GetDocshellID(uint64_t *aDocshellID) override; \
  NS_IMETHOD SetDocshellID(uint64_t aDocshellID) override; \
  NS_IMETHOD GetBFCacheEntry(nsIBFCacheEntry * *aBFCacheEntry) override; \
  NS_IMETHOD_(bool) HasBFCacheEntry(nsIBFCacheEntry *aEntry) override; \
  NS_IMETHOD AdoptBFCacheEntry(nsISHEntry *aEntry) override; \
  NS_IMETHOD AbandonBFCacheEntry(void) override; \
  NS_IMETHOD SharesDocumentWith(nsISHEntry *aEntry, bool *_retval) override; \
  NS_IMETHOD GetIsSrcdocEntry(bool *aIsSrcdocEntry) override; \
  NS_IMETHOD GetSrcdocData(nsAString & aSrcdocData) override; \
  NS_IMETHOD SetSrcdocData(const nsAString & aSrcdocData) override; \
  NS_IMETHOD GetBaseURI(nsIURI * *aBaseURI) override; \
  NS_IMETHOD SetBaseURI(nsIURI *aBaseURI) override; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISHENTRY(_to) \
  NS_IMETHOD GetURI(nsIURI * *aURI) override { return _to GetURI(aURI); } \
  NS_IMETHOD GetTitle(char16_t * *aTitle) override { return _to GetTitle(aTitle); } \
  NS_IMETHOD GetIsSubFrame(bool *aIsSubFrame) override { return _to GetIsSubFrame(aIsSubFrame); } \
  NS_IMETHOD SetURI(nsIURI *aURI) override { return _to SetURI(aURI); } \
  NS_IMETHOD GetReferrerURI(nsIURI * *aReferrerURI) override { return _to GetReferrerURI(aReferrerURI); } \
  NS_IMETHOD SetReferrerURI(nsIURI *aReferrerURI) override { return _to SetReferrerURI(aReferrerURI); } \
  NS_IMETHOD GetReferrerPolicy(uint32_t *aReferrerPolicy) override { return _to GetReferrerPolicy(aReferrerPolicy); } \
  NS_IMETHOD SetReferrerPolicy(uint32_t aReferrerPolicy) override { return _to SetReferrerPolicy(aReferrerPolicy); } \
  NS_IMETHOD GetContentViewer(nsIContentViewer * *aContentViewer) override { return _to GetContentViewer(aContentViewer); } \
  NS_IMETHOD SetContentViewer(nsIContentViewer *aContentViewer) override { return _to SetContentViewer(aContentViewer); } \
  NS_IMETHOD GetSticky(bool *aSticky) override { return _to GetSticky(aSticky); } \
  NS_IMETHOD SetSticky(bool aSticky) override { return _to SetSticky(aSticky); } \
  NS_IMETHOD GetWindowState(nsISupports * *aWindowState) override { return _to GetWindowState(aWindowState); } \
  NS_IMETHOD SetWindowState(nsISupports *aWindowState) override { return _to SetWindowState(aWindowState); } \
  NS_IMETHOD GetViewerBounds(nsIntRect & bounds) override { return _to GetViewerBounds(bounds); } \
  NS_IMETHOD SetViewerBounds(const nsIntRect & bounds) override { return _to SetViewerBounds(bounds); } \
  NS_IMETHOD AddChildShell(nsIDocShellTreeItem *shell) override { return _to AddChildShell(shell); } \
  NS_IMETHOD ChildShellAt(int32_t index, nsIDocShellTreeItem * *_retval) override { return _to ChildShellAt(index, _retval); } \
  NS_IMETHOD ClearChildShells(void) override { return _to ClearChildShells(); } \
  NS_IMETHOD GetRefreshURIList(nsISupportsArray * *aRefreshURIList) override { return _to GetRefreshURIList(aRefreshURIList); } \
  NS_IMETHOD SetRefreshURIList(nsISupportsArray *aRefreshURIList) override { return _to SetRefreshURIList(aRefreshURIList); } \
  NS_IMETHOD SyncPresentationState(void) override { return _to SyncPresentationState(); } \
  NS_IMETHOD SetTitle(const nsAString & aTitle) override { return _to SetTitle(aTitle); } \
  NS_IMETHOD GetPostData(nsIInputStream * *aPostData) override { return _to GetPostData(aPostData); } \
  NS_IMETHOD SetPostData(nsIInputStream *aPostData) override { return _to SetPostData(aPostData); } \
  NS_IMETHOD GetLayoutHistoryState(nsILayoutHistoryState * *aLayoutHistoryState) override { return _to GetLayoutHistoryState(aLayoutHistoryState); } \
  NS_IMETHOD SetLayoutHistoryState(nsILayoutHistoryState *aLayoutHistoryState) override { return _to SetLayoutHistoryState(aLayoutHistoryState); } \
  NS_IMETHOD GetParent(nsISHEntry * *aParent) override { return _to GetParent(aParent); } \
  NS_IMETHOD SetParent(nsISHEntry *aParent) override { return _to SetParent(aParent); } \
  NS_IMETHOD GetLoadType(uint32_t *aLoadType) override { return _to GetLoadType(aLoadType); } \
  NS_IMETHOD SetLoadType(uint32_t aLoadType) override { return _to SetLoadType(aLoadType); } \
  NS_IMETHOD GetID(uint32_t *aID) override { return _to GetID(aID); } \
  NS_IMETHOD SetID(uint32_t aID) override { return _to SetID(aID); } \
  NS_IMETHOD GetCacheKey(nsISupports * *aCacheKey) override { return _to GetCacheKey(aCacheKey); } \
  NS_IMETHOD SetCacheKey(nsISupports *aCacheKey) override { return _to SetCacheKey(aCacheKey); } \
  NS_IMETHOD GetSaveLayoutStateFlag(bool *aSaveLayoutStateFlag) override { return _to GetSaveLayoutStateFlag(aSaveLayoutStateFlag); } \
  NS_IMETHOD SetSaveLayoutStateFlag(bool aSaveLayoutStateFlag) override { return _to SetSaveLayoutStateFlag(aSaveLayoutStateFlag); } \
  NS_IMETHOD GetExpirationStatus(bool *aExpirationStatus) override { return _to GetExpirationStatus(aExpirationStatus); } \
  NS_IMETHOD SetExpirationStatus(bool aExpirationStatus) override { return _to SetExpirationStatus(aExpirationStatus); } \
  NS_IMETHOD GetContentType(nsACString & aContentType) override { return _to GetContentType(aContentType); } \
  NS_IMETHOD SetContentType(const nsACString & aContentType) override { return _to SetContentType(aContentType); } \
  NS_IMETHOD GetURIWasModified(bool *aURIWasModified) override { return _to GetURIWasModified(aURIWasModified); } \
  NS_IMETHOD SetURIWasModified(bool aURIWasModified) override { return _to SetURIWasModified(aURIWasModified); } \
  NS_IMETHOD SetScrollPosition(int32_t x, int32_t y) override { return _to SetScrollPosition(x, y); } \
  NS_IMETHOD GetScrollPosition(int32_t *x, int32_t *y) override { return _to GetScrollPosition(x, y); } \
  NS_IMETHOD Create(nsIURI *URI, const nsAString & title, nsIInputStream *inputStream, nsILayoutHistoryState *layoutHistoryState, nsISupports *cacheKey, const nsACString & contentType, nsISupports *owner, uint64_t docshellID, bool dynamicCreation) override { return _to Create(URI, title, inputStream, layoutHistoryState, cacheKey, contentType, owner, docshellID, dynamicCreation); } \
  NS_IMETHOD Clone(nsISHEntry * *_retval) override { return _to Clone(_retval); } \
  NS_IMETHOD SetIsSubFrame(bool aFlag) override { return _to SetIsSubFrame(aFlag); } \
  NS_IMETHOD GetAnyContentViewer(nsISHEntry * *ownerEntry, nsIContentViewer * *_retval) override { return _to GetAnyContentViewer(ownerEntry, _retval); } \
  NS_IMETHOD GetOwner(nsISupports * *aOwner) override { return _to GetOwner(aOwner); } \
  NS_IMETHOD SetOwner(nsISupports *aOwner) override { return _to SetOwner(aOwner); } \
  NS_IMETHOD GetStateData(nsIStructuredCloneContainer * *aStateData) override { return _to GetStateData(aStateData); } \
  NS_IMETHOD SetStateData(nsIStructuredCloneContainer *aStateData) override { return _to SetStateData(aStateData); } \
  NS_IMETHOD_(nsDocShellEditorData *) ForgetEditorData(void) override { return _to ForgetEditorData(); } \
  NS_IMETHOD_(void) SetEditorData(nsDocShellEditorData *aData) override { return _to SetEditorData(aData); } \
  NS_IMETHOD_(bool) HasDetachedEditor(void) override { return _to HasDetachedEditor(); } \
  NS_IMETHOD IsDynamicallyAdded(bool *_retval) override { return _to IsDynamicallyAdded(_retval); } \
  NS_IMETHOD HasDynamicallyAddedChild(bool *_retval) override { return _to HasDynamicallyAddedChild(_retval); } \
  NS_IMETHOD GetDocshellID(uint64_t *aDocshellID) override { return _to GetDocshellID(aDocshellID); } \
  NS_IMETHOD SetDocshellID(uint64_t aDocshellID) override { return _to SetDocshellID(aDocshellID); } \
  NS_IMETHOD GetBFCacheEntry(nsIBFCacheEntry * *aBFCacheEntry) override { return _to GetBFCacheEntry(aBFCacheEntry); } \
  NS_IMETHOD_(bool) HasBFCacheEntry(nsIBFCacheEntry *aEntry) override { return _to HasBFCacheEntry(aEntry); } \
  NS_IMETHOD AdoptBFCacheEntry(nsISHEntry *aEntry) override { return _to AdoptBFCacheEntry(aEntry); } \
  NS_IMETHOD AbandonBFCacheEntry(void) override { return _to AbandonBFCacheEntry(); } \
  NS_IMETHOD SharesDocumentWith(nsISHEntry *aEntry, bool *_retval) override { return _to SharesDocumentWith(aEntry, _retval); } \
  NS_IMETHOD GetIsSrcdocEntry(bool *aIsSrcdocEntry) override { return _to GetIsSrcdocEntry(aIsSrcdocEntry); } \
  NS_IMETHOD GetSrcdocData(nsAString & aSrcdocData) override { return _to GetSrcdocData(aSrcdocData); } \
  NS_IMETHOD SetSrcdocData(const nsAString & aSrcdocData) override { return _to SetSrcdocData(aSrcdocData); } \
  NS_IMETHOD GetBaseURI(nsIURI * *aBaseURI) override { return _to GetBaseURI(aBaseURI); } \
  NS_IMETHOD SetBaseURI(nsIURI *aBaseURI) override { return _to SetBaseURI(aBaseURI); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISHENTRY(_to) \
  NS_IMETHOD GetURI(nsIURI * *aURI) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetURI(aURI); } \
  NS_IMETHOD GetTitle(char16_t * *aTitle) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTitle(aTitle); } \
  NS_IMETHOD GetIsSubFrame(bool *aIsSubFrame) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsSubFrame(aIsSubFrame); } \
  NS_IMETHOD SetURI(nsIURI *aURI) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetURI(aURI); } \
  NS_IMETHOD GetReferrerURI(nsIURI * *aReferrerURI) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReferrerURI(aReferrerURI); } \
  NS_IMETHOD SetReferrerURI(nsIURI *aReferrerURI) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetReferrerURI(aReferrerURI); } \
  NS_IMETHOD GetReferrerPolicy(uint32_t *aReferrerPolicy) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReferrerPolicy(aReferrerPolicy); } \
  NS_IMETHOD SetReferrerPolicy(uint32_t aReferrerPolicy) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetReferrerPolicy(aReferrerPolicy); } \
  NS_IMETHOD GetContentViewer(nsIContentViewer * *aContentViewer) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContentViewer(aContentViewer); } \
  NS_IMETHOD SetContentViewer(nsIContentViewer *aContentViewer) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetContentViewer(aContentViewer); } \
  NS_IMETHOD GetSticky(bool *aSticky) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSticky(aSticky); } \
  NS_IMETHOD SetSticky(bool aSticky) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSticky(aSticky); } \
  NS_IMETHOD GetWindowState(nsISupports * *aWindowState) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWindowState(aWindowState); } \
  NS_IMETHOD SetWindowState(nsISupports *aWindowState) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetWindowState(aWindowState); } \
  NS_IMETHOD GetViewerBounds(nsIntRect & bounds) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetViewerBounds(bounds); } \
  NS_IMETHOD SetViewerBounds(const nsIntRect & bounds) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetViewerBounds(bounds); } \
  NS_IMETHOD AddChildShell(nsIDocShellTreeItem *shell) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AddChildShell(shell); } \
  NS_IMETHOD ChildShellAt(int32_t index, nsIDocShellTreeItem * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ChildShellAt(index, _retval); } \
  NS_IMETHOD ClearChildShells(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ClearChildShells(); } \
  NS_IMETHOD GetRefreshURIList(nsISupportsArray * *aRefreshURIList) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRefreshURIList(aRefreshURIList); } \
  NS_IMETHOD SetRefreshURIList(nsISupportsArray *aRefreshURIList) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRefreshURIList(aRefreshURIList); } \
  NS_IMETHOD SyncPresentationState(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SyncPresentationState(); } \
  NS_IMETHOD SetTitle(const nsAString & aTitle) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTitle(aTitle); } \
  NS_IMETHOD GetPostData(nsIInputStream * *aPostData) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPostData(aPostData); } \
  NS_IMETHOD SetPostData(nsIInputStream *aPostData) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPostData(aPostData); } \
  NS_IMETHOD GetLayoutHistoryState(nsILayoutHistoryState * *aLayoutHistoryState) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLayoutHistoryState(aLayoutHistoryState); } \
  NS_IMETHOD SetLayoutHistoryState(nsILayoutHistoryState *aLayoutHistoryState) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLayoutHistoryState(aLayoutHistoryState); } \
  NS_IMETHOD GetParent(nsISHEntry * *aParent) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetParent(aParent); } \
  NS_IMETHOD SetParent(nsISHEntry *aParent) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetParent(aParent); } \
  NS_IMETHOD GetLoadType(uint32_t *aLoadType) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLoadType(aLoadType); } \
  NS_IMETHOD SetLoadType(uint32_t aLoadType) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLoadType(aLoadType); } \
  NS_IMETHOD GetID(uint32_t *aID) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetID(aID); } \
  NS_IMETHOD SetID(uint32_t aID) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetID(aID); } \
  NS_IMETHOD GetCacheKey(nsISupports * *aCacheKey) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCacheKey(aCacheKey); } \
  NS_IMETHOD SetCacheKey(nsISupports *aCacheKey) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCacheKey(aCacheKey); } \
  NS_IMETHOD GetSaveLayoutStateFlag(bool *aSaveLayoutStateFlag) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSaveLayoutStateFlag(aSaveLayoutStateFlag); } \
  NS_IMETHOD SetSaveLayoutStateFlag(bool aSaveLayoutStateFlag) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSaveLayoutStateFlag(aSaveLayoutStateFlag); } \
  NS_IMETHOD GetExpirationStatus(bool *aExpirationStatus) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetExpirationStatus(aExpirationStatus); } \
  NS_IMETHOD SetExpirationStatus(bool aExpirationStatus) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetExpirationStatus(aExpirationStatus); } \
  NS_IMETHOD GetContentType(nsACString & aContentType) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContentType(aContentType); } \
  NS_IMETHOD SetContentType(const nsACString & aContentType) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetContentType(aContentType); } \
  NS_IMETHOD GetURIWasModified(bool *aURIWasModified) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetURIWasModified(aURIWasModified); } \
  NS_IMETHOD SetURIWasModified(bool aURIWasModified) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetURIWasModified(aURIWasModified); } \
  NS_IMETHOD SetScrollPosition(int32_t x, int32_t y) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetScrollPosition(x, y); } \
  NS_IMETHOD GetScrollPosition(int32_t *x, int32_t *y) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetScrollPosition(x, y); } \
  NS_IMETHOD Create(nsIURI *URI, const nsAString & title, nsIInputStream *inputStream, nsILayoutHistoryState *layoutHistoryState, nsISupports *cacheKey, const nsACString & contentType, nsISupports *owner, uint64_t docshellID, bool dynamicCreation) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Create(URI, title, inputStream, layoutHistoryState, cacheKey, contentType, owner, docshellID, dynamicCreation); } \
  NS_IMETHOD Clone(nsISHEntry * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Clone(_retval); } \
  NS_IMETHOD SetIsSubFrame(bool aFlag) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetIsSubFrame(aFlag); } \
  NS_IMETHOD GetAnyContentViewer(nsISHEntry * *ownerEntry, nsIContentViewer * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAnyContentViewer(ownerEntry, _retval); } \
  NS_IMETHOD GetOwner(nsISupports * *aOwner) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOwner(aOwner); } \
  NS_IMETHOD SetOwner(nsISupports *aOwner) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOwner(aOwner); } \
  NS_IMETHOD GetStateData(nsIStructuredCloneContainer * *aStateData) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStateData(aStateData); } \
  NS_IMETHOD SetStateData(nsIStructuredCloneContainer *aStateData) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetStateData(aStateData); } \
  NS_IMETHOD_(nsDocShellEditorData *) ForgetEditorData(void) override; \
  NS_IMETHOD_(void) SetEditorData(nsDocShellEditorData *aData) override; \
  NS_IMETHOD_(bool) HasDetachedEditor(void) override; \
  NS_IMETHOD IsDynamicallyAdded(bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->IsDynamicallyAdded(_retval); } \
  NS_IMETHOD HasDynamicallyAddedChild(bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->HasDynamicallyAddedChild(_retval); } \
  NS_IMETHOD GetDocshellID(uint64_t *aDocshellID) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDocshellID(aDocshellID); } \
  NS_IMETHOD SetDocshellID(uint64_t aDocshellID) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDocshellID(aDocshellID); } \
  NS_IMETHOD GetBFCacheEntry(nsIBFCacheEntry * *aBFCacheEntry) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBFCacheEntry(aBFCacheEntry); } \
  NS_IMETHOD_(bool) HasBFCacheEntry(nsIBFCacheEntry *aEntry) override; \
  NS_IMETHOD AdoptBFCacheEntry(nsISHEntry *aEntry) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AdoptBFCacheEntry(aEntry); } \
  NS_IMETHOD AbandonBFCacheEntry(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AbandonBFCacheEntry(); } \
  NS_IMETHOD SharesDocumentWith(nsISHEntry *aEntry, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SharesDocumentWith(aEntry, _retval); } \
  NS_IMETHOD GetIsSrcdocEntry(bool *aIsSrcdocEntry) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsSrcdocEntry(aIsSrcdocEntry); } \
  NS_IMETHOD GetSrcdocData(nsAString & aSrcdocData) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSrcdocData(aSrcdocData); } \
  NS_IMETHOD SetSrcdocData(const nsAString & aSrcdocData) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSrcdocData(aSrcdocData); } \
  NS_IMETHOD GetBaseURI(nsIURI * *aBaseURI) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBaseURI(aBaseURI); } \
  NS_IMETHOD SetBaseURI(nsIURI *aBaseURI) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetBaseURI(aBaseURI); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsSHEntry : public nsISHEntry
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISHENTRY

  nsSHEntry();

private:
  ~nsSHEntry();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsSHEntry, nsISHEntry)

nsSHEntry::nsSHEntry()
{
  /* member initializers and constructor code */
}

nsSHEntry::~nsSHEntry()
{
  /* destructor code */
}

/* readonly attribute nsIURI URI; */
NS_IMETHODIMP nsSHEntry::GetURI(nsIURI * *aURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute wstring title; */
NS_IMETHODIMP nsSHEntry::GetTitle(char16_t * *aTitle)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isSubFrame; */
NS_IMETHODIMP nsSHEntry::GetIsSubFrame(bool *aIsSubFrame)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setURI (in nsIURI aURI); */
NS_IMETHODIMP nsSHEntry::SetURI(nsIURI *aURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIURI referrerURI; */
NS_IMETHODIMP nsSHEntry::GetReferrerURI(nsIURI * *aReferrerURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSHEntry::SetReferrerURI(nsIURI *aReferrerURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long referrerPolicy; */
NS_IMETHODIMP nsSHEntry::GetReferrerPolicy(uint32_t *aReferrerPolicy)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSHEntry::SetReferrerPolicy(uint32_t aReferrerPolicy)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIContentViewer contentViewer; */
NS_IMETHODIMP nsSHEntry::GetContentViewer(nsIContentViewer * *aContentViewer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSHEntry::SetContentViewer(nsIContentViewer *aContentViewer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean sticky; */
NS_IMETHODIMP nsSHEntry::GetSticky(bool *aSticky)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSHEntry::SetSticky(bool aSticky)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsISupports windowState; */
NS_IMETHODIMP nsSHEntry::GetWindowState(nsISupports * *aWindowState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSHEntry::SetWindowState(nsISupports *aWindowState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void getViewerBounds (in nsIntRect bounds); */
NS_IMETHODIMP nsSHEntry::GetViewerBounds(nsIntRect & bounds)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void setViewerBounds ([const] in nsIntRect bounds); */
NS_IMETHODIMP nsSHEntry::SetViewerBounds(const nsIntRect & bounds)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addChildShell (in nsIDocShellTreeItem shell); */
NS_IMETHODIMP nsSHEntry::AddChildShell(nsIDocShellTreeItem *shell)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDocShellTreeItem childShellAt (in long index); */
NS_IMETHODIMP nsSHEntry::ChildShellAt(int32_t index, nsIDocShellTreeItem * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void clearChildShells (); */
NS_IMETHODIMP nsSHEntry::ClearChildShells()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsISupportsArray refreshURIList; */
NS_IMETHODIMP nsSHEntry::GetRefreshURIList(nsISupportsArray * *aRefreshURIList)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSHEntry::SetRefreshURIList(nsISupportsArray *aRefreshURIList)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void syncPresentationState (); */
NS_IMETHODIMP nsSHEntry::SyncPresentationState()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setTitle (in AString aTitle); */
NS_IMETHODIMP nsSHEntry::SetTitle(const nsAString & aTitle)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIInputStream postData; */
NS_IMETHODIMP nsSHEntry::GetPostData(nsIInputStream * *aPostData)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSHEntry::SetPostData(nsIInputStream *aPostData)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsILayoutHistoryState layoutHistoryState; */
NS_IMETHODIMP nsSHEntry::GetLayoutHistoryState(nsILayoutHistoryState * *aLayoutHistoryState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSHEntry::SetLayoutHistoryState(nsILayoutHistoryState *aLayoutHistoryState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsISHEntry parent; */
NS_IMETHODIMP nsSHEntry::GetParent(nsISHEntry * *aParent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSHEntry::SetParent(nsISHEntry *aParent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long loadType; */
NS_IMETHODIMP nsSHEntry::GetLoadType(uint32_t *aLoadType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSHEntry::SetLoadType(uint32_t aLoadType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long ID; */
NS_IMETHODIMP nsSHEntry::GetID(uint32_t *aID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSHEntry::SetID(uint32_t aID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsISupports cacheKey; */
NS_IMETHODIMP nsSHEntry::GetCacheKey(nsISupports * *aCacheKey)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSHEntry::SetCacheKey(nsISupports *aCacheKey)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean saveLayoutStateFlag; */
NS_IMETHODIMP nsSHEntry::GetSaveLayoutStateFlag(bool *aSaveLayoutStateFlag)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSHEntry::SetSaveLayoutStateFlag(bool aSaveLayoutStateFlag)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean expirationStatus; */
NS_IMETHODIMP nsSHEntry::GetExpirationStatus(bool *aExpirationStatus)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSHEntry::SetExpirationStatus(bool aExpirationStatus)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute ACString contentType; */
NS_IMETHODIMP nsSHEntry::GetContentType(nsACString & aContentType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSHEntry::SetContentType(const nsACString & aContentType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean URIWasModified; */
NS_IMETHODIMP nsSHEntry::GetURIWasModified(bool *aURIWasModified)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSHEntry::SetURIWasModified(bool aURIWasModified)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setScrollPosition (in long x, in long y); */
NS_IMETHODIMP nsSHEntry::SetScrollPosition(int32_t x, int32_t y)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getScrollPosition (out long x, out long y); */
NS_IMETHODIMP nsSHEntry::GetScrollPosition(int32_t *x, int32_t *y)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void create (in nsIURI URI, in AString title, in nsIInputStream inputStream, in nsILayoutHistoryState layoutHistoryState, in nsISupports cacheKey, in ACString contentType, in nsISupports owner, in unsigned long long docshellID, in boolean dynamicCreation); */
NS_IMETHODIMP nsSHEntry::Create(nsIURI *URI, const nsAString & title, nsIInputStream *inputStream, nsILayoutHistoryState *layoutHistoryState, nsISupports *cacheKey, const nsACString & contentType, nsISupports *owner, uint64_t docshellID, bool dynamicCreation)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsISHEntry clone (); */
NS_IMETHODIMP nsSHEntry::Clone(nsISHEntry * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setIsSubFrame (in boolean aFlag); */
NS_IMETHODIMP nsSHEntry::SetIsSubFrame(bool aFlag)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIContentViewer getAnyContentViewer (out nsISHEntry ownerEntry); */
NS_IMETHODIMP nsSHEntry::GetAnyContentViewer(nsISHEntry * *ownerEntry, nsIContentViewer * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsISupports owner; */
NS_IMETHODIMP nsSHEntry::GetOwner(nsISupports * *aOwner)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSHEntry::SetOwner(nsISupports *aOwner)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIStructuredCloneContainer stateData; */
NS_IMETHODIMP nsSHEntry::GetStateData(nsIStructuredCloneContainer * *aStateData)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSHEntry::SetStateData(nsIStructuredCloneContainer *aStateData)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,notxpcom] nsDocShellEditorDataPtr forgetEditorData (); */
NS_IMETHODIMP_(nsDocShellEditorData *) nsSHEntry::ForgetEditorData()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,notxpcom] void setEditorData (in nsDocShellEditorDataPtr aData); */
NS_IMETHODIMP_(void) nsSHEntry::SetEditorData(nsDocShellEditorData *aData)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,notxpcom] boolean hasDetachedEditor (); */
NS_IMETHODIMP_(bool) nsSHEntry::HasDetachedEditor()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isDynamicallyAdded (); */
NS_IMETHODIMP nsSHEntry::IsDynamicallyAdded(bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean hasDynamicallyAddedChild (); */
NS_IMETHODIMP nsSHEntry::HasDynamicallyAddedChild(bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long long docshellID; */
NS_IMETHODIMP nsSHEntry::GetDocshellID(uint64_t *aDocshellID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSHEntry::SetDocshellID(uint64_t aDocshellID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIBFCacheEntry BFCacheEntry; */
NS_IMETHODIMP nsSHEntry::GetBFCacheEntry(nsIBFCacheEntry * *aBFCacheEntry)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,notxpcom] boolean hasBFCacheEntry (in nsIBFCacheEntry aEntry); */
NS_IMETHODIMP_(bool) nsSHEntry::HasBFCacheEntry(nsIBFCacheEntry *aEntry)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void adoptBFCacheEntry (in nsISHEntry aEntry); */
NS_IMETHODIMP nsSHEntry::AdoptBFCacheEntry(nsISHEntry *aEntry)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void abandonBFCacheEntry (); */
NS_IMETHODIMP nsSHEntry::AbandonBFCacheEntry()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean sharesDocumentWith (in nsISHEntry aEntry); */
NS_IMETHODIMP nsSHEntry::SharesDocumentWith(nsISHEntry *aEntry, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isSrcdocEntry; */
NS_IMETHODIMP nsSHEntry::GetIsSrcdocEntry(bool *aIsSrcdocEntry)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute AString srcdocData; */
NS_IMETHODIMP nsSHEntry::GetSrcdocData(nsAString & aSrcdocData)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSHEntry::SetSrcdocData(const nsAString & aSrcdocData)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIURI baseURI; */
NS_IMETHODIMP nsSHEntry::GetBaseURI(nsIURI * *aBaseURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSHEntry::SetBaseURI(nsIURI *aBaseURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsISHEntryInternal */
#define NS_ISHENTRYINTERNAL_IID_STR "bb66ac35-253b-471f-a317-3ece940f04c5"

#define NS_ISHENTRYINTERNAL_IID \
  {0xbb66ac35, 0x253b, 0x471f, \
    { 0xa3, 0x17, 0x3e, 0xce, 0x94, 0x0f, 0x04, 0xc5 }}

class NS_NO_VTABLE nsISHEntryInternal : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISHENTRYINTERNAL_IID)

  /* [notxpcom] void RemoveFromBFCacheAsync (); */
  NS_IMETHOD_(void) RemoveFromBFCacheAsync(void) = 0;

  /* [notxpcom] void RemoveFromBFCacheSync (); */
  NS_IMETHOD_(void) RemoveFromBFCacheSync(void) = 0;

  /* attribute unsigned long lastTouched; */
  NS_IMETHOD GetLastTouched(uint32_t *aLastTouched) = 0;
  NS_IMETHOD SetLastTouched(uint32_t aLastTouched) = 0;

  /* [noscript,notxpcom] nsSHEntryShared getSharedState (); */
  NS_IMETHOD_(nsSHEntryShared *) GetSharedState(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsISHEntryInternal, NS_ISHENTRYINTERNAL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISHENTRYINTERNAL \
  NS_IMETHOD_(void) RemoveFromBFCacheAsync(void) override; \
  NS_IMETHOD_(void) RemoveFromBFCacheSync(void) override; \
  NS_IMETHOD GetLastTouched(uint32_t *aLastTouched) override; \
  NS_IMETHOD SetLastTouched(uint32_t aLastTouched) override; \
  NS_IMETHOD_(nsSHEntryShared *) GetSharedState(void) override; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISHENTRYINTERNAL(_to) \
  NS_IMETHOD_(void) RemoveFromBFCacheAsync(void) override { return _to RemoveFromBFCacheAsync(); } \
  NS_IMETHOD_(void) RemoveFromBFCacheSync(void) override { return _to RemoveFromBFCacheSync(); } \
  NS_IMETHOD GetLastTouched(uint32_t *aLastTouched) override { return _to GetLastTouched(aLastTouched); } \
  NS_IMETHOD SetLastTouched(uint32_t aLastTouched) override { return _to SetLastTouched(aLastTouched); } \
  NS_IMETHOD_(nsSHEntryShared *) GetSharedState(void) override { return _to GetSharedState(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISHENTRYINTERNAL(_to) \
  NS_IMETHOD_(void) RemoveFromBFCacheAsync(void) override; \
  NS_IMETHOD_(void) RemoveFromBFCacheSync(void) override; \
  NS_IMETHOD GetLastTouched(uint32_t *aLastTouched) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLastTouched(aLastTouched); } \
  NS_IMETHOD SetLastTouched(uint32_t aLastTouched) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLastTouched(aLastTouched); } \
  NS_IMETHOD_(nsSHEntryShared *) GetSharedState(void) override; 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsSHEntryInternal : public nsISHEntryInternal
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISHENTRYINTERNAL

  nsSHEntryInternal();

private:
  ~nsSHEntryInternal();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsSHEntryInternal, nsISHEntryInternal)

nsSHEntryInternal::nsSHEntryInternal()
{
  /* member initializers and constructor code */
}

nsSHEntryInternal::~nsSHEntryInternal()
{
  /* destructor code */
}

/* [notxpcom] void RemoveFromBFCacheAsync (); */
NS_IMETHODIMP_(void) nsSHEntryInternal::RemoveFromBFCacheAsync()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [notxpcom] void RemoveFromBFCacheSync (); */
NS_IMETHODIMP_(void) nsSHEntryInternal::RemoveFromBFCacheSync()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long lastTouched; */
NS_IMETHODIMP nsSHEntryInternal::GetLastTouched(uint32_t *aLastTouched)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSHEntryInternal::SetLastTouched(uint32_t aLastTouched)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,notxpcom] nsSHEntryShared getSharedState (); */
NS_IMETHODIMP_(nsSHEntryShared *) nsSHEntryInternal::GetSharedState()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

// {BFD1A791-AD9F-11d3-BDC7-0050040A9B44}
#define NS_SHENTRY_CID \
{0xbfd1a791, 0xad9f, 0x11d3, {0xbd, 0xc7, 0x0, 0x50, 0x4, 0xa, 0x9b, 0x44}}
#define NS_SHENTRY_CONTRACTID \
    "@mozilla.org/browser/session-history-entry;1"

#endif /* __gen_nsISHEntry_h__ */
