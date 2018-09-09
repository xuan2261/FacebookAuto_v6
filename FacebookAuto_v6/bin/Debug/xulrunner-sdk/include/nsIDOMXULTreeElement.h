/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIDOMXULTreeElement.idl
 */

#ifndef __gen_nsIDOMXULTreeElement_h__
#define __gen_nsIDOMXULTreeElement_h__


#ifndef __gen_nsIDOMXULElement_h__
#include "nsIDOMXULElement.h"
#endif

#ifndef __gen_nsIDOMElement_h__
#include "nsIDOMElement.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsITreeColumns; /* forward declaration */

class nsITreeView; /* forward declaration */

class nsIDOMXULTextBoxElement; /* forward declaration */


/* starting interface:    nsIDOMXULTreeElement */
#define NS_IDOMXULTREEELEMENT_IID_STR "013b62af-1e2f-4b07-9091-d7c0fc4687e2"

#define NS_IDOMXULTREEELEMENT_IID \
  {0x013b62af, 0x1e2f, 0x4b07, \
    { 0x90, 0x91, 0xd7, 0xc0, 0xfc, 0x46, 0x87, 0xe2 }}

class NS_NO_VTABLE nsIDOMXULTreeElement : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMXULTREEELEMENT_IID)

  /* readonly attribute nsITreeColumns columns; */
  NS_IMETHOD GetColumns(nsITreeColumns * *aColumns) = 0;

  /* attribute nsITreeView view; */
  NS_IMETHOD GetView(nsITreeView * *aView) = 0;
  NS_IMETHOD SetView(nsITreeView *aView) = 0;

  /* readonly attribute nsIDOMElement body; */
  NS_IMETHOD GetBody(nsIDOMElement * *aBody) = 0;

  /* attribute boolean editable; */
  NS_IMETHOD GetEditable(bool *aEditable) = 0;
  NS_IMETHOD SetEditable(bool aEditable) = 0;

  /* readonly attribute nsIDOMXULTextBoxElement inputField; */
  NS_IMETHOD GetInputField(nsIDOMXULTextBoxElement * *aInputField) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMXULTreeElement, NS_IDOMXULTREEELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMXULTREEELEMENT \
  NS_IMETHOD GetColumns(nsITreeColumns * *aColumns) override; \
  NS_IMETHOD GetView(nsITreeView * *aView) override; \
  NS_IMETHOD SetView(nsITreeView *aView) override; \
  NS_IMETHOD GetBody(nsIDOMElement * *aBody) override; \
  NS_IMETHOD GetEditable(bool *aEditable) override; \
  NS_IMETHOD SetEditable(bool aEditable) override; \
  NS_IMETHOD GetInputField(nsIDOMXULTextBoxElement * *aInputField) override; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMXULTREEELEMENT(_to) \
  NS_IMETHOD GetColumns(nsITreeColumns * *aColumns) override { return _to GetColumns(aColumns); } \
  NS_IMETHOD GetView(nsITreeView * *aView) override { return _to GetView(aView); } \
  NS_IMETHOD SetView(nsITreeView *aView) override { return _to SetView(aView); } \
  NS_IMETHOD GetBody(nsIDOMElement * *aBody) override { return _to GetBody(aBody); } \
  NS_IMETHOD GetEditable(bool *aEditable) override { return _to GetEditable(aEditable); } \
  NS_IMETHOD SetEditable(bool aEditable) override { return _to SetEditable(aEditable); } \
  NS_IMETHOD GetInputField(nsIDOMXULTextBoxElement * *aInputField) override { return _to GetInputField(aInputField); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMXULTREEELEMENT(_to) \
  NS_IMETHOD GetColumns(nsITreeColumns * *aColumns) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetColumns(aColumns); } \
  NS_IMETHOD GetView(nsITreeView * *aView) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetView(aView); } \
  NS_IMETHOD SetView(nsITreeView *aView) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetView(aView); } \
  NS_IMETHOD GetBody(nsIDOMElement * *aBody) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBody(aBody); } \
  NS_IMETHOD GetEditable(bool *aEditable) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEditable(aEditable); } \
  NS_IMETHOD SetEditable(bool aEditable) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetEditable(aEditable); } \
  NS_IMETHOD GetInputField(nsIDOMXULTextBoxElement * *aInputField) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInputField(aInputField); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMXULTreeElement : public nsIDOMXULTreeElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMXULTREEELEMENT

  nsDOMXULTreeElement();

private:
  ~nsDOMXULTreeElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsDOMXULTreeElement, nsIDOMXULTreeElement)

nsDOMXULTreeElement::nsDOMXULTreeElement()
{
  /* member initializers and constructor code */
}

nsDOMXULTreeElement::~nsDOMXULTreeElement()
{
  /* destructor code */
}

/* readonly attribute nsITreeColumns columns; */
NS_IMETHODIMP nsDOMXULTreeElement::GetColumns(nsITreeColumns * *aColumns)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsITreeView view; */
NS_IMETHODIMP nsDOMXULTreeElement::GetView(nsITreeView * *aView)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMXULTreeElement::SetView(nsITreeView *aView)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMElement body; */
NS_IMETHODIMP nsDOMXULTreeElement::GetBody(nsIDOMElement * *aBody)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean editable; */
NS_IMETHODIMP nsDOMXULTreeElement::GetEditable(bool *aEditable)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMXULTreeElement::SetEditable(bool aEditable)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMXULTextBoxElement inputField; */
NS_IMETHODIMP nsDOMXULTreeElement::GetInputField(nsIDOMXULTextBoxElement * *aInputField)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMXULTreeElement_h__ */
