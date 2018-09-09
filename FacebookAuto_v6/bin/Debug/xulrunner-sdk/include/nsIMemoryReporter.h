/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIMemoryReporter.idl
 */

#ifndef __gen_nsIMemoryReporter_h__
#define __gen_nsIMemoryReporter_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#include "mozilla/Assertions.h"
#include "mozilla/DebugOnly.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
#include <stdio.h>
class nsIDOMWindow; /* forward declaration */

class nsIRunnable; /* forward declaration */

class nsISimpleEnumerator; /* forward declaration */


/* starting interface:    nsIMemoryReporterCallback */
#define NS_IMEMORYREPORTERCALLBACK_IID_STR "62ef0e1c-dbd6-11e3-aa75-3c970e9f4238"

#define NS_IMEMORYREPORTERCALLBACK_IID \
  {0x62ef0e1c, 0xdbd6, 0x11e3, \
    { 0xaa, 0x75, 0x3c, 0x97, 0x0e, 0x9f, 0x42, 0x38 }}

class NS_NO_VTABLE nsIMemoryReporterCallback : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IMEMORYREPORTERCALLBACK_IID)

  /* void callback (in ACString process, in AUTF8String path, in int32_t kind, in int32_t units, in int64_t amount, in AUTF8String description, in nsISupports data); */
  NS_IMETHOD Callback(const nsACString & process, const nsACString & path, int32_t kind, int32_t units, int64_t amount, const nsACString & description, nsISupports *data) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIMemoryReporterCallback, NS_IMEMORYREPORTERCALLBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIMEMORYREPORTERCALLBACK \
  NS_IMETHOD Callback(const nsACString & process, const nsACString & path, int32_t kind, int32_t units, int64_t amount, const nsACString & description, nsISupports *data) override; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIMEMORYREPORTERCALLBACK(_to) \
  NS_IMETHOD Callback(const nsACString & process, const nsACString & path, int32_t kind, int32_t units, int64_t amount, const nsACString & description, nsISupports *data) override { return _to Callback(process, path, kind, units, amount, description, data); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIMEMORYREPORTERCALLBACK(_to) \
  NS_IMETHOD Callback(const nsACString & process, const nsACString & path, int32_t kind, int32_t units, int64_t amount, const nsACString & description, nsISupports *data) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Callback(process, path, kind, units, amount, description, data); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsMemoryReporterCallback : public nsIMemoryReporterCallback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIMEMORYREPORTERCALLBACK

  nsMemoryReporterCallback();

private:
  ~nsMemoryReporterCallback();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsMemoryReporterCallback, nsIMemoryReporterCallback)

nsMemoryReporterCallback::nsMemoryReporterCallback()
{
  /* member initializers and constructor code */
}

nsMemoryReporterCallback::~nsMemoryReporterCallback()
{
  /* destructor code */
}

/* void callback (in ACString process, in AUTF8String path, in int32_t kind, in int32_t units, in int64_t amount, in AUTF8String description, in nsISupports data); */
NS_IMETHODIMP nsMemoryReporterCallback::Callback(const nsACString & process, const nsACString & path, int32_t kind, int32_t units, int64_t amount, const nsACString & description, nsISupports *data)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIMemoryReporter */
#define NS_IMEMORYREPORTER_IID_STR "92a36db1-46bd-4fe6-988e-47db47236d8b"

#define NS_IMEMORYREPORTER_IID \
  {0x92a36db1, 0x46bd, 0x4fe6, \
    { 0x98, 0x8e, 0x47, 0xdb, 0x47, 0x23, 0x6d, 0x8b }}

class NS_NO_VTABLE nsIMemoryReporter : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IMEMORYREPORTER_IID)

  /* void collectReports (in nsIMemoryReporterCallback callback, in nsISupports data, in boolean anonymize); */
  NS_IMETHOD CollectReports(nsIMemoryReporterCallback *callback, nsISupports *data, bool anonymize) = 0;

  enum {
    KIND_NONHEAP = 0,
    KIND_HEAP = 1,
    KIND_OTHER = 2,
    UNITS_BYTES = 0,
    UNITS_COUNT = 1,
    UNITS_COUNT_CUMULATIVE = 2,
    UNITS_PERCENTAGE = 3
  };

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIMemoryReporter, NS_IMEMORYREPORTER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIMEMORYREPORTER \
  NS_IMETHOD CollectReports(nsIMemoryReporterCallback *callback, nsISupports *data, bool anonymize) override; \

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIMEMORYREPORTER(_to) \
  NS_IMETHOD CollectReports(nsIMemoryReporterCallback *callback, nsISupports *data, bool anonymize) override { return _to CollectReports(callback, data, anonymize); } \

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIMEMORYREPORTER(_to) \
  NS_IMETHOD CollectReports(nsIMemoryReporterCallback *callback, nsISupports *data, bool anonymize) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CollectReports(callback, data, anonymize); } \

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsMemoryReporter : public nsIMemoryReporter
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIMEMORYREPORTER

  nsMemoryReporter();

private:
  ~nsMemoryReporter();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsMemoryReporter, nsIMemoryReporter)

nsMemoryReporter::nsMemoryReporter()
{
  /* member initializers and constructor code */
}

nsMemoryReporter::~nsMemoryReporter()
{
  /* destructor code */
}

/* void collectReports (in nsIMemoryReporterCallback callback, in nsISupports data, in boolean anonymize); */
NS_IMETHODIMP nsMemoryReporter::CollectReports(nsIMemoryReporterCallback *callback, nsISupports *data, bool anonymize)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIFinishReportingCallback */
#define NS_IFINISHREPORTINGCALLBACK_IID_STR "548b3909-c04d-4ca6-8466-b8bee3837457"

#define NS_IFINISHREPORTINGCALLBACK_IID \
  {0x548b3909, 0xc04d, 0x4ca6, \
    { 0x84, 0x66, 0xb8, 0xbe, 0xe3, 0x83, 0x74, 0x57 }}

