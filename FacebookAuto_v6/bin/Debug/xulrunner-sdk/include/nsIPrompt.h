/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIPrompt.idl
 */

#ifndef __gen_nsIPrompt_h__
#define __gen_nsIPrompt_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIPrompt */
#define NS_IPROMPT_IID_STR "a63f70c0-148b-11d3-9333-00104ba0fd40"

#define NS_IPROMPT_IID \
  {0xa63f70c0, 0x148b, 0x11d3, \
    { 0x93, 0x33, 0x00, 0x10, 0x4b, 0xa0, 0xfd, 0x40 }}

class NS_NO_VTABLE nsIPrompt : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPROMPT_IID)

  /* void alert (in wstring dialogTitle, in wstring text); */
  NS_IMETHOD Alert(const char16_t * dialogTitle, const char16_t * text) = 0;

  /* void alertCheck (in wstring dialogTitle, in wstring text, in wstring checkMsg, inout boolean checkValue); */
  NS_IMETHOD AlertCheck(const char16_t * dialogTitle, const char16_t * text, const char16_t * checkMsg, bool *checkValue) = 0;

  /* boolean confirm (in wstring dialogTitle, in wstring text); */
  NS_IMETHOD Confirm(const char16_t * dialogTitle, const char16_t * text, bool *_retval) = 0;

  /* boolean confirmCheck (in wstring dialogTitle, in wstring text, in wstring checkMsg, inout boolean checkValue); */
  NS_IMETHOD ConfirmCheck(const char16_t * dialogTitle, const char16_t * text, const char16_t * checkMsg, bool *checkValue, bool *_retval) = 0;

  enum {
    BUTTON_POS_0 = 1U,
    BUTTON_POS_1 = 256U,
    BUTTON_POS_2 = 65536U,
    BUTTON_TITLE_OK = 1U,
    BUTTON_TITLE_CANCEL = 2U,
    BUTTON_TITLE_YES = 3U,
    BUTTON_TITLE_NO = 4U,
    BUTTON_TITLE_SAVE = 5U,
    BUTTON_TITLE_DONT_SAVE = 6U,
    BUTTON_TITLE_REVERT = 7U,
    BUTTON_TITLE_IS_STRING = 127U,
    BUTTON_POS_0_DEFAULT = 0U,
    BUTTON_POS_1_DEFAULT = 16777216U,
    BUTTON_POS_2_DEFAULT = 33554432U,
    BUTTON_DELAY_ENABLE = 67108864U,
    STD_OK_CANCEL_BUTTONS = 513U,
    STD_YES_NO_BUTTONS = 1027U
  };

  /* int32_t confirmEx (in wstring dialogTitle, in wstring text, in unsigned long buttonFlags, in wstring button0Title, in wstring button1Title, in wstring button2Title, in wstring checkMsg, inout boolean checkValue); */
  NS_IMETHOD ConfirmEx(const char16_t * dialogTitle, const char16_t * text, uint32_t buttonFlags, const char16_t * button0Title, const char16_t * button1Title, const char16_t * button2Title, const char16_t * checkMsg, bool *checkValue, int32_t *_retval) = 0;

  /* boolean prompt (in wstring dialogTitle, in wstring text, inout wstring value, in wstring checkMsg, inout boolean checkValue); */
  NS_IMETHOD Prompt(const char16_t * dialogTitle, const char16_t * text, char16_t * *value, const char16_t * checkMsg, bool *checkValue, bool *_retval) = 0;

  /* boolean promptPassword (in wstring dialogTitle, in wstring text, inout wstring password, in wstring checkMsg, inout boolean checkValue); */
  NS_IMETHOD PromptPassword(const char16_t * dialogTitle, const char16_t * text, char16_t * *password, const char16_t * checkMsg, bool *checkValue, bool *_retval) = 0;

  /* boolean promptUsernameAndPassword (in wstring dialogTitle, in wstring text, inout wstring username, inout wstring password, in wstring checkMsg, inout boolean checkValue); */
  NS_IMETHOD PromptUsernameAndPassword(const char16_t * dialogTitle, const char16_t * text, char16_t * *username, char16_t * *password, const char16_t * checkMsg, bool *checkValue, bool *_retval) = 0;

  /* boolean select (in wstring dialogTitle, in wstring text, in uint32_t count, [array, size_is (count)] in wstring selectList, out long outSelection); */
  NS_IMETHOD Select(const char16_t * dialogTitle, const char16_t * text, uint32_t count, const char16_t * *selectList, int32_t *outSelection, bool *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPrompt, NS_IPROMPT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPROMPT \
  NS_IMETHOD Alert(const char16_t * dialogTitle, const char16_t * text) override; \
  NS_IMETHOD AlertCheck(const char16_t * dialogTitle, const char16_t * text, const char16_t * checkMsg, bool *checkValue) override; \
  NS_IMETHOD Confirm(const char16_t * dialogTitle, const char16_t * text, bool *_retval) override; \
  NS_IMETHOD ConfirmCheck(const char16_t * dialogTitle, const char16_t * text, const char16_t * checkMsg, bool *checkValue, bool *_retval) override; \
  NS_IMETHOD ConfirmEx(const char16_t * dialogTitle, const char16_t * text, uint32_t buttonFlags, const char16_t * button0Title, const char16_t * button1Title, const char16_t * button2Title, const char16_t * checkMsg, bool *checkValue, int32_t *_retval) override; \
  NS_IMETHOD Prompt(const char16_t * dialogTitle, const char16_t * text, char16_t * *value, const char16_t * checkMsg, bool *checkValue, bool *_retval) override; \
  NS_IMETHOD PromptPassword(const char16_t * dialogTitle, const char16_t * text, char16_t * *password, const char16_t * checkMsg, bool *checkValue, bool *_retval) override; \
  NS_IMETHOD PromptUsernameAndPassword(const char16_t * dialogTitle, const char16_t * text, char16_t * *username, char16_t * *password, const char16_t * checkMsg, bool *checkValue, bool *_retval) override; \
  NS_IMETHOD Select(const char16_t * dialogTitle, const char16_t * text, uint32_t count, const char16_t * *selectList, int32_t *outSelection, bool *_retval) override; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPROMPT(_to) \
  NS_IMETHOD Alert(const char16_t * dialogTitle, const char16_t * text) override { return _to Alert(dialogTitle, text); } \
  NS_IMETHOD AlertCheck(const char16_t * dialogTitle, const char16_t * text, const char16_t * checkMsg, bool *checkValue) override { return _to AlertCheck(dialogTitle, text, checkMsg, checkValue); } \
  NS_IMETHOD Confirm(const char16_t * dialogTitle, const char16_t * text, bool *_retval) override { return _to Confirm(dialogTitle, text, _retval); } \
  NS_IMETHOD ConfirmCheck(const char16_t * dialogTitle, const char16_t * text, const char16_t * checkMsg, bool *checkValue, bool *_retval) override { return _to ConfirmCheck(dialogTitle, text, checkMsg, checkValue, _retval); } \
  NS_IMETHOD ConfirmEx(const char16_t * dialogTitle, const char16_t * text, uint32_t buttonFlags, const char16_t * button0Title, const char16_t * button1Title, const char16_t * button2Title, const char16_t * checkMsg, bool *checkValue, int32_t *_retval) override { return _to ConfirmEx(dialogTitle, text, buttonFlags, button0Title, button1Title, button2Title, checkMsg, checkValue, _retval); } \
  NS_IMETHOD Prompt(const char16_t * dialogTitle, const char16_t * text, char16_t * *value, const char16_t * checkMsg, bool *checkValue, bool *_retval) override { return _to Prompt(dialogTitle, text, value, checkMsg, checkValue, _retval); } \
  NS_IMETHOD PromptPassword(const char16_t * dialogTitle, const char16_t * text, char16_t * *password, const char16_t * checkMsg, bool *checkValue, bool *_retval) override { return _to PromptPassword(dialogTitle, text, password, checkMsg, checkValue, _retval); } \
  NS_IMETHOD PromptUsernameAndPassword(const char16_t * dialogTitle, const char16_t * text, char16_t * *username, char16_t * *password, const char16_t * checkMsg, bool *checkValue, bool *_retval) override { return _to PromptUsernameAndPassword(dialogTitle, text, username, password, checkMsg, checkValue, _retval); } \
  NS_IMETHOD Select(const char16_t * dialogTitle, const char16_t * text, uint32_t count, const char16_t * *selectList, int32_t *outSelection, bool *_retval) override { return _to Select(dialogTitle, text, count, selectList, outSelection, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPROMPT(_to) \
  NS_IMETHOD Alert(const char16_t * dialogTitle, const char16_t * text) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Alert(dialogTitle, text); } \
  NS_IMETHOD AlertCheck(const char16_t * dialogTitle, const char16_t * text, const char16_t * checkMsg, bool *checkValue) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AlertCheck(dialogTitle, text, checkMsg, checkValue); } \
  NS_IMETHOD Confirm(const char16_t * dialogTitle, const char16_t * text, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Confirm(dialogTitle, text, _retval); } \
  NS_IMETHOD ConfirmCheck(const char16_t * dialogTitle, const char16_t * text, const char16_t * checkMsg, bool *checkValue, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ConfirmCheck(dialogTitle, text, checkMsg, checkValue, _retval); } \
  NS_IMETHOD ConfirmEx(const char16_t * dialogTitle, const char16_t * text, uint32_t buttonFlags, const char16_t * button0Title, const char16_t * button1Title, const char16_t * button2Title, const char16_t * checkMsg, bool *checkValue, int32_t *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ConfirmEx(dialogTitle, text, buttonFlags, button0Title, button1Title, button2Title, checkMsg, checkValue, _retval); } \
  NS_IMETHOD Prompt(const char16_t * dialogTitle, const char16_t * text, char16_t * *value, const char16_t * checkMsg, bool *checkValue, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Prompt(dialogTitle, text, value, checkMsg, checkValue, _retval); } \
  NS_IMETHOD PromptPassword(const char16_t * dialogTitle, const char16_t * text, char16_t * *password, const char16_t * checkMsg, bool *checkValue, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->PromptPassword(dialogTitle, text, password, checkMsg, checkValue, _retval); } \
  NS_IMETHOD PromptUsernameAndPassword(const char16_t * dialogTitle, const char16_t * text, char16_t * *username, char16_t * *password, const char16_t * checkMsg, bool *checkValue, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->PromptUsernameAndPassword(dialogTitle, text, username, password, checkMsg, checkValue, _retval); } \
  NS_IMETHOD Select(const char16_t * dialogTitle, const char16_t * text, uint32_t count, const char16_t * *selectList, int32_t *outSelection, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Select(dialogTitle, text, count, selectList, outSelection, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPrompt : public nsIPrompt
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPROMPT

  nsPrompt();

private:
  ~nsPrompt();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPrompt, nsIPrompt)

nsPrompt::nsPrompt()
{
  /* member initializers and constructor code */
}

nsPrompt::~nsPrompt()
{
  /* destructor code */
}

/* void alert (in wstring dialogTitle, in wstring text); */
NS_IMETHODIMP nsPrompt::Alert(const char16_t * dialogTitle, const char16_t * text)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void alertCheck (in wstring dialogTitle, in wstring text, in wstring checkMsg, inout boolean checkValue); */
NS_IMETHODIMP nsPrompt::AlertCheck(const char16_t * dialogTitle, const char16_t * text, const char16_t * checkMsg, bool *checkValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean confirm (in wstring dialogTitle, in wstring text); */
NS_IMETHODIMP nsPrompt::Confirm(const char16_t * dialogTitle, const char16_t * text, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean confirmCheck (in wstring dialogTitle, in wstring text, in wstring checkMsg, inout boolean checkValue); */
NS_IMETHODIMP nsPrompt::ConfirmCheck(const char16_t * dialogTitle, const char16_t * text, const char16_t * checkMsg, bool *checkValue, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* int32_t confirmEx (in wstring dialogTitle, in wstring text, in unsigned long buttonFlags, in wstring button0Title, in wstring button1Title, in wstring button2Title, in wstring checkMsg, inout boolean checkValue); */
NS_IMETHODIMP nsPrompt::ConfirmEx(const char16_t * dialogTitle, const char16_t * text, uint32_t buttonFlags, const char16_t * button0Title, const char16_t * button1Title, const char16_t * button2Title, const char16_t * checkMsg, bool *checkValue, int32_t *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean prompt (in wstring dialogTitle, in wstring text, inout wstring value, in wstring checkMsg, inout boolean checkValue); */
NS_IMETHODIMP nsPrompt::Prompt(const char16_t * dialogTitle, const char16_t * text, char16_t * *value, const char16_t * checkMsg, bool *checkValue, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean promptPassword (in wstring dialogTitle, in wstring text, inout wstring password, in wstring checkMsg, inout boolean checkValue); */
NS_IMETHODIMP nsPrompt::PromptPassword(const char16_t * dialogTitle, const char16_t * text, char16_t * *password, const char16_t * checkMsg, bool *checkValue, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean promptUsernameAndPassword (in wstring dialogTitle, in wstring text, inout wstring username, inout wstring password, in wstring checkMsg, inout boolean checkValue); */
NS_IMETHODIMP nsPrompt::PromptUsernameAndPassword(const char16_t * dialogTitle, const char16_t * text, char16_t * *username, char16_t * *password, const char16_t * checkMsg, bool *checkValue, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean select (in wstring dialogTitle, in wstring text, in uint32_t count, [array, size_is (count)] in wstring selectList, out long outSelection); */
NS_IMETHODIMP nsPrompt::Select(const char16_t * dialogTitle, const char16_t * text, uint32_t count, const char16_t * *selectList, int32_t *outSelection, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIPrompt_h__ */
