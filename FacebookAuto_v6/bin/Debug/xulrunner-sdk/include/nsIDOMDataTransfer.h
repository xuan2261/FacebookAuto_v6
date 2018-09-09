/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIDOMDataTransfer.idl
 */

#ifndef __gen_nsIDOMDataTransfer_h__
#define __gen_nsIDOMDataTransfer_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIVariant; /* forward declaration */

class nsIDOMFileList; /* forward declaration */


/* starting interface:    nsIDOMDataTransfer */
#define NS_IDOMDATATRANSFER_IID_STR "c71180e3-298b-4fbb-9ccb-82c822474741"

#define NS_IDOMDATATRANSFER_IID \
  {0xc71180e3, 0x298b, 0x4fbb, \
    { 0x9c, 0xcb, 0x82, 0xc8, 0x22, 0x47, 0x47, 0x41 }}

class NS_NO_VTABLE nsIDOMDataTransfer : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMDATATRANSFER_IID)

  /* attribute DOMString dropEffect; */
  NS_IMETHOD GetDropEffect(nsAString & aDropEffect) = 0;
  NS_IMETHOD SetDropEffect(const nsAString & aDropEffect) = 0;

  /* attribute DOMString effectAllowed; */
  NS_IMETHOD GetEffectAllowed(nsAString & aEffectAllowed) = 0;
  NS_IMETHOD SetEffectAllowed(const nsAString & aEffectAllowed) = 0;

  /* readonly attribute nsIDOMFileList files; */
  NS_IMETHOD GetFiles(nsIDOMFileList * *aFiles) = 0;

  /* readonly attribute nsISupports types; */
  NS_IMETHOD GetTypes(nsISupports * *aTypes) = 0;

  /* void clearData ([optional] in DOMString format); */
  NS_IMETHOD ClearData(const nsAString & format) = 0;

  /* void setData (in DOMString format, in DOMString data); */
  NS_IMETHOD SetData(const nsAString & format, const nsAString & data) = 0;

  /* DOMString getData (in DOMString format); */
  NS_IMETHOD GetData(const nsAString & format, nsAString & _retval) = 0;

  /* void setDragImage (in nsIDOMElement image, in long x, in long y); */
  NS_IMETHOD SetDragImage(nsIDOMElement *image, int32_t x, int32_t y) = 0;

  /* void addElement (in nsIDOMElement element); */
  NS_IMETHOD AddElement(nsIDOMElement *element) = 0;

  /* readonly attribute unsigned long mozItemCount; */
  NS_IMETHOD GetMozItemCount(uint32_t *aMozItemCount) = 0;

  /* attribute DOMString mozCursor; */
  NS_IMETHOD GetMozCursor(nsAString & aMozCursor) = 0;
  NS_IMETHOD SetMozCursor(const nsAString & aMozCursor) = 0;

  /* nsISupports mozTypesAt (in unsigned long index); */
  NS_IMETHOD MozTypesAt(uint32_t index, nsISupports * *_retval) = 0;

  /* void mozClearDataAt (in DOMString format, in unsigned long index); */
  NS_IMETHOD MozClearDataAt(const nsAString & format, uint32_t index) = 0;

  /* void mozSetDataAt (in DOMString format, in nsIVariant data, in unsigned long index); */
  NS_IMETHOD MozSetDataAt(const nsAString & format, nsIVariant *data, uint32_t index) = 0;

  /* nsIVariant mozGetDataAt (in DOMString format, in unsigned long index); */
  NS_IMETHOD MozGetDataAt(const nsAString & format, uint32_t index, nsIVariant * *_retval) = 0;

  /* readonly attribute boolean mozUserCancelled; */
  NS_IMETHOD GetMozUserCancelled(bool *aMozUserCancelled) = 0;

  /* readonly attribute nsIDOMNode mozSourceNode; */
  NS_IMETHOD GetMozSourceNode(nsIDOMNode * *aMozSourceNode) = 0;

  /* [noscript] attribute unsigned long dropEffectInt; */
  NS_IMETHOD GetDropEffectInt(uint32_t *aDropEffectInt) = 0;
  NS_IMETHOD SetDropEffectInt(uint32_t aDropEffectInt) = 0;

  /* [noscript] attribute unsigned long effectAllowedInt; */
  NS_IMETHOD GetEffectAllowedInt(uint32_t *aEffectAllowedInt) = 0;
  NS_IMETHOD SetEffectAllowedInt(uint32_t aEffectAllowedInt) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMDataTransfer, NS_IDOMDATATRANSFER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMDATATRANSFER \
  NS_IMETHOD GetDropEffect(nsAString & aDropEffect) override; \
  NS_IMETHOD SetDropEffect(const nsAString & aDropEffect) override; \
  NS_IMETHOD GetEffectAllowed(nsAString & aEffectAllowed) override; \
  NS_IMETHOD SetEffectAllowed(const nsAString & aEffectAllowed) override; \
  NS_IMETHOD GetFiles(nsIDOMFileList * *aFiles) override; \
  NS_IMETHOD GetTypes(nsISupports * *aTypes) override; \
  NS_IMETHOD ClearData(const nsAString & format) override; \
  NS_IMETHOD SetData(const nsAString & format, const nsAString & data) override; \
  NS_IMETHOD GetData(const nsAString & format, nsAString & _retval) override; \
  NS_IMETHOD SetDragImage(nsIDOMElement *image, int32_t x, int32_t y) override; \
  NS_IMETHOD AddElement(nsIDOMElement *element) override; \
  NS_IMETHOD GetMozItemCount(uint32_t *aMozItemCount) override; \
  NS_IMETHOD GetMozCursor(nsAString & aMozCursor) override; \
  NS_IMETHOD SetMozCursor(const nsAString & aMozCursor) override; \
  NS_IMETHOD MozTypesAt(uint32_t index, nsISupports * *_retval) override; \
  NS_IMETHOD MozClearDataAt(const nsAString & format, uint32_t index) override; \
  NS_IMETHOD MozSetDataAt(const nsAString & format, nsIVariant *data, uint32_t index) override; \
  NS_IMETHOD MozGetDataAt(const nsAString & format, uint32_t index, nsIVariant * *_retval) override; \
  NS_IMETHOD GetMozUserCancelled(bool *aMozUserCancelled) override; \
  NS_IMETHOD GetMozSourceNode(nsIDOMNode * *aMozSourceNode) override; \
  NS_IMETHOD GetDropEffectInt(uint32_t *aDropEffectInt) override; \
  NS_IMETHOD SetDropEffectInt(uint32_t aDropEffectInt) override; \
  NS_IMETHOD GetEffectAllowedInt(uint32_t *aEffectAllowedInt) override; \
  NS_IMETHOD SetEffectAllowedInt(uint32_t aEffectAllowedInt) override; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMDATATRANSFER(_to) \
  NS_IMETHOD GetDropEffect(nsAString & aDropEffect) override { return _to GetDropEffect(aDropEffect); } \
  NS_IMETHOD SetDropEffect(const nsAString & aDropEffect) override { return _to SetDropEffect(aDropEffect); } \
  NS_IMETHOD GetEffectAllowed(nsAString & aEffectAllowed) override { return _to GetEffectAllowed(aEffectAllowed); } \
  NS_IMETHOD SetEffectAllowed(const nsAString & aEffectAllowed) override { return _to SetEffectAllowed(aEffectAllowed); } \
  NS_IMETHOD GetFiles(nsIDOMFileList * *aFiles) override { return _to GetFiles(aFiles); } \
  NS_IMETHOD GetTypes(nsISupports * *aTypes) override { return _to GetTypes(aTypes); } \
  NS_IMETHOD ClearData(const nsAString & format) override { return _to ClearData(format); } \
  NS_IMETHOD SetData(const nsAString & format, const nsAString & data) override { return _to SetData(format, data); } \
  NS_IMETHOD GetData(const nsAString & format, nsAString & _retval) override { return _to GetData(format, _retval); } \
  NS_IMETHOD SetDragImage(nsIDOMElement *image, int32_t x, int32_t y) override { return _to SetDragImage(image, x, y); } \
  NS_IMETHOD AddElement(nsIDOMElement *element) override { return _to AddElement(element); } \
  NS_IMETHOD GetMozItemCount(uint32_t *aMozItemCount) override { return _to GetMozItemCount(aMozItemCount); } \
  NS_IMETHOD GetMozCursor(nsAString & aMozCursor) override { return _to GetMozCursor(aMozCursor); } \
  NS_IMETHOD SetMozCursor(const nsAString & aMozCursor) override { return _to SetMozCursor(aMozCursor); } \
  NS_IMETHOD MozTypesAt(uint32_t index, nsISupports * *_retval) override { return _to MozTypesAt(index, _retval); } \
  NS_IMETHOD MozClearDataAt(const nsAString & format, uint32_t index) override { return _to MozClearDataAt(format, index); } \
  NS_IMETHOD MozSetDataAt(const nsAString & format, nsIVariant *data, uint32_t index) override { return _to MozSetDataAt(format, data, index); } \
  NS_IMETHOD MozGetDataAt(const nsAString & format, uint32_t index, nsIVariant * *_retval) override { return _to MozGetDataAt(format, index, _retval); } \
  NS_IMETHOD GetMozUserCancelled(bool *aMozUserCancelled) override { return _to GetMozUserCancelled(aMozUserCancelled); } \
  NS_IMETHOD GetMozSourceNode(nsIDOMNode * *aMozSourceNode) override { return _to GetMozSourceNode(aMozSourceNode); } \
  NS_IMETHOD GetDropEffectInt(uint32_t *aDropEffectInt) override { return _to GetDropEffectInt(aDropEffectInt); } \
  NS_IMETHOD SetDropEffectInt(uint32_t aDropEffectInt) override { return _to SetDropEffectInt(aDropEffectInt); } \
  NS_IMETHOD GetEffectAllowedInt(uint32_t *aEffectAllowedInt) override { return _to GetEffectAllowedInt(aEffectAllowedInt); } \
  NS_IMETHOD SetEffectAllowedInt(uint32_t aEffectAllowedInt) override { return _to SetEffectAllowedInt(aEffectAllowedInt); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMDATATRANSFER(_to) \
  NS_IMETHOD GetDropEffect(nsAString & aDropEffect) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDropEffect(aDropEffect); } \
  NS_IMETHOD SetDropEffect(const nsAString & aDropEffect) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDropEffect(aDropEffect); } \
  NS_IMETHOD GetEffectAllowed(nsAString & aEffectAllowed) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEffectAllowed(aEffectAllowed); } \
  NS_IMETHOD SetEffectAllowed(const nsAString & aEffectAllowed) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetEffectAllowed(aEffectAllowed); } \
  NS_IMETHOD GetFiles(nsIDOMFileList * *aFiles) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFiles(aFiles); } \
  NS_IMETHOD GetTypes(nsISupports * *aTypes) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTypes(aTypes); } \
  NS_IMETHOD ClearData(const nsAString & format) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ClearData(format); } \
  NS_IMETHOD SetData(const nsAString & format, const nsAString & data) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetData(format, data); } \
  NS_IMETHOD GetData(const nsAString & format, nsAString & _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetData(format, _retval); } \
  NS_IMETHOD SetDragImage(nsIDOMElement *image, int32_t x, int32_t y) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDragImage(image, x, y); } \
  NS_IMETHOD AddElement(nsIDOMElement *element) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AddElement(element); } \
  NS_IMETHOD GetMozItemCount(uint32_t *aMozItemCount) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMozItemCount(aMozItemCount); } \
  NS_IMETHOD GetMozCursor(nsAString & aMozCursor) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMozCursor(aMozCursor); } \
  NS_IMETHOD SetMozCursor(const nsAString & aMozCursor) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMozCursor(aMozCursor); } \
  NS_IMETHOD MozTypesAt(uint32_t index, nsISupports * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->MozTypesAt(index, _retval); } \
  NS_IMETHOD MozClearDataAt(const nsAString & format, uint32_t index) override { return !_to ? NS_ERROR_NULL_POINTER : _to->MozClearDataAt(format, index); } \
  NS_IMETHOD MozSetDataAt(const nsAString & format, nsIVariant *data, uint32_t index) override { return !_to ? NS_ERROR_NULL_POINTER : _to->MozSetDataAt(format, data, index); } \
  NS_IMETHOD MozGetDataAt(const nsAString & format, uint32_t index, nsIVariant * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->MozGetDataAt(format, index, _retval); } \
  NS_IMETHOD GetMozUserCancelled(bool *aMozUserCancelled) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMozUserCancelled(aMozUserCancelled); } \
  NS_IMETHOD GetMozSourceNode(nsIDOMNode * *aMozSourceNode) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMozSourceNode(aMozSourceNode); } \
  NS_IMETHOD GetDropEffectInt(uint32_t *aDropEffectInt) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDropEffectInt(aDropEffectInt); } \
  NS_IMETHOD SetDropEffectInt(uint32_t aDropEffectInt) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDropEffectInt(aDropEffectInt); } \
  NS_IMETHOD GetEffectAllowedInt(uint32_t *aEffectAllowedInt) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEffectAllowedInt(aEffectAllowedInt); } \
  NS_IMETHOD SetEffectAllowedInt(uint32_t aEffectAllowedInt) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetEffectAllowedInt(aEffectAllowedInt); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMDataTransfer : public nsIDOMDataTransfer
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMDATATRANSFER

  nsDOMDataTransfer();

