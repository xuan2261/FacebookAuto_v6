/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/mozIPersonalDictionary.idl
 */

#ifndef __gen_mozIPersonalDictionary_h__
#define __gen_mozIPersonalDictionary_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIStringEnumerator; /* forward declaration */


/* starting interface:    mozIPersonalDictionary */
#define MOZIPERSONALDICTIONARY_IID_STR "7ef52eaf-b7e1-462b-87e2-5d1dbaca9048"

#define MOZIPERSONALDICTIONARY_IID \
  {0x7ef52eaf, 0xb7e1, 0x462b, \
    { 0x87, 0xe2, 0x5d, 0x1d, 0xba, 0xca, 0x90, 0x48 }}

class NS_NO_VTABLE mozIPersonalDictionary : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(MOZIPERSONALDICTIONARY_IID)

  /* void load (); */
  NS_IMETHOD Load(void) = 0;

  /* void save (); */
  NS_IMETHOD Save(void) = 0;

  /* readonly attribute nsIStringEnumerator wordList; */
  NS_IMETHOD GetWordList(nsIStringEnumerator * *aWordList) = 0;

  /* boolean check (in wstring word, in wstring lang); */
  NS_IMETHOD Check(const char16_t * word, const char16_t * lang, bool *_retval) = 0;

  /* void addWord (in wstring word, in wstring lang); */
  NS_IMETHOD AddWord(const char16_t * word, const char16_t * lang) = 0;

  /* void removeWord (in wstring word, in wstring lang); */
  NS_IMETHOD RemoveWord(const char16_t * word, const char16_t * lang) = 0;

  /* void ignoreWord (in wstring word); */
  NS_IMETHOD IgnoreWord(const char16_t * word) = 0;

  /* void endSession (); */
  NS_IMETHOD EndSession(void) = 0;

  /* void addCorrection (in wstring word, in wstring correction, in wstring lang); */
  NS_IMETHOD AddCorrection(const char16_t * word, const char16_t * correction, const char16_t * lang) = 0;

  /* void removeCorrection (in wstring word, in wstring correction, in wstring lang); */
  NS_IMETHOD RemoveCorrection(const char16_t * word, const char16_t * correction, const char16_t * lang) = 0;

  /* void getCorrection (in wstring word, [array, size_is (count)] out wstring words, out uint32_t count); */
  NS_IMETHOD GetCorrection(const char16_t * word, char16_t * **words, uint32_t *count) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(mozIPersonalDictionary, MOZIPERSONALDICTIONARY_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_MOZIPERSONALDICTIONARY \
  NS_IMETHOD Load(void) override; \
  NS_IMETHOD Save(void) override; \
  NS_IMETHOD GetWordList(nsIStringEnumerator * *aWordList) override; \
  NS_IMETHOD Check(const char16_t * word, const char16_t * lang, bool *_retval) override; \
  NS_IMETHOD AddWord(const char16_t * word, const char16_t * lang) override; \
  NS_IMETHOD RemoveWord(const char16_t * word, const char16_t * lang) override; \
  NS_IMETHOD IgnoreWord(const char16_t * word) override; \
  NS_IMETHOD EndSession(void) override; \
  NS_IMETHOD AddCorrection(const char16_t * word, const char16_t * correction, const char16_t * lang) override; \
  NS_IMETHOD RemoveCorrection(const char16_t * word, const char16_t * correction, const char16_t * lang) override; \
  NS_IMETHOD GetCorrection(const char16_t * word, char16_t * **words, uint32_t *count) override; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_MOZIPERSONALDICTIONARY(_to) \
  NS_IMETHOD Load(void) override { return _to Load(); } \
  NS_IMETHOD Save(void) override { return _to Save(); } \
  NS_IMETHOD GetWordList(nsIStringEnumerator * *aWordList) override { return _to GetWordList(aWordList); } \
  NS_IMETHOD Check(const char16_t * word, const char16_t * lang, bool *_retval) override { return _to Check(word, lang, _retval); } \
  NS_IMETHOD AddWord(const char16_t * word, const char16_t * lang) override { return _to AddWord(word, lang); } \
  NS_IMETHOD RemoveWord(const char16_t * word, const char16_t * lang) override { return _to RemoveWord(word, lang); } \
  NS_IMETHOD IgnoreWord(const char16_t * word) override { return _to IgnoreWord(word); } \
  NS_IMETHOD EndSession(void) override { return _to EndSession(); } \
  NS_IMETHOD AddCorrection(const char16_t * word, const char16_t * correction, const char16_t * lang) override { return _to AddCorrection(word, correction, lang); } \
  NS_IMETHOD RemoveCorrection(const char16_t * word, const char16_t * correction, const char16_t * lang) override { return _to RemoveCorrection(word, correction, lang); } \
  NS_IMETHOD GetCorrection(const char16_t * word, char16_t * **words, uint32_t *count) override { return _to GetCorrection(word, words, count); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_MOZIPERSONALDICTIONARY(_to) \
  NS_IMETHOD Load(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Load(); } \
  NS_IMETHOD Save(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Save(); } \
  NS_IMETHOD GetWordList(nsIStringEnumerator * *aWordList) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWordList(aWordList); } \
  NS_IMETHOD Check(const char16_t * word, const char16_t * lang, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Check(word, lang, _retval); } \
  NS_IMETHOD AddWord(const char16_t * word, const char16_t * lang) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AddWord(word, lang); } \
  NS_IMETHOD RemoveWord(const char16_t * word, const char16_t * lang) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveWord(word, lang); } \
  NS_IMETHOD IgnoreWord(const char16_t * word) override { return !_to ? NS_ERROR_NULL_POINTER : _to->IgnoreWord(word); } \
  NS_IMETHOD EndSession(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->EndSession(); } \
  NS_IMETHOD AddCorrection(const char16_t * word, const char16_t * correction, const char16_t * lang) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AddCorrection(word, correction, lang); } \
  NS_IMETHOD RemoveCorrection(const char16_t * word, const char16_t * correction, const char16_t * lang) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveCorrection(word, correction, lang); } \
  NS_IMETHOD GetCorrection(const char16_t * word, char16_t * **words, uint32_t *count) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCorrection(word, words, count); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public mozIPersonalDictionary
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_MOZIPERSONALDICTIONARY

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(_MYCLASS_, mozIPersonalDictionary)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void load (); */
NS_IMETHODIMP _MYCLASS_::Load()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void save (); */
NS_IMETHODIMP _MYCLASS_::Save()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIStringEnumerator wordList; */
NS_IMETHODIMP _MYCLASS_::GetWordList(nsIStringEnumerator * *aWordList)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean check (in wstring word, in wstring lang); */
NS_IMETHODIMP _MYCLASS_::Check(const char16_t * word, const char16_t * lang, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addWord (in wstring word, in wstring lang); */
NS_IMETHODIMP _MYCLASS_::AddWord(const char16_t * word, const char16_t * lang)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeWord (in wstring word, in wstring lang); */
NS_IMETHODIMP _MYCLASS_::RemoveWord(const char16_t * word, const char16_t * lang)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void ignoreWord (in wstring word); */
NS_IMETHODIMP _MYCLASS_::IgnoreWord(const char16_t * word)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void endSession (); */
NS_IMETHODIMP _MYCLASS_::EndSession()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addCorrection (in wstring word, in wstring correction, in wstring lang); */
NS_IMETHODIMP _MYCLASS_::AddCorrection(const char16_t * word, const char16_t * correction, const char16_t * lang)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeCorrection (in wstring word, in wstring correction, in wstring lang); */
NS_IMETHODIMP _MYCLASS_::RemoveCorrection(const char16_t * word, const char16_t * correction, const char16_t * lang)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getCorrection (in wstring word, [array, size_is (count)] out wstring words, out uint32_t count); */
NS_IMETHODIMP _MYCLASS_::GetCorrection(const char16_t * word, char16_t * **words, uint32_t *count)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_mozIPersonalDictionary_h__ */