class NS_NO_VTABLE nsIFinishReportingCallback : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IFINISHREPORTINGCALLBACK_IID)

  /* void callback (in nsISupports data); */
  NS_IMETHOD Callback(nsISupports *data) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIFinishReportingCallback, NS_IFINISHREPORTINGCALLBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIFINISHREPORTINGCALLBACK \
  NS_IMETHOD Callback(nsISupports *data) override; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIFINISHREPORTINGCALLBACK(_to) \
  NS_IMETHOD Callback(nsISupports *data) override { return _to Callback(data); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIFINISHREPORTINGCALLBACK(_to) \
  NS_IMETHOD Callback(nsISupports *data) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Callback(data); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsFinishReportingCallback : public nsIFinishReportingCallback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIFINISHREPORTINGCALLBACK

  nsFinishReportingCallback();

private:
  ~nsFinishReportingCallback();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsFinishReportingCallback, nsIFinishReportingCallback)

nsFinishReportingCallback::nsFinishReportingCallback()
{
  /* member initializers and constructor code */
}

nsFinishReportingCallback::~nsFinishReportingCallback()
{
  /* destructor code */
}

/* void callback (in nsISupports data); */
NS_IMETHODIMP nsFinishReportingCallback::Callback(nsISupports *data)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIMemoryReporterManager */
#define NS_IMEMORYREPORTERMANAGER_IID_STR "5e4eaa5a-4808-4b97-8005-e7cdc4d73693"

#define NS_IMEMORYREPORTERMANAGER_IID \
  {0x5e4eaa5a, 0x4808, 0x4b97, \
    { 0x80, 0x05, 0xe7, 0xcd, 0xc4, 0xd7, 0x36, 0x93 }}

