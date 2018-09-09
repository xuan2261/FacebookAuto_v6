/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIToolkitProfileService.idl
 */

#ifndef __gen_nsIToolkitProfileService_h__
#define __gen_nsIToolkitProfileService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsISimpleEnumerator; /* forward declaration */

class nsIFile; /* forward declaration */

class nsIToolkitProfile; /* forward declaration */

class nsIProfileLock; /* forward declaration */


/* starting interface:    nsIToolkitProfileService */
#define NS_ITOOLKITPROFILESERVICE_IID_STR "b81c33a6-1ce8-4695-856b-02b7f15cc114"

#define NS_ITOOLKITPROFILESERVICE_IID \
  {0xb81c33a6, 0x1ce8, 0x4695, \
    { 0x85, 0x6b, 0x02, 0xb7, 0xf1, 0x5c, 0xc1, 0x14 }}

class NS_NO_VTABLE nsIToolkitProfileService : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ITOOLKITPROFILESERVICE_IID)

  /* attribute boolean startWithLastProfile; */
  NS_IMETHOD GetStartWithLastProfile(bool *aStartWithLastProfile) = 0;
  NS_IMETHOD SetStartWithLastProfile(bool aStartWithLastProfile) = 0;

  /* attribute boolean startOffline; */
  NS_IMETHOD GetStartOffline(bool *aStartOffline) = 0;
  NS_IMETHOD SetStartOffline(bool aStartOffline) = 0;

  /* readonly attribute nsISimpleEnumerator profiles; */
  NS_IMETHOD GetProfiles(nsISimpleEnumerator * *aProfiles) = 0;

  /* attribute nsIToolkitProfile selectedProfile; */
  NS_IMETHOD GetSelectedProfile(nsIToolkitProfile * *aSelectedProfile) = 0;
  NS_IMETHOD SetSelectedProfile(nsIToolkitProfile *aSelectedProfile) = 0;

  /* attribute nsIToolkitProfile defaultProfile; */
  NS_IMETHOD GetDefaultProfile(nsIToolkitProfile * *aDefaultProfile) = 0;
  NS_IMETHOD SetDefaultProfile(nsIToolkitProfile *aDefaultProfile) = 0;

  /* nsIToolkitProfile getProfileByName (in AUTF8String aName); */
  NS_IMETHOD GetProfileByName(const nsACString & aName, nsIToolkitProfile * *_retval) = 0;

  /* nsIProfileLock lockProfilePath (in nsIFile aDirectory, in nsIFile aTempDirectory); */
  NS_IMETHOD LockProfilePath(nsIFile *aDirectory, nsIFile *aTempDirectory, nsIProfileLock * *_retval) = 0;

  /* nsIToolkitProfile createProfile (in nsIFile aRootDir, in AUTF8String aName); */
  NS_IMETHOD CreateProfile(nsIFile *aRootDir, const nsACString & aName, nsIToolkitProfile * *_retval) = 0;

  /* nsIToolkitProfile createDefaultProfileForApp (in AUTF8String aProfileName, in AUTF8String aAppName, in AUTF8String aVendorName, [optional] in nsIFile aProfileDefaultsDir); */
  NS_IMETHOD CreateDefaultProfileForApp(const nsACString & aProfileName, const nsACString & aAppName, const nsACString & aVendorName, nsIFile *aProfileDefaultsDir, nsIToolkitProfile * *_retval) = 0;

  /* readonly attribute unsigned long profileCount; */
  NS_IMETHOD GetProfileCount(uint32_t *aProfileCount) = 0;

  /* void flush (); */
  NS_IMETHOD Flush(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIToolkitProfileService, NS_ITOOLKITPROFILESERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSITOOLKITPROFILESERVICE \
  NS_IMETHOD GetStartWithLastProfile(bool *aStartWithLastProfile) override; \
  NS_IMETHOD SetStartWithLastProfile(bool aStartWithLastProfile) override; \
  NS_IMETHOD GetStartOffline(bool *aStartOffline) override; \
  NS_IMETHOD SetStartOffline(bool aStartOffline) override; \
  NS_IMETHOD GetProfiles(nsISimpleEnumerator * *aProfiles) override; \
  NS_IMETHOD GetSelectedProfile(nsIToolkitProfile * *aSelectedProfile) override; \
  NS_IMETHOD SetSelectedProfile(nsIToolkitProfile *aSelectedProfile) override; \
  NS_IMETHOD GetDefaultProfile(nsIToolkitProfile * *aDefaultProfile) override; \
  NS_IMETHOD SetDefaultProfile(nsIToolkitProfile *aDefaultProfile) override; \
  NS_IMETHOD GetProfileByName(const nsACString & aName, nsIToolkitProfile * *_retval) override; \
  NS_IMETHOD LockProfilePath(nsIFile *aDirectory, nsIFile *aTempDirectory, nsIProfileLock * *_retval) override; \
  NS_IMETHOD CreateProfile(nsIFile *aRootDir, const nsACString & aName, nsIToolkitProfile * *_retval) override; \
  NS_IMETHOD CreateDefaultProfileForApp(const nsACString & aProfileName, const nsACString & aAppName, const nsACString & aVendorName, nsIFile *aProfileDefaultsDir, nsIToolkitProfile * *_retval) override; \
  NS_IMETHOD GetProfileCount(uint32_t *aProfileCount) override; \
  NS_IMETHOD Flush(void) override; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSITOOLKITPROFILESERVICE(_to) \
  NS_IMETHOD GetStartWithLastProfile(bool *aStartWithLastProfile) override { return _to GetStartWithLastProfile(aStartWithLastProfile); } \
  NS_IMETHOD SetStartWithLastProfile(bool aStartWithLastProfile) override { return _to SetStartWithLastProfile(aStartWithLastProfile); } \
  NS_IMETHOD GetStartOffline(bool *aStartOffline) override { return _to GetStartOffline(aStartOffline); } \
  NS_IMETHOD SetStartOffline(bool aStartOffline) override { return _to SetStartOffline(aStartOffline); } \
  NS_IMETHOD GetProfiles(nsISimpleEnumerator * *aProfiles) override { return _to GetProfiles(aProfiles); } \
  NS_IMETHOD GetSelectedProfile(nsIToolkitProfile * *aSelectedProfile) override { return _to GetSelectedProfile(aSelectedProfile); } \
  NS_IMETHOD SetSelectedProfile(nsIToolkitProfile *aSelectedProfile) override { return _to SetSelectedProfile(aSelectedProfile); } \
  NS_IMETHOD GetDefaultProfile(nsIToolkitProfile * *aDefaultProfile) override { return _to GetDefaultProfile(aDefaultProfile); } \
  NS_IMETHOD SetDefaultProfile(nsIToolkitProfile *aDefaultProfile) override { return _to SetDefaultProfile(aDefaultProfile); } \
  NS_IMETHOD GetProfileByName(const nsACString & aName, nsIToolkitProfile * *_retval) override { return _to GetProfileByName(aName, _retval); } \
  NS_IMETHOD LockProfilePath(nsIFile *aDirectory, nsIFile *aTempDirectory, nsIProfileLock * *_retval) override { return _to LockProfilePath(aDirectory, aTempDirectory, _retval); } \
  NS_IMETHOD CreateProfile(nsIFile *aRootDir, const nsACString & aName, nsIToolkitProfile * *_retval) override { return _to CreateProfile(aRootDir, aName, _retval); } \
  NS_IMETHOD CreateDefaultProfileForApp(const nsACString & aProfileName, const nsACString & aAppName, const nsACString & aVendorName, nsIFile *aProfileDefaultsDir, nsIToolkitProfile * *_retval) override { return _to CreateDefaultProfileForApp(aProfileName, aAppName, aVendorName, aProfileDefaultsDir, _retval); } \
  NS_IMETHOD GetProfileCount(uint32_t *aProfileCount) override { return _to GetProfileCount(aProfileCount); } \
  NS_IMETHOD Flush(void) override { return _to Flush(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSITOOLKITPROFILESERVICE(_to) \
  NS_IMETHOD GetStartWithLastProfile(bool *aStartWithLastProfile) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStartWithLastProfile(aStartWithLastProfile); } \
  NS_IMETHOD SetStartWithLastProfile(bool aStartWithLastProfile) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetStartWithLastProfile(aStartWithLastProfile); } \
  NS_IMETHOD GetStartOffline(bool *aStartOffline) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStartOffline(aStartOffline); } \
  NS_IMETHOD SetStartOffline(bool aStartOffline) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetStartOffline(aStartOffline); } \
  NS_IMETHOD GetProfiles(nsISimpleEnumerator * *aProfiles) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetProfiles(aProfiles); } \
  NS_IMETHOD GetSelectedProfile(nsIToolkitProfile * *aSelectedProfile) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSelectedProfile(aSelectedProfile); } \
  NS_IMETHOD SetSelectedProfile(nsIToolkitProfile *aSelectedProfile) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSelectedProfile(aSelectedProfile); } \
  NS_IMETHOD GetDefaultProfile(nsIToolkitProfile * *aDefaultProfile) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDefaultProfile(aDefaultProfile); } \
  NS_IMETHOD SetDefaultProfile(nsIToolkitProfile *aDefaultProfile) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDefaultProfile(aDefaultProfile); } \
  NS_IMETHOD GetProfileByName(const nsACString & aName, nsIToolkitProfile * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetProfileByName(aName, _retval); } \
  NS_IMETHOD LockProfilePath(nsIFile *aDirectory, nsIFile *aTempDirectory, nsIProfileLock * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->LockProfilePath(aDirectory, aTempDirectory, _retval); } \
  NS_IMETHOD CreateProfile(nsIFile *aRootDir, const nsACString & aName, nsIToolkitProfile * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateProfile(aRootDir, aName, _retval); } \
  NS_IMETHOD CreateDefaultProfileForApp(const nsACString & aProfileName, const nsACString & aAppName, const nsACString & aVendorName, nsIFile *aProfileDefaultsDir, nsIToolkitProfile * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateDefaultProfileForApp(aProfileName, aAppName, aVendorName, aProfileDefaultsDir, _retval); } \
  NS_IMETHOD GetProfileCount(uint32_t *aProfileCount) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetProfileCount(aProfileCount); } \
  NS_IMETHOD Flush(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Flush(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsToolkitProfileService : public nsIToolkitProfileService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSITOOLKITPROFILESERVICE

  nsToolkitProfileService();

private:
  ~nsToolkitProfileService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsToolkitProfileService, nsIToolkitProfileService)

nsToolkitProfileService::nsToolkitProfileService()
{
  /* member initializers and constructor code */
}

nsToolkitProfileService::~nsToolkitProfileService()
{
  /* destructor code */
}

/* attribute boolean startWithLastProfile; */
NS_IMETHODIMP nsToolkitProfileService::GetStartWithLastProfile(bool *aStartWithLastProfile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsToolkitProfileService::SetStartWithLastProfile(bool aStartWithLastProfile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean startOffline; */
NS_IMETHODIMP nsToolkitProfileService::GetStartOffline(bool *aStartOffline)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsToolkitProfileService::SetStartOffline(bool aStartOffline)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsISimpleEnumerator profiles; */
NS_IMETHODIMP nsToolkitProfileService::GetProfiles(nsISimpleEnumerator * *aProfiles)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIToolkitProfile selectedProfile; */
NS_IMETHODIMP nsToolkitProfileService::GetSelectedProfile(nsIToolkitProfile * *aSelectedProfile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsToolkitProfileService::SetSelectedProfile(nsIToolkitProfile *aSelectedProfile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIToolkitProfile defaultProfile; */
NS_IMETHODIMP nsToolkitProfileService::GetDefaultProfile(nsIToolkitProfile * *aDefaultProfile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsToolkitProfileService::SetDefaultProfile(nsIToolkitProfile *aDefaultProfile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIToolkitProfile getProfileByName (in AUTF8String aName); */
NS_IMETHODIMP nsToolkitProfileService::GetProfileByName(const nsACString & aName, nsIToolkitProfile * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIProfileLock lockProfilePath (in nsIFile aDirectory, in nsIFile aTempDirectory); */
NS_IMETHODIMP nsToolkitProfileService::LockProfilePath(nsIFile *aDirectory, nsIFile *aTempDirectory, nsIProfileLock * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIToolkitProfile createProfile (in nsIFile aRootDir, in AUTF8String aName); */
NS_IMETHODIMP nsToolkitProfileService::CreateProfile(nsIFile *aRootDir, const nsACString & aName, nsIToolkitProfile * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIToolkitProfile createDefaultProfileForApp (in AUTF8String aProfileName, in AUTF8String aAppName, in AUTF8String aVendorName, [optional] in nsIFile aProfileDefaultsDir); */
NS_IMETHODIMP nsToolkitProfileService::CreateDefaultProfileForApp(const nsACString & aProfileName, const nsACString & aAppName, const nsACString & aVendorName, nsIFile *aProfileDefaultsDir, nsIToolkitProfile * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long profileCount; */
NS_IMETHODIMP nsToolkitProfileService::GetProfileCount(uint32_t *aProfileCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void flush (); */
NS_IMETHODIMP nsToolkitProfileService::Flush()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

#define NS_PROFILESERVICE_CONTRACTID "@mozilla.org/toolkit/profile-service;1"

#endif /* __gen_nsIToolkitProfileService_h__ */