private:
  ~nsDOMDataTransfer();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsDOMDataTransfer, nsIDOMDataTransfer)

nsDOMDataTransfer::nsDOMDataTransfer()
{
  /* member initializers and constructor code */
}

nsDOMDataTransfer::~nsDOMDataTransfer()
{
  /* destructor code */
}

/* attribute DOMString dropEffect; */
NS_IMETHODIMP nsDOMDataTransfer::GetDropEffect(nsAString & aDropEffect)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMDataTransfer::SetDropEffect(const nsAString & aDropEffect)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString effectAllowed; */
NS_IMETHODIMP nsDOMDataTransfer::GetEffectAllowed(nsAString & aEffectAllowed)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMDataTransfer::SetEffectAllowed(const nsAString & aEffectAllowed)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMFileList files; */
NS_IMETHODIMP nsDOMDataTransfer::GetFiles(nsIDOMFileList * *aFiles)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsISupports types; */
NS_IMETHODIMP nsDOMDataTransfer::GetTypes(nsISupports * *aTypes)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void clearData ([optional] in DOMString format); */
NS_IMETHODIMP nsDOMDataTransfer::ClearData(const nsAString & format)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setData (in DOMString format, in DOMString data); */
NS_IMETHODIMP nsDOMDataTransfer::SetData(const nsAString & format, const nsAString & data)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* DOMString getData (in DOMString format); */
NS_IMETHODIMP nsDOMDataTransfer::GetData(const nsAString & format, nsAString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setDragImage (in nsIDOMElement image, in long x, in long y); */
NS_IMETHODIMP nsDOMDataTransfer::SetDragImage(nsIDOMElement *image, int32_t x, int32_t y)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addElement (in nsIDOMElement element); */
NS_IMETHODIMP nsDOMDataTransfer::AddElement(nsIDOMElement *element)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long mozItemCount; */
NS_IMETHODIMP nsDOMDataTransfer::GetMozItemCount(uint32_t *aMozItemCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString mozCursor; */
NS_IMETHODIMP nsDOMDataTransfer::GetMozCursor(nsAString & aMozCursor)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMDataTransfer::SetMozCursor(const nsAString & aMozCursor)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsISupports mozTypesAt (in unsigned long index); */
NS_IMETHODIMP nsDOMDataTransfer::MozTypesAt(uint32_t index, nsISupports * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void mozClearDataAt (in DOMString format, in unsigned long index); */
NS_IMETHODIMP nsDOMDataTransfer::MozClearDataAt(const nsAString & format, uint32_t index)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void mozSetDataAt (in DOMString format, in nsIVariant data, in unsigned long index); */
NS_IMETHODIMP nsDOMDataTransfer::MozSetDataAt(const nsAString & format, nsIVariant *data, uint32_t index)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIVariant mozGetDataAt (in DOMString format, in unsigned long index); */
NS_IMETHODIMP nsDOMDataTransfer::MozGetDataAt(const nsAString & format, uint32_t index, nsIVariant * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean mozUserCancelled; */
NS_IMETHODIMP nsDOMDataTransfer::GetMozUserCancelled(bool *aMozUserCancelled)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMNode mozSourceNode; */
NS_IMETHODIMP nsDOMDataTransfer::GetMozSourceNode(nsIDOMNode * *aMozSourceNode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] attribute unsigned long dropEffectInt; */
NS_IMETHODIMP nsDOMDataTransfer::GetDropEffectInt(uint32_t *aDropEffectInt)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMDataTransfer::SetDropEffectInt(uint32_t aDropEffectInt)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] attribute unsigned long effectAllowedInt; */
NS_IMETHODIMP nsDOMDataTransfer::GetEffectAllowedInt(uint32_t *aEffectAllowedInt)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMDataTransfer::SetEffectAllowedInt(uint32_t aEffectAllowedInt)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMDataTransfer_h__ */
