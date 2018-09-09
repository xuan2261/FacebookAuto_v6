/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIFeedEntry.idl
 */

#ifndef __gen_nsIFeedEntry_h__
#define __gen_nsIFeedEntry_h__


#ifndef __gen_nsIFeedContainer_h__
#include "nsIFeedContainer.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIArray; /* forward declaration */


/* starting interface:    nsIFeedEntry */
#define NS_IFEEDENTRY_IID_STR "31bfd5b4-8ff5-4bfd-a8cb-b3dfbd4f0a5b"

#define NS_IFEEDENTRY_IID \
  {0x31bfd5b4, 0x8ff5, 0x4bfd, \
    { 0xa8, 0xcb, 0xb3, 0xdf, 0xbd, 0x4f, 0x0a, 0x5b }}

class NS_NO_VTABLE nsIFeedEntry : public nsIFeedContainer {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IFEEDENTRY_IID)

  /* attribute nsIFeedTextConstruct summary; */
  NS_IMETHOD GetSummary(nsIFeedTextConstruct * *aSummary) = 0;
  NS_IMETHOD SetSummary(nsIFeedTextConstruct *aSummary) = 0;

  /* attribute AString published; */
  NS_IMETHOD GetPublished(nsAString & aPublished) = 0;
  NS_IMETHOD SetPublished(const nsAString & aPublished) = 0;

  /* attribute nsIFeedTextConstruct content; */
  NS_IMETHOD GetContent(nsIFeedTextConstruct * *aContent) = 0;
  NS_IMETHOD SetContent(nsIFeedTextConstruct *aContent) = 0;

  /* attribute nsIArray enclosures; */
  NS_IMETHOD GetEnclosures(nsIArray * *aEnclosures) = 0;
  NS_IMETHOD SetEnclosures(nsIArray *aEnclosures) = 0;

  /* attribute nsIArray mediaContent; */
  NS_IMETHOD GetMediaContent(nsIArray * *aMediaContent) = 0;
  NS_IMETHOD SetMediaContent(nsIArray *aMediaContent) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIFeedEntry, NS_IFEEDENTRY_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIFEEDENTRY \
  NS_IMETHOD GetSummary(nsIFeedTextConstruct * *aSummary) override; \
  NS_IMETHOD SetSummary(nsIFeedTextConstruct *aSummary) override; \
  NS_IMETHOD GetPublished(nsAString & aPublished) override; \
  NS_IMETHOD SetPublished(const nsAString & aPublished) override; \
  NS_IMETHOD GetContent(nsIFeedTextConstruct * *aContent) override; \
  NS_IMETHOD SetContent(nsIFeedTextConstruct *aContent) override; \
  NS_IMETHOD GetEnclosures(nsIArray * *aEnclosures) override; \
  NS_IMETHOD SetEnclosures(nsIArray *aEnclosures) override; \
  NS_IMETHOD GetMediaContent(nsIArray * *aMediaContent) override; \
  NS_IMETHOD SetMediaContent(nsIArray *aMediaContent) override; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIFEEDENTRY(_to) \
  NS_IMETHOD GetSummary(nsIFeedTextConstruct * *aSummary) override { return _to GetSummary(aSummary); } \
  NS_IMETHOD SetSummary(nsIFeedTextConstruct *aSummary) override { return _to SetSummary(aSummary); } \
  NS_IMETHOD GetPublished(nsAString & aPublished) override { return _to GetPublished(aPublished); } \
  NS_IMETHOD SetPublished(const nsAString & aPublished) override { return _to SetPublished(aPublished); } \
  NS_IMETHOD GetContent(nsIFeedTextConstruct * *aContent) override { return _to GetContent(aContent); } \
  NS_IMETHOD SetContent(nsIFeedTextConstruct *aContent) override { return _to SetContent(aContent); } \
  NS_IMETHOD GetEnclosures(nsIArray * *aEnclosures) override { return _to GetEnclosures(aEnclosures); } \
  NS_IMETHOD SetEnclosures(nsIArray *aEnclosures) override { return _to SetEnclosures(aEnclosures); } \
  NS_IMETHOD GetMediaContent(nsIArray * *aMediaContent) override { return _to GetMediaContent(aMediaContent); } \
  NS_IMETHOD SetMediaContent(nsIArray *aMediaContent) override { return _to SetMediaContent(aMediaContent); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIFEEDENTRY(_to) \
  NS_IMETHOD GetSummary(nsIFeedTextConstruct * *aSummary) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSummary(aSummary); } \
  NS_IMETHOD SetSummary(nsIFeedTextConstruct *aSummary) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSummary(aSummary); } \
  NS_IMETHOD GetPublished(nsAString & aPublished) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPublished(aPublished); } \
  NS_IMETHOD SetPublished(const nsAString & aPublished) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPublished(aPublished); } \
  NS_IMETHOD GetContent(nsIFeedTextConstruct * *aContent) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContent(aContent); } \
  NS_IMETHOD SetContent(nsIFeedTextConstruct *aContent) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetContent(aContent); } \
  NS_IMETHOD GetEnclosures(nsIArray * *aEnclosures) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEnclosures(aEnclosures); } \
  NS_IMETHOD SetEnclosures(nsIArray *aEnclosures) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetEnclosures(aEnclosures); } \
  NS_IMETHOD GetMediaContent(nsIArray * *aMediaContent) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMediaContent(aMediaContent); } \
  NS_IMETHOD SetMediaContent(nsIArray *aMediaContent) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMediaContent(aMediaContent); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsFeedEntry : public nsIFeedEntry
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIFEEDENTRY

  nsFeedEntry();

private:
  ~nsFeedEntry();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsFeedEntry, nsIFeedEntry)

nsFeedEntry::nsFeedEntry()
{
  /* member initializers and constructor code */
}

nsFeedEntry::~nsFeedEntry()
{
  /* destructor code */
}

/* attribute nsIFeedTextConstruct summary; */
NS_IMETHODIMP nsFeedEntry::GetSummary(nsIFeedTextConstruct * *aSummary)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsFeedEntry::SetSummary(nsIFeedTextConstruct *aSummary)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute AString published; */
NS_IMETHODIMP nsFeedEntry::GetPublished(nsAString & aPublished)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsFeedEntry::SetPublished(const nsAString & aPublished)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIFeedTextConstruct content; */
NS_IMETHODIMP nsFeedEntry::GetContent(nsIFeedTextConstruct * *aContent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsFeedEntry::SetContent(nsIFeedTextConstruct *aContent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIArray enclosures; */
NS_IMETHODIMP nsFeedEntry::GetEnclosures(nsIArray * *aEnclosures)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsFeedEntry::SetEnclosures(nsIArray *aEnclosures)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIArray mediaContent; */
NS_IMETHODIMP nsFeedEntry::GetMediaContent(nsIArray * *aMediaContent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsFeedEntry::SetMediaContent(nsIArray *aMediaContent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIFeedEntry_h__ */