class NS_NO_VTABLE nsIMemoryReporterManager : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IMEMORYREPORTERMANAGER_IID)

  /* void init (); */
  NS_IMETHOD Init(void) = 0;

  /* void registerStrongReporter (in nsIMemoryReporter reporter); */
  NS_IMETHOD RegisterStrongReporter(nsIMemoryReporter *reporter) = 0;

  /* void registerWeakReporter (in nsIMemoryReporter reporter); */
  NS_IMETHOD RegisterWeakReporter(nsIMemoryReporter *reporter) = 0;

  /* void unregisterStrongReporter (in nsIMemoryReporter reporter); */
  NS_IMETHOD UnregisterStrongReporter(nsIMemoryReporter *reporter) = 0;

  /* void unregisterWeakReporter (in nsIMemoryReporter reporter); */
  NS_IMETHOD UnregisterWeakReporter(nsIMemoryReporter *reporter) = 0;

  /* void blockRegistrationAndHideExistingReporters (); */
  NS_IMETHOD BlockRegistrationAndHideExistingReporters(void) = 0;

  /* void unblockRegistrationAndRestoreOriginalReporters (); */
  NS_IMETHOD UnblockRegistrationAndRestoreOriginalReporters(void) = 0;

  /* void registerStrongReporterEvenIfBlocked (in nsIMemoryReporter aReporter); */
  NS_IMETHOD RegisterStrongReporterEvenIfBlocked(nsIMemoryReporter *aReporter) = 0;

  /* void getReports (in nsIMemoryReporterCallback handleReport, in nsISupports handleReportData, in nsIFinishReportingCallback finishReporting, in nsISupports finishReportingData, in boolean anonymize); */
  NS_IMETHOD GetReports(nsIMemoryReporterCallback *handleReport, nsISupports *handleReportData, nsIFinishReportingCallback *finishReporting, nsISupports *finishReportingData, bool anonymize) = 0;

  /* [noscript] void getReportsExtended (in nsIMemoryReporterCallback handleReport, in nsISupports handleReportData, in nsIFinishReportingCallback finishReporting, in nsISupports finishReportingData, in boolean anonymize, in boolean minimizeMemoryUsage, in AString DMDDumpIdent); */
  NS_IMETHOD GetReportsExtended(nsIMemoryReporterCallback *handleReport, nsISupports *handleReportData, nsIFinishReportingCallback *finishReporting, nsISupports *finishReportingData, bool anonymize, bool minimizeMemoryUsage, const nsAString & DMDDumpIdent) = 0;

  /* void getReportsForThisProcess (in nsIMemoryReporterCallback handleReport, in nsISupports handleReportData, in boolean anonymize); */
  NS_IMETHOD GetReportsForThisProcess(nsIMemoryReporterCallback *handleReport, nsISupports *handleReportData, bool anonymize) = 0;

  /* [noscript] void getReportsForThisProcessExtended (in nsIMemoryReporterCallback handleReport, in nsISupports handleReportData, in boolean anonymize, in FILE DMDFile); */
  NS_IMETHOD GetReportsForThisProcessExtended(nsIMemoryReporterCallback *handleReport, nsISupports *handleReportData, bool anonymize, FILE *DMDFile) = 0;

  /* readonly attribute int64_t explicit; */
  NS_IMETHOD GetExplicit(int64_t *aExplicit) = 0;

  /* readonly attribute int64_t vsize; */
  NS_IMETHOD GetVsize(int64_t *aVsize) = 0;

  /* readonly attribute int64_t vsizeMaxContiguous; */
  NS_IMETHOD GetVsizeMaxContiguous(int64_t *aVsizeMaxContiguous) = 0;

  /* readonly attribute int64_t resident; */
  NS_IMETHOD GetResident(int64_t *aResident) = 0;

  /* readonly attribute int64_t residentFast; */
  NS_IMETHOD GetResidentFast(int64_t *aResidentFast) = 0;

  /* readonly attribute int64_t residentPeak; */
  NS_IMETHOD GetResidentPeak(int64_t *aResidentPeak) = 0;

  /* readonly attribute int64_t residentUnique; */
  NS_IMETHOD GetResidentUnique(int64_t *aResidentUnique) = 0;

  /* readonly attribute int64_t heapAllocated; */
  NS_IMETHOD GetHeapAllocated(int64_t *aHeapAllocated) = 0;

  /* readonly attribute int64_t heapOverheadRatio; */
  NS_IMETHOD GetHeapOverheadRatio(int64_t *aHeapOverheadRatio) = 0;

  /* readonly attribute int64_t JSMainRuntimeGCHeap; */
  NS_IMETHOD GetJSMainRuntimeGCHeap(int64_t *aJSMainRuntimeGCHeap) = 0;

  /* readonly attribute int64_t JSMainRuntimeTemporaryPeak; */
  NS_IMETHOD GetJSMainRuntimeTemporaryPeak(int64_t *aJSMainRuntimeTemporaryPeak) = 0;

  /* readonly attribute int64_t JSMainRuntimeCompartmentsSystem; */
  NS_IMETHOD GetJSMainRuntimeCompartmentsSystem(int64_t *aJSMainRuntimeCompartmentsSystem) = 0;

  /* readonly attribute int64_t JSMainRuntimeCompartmentsUser; */
  NS_IMETHOD GetJSMainRuntimeCompartmentsUser(int64_t *aJSMainRuntimeCompartmentsUser) = 0;

  /* readonly attribute int64_t imagesContentUsedUncompressed; */
  NS_IMETHOD GetImagesContentUsedUncompressed(int64_t *aImagesContentUsedUncompressed) = 0;

  /* readonly attribute int64_t storageSQLite; */
  NS_IMETHOD GetStorageSQLite(int64_t *aStorageSQLite) = 0;

  /* readonly attribute int64_t lowMemoryEventsVirtual; */
  NS_IMETHOD GetLowMemoryEventsVirtual(int64_t *aLowMemoryEventsVirtual) = 0;

  /* readonly attribute int64_t lowMemoryEventsPhysical; */
  NS_IMETHOD GetLowMemoryEventsPhysical(int64_t *aLowMemoryEventsPhysical) = 0;

  /* readonly attribute int64_t ghostWindows; */
  NS_IMETHOD GetGhostWindows(int64_t *aGhostWindows) = 0;

  /* readonly attribute int64_t pageFaultsHard; */
  NS_IMETHOD GetPageFaultsHard(int64_t *aPageFaultsHard) = 0;

  /* [infallible] readonly attribute boolean hasMozMallocUsableSize; */
  NS_IMETHOD GetHasMozMallocUsableSize(bool *aHasMozMallocUsableSize) = 0;
  inline bool GetHasMozMallocUsableSize()
  {
    bool result;
    mozilla::DebugOnly<nsresult> rv = GetHasMozMallocUsableSize(&result);
    MOZ_ASSERT(NS_SUCCEEDED(rv));
    return result;
  }

  /* [infallible] readonly attribute boolean isDMDEnabled; */
  NS_IMETHOD GetIsDMDEnabled(bool *aIsDMDEnabled) = 0;
  inline bool GetIsDMDEnabled()
  {
    bool result;
    mozilla::DebugOnly<nsresult> rv = GetIsDMDEnabled(&result);
    MOZ_ASSERT(NS_SUCCEEDED(rv));
    return result;
  }

  /* [infallible] readonly attribute boolean isDMDRunning; */
  NS_IMETHOD GetIsDMDRunning(bool *aIsDMDRunning) = 0;
  inline bool GetIsDMDRunning()
  {
    bool result;
    mozilla::DebugOnly<nsresult> rv = GetIsDMDRunning(&result);
    MOZ_ASSERT(NS_SUCCEEDED(rv));
    return result;
  }

  /* void minimizeMemoryUsage (in nsIRunnable callback); */
  NS_IMETHOD MinimizeMemoryUsage(nsIRunnable *callback) = 0;

  /* void sizeOfTab (in nsIDOMWindow window, out int64_t jsObjectsSize, out int64_t jsStringsSize, out int64_t jsOtherSize, out int64_t domSize, out int64_t styleSize, out int64_t otherSize, out int64_t totalSize, out double jsMilliseconds, out double nonJSMilliseconds); */
  NS_IMETHOD SizeOfTab(nsIDOMWindow *window, int64_t *jsObjectsSize, int64_t *jsStringsSize, int64_t *jsOtherSize, int64_t *domSize, int64_t *styleSize, int64_t *otherSize, int64_t *totalSize, double *jsMilliseconds, double *nonJSMilliseconds) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIMemoryReporterManager, NS_IMEMORYREPORTERMANAGER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIMEMORYREPORTERMANAGER \
  NS_IMETHOD Init(void) override; \
  NS_IMETHOD RegisterStrongReporter(nsIMemoryReporter *reporter) override; \
  NS_IMETHOD RegisterWeakReporter(nsIMemoryReporter *reporter) override; \
  NS_IMETHOD UnregisterStrongReporter(nsIMemoryReporter *reporter) override; \
  NS_IMETHOD UnregisterWeakReporter(nsIMemoryReporter *reporter) override; \
  NS_IMETHOD BlockRegistrationAndHideExistingReporters(void) override; \
  NS_IMETHOD UnblockRegistrationAndRestoreOriginalReporters(void) override; \
  NS_IMETHOD RegisterStrongReporterEvenIfBlocked(nsIMemoryReporter *aReporter) override; \
  NS_IMETHOD GetReports(nsIMemoryReporterCallback *handleReport, nsISupports *handleReportData, nsIFinishReportingCallback *finishReporting, nsISupports *finishReportingData, bool anonymize) override; \
  NS_IMETHOD GetReportsExtended(nsIMemoryReporterCallback *handleReport, nsISupports *handleReportData, nsIFinishReportingCallback *finishReporting, nsISupports *finishReportingData, bool anonymize, bool minimizeMemoryUsage, const nsAString & DMDDumpIdent) override; \
  NS_IMETHOD GetReportsForThisProcess(nsIMemoryReporterCallback *handleReport, nsISupports *handleReportData, bool anonymize) override; \
  NS_IMETHOD GetReportsForThisProcessExtended(nsIMemoryReporterCallback *handleReport, nsISupports *handleReportData, bool anonymize, FILE *DMDFile) override; \
  NS_IMETHOD GetExplicit(int64_t *aExplicit) override; \
  NS_IMETHOD GetVsize(int64_t *aVsize) override; \
  NS_IMETHOD GetVsizeMaxContiguous(int64_t *aVsizeMaxContiguous) override; \
  NS_IMETHOD GetResident(int64_t *aResident) override; \
  NS_IMETHOD GetResidentFast(int64_t *aResidentFast) override; \
  NS_IMETHOD GetResidentPeak(int64_t *aResidentPeak) override; \
  NS_IMETHOD GetResidentUnique(int64_t *aResidentUnique) override; \
  NS_IMETHOD GetHeapAllocated(int64_t *aHeapAllocated) override; \
  NS_IMETHOD GetHeapOverheadRatio(int64_t *aHeapOverheadRatio) override; \
  NS_IMETHOD GetJSMainRuntimeGCHeap(int64_t *aJSMainRuntimeGCHeap) override; \
  NS_IMETHOD GetJSMainRuntimeTemporaryPeak(int64_t *aJSMainRuntimeTemporaryPeak) override; \
  NS_IMETHOD GetJSMainRuntimeCompartmentsSystem(int64_t *aJSMainRuntimeCompartmentsSystem) override; \
  NS_IMETHOD GetJSMainRuntimeCompartmentsUser(int64_t *aJSMainRuntimeCompartmentsUser) override; \
  NS_IMETHOD GetImagesContentUsedUncompressed(int64_t *aImagesContentUsedUncompressed) override; \
  NS_IMETHOD GetStorageSQLite(int64_t *aStorageSQLite) override; \
  NS_IMETHOD GetLowMemoryEventsVirtual(int64_t *aLowMemoryEventsVirtual) override; \
  NS_IMETHOD GetLowMemoryEventsPhysical(int64_t *aLowMemoryEventsPhysical) override; \
  NS_IMETHOD GetGhostWindows(int64_t *aGhostWindows) override; \
  NS_IMETHOD GetPageFaultsHard(int64_t *aPageFaultsHard) override; \
  using nsIMemoryReporterManager::GetHasMozMallocUsableSize; \
  NS_IMETHOD GetHasMozMallocUsableSize(bool *aHasMozMallocUsableSize) override; \
  using nsIMemoryReporterManager::GetIsDMDEnabled; \
  NS_IMETHOD GetIsDMDEnabled(bool *aIsDMDEnabled) override; \
  using nsIMemoryReporterManager::GetIsDMDRunning; \
  NS_IMETHOD GetIsDMDRunning(bool *aIsDMDRunning) override; \
  NS_IMETHOD MinimizeMemoryUsage(nsIRunnable *callback) override; \
  NS_IMETHOD SizeOfTab(nsIDOMWindow *window, int64_t *jsObjectsSize, int64_t *jsStringsSize, int64_t *jsOtherSize, int64_t *domSize, int64_t *styleSize, int64_t *otherSize, int64_t *totalSize, double *jsMilliseconds, double *nonJSMilliseconds) override; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIMEMORYREPORTERMANAGER(_to) \
  NS_IMETHOD Init(void) override { return _to Init(); } \
  NS_IMETHOD RegisterStrongReporter(nsIMemoryReporter *reporter) override { return _to RegisterStrongReporter(reporter); } \
  NS_IMETHOD RegisterWeakReporter(nsIMemoryReporter *reporter) override { return _to RegisterWeakReporter(reporter); } \
  NS_IMETHOD UnregisterStrongReporter(nsIMemoryReporter *reporter) override { return _to UnregisterStrongReporter(reporter); } \
  NS_IMETHOD UnregisterWeakReporter(nsIMemoryReporter *reporter) override { return _to UnregisterWeakReporter(reporter); } \
  NS_IMETHOD BlockRegistrationAndHideExistingReporters(void) override { return _to BlockRegistrationAndHideExistingReporters(); } \
  NS_IMETHOD UnblockRegistrationAndRestoreOriginalReporters(void) override { return _to UnblockRegistrationAndRestoreOriginalReporters(); } \
  NS_IMETHOD RegisterStrongReporterEvenIfBlocked(nsIMemoryReporter *aReporter) override { return _to RegisterStrongReporterEvenIfBlocked(aReporter); } \
  NS_IMETHOD GetReports(nsIMemoryReporterCallback *handleReport, nsISupports *handleReportData, nsIFinishReportingCallback *finishReporting, nsISupports *finishReportingData, bool anonymize) override { return _to GetReports(handleReport, handleReportData, finishReporting, finishReportingData, anonymize); } \
  NS_IMETHOD GetReportsExtended(nsIMemoryReporterCallback *handleReport, nsISupports *handleReportData, nsIFinishReportingCallback *finishReporting, nsISupports *finishReportingData, bool anonymize, bool minimizeMemoryUsage, const nsAString & DMDDumpIdent) override { return _to GetReportsExtended(handleReport, handleReportData, finishReporting, finishReportingData, anonymize, minimizeMemoryUsage, DMDDumpIdent); } \
  NS_IMETHOD GetReportsForThisProcess(nsIMemoryReporterCallback *handleReport, nsISupports *handleReportData, bool anonymize) override { return _to GetReportsForThisProcess(handleReport, handleReportData, anonymize); } \
  NS_IMETHOD GetReportsForThisProcessExtended(nsIMemoryReporterCallback *handleReport, nsISupports *handleReportData, bool anonymize, FILE *DMDFile) override { return _to GetReportsForThisProcessExtended(handleReport, handleReportData, anonymize, DMDFile); } \
  NS_IMETHOD GetExplicit(int64_t *aExplicit) override { return _to GetExplicit(aExplicit); } \
  NS_IMETHOD GetVsize(int64_t *aVsize) override { return _to GetVsize(aVsize); } \
  NS_IMETHOD GetVsizeMaxContiguous(int64_t *aVsizeMaxContiguous) override { return _to GetVsizeMaxContiguous(aVsizeMaxContiguous); } \
  NS_IMETHOD GetResident(int64_t *aResident) override { return _to GetResident(aResident); } \
  NS_IMETHOD GetResidentFast(int64_t *aResidentFast) override { return _to GetResidentFast(aResidentFast); } \
  NS_IMETHOD GetResidentPeak(int64_t *aResidentPeak) override { return _to GetResidentPeak(aResidentPeak); } \
  NS_IMETHOD GetResidentUnique(int64_t *aResidentUnique) override { return _to GetResidentUnique(aResidentUnique); } \
  NS_IMETHOD GetHeapAllocated(int64_t *aHeapAllocated) override { return _to GetHeapAllocated(aHeapAllocated); } \
  NS_IMETHOD GetHeapOverheadRatio(int64_t *aHeapOverheadRatio) override { return _to GetHeapOverheadRatio(aHeapOverheadRatio); } \
  NS_IMETHOD GetJSMainRuntimeGCHeap(int64_t *aJSMainRuntimeGCHeap) override { return _to GetJSMainRuntimeGCHeap(aJSMainRuntimeGCHeap); } \
  NS_IMETHOD GetJSMainRuntimeTemporaryPeak(int64_t *aJSMainRuntimeTemporaryPeak) override { return _to GetJSMainRuntimeTemporaryPeak(aJSMainRuntimeTemporaryPeak); } \
  NS_IMETHOD GetJSMainRuntimeCompartmentsSystem(int64_t *aJSMainRuntimeCompartmentsSystem) override { return _to GetJSMainRuntimeCompartmentsSystem(aJSMainRuntimeCompartmentsSystem); } \
  NS_IMETHOD GetJSMainRuntimeCompartmentsUser(int64_t *aJSMainRuntimeCompartmentsUser) override { return _to GetJSMainRuntimeCompartmentsUser(aJSMainRuntimeCompartmentsUser); } \
  NS_IMETHOD GetImagesContentUsedUncompressed(int64_t *aImagesContentUsedUncompressed) override { return _to GetImagesContentUsedUncompressed(aImagesContentUsedUncompressed); } \
  NS_IMETHOD GetStorageSQLite(int64_t *aStorageSQLite) override { return _to GetStorageSQLite(aStorageSQLite); } \
  NS_IMETHOD GetLowMemoryEventsVirtual(int64_t *aLowMemoryEventsVirtual) override { return _to GetLowMemoryEventsVirtual(aLowMemoryEventsVirtual); } \
  NS_IMETHOD GetLowMemoryEventsPhysical(int64_t *aLowMemoryEventsPhysical) override { return _to GetLowMemoryEventsPhysical(aLowMemoryEventsPhysical); } \
  NS_IMETHOD GetGhostWindows(int64_t *aGhostWindows) override { return _to GetGhostWindows(aGhostWindows); } \
  NS_IMETHOD GetPageFaultsHard(int64_t *aPageFaultsHard) override { return _to GetPageFaultsHard(aPageFaultsHard); } \
  using nsIMemoryReporterManager::GetHasMozMallocUsableSize; \
  NS_IMETHOD GetHasMozMallocUsableSize(bool *aHasMozMallocUsableSize) override { return _to GetHasMozMallocUsableSize(aHasMozMallocUsableSize); } \
  using nsIMemoryReporterManager::GetIsDMDEnabled; \
  NS_IMETHOD GetIsDMDEnabled(bool *aIsDMDEnabled) override { return _to GetIsDMDEnabled(aIsDMDEnabled); } \
  using nsIMemoryReporterManager::GetIsDMDRunning; \
  NS_IMETHOD GetIsDMDRunning(bool *aIsDMDRunning) override { return _to GetIsDMDRunning(aIsDMDRunning); } \
  NS_IMETHOD MinimizeMemoryUsage(nsIRunnable *callback) override { return _to MinimizeMemoryUsage(callback); } \
  NS_IMETHOD SizeOfTab(nsIDOMWindow *window, int64_t *jsObjectsSize, int64_t *jsStringsSize, int64_t *jsOtherSize, int64_t *domSize, int64_t *styleSize, int64_t *otherSize, int64_t *totalSize, double *jsMilliseconds, double *nonJSMilliseconds) override { return _to SizeOfTab(window, jsObjectsSize, jsStringsSize, jsOtherSize, domSize, styleSize, otherSize, totalSize, jsMilliseconds, nonJSMilliseconds); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIMEMORYREPORTERMANAGER(_to) \
  NS_IMETHOD Init(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(); } \
  NS_IMETHOD RegisterStrongReporter(nsIMemoryReporter *reporter) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RegisterStrongReporter(reporter); } \
  NS_IMETHOD RegisterWeakReporter(nsIMemoryReporter *reporter) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RegisterWeakReporter(reporter); } \
  NS_IMETHOD UnregisterStrongReporter(nsIMemoryReporter *reporter) override { return !_to ? NS_ERROR_NULL_POINTER : _to->UnregisterStrongReporter(reporter); } \
  NS_IMETHOD UnregisterWeakReporter(nsIMemoryReporter *reporter) override { return !_to ? NS_ERROR_NULL_POINTER : _to->UnregisterWeakReporter(reporter); } \
  NS_IMETHOD BlockRegistrationAndHideExistingReporters(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->BlockRegistrationAndHideExistingReporters(); } \
  NS_IMETHOD UnblockRegistrationAndRestoreOriginalReporters(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->UnblockRegistrationAndRestoreOriginalReporters(); } \
  NS_IMETHOD RegisterStrongReporterEvenIfBlocked(nsIMemoryReporter *aReporter) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RegisterStrongReporterEvenIfBlocked(aReporter); } \
  NS_IMETHOD GetReports(nsIMemoryReporterCallback *handleReport, nsISupports *handleReportData, nsIFinishReportingCallback *finishReporting, nsISupports *finishReportingData, bool anonymize) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReports(handleReport, handleReportData, finishReporting, finishReportingData, anonymize); } \
  NS_IMETHOD GetReportsExtended(nsIMemoryReporterCallback *handleReport, nsISupports *handleReportData, nsIFinishReportingCallback *finishReporting, nsISupports *finishReportingData, bool anonymize, bool minimizeMemoryUsage, const nsAString & DMDDumpIdent) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReportsExtended(handleReport, handleReportData, finishReporting, finishReportingData, anonymize, minimizeMemoryUsage, DMDDumpIdent); } \
  NS_IMETHOD GetReportsForThisProcess(nsIMemoryReporterCallback *handleReport, nsISupports *handleReportData, bool anonymize) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReportsForThisProcess(handleReport, handleReportData, anonymize); } \
  NS_IMETHOD GetReportsForThisProcessExtended(nsIMemoryReporterCallback *handleReport, nsISupports *handleReportData, bool anonymize, FILE *DMDFile) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReportsForThisProcessExtended(handleReport, handleReportData, anonymize, DMDFile); } \
  NS_IMETHOD GetExplicit(int64_t *aExplicit) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetExplicit(aExplicit); } \
  NS_IMETHOD GetVsize(int64_t *aVsize) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVsize(aVsize); } \
  NS_IMETHOD GetVsizeMaxContiguous(int64_t *aVsizeMaxContiguous) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVsizeMaxContiguous(aVsizeMaxContiguous); } \
  NS_IMETHOD GetResident(int64_t *aResident) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResident(aResident); } \
  NS_IMETHOD GetResidentFast(int64_t *aResidentFast) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResidentFast(aResidentFast); } \
  NS_IMETHOD GetResidentPeak(int64_t *aResidentPeak) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResidentPeak(aResidentPeak); } \
  NS_IMETHOD GetResidentUnique(int64_t *aResidentUnique) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResidentUnique(aResidentUnique); } \
  NS_IMETHOD GetHeapAllocated(int64_t *aHeapAllocated) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHeapAllocated(aHeapAllocated); } \
  NS_IMETHOD GetHeapOverheadRatio(int64_t *aHeapOverheadRatio) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHeapOverheadRatio(aHeapOverheadRatio); } \
  NS_IMETHOD GetJSMainRuntimeGCHeap(int64_t *aJSMainRuntimeGCHeap) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJSMainRuntimeGCHeap(aJSMainRuntimeGCHeap); } \
  NS_IMETHOD GetJSMainRuntimeTemporaryPeak(int64_t *aJSMainRuntimeTemporaryPeak) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJSMainRuntimeTemporaryPeak(aJSMainRuntimeTemporaryPeak); } \
  NS_IMETHOD GetJSMainRuntimeCompartmentsSystem(int64_t *aJSMainRuntimeCompartmentsSystem) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJSMainRuntimeCompartmentsSystem(aJSMainRuntimeCompartmentsSystem); } \
  NS_IMETHOD GetJSMainRuntimeCompartmentsUser(int64_t *aJSMainRuntimeCompartmentsUser) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJSMainRuntimeCompartmentsUser(aJSMainRuntimeCompartmentsUser); } \
  NS_IMETHOD GetImagesContentUsedUncompressed(int64_t *aImagesContentUsedUncompressed) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetImagesContentUsedUncompressed(aImagesContentUsedUncompressed); } \
  NS_IMETHOD GetStorageSQLite(int64_t *aStorageSQLite) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStorageSQLite(aStorageSQLite); } \
  NS_IMETHOD GetLowMemoryEventsVirtual(int64_t *aLowMemoryEventsVirtual) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLowMemoryEventsVirtual(aLowMemoryEventsVirtual); } \
  NS_IMETHOD GetLowMemoryEventsPhysical(int64_t *aLowMemoryEventsPhysical) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLowMemoryEventsPhysical(aLowMemoryEventsPhysical); } \
  NS_IMETHOD GetGhostWindows(int64_t *aGhostWindows) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetGhostWindows(aGhostWindows); } \
  NS_IMETHOD GetPageFaultsHard(int64_t *aPageFaultsHard) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPageFaultsHard(aPageFaultsHard); } \
  NS_IMETHOD GetHasMozMallocUsableSize(bool *aHasMozMallocUsableSize) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHasMozMallocUsableSize(aHasMozMallocUsableSize); } \
  NS_IMETHOD GetIsDMDEnabled(bool *aIsDMDEnabled) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsDMDEnabled(aIsDMDEnabled); } \
  NS_IMETHOD GetIsDMDRunning(bool *aIsDMDRunning) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsDMDRunning(aIsDMDRunning); } \
  NS_IMETHOD MinimizeMemoryUsage(nsIRunnable *callback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->MinimizeMemoryUsage(callback); } \
  NS_IMETHOD SizeOfTab(nsIDOMWindow *window, int64_t *jsObjectsSize, int64_t *jsStringsSize, int64_t *jsOtherSize, int64_t *domSize, int64_t *styleSize, int64_t *otherSize, int64_t *totalSize, double *jsMilliseconds, double *nonJSMilliseconds) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SizeOfTab(window, jsObjectsSize, jsStringsSize, jsOtherSize, domSize, styleSize, otherSize, totalSize, jsMilliseconds, nonJSMilliseconds); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsMemoryReporterManager : public nsIMemoryReporterManager
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIMEMORYREPORTERMANAGER

  nsMemoryReporterManager();

private:
  ~nsMemoryReporterManager();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsMemoryReporterManager, nsIMemoryReporterManager)

nsMemoryReporterManager::nsMemoryReporterManager()
{
  /* member initializers and constructor code */
}

nsMemoryReporterManager::~nsMemoryReporterManager()
{
  /* destructor code */
}

/* void init (); */
NS_IMETHODIMP nsMemoryReporterManager::Init()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void registerStrongReporter (in nsIMemoryReporter reporter); */
NS_IMETHODIMP nsMemoryReporterManager::RegisterStrongReporter(nsIMemoryReporter *reporter)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void registerWeakReporter (in nsIMemoryReporter reporter); */
NS_IMETHODIMP nsMemoryReporterManager::RegisterWeakReporter(nsIMemoryReporter *reporter)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void unregisterStrongReporter (in nsIMemoryReporter reporter); */
NS_IMETHODIMP nsMemoryReporterManager::UnregisterStrongReporter(nsIMemoryReporter *reporter)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void unregisterWeakReporter (in nsIMemoryReporter reporter); */
NS_IMETHODIMP nsMemoryReporterManager::UnregisterWeakReporter(nsIMemoryReporter *reporter)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void blockRegistrationAndHideExistingReporters (); */
NS_IMETHODIMP nsMemoryReporterManager::BlockRegistrationAndHideExistingReporters()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void unblockRegistrationAndRestoreOriginalReporters (); */
NS_IMETHODIMP nsMemoryReporterManager::UnblockRegistrationAndRestoreOriginalReporters()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void registerStrongReporterEvenIfBlocked (in nsIMemoryReporter aReporter); */
NS_IMETHODIMP nsMemoryReporterManager::RegisterStrongReporterEvenIfBlocked(nsIMemoryReporter *aReporter)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getReports (in nsIMemoryReporterCallback handleReport, in nsISupports handleReportData, in nsIFinishReportingCallback finishReporting, in nsISupports finishReportingData, in boolean anonymize); */
NS_IMETHODIMP nsMemoryReporterManager::GetReports(nsIMemoryReporterCallback *handleReport, nsISupports *handleReportData, nsIFinishReportingCallback *finishReporting, nsISupports *finishReportingData, bool anonymize)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void getReportsExtended (in nsIMemoryReporterCallback handleReport, in nsISupports handleReportData, in nsIFinishReportingCallback finishReporting, in nsISupports finishReportingData, in boolean anonymize, in boolean minimizeMemoryUsage, in AString DMDDumpIdent); */
NS_IMETHODIMP nsMemoryReporterManager::GetReportsExtended(nsIMemoryReporterCallback *handleReport, nsISupports *handleReportData, nsIFinishReportingCallback *finishReporting, nsISupports *finishReportingData, bool anonymize, bool minimizeMemoryUsage, const nsAString & DMDDumpIdent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getReportsForThisProcess (in nsIMemoryReporterCallback handleReport, in nsISupports handleReportData, in boolean anonymize); */
NS_IMETHODIMP nsMemoryReporterManager::GetReportsForThisProcess(nsIMemoryReporterCallback *handleReport, nsISupports *handleReportData, bool anonymize)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void getReportsForThisProcessExtended (in nsIMemoryReporterCallback handleReport, in nsISupports handleReportData, in boolean anonymize, in FILE DMDFile); */
NS_IMETHODIMP nsMemoryReporterManager::GetReportsForThisProcessExtended(nsIMemoryReporterCallback *handleReport, nsISupports *handleReportData, bool anonymize, FILE *DMDFile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute int64_t explicit; */
NS_IMETHODIMP nsMemoryReporterManager::GetExplicit(int64_t *aExplicit)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute int64_t vsize; */
NS_IMETHODIMP nsMemoryReporterManager::GetVsize(int64_t *aVsize)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute int64_t vsizeMaxContiguous; */
NS_IMETHODIMP nsMemoryReporterManager::GetVsizeMaxContiguous(int64_t *aVsizeMaxContiguous)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute int64_t resident; */
NS_IMETHODIMP nsMemoryReporterManager::GetResident(int64_t *aResident)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute int64_t residentFast; */
NS_IMETHODIMP nsMemoryReporterManager::GetResidentFast(int64_t *aResidentFast)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute int64_t residentPeak; */
NS_IMETHODIMP nsMemoryReporterManager::GetResidentPeak(int64_t *aResidentPeak)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute int64_t residentUnique; */
NS_IMETHODIMP nsMemoryReporterManager::GetResidentUnique(int64_t *aResidentUnique)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute int64_t heapAllocated; */
NS_IMETHODIMP nsMemoryReporterManager::GetHeapAllocated(int64_t *aHeapAllocated)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute int64_t heapOverheadRatio; */
NS_IMETHODIMP nsMemoryReporterManager::GetHeapOverheadRatio(int64_t *aHeapOverheadRatio)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute int64_t JSMainRuntimeGCHeap; */
NS_IMETHODIMP nsMemoryReporterManager::GetJSMainRuntimeGCHeap(int64_t *aJSMainRuntimeGCHeap)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute int64_t JSMainRuntimeTemporaryPeak; */
NS_IMETHODIMP nsMemoryReporterManager::GetJSMainRuntimeTemporaryPeak(int64_t *aJSMainRuntimeTemporaryPeak)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute int64_t JSMainRuntimeCompartmentsSystem; */
NS_IMETHODIMP nsMemoryReporterManager::GetJSMainRuntimeCompartmentsSystem(int64_t *aJSMainRuntimeCompartmentsSystem)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute int64_t JSMainRuntimeCompartmentsUser; */
NS_IMETHODIMP nsMemoryReporterManager::GetJSMainRuntimeCompartmentsUser(int64_t *aJSMainRuntimeCompartmentsUser)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute int64_t imagesContentUsedUncompressed; */
NS_IMETHODIMP nsMemoryReporterManager::GetImagesContentUsedUncompressed(int64_t *aImagesContentUsedUncompressed)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute int64_t storageSQLite; */
NS_IMETHODIMP nsMemoryReporterManager::GetStorageSQLite(int64_t *aStorageSQLite)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute int64_t lowMemoryEventsVirtual; */
NS_IMETHODIMP nsMemoryReporterManager::GetLowMemoryEventsVirtual(int64_t *aLowMemoryEventsVirtual)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute int64_t lowMemoryEventsPhysical; */
NS_IMETHODIMP nsMemoryReporterManager::GetLowMemoryEventsPhysical(int64_t *aLowMemoryEventsPhysical)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute int64_t ghostWindows; */
NS_IMETHODIMP nsMemoryReporterManager::GetGhostWindows(int64_t *aGhostWindows)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute int64_t pageFaultsHard; */
NS_IMETHODIMP nsMemoryReporterManager::GetPageFaultsHard(int64_t *aPageFaultsHard)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [infallible] readonly attribute boolean hasMozMallocUsableSize; */
NS_IMETHODIMP nsMemoryReporterManager::GetHasMozMallocUsableSize(bool *aHasMozMallocUsableSize)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [infallible] readonly attribute boolean isDMDEnabled; */
NS_IMETHODIMP nsMemoryReporterManager::GetIsDMDEnabled(bool *aIsDMDEnabled)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [infallible] readonly attribute boolean isDMDRunning; */
NS_IMETHODIMP nsMemoryReporterManager::GetIsDMDRunning(bool *aIsDMDRunning)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void minimizeMemoryUsage (in nsIRunnable callback); */
NS_IMETHODIMP nsMemoryReporterManager::MinimizeMemoryUsage(nsIRunnable *callback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void sizeOfTab (in nsIDOMWindow window, out int64_t jsObjectsSize, out int64_t jsStringsSize, out int64_t jsOtherSize, out int64_t domSize, out int64_t styleSize, out int64_t otherSize, out int64_t totalSize, out double jsMilliseconds, out double nonJSMilliseconds); */
NS_IMETHODIMP nsMemoryReporterManager::SizeOfTab(nsIDOMWindow *window, int64_t *jsObjectsSize, int64_t *jsStringsSize, int64_t *jsOtherSize, int64_t *domSize, int64_t *styleSize, int64_t *otherSize, int64_t *totalSize, double *jsMilliseconds, double *nonJSMilliseconds)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#include "js/TypeDecls.h"
#include "nsStringGlue.h"
#include "nsTArray.h"
class nsPIDOMWindow;
// nsIHandleReportCallback is a better name, but keep nsIMemoryReporterCallback
// around for backwards compatibility.
typedef nsIMemoryReporterCallback nsIHandleReportCallback;
namespace mozilla {
// Register a memory reporter.  The manager service will hold a strong
// reference to this reporter.
XPCOM_API(nsresult) RegisterStrongMemoryReporter(nsIMemoryReporter* aReporter);
// Register a memory reporter.  The manager service will hold a weak reference
// to this reporter.
XPCOM_API(nsresult) RegisterWeakMemoryReporter(nsIMemoryReporter* aReporter);
// Unregister a weak memory reporter.
XPCOM_API(nsresult) UnregisterWeakMemoryReporter(nsIMemoryReporter* aReporter);
// The memory reporter manager provides access to several distinguished
// amounts via attributes.  Some of these amounts are provided by Gecko
// components that cannot be accessed directly from XPCOM code.  So we provide
// the following functions for those components to be registered with the
// manager.
typedef int64_t (*InfallibleAmountFn)();
typedef nsresult (*FallibleAmountFn)(int64_t* aAmount);
#define DECL_REGISTER_DISTINGUISHED_AMOUNT(kind, name) \
    nsresult Register##name##DistinguishedAmount(kind##AmountFn aAmountFn);
#define DECL_UNREGISTER_DISTINGUISHED_AMOUNT(name) \
    nsresult Unregister##name##DistinguishedAmount();
DECL_REGISTER_DISTINGUISHED_AMOUNT(Infallible, JSMainRuntimeGCHeap)
DECL_REGISTER_DISTINGUISHED_AMOUNT(Infallible, JSMainRuntimeTemporaryPeak)
DECL_REGISTER_DISTINGUISHED_AMOUNT(Infallible, JSMainRuntimeCompartmentsSystem)
DECL_REGISTER_DISTINGUISHED_AMOUNT(Infallible, JSMainRuntimeCompartmentsUser)
DECL_REGISTER_DISTINGUISHED_AMOUNT(Infallible, ImagesContentUsedUncompressed)
DECL_REGISTER_DISTINGUISHED_AMOUNT(Infallible, StorageSQLite)
DECL_UNREGISTER_DISTINGUISHED_AMOUNT(StorageSQLite)
DECL_REGISTER_DISTINGUISHED_AMOUNT(Infallible, LowMemoryEventsVirtual)
DECL_REGISTER_DISTINGUISHED_AMOUNT(Infallible, LowMemoryEventsPhysical)
DECL_REGISTER_DISTINGUISHED_AMOUNT(Infallible, GhostWindows)
#undef DECL_REGISTER_DISTINGUISHED_AMOUNT
#undef DECL_UNREGISTER_DISTINGUISHED_AMOUNT
// Likewise for per-tab measurement.
typedef nsresult (*JSSizeOfTabFn)(JSObject* aObj,
                                  size_t* aJsObjectsSize,
                                  size_t* aJsStringSize,
                                  size_t* aJsPrivateSize,
                                  size_t* aJsOtherSize);
typedef nsresult (*NonJSSizeOfTabFn)(nsPIDOMWindow* aWindow,
                                     size_t* aDomSize,
                                     size_t* aStyleSize,
                                     size_t* aOtherSize);
nsresult RegisterJSSizeOfTab(JSSizeOfTabFn aSizeOfTabFn);
nsresult RegisterNonJSSizeOfTab(NonJSSizeOfTabFn aSizeOfTabFn);
}
#if defined(MOZ_DMD) && !defined(MOZILLA_XPCOMRT_API)
namespace mozilla {
namespace dmd {
// This runs all the memory reporters in the current process but does nothing
// with the results;  i.e. it does the minimal amount of work possible for DMD
// to do its thing.  It does nothing with child processes.
void RunReportersForThisProcess();
}
}
#if !defined(MOZ_MEMORY)
#error "MOZ_DMD requires MOZ_MEMORY"
#endif
#include "DMD.h"
#define MOZ_REPORT(ptr)          mozilla::dmd::Report(ptr)
#define MOZ_REPORT_ON_ALLOC(ptr) mozilla::dmd::ReportOnAlloc(ptr)
#else
#define MOZ_REPORT(ptr)
#define MOZ_REPORT_ON_ALLOC(ptr)
#endif  // defined(MOZ_DMD)
// Functions generated via this macro should be used by all traversal-based
// memory reporters.  Such functions return |moz_malloc_size_of(ptr)|;  this
// will always be zero on some obscure platforms.
//
// You might be wondering why we have a macro that creates multiple functions
// that differ only in their name, instead of a single MallocSizeOf function.
// It's mostly to help with DMD integration, though it sometimes also helps
// with debugging and temporary ad hoc profiling.  The function name chosen
// doesn't matter greatly, but it's best to make it similar to the path used by
// the relevant memory reporter(s).
#define MOZ_DEFINE_MALLOC_SIZE_OF(fn)                                         \
  static size_t fn(const void* aPtr)                                          \
  {                                                                           \
      MOZ_REPORT(aPtr);                                                       \
      return moz_malloc_size_of(aPtr);                                        \
  }
// Functions generated by the next two macros should be used by wrapping
// allocators that report heap blocks as soon as they are allocated and
// unreport them as soon as they are freed.  Such allocators are used in cases
// where we have third-party code that we cannot modify.  The two functions
// must always be used in tandem.
#define MOZ_DEFINE_MALLOC_SIZE_OF_ON_ALLOC(fn)                                \
  static size_t fn(const void* aPtr)                                          \
  {                                                                           \
      MOZ_REPORT_ON_ALLOC(aPtr);                                              \
      return moz_malloc_size_of(aPtr);                                        \
  }
#define MOZ_DEFINE_MALLOC_SIZE_OF_ON_FREE(fn)                                 \
  static size_t fn(const void* aPtr)                                          \
  {                                                                           \
      return moz_malloc_size_of(aPtr);                                        \
  }
// This macro assumes the presence of appropriate |aHandleReport| and |aData|
// variables.
#define MOZ_COLLECT_REPORT(path, kind, units, amount, description)            \
  aHandleReport->Callback(EmptyCString(), NS_LITERAL_CSTRING(path),           \
                          kind, units, amount,                                \
                          NS_LITERAL_CSTRING(description), aData)

#endif /* __gen_nsIMemoryReporter_h__ */
