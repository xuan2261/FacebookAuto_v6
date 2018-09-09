/* THIS FILE IS AUTOGENERATED FROM MediaTrackConstraintSet.webidl BY Codegen.py - DO NOT EDIT */

#ifndef mozilla_dom_MediaTrackConstraintSetBinding_h
#define mozilla_dom_MediaTrackConstraintSetBinding_h

#include "ConstraintsBinding.h"
#include "js/RootingAPI.h"
#include "jspubtd.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/BindingUtils.h"
#include "mozilla/dom/Nullable.h"
#include "mozilla/dom/UnionMember.h"

namespace mozilla {
namespace dom {

class DoubleOrConstrainDoubleRange;
class LongOrConstrainLongRange;
struct MediaTrackConstraintSetAtoms;
struct NativePropertyHooks;
class OwningDoubleOrConstrainDoubleRange;
class OwningLongOrConstrainLongRange;
class OwningStringOrStringSequenceOrConstrainDOMStringParameters;
class ProtoAndIfaceCache;
class StringOrStringSequenceOrConstrainDOMStringParameters;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {

enum class SupportedVideoConstraints : uint32_t {
  Other,
  FacingMode,
  Width,
  Height,
  FrameRate,
  MediaSource,
  BrowserWindow,
  ScrollWithPage,
  EndGuard_
};

namespace SupportedVideoConstraintsValues {
extern const EnumEntry strings[9];
} // namespace SupportedVideoConstraintsValues


enum class SupportedAudioConstraints : uint32_t {
  Other,
  EndGuard_
};

namespace SupportedAudioConstraintsValues {
extern const EnumEntry strings[2];
} // namespace SupportedAudioConstraintsValues


class DoubleOrConstrainDoubleRange
{
  friend class DoubleOrConstrainDoubleRangeArgument;
  enum Type
  {
    eUninitialized,
    eDouble,
    eConstrainDoubleRange
  };

  union Value
  {
    UnionMember<double > mDouble;
    UnionMember<binding_detail::FastConstrainDoubleRange > mConstrainDoubleRange;

  };

  Type mType;
  Value mValue;

  DoubleOrConstrainDoubleRange(const DoubleOrConstrainDoubleRange&) = delete;
  void operator=(const DoubleOrConstrainDoubleRange) = delete;
public:
  explicit inline DoubleOrConstrainDoubleRange()
    : mType(eUninitialized)
  {
  }

  inline ~DoubleOrConstrainDoubleRange()
  {
    Uninit();
  }

  inline double&
  RawSetAsDouble()
  {
    if (mType == eDouble) {
      return mValue.mDouble.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eDouble;
    return mValue.mDouble.SetValue();
  }

  inline double&
  SetAsDouble()
  {
    if (mType == eDouble) {
      return mValue.mDouble.Value();
    }
    Uninit();
    mType = eDouble;
    return mValue.mDouble.SetValue();
  }

  inline bool
  IsDouble() const
  {
    return mType == eDouble;
  }

  inline double&
  GetAsDouble()
  {
    MOZ_ASSERT(IsDouble(), "Wrong type!");
    return mValue.mDouble.Value();
  }

  inline double
  GetAsDouble() const
  {
    MOZ_ASSERT(IsDouble(), "Wrong type!");
    return mValue.mDouble.Value();
  }

  inline binding_detail::FastConstrainDoubleRange&
  RawSetAsConstrainDoubleRange()
  {
    if (mType == eConstrainDoubleRange) {
      return mValue.mConstrainDoubleRange.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eConstrainDoubleRange;
    return mValue.mConstrainDoubleRange.SetValue();
  }

  inline binding_detail::FastConstrainDoubleRange&
  SetAsConstrainDoubleRange()
  {
    if (mType == eConstrainDoubleRange) {
      return mValue.mConstrainDoubleRange.Value();
    }
    Uninit();
    mType = eConstrainDoubleRange;
    return mValue.mConstrainDoubleRange.SetValue();
  }

  inline bool
  IsConstrainDoubleRange() const
  {
    return mType == eConstrainDoubleRange;
  }

  inline binding_detail::FastConstrainDoubleRange&
  GetAsConstrainDoubleRange()
  {
    MOZ_ASSERT(IsConstrainDoubleRange(), "Wrong type!");
    return mValue.mConstrainDoubleRange.Value();
  }

  inline const ConstrainDoubleRange&
  GetAsConstrainDoubleRange() const
  {
    MOZ_ASSERT(IsConstrainDoubleRange(), "Wrong type!");
    return mValue.mConstrainDoubleRange.Value();
  }

  inline void
  Uninit()
  {
    switch (mType) {
      case eUninitialized: {
        break;
      }
      case eDouble: {
        DestroyDouble();
        break;
      }
      case eConstrainDoubleRange: {
        DestroyConstrainDoubleRange();
        break;
      }
    }
  }

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

private:
  inline void
  DestroyDouble()
  {
    MOZ_ASSERT(IsDouble(), "Wrong type!");
    mValue.mDouble.Destroy();
    mType = eUninitialized;
  }

  inline void
  DestroyConstrainDoubleRange()
  {
    MOZ_ASSERT(IsConstrainDoubleRange(), "Wrong type!");
    mValue.mConstrainDoubleRange.Destroy();
    mType = eUninitialized;
  }
};


class OwningDoubleOrConstrainDoubleRange : public AllOwningUnionBase
{
  friend void ImplCycleCollectionUnlink(OwningDoubleOrConstrainDoubleRange& aUnion);
  enum Type
  {
    eUninitialized,
    eDouble,
    eConstrainDoubleRange
  };

  union Value
  {
    UnionMember<double > mDouble;
    UnionMember<ConstrainDoubleRange > mConstrainDoubleRange;

  };

  Type mType;
  Value mValue;

public:
  explicit inline OwningDoubleOrConstrainDoubleRange()
    : mType(eUninitialized)
  {
  }

  explicit inline OwningDoubleOrConstrainDoubleRange(const OwningDoubleOrConstrainDoubleRange& aOther)
    : mType(eUninitialized)
  {
    *this = aOther;
  }

  inline ~OwningDoubleOrConstrainDoubleRange()
  {
    Uninit();
  }

  double&
  RawSetAsDouble();

  double&
  SetAsDouble();

  bool
  TrySetToDouble(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsDouble() const
  {
    return mType == eDouble;
  }

  inline double&
  GetAsDouble()
  {
    MOZ_ASSERT(IsDouble(), "Wrong type!");
    return mValue.mDouble.Value();
  }

  inline double const &
  GetAsDouble() const
  {
    MOZ_ASSERT(IsDouble(), "Wrong type!");
    return mValue.mDouble.Value();
  }

  ConstrainDoubleRange&
  RawSetAsConstrainDoubleRange();

  ConstrainDoubleRange&
  SetAsConstrainDoubleRange();

  bool
  TrySetToConstrainDoubleRange(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsConstrainDoubleRange() const
  {
    return mType == eConstrainDoubleRange;
  }

  inline ConstrainDoubleRange&
  GetAsConstrainDoubleRange()
  {
    MOZ_ASSERT(IsConstrainDoubleRange(), "Wrong type!");
    return mValue.mConstrainDoubleRange.Value();
  }

  inline ConstrainDoubleRange const &
  GetAsConstrainDoubleRange() const
  {
    MOZ_ASSERT(IsConstrainDoubleRange(), "Wrong type!");
    return mValue.mConstrainDoubleRange.Value();
  }

  void
  Uninit();

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceUnion(JSTracer* trc);

  void
  operator=(const OwningDoubleOrConstrainDoubleRange& aOther);

private:
  void
  DestroyDouble();

  void
  DestroyConstrainDoubleRange();
};


class LongOrConstrainLongRange
{
  friend class LongOrConstrainLongRangeArgument;
  enum Type
  {
    eUninitialized,
    eLong,
    eConstrainLongRange
  };

  union Value
  {
    UnionMember<int32_t > mLong;
    UnionMember<binding_detail::FastConstrainLongRange > mConstrainLongRange;

  };

  Type mType;
  Value mValue;

  LongOrConstrainLongRange(const LongOrConstrainLongRange&) = delete;
  void operator=(const LongOrConstrainLongRange) = delete;
public:
  explicit inline LongOrConstrainLongRange()
    : mType(eUninitialized)
  {
  }

  inline ~LongOrConstrainLongRange()
  {
    Uninit();
  }

  inline int32_t&
  RawSetAsLong()
  {
    if (mType == eLong) {
      return mValue.mLong.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eLong;
    return mValue.mLong.SetValue();
  }

  inline int32_t&
  SetAsLong()
  {
    if (mType == eLong) {
      return mValue.mLong.Value();
    }
    Uninit();
    mType = eLong;
    return mValue.mLong.SetValue();
  }

  inline bool
  IsLong() const
  {
    return mType == eLong;
  }

  inline int32_t&
  GetAsLong()
  {
    MOZ_ASSERT(IsLong(), "Wrong type!");
    return mValue.mLong.Value();
  }

  inline int32_t
  GetAsLong() const
  {
    MOZ_ASSERT(IsLong(), "Wrong type!");
    return mValue.mLong.Value();
  }

  inline binding_detail::FastConstrainLongRange&
  RawSetAsConstrainLongRange()
  {
    if (mType == eConstrainLongRange) {
      return mValue.mConstrainLongRange.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eConstrainLongRange;
    return mValue.mConstrainLongRange.SetValue();
  }

  inline binding_detail::FastConstrainLongRange&
  SetAsConstrainLongRange()
  {
    if (mType == eConstrainLongRange) {
      return mValue.mConstrainLongRange.Value();
    }
    Uninit();
    mType = eConstrainLongRange;
    return mValue.mConstrainLongRange.SetValue();
  }

  inline bool
  IsConstrainLongRange() const
  {
    return mType == eConstrainLongRange;
  }

  inline binding_detail::FastConstrainLongRange&
  GetAsConstrainLongRange()
  {
    MOZ_ASSERT(IsConstrainLongRange(), "Wrong type!");
    return mValue.mConstrainLongRange.Value();
  }

  inline const ConstrainLongRange&
  GetAsConstrainLongRange() const
  {
    MOZ_ASSERT(IsConstrainLongRange(), "Wrong type!");
    return mValue.mConstrainLongRange.Value();
  }

  inline void
  Uninit()
  {
    switch (mType) {
      case eUninitialized: {
        break;
      }
      case eLong: {
        DestroyLong();
        break;
      }
      case eConstrainLongRange: {
        DestroyConstrainLongRange();
        break;
      }
    }
  }

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

private:
  inline void
  DestroyLong()
  {
    MOZ_ASSERT(IsLong(), "Wrong type!");
    mValue.mLong.Destroy();
    mType = eUninitialized;
  }

  inline void
  DestroyConstrainLongRange()
  {
    MOZ_ASSERT(IsConstrainLongRange(), "Wrong type!");
    mValue.mConstrainLongRange.Destroy();
    mType = eUninitialized;
  }
};


class OwningLongOrConstrainLongRange : public AllOwningUnionBase
{
  friend void ImplCycleCollectionUnlink(OwningLongOrConstrainLongRange& aUnion);
  enum Type
  {
    eUninitialized,
    eLong,
    eConstrainLongRange
  };

  union Value
  {
    UnionMember<int32_t > mLong;
    UnionMember<ConstrainLongRange > mConstrainLongRange;

  };

  Type mType;
  Value mValue;

public:
  explicit inline OwningLongOrConstrainLongRange()
    : mType(eUninitialized)
  {
  }

  explicit inline OwningLongOrConstrainLongRange(const OwningLongOrConstrainLongRange& aOther)
    : mType(eUninitialized)
  {
    *this = aOther;
  }

  inline ~OwningLongOrConstrainLongRange()
  {
    Uninit();
  }

  int32_t&
  RawSetAsLong();

  int32_t&
  SetAsLong();

  bool
  TrySetToLong(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsLong() const
  {
    return mType == eLong;
  }

  inline int32_t&
  GetAsLong()
  {
    MOZ_ASSERT(IsLong(), "Wrong type!");
    return mValue.mLong.Value();
  }

  inline int32_t const &
  GetAsLong() const
  {
    MOZ_ASSERT(IsLong(), "Wrong type!");
    return mValue.mLong.Value();
  }

  ConstrainLongRange&
  RawSetAsConstrainLongRange();

  ConstrainLongRange&
  SetAsConstrainLongRange();

  bool
  TrySetToConstrainLongRange(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsConstrainLongRange() const
  {
    return mType == eConstrainLongRange;
  }

  inline ConstrainLongRange&
  GetAsConstrainLongRange()
  {
    MOZ_ASSERT(IsConstrainLongRange(), "Wrong type!");
    return mValue.mConstrainLongRange.Value();
  }

  inline ConstrainLongRange const &
  GetAsConstrainLongRange() const
  {
    MOZ_ASSERT(IsConstrainLongRange(), "Wrong type!");
    return mValue.mConstrainLongRange.Value();
  }

  void
  Uninit();

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceUnion(JSTracer* trc);

  void
  operator=(const OwningLongOrConstrainLongRange& aOther);

private:
  void
  DestroyLong();

  void
  DestroyConstrainLongRange();
};


class StringOrStringSequenceOrConstrainDOMStringParameters
{
  friend class StringOrStringSequenceOrConstrainDOMStringParametersArgument;
  enum Type
  {
    eUninitialized,
    eString,
    eStringSequence,
    eConstrainDOMStringParameters
  };

  union Value
  {
    UnionMember<binding_detail::FakeString > mString;
    UnionMember<binding_detail::AutoSequence<nsString> > mStringSequence;
    UnionMember<binding_detail::FastConstrainDOMStringParameters > mConstrainDOMStringParameters;

  };

  Type mType;
  Value mValue;

  StringOrStringSequenceOrConstrainDOMStringParameters(const StringOrStringSequenceOrConstrainDOMStringParameters&) = delete;
  void operator=(const StringOrStringSequenceOrConstrainDOMStringParameters) = delete;
public:
  explicit inline StringOrStringSequenceOrConstrainDOMStringParameters()
    : mType(eUninitialized)
  {
  }

  inline ~StringOrStringSequenceOrConstrainDOMStringParameters()
  {
    Uninit();
  }

  inline binding_detail::FakeString&
  RawSetAsString()
  {
    if (mType == eString) {
      return mValue.mString.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eString;
    return mValue.mString.SetValue();
  }

  inline binding_detail::FakeString&
  SetAsString()
  {
    if (mType == eString) {
      return mValue.mString.Value();
    }
    Uninit();
    mType = eString;
    return mValue.mString.SetValue();
  }

  inline bool
  IsString() const
  {
    return mType == eString;
  }

  inline binding_detail::FakeString&
  GetAsString()
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    return mValue.mString.Value();
  }

  inline const nsAString&
  GetAsString() const
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    return mValue.mString.Value();
  }

  inline binding_detail::AutoSequence<nsString>&
  RawSetAsStringSequence()
  {
    if (mType == eStringSequence) {
      return mValue.mStringSequence.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eStringSequence;
    return mValue.mStringSequence.SetValue();
  }

  inline binding_detail::AutoSequence<nsString>&
  SetAsStringSequence()
  {
    if (mType == eStringSequence) {
      return mValue.mStringSequence.Value();
    }
    Uninit();
    mType = eStringSequence;
    return mValue.mStringSequence.SetValue();
  }

  inline bool
  IsStringSequence() const
  {
    return mType == eStringSequence;
  }

  inline binding_detail::AutoSequence<nsString>&
  GetAsStringSequence()
  {
    MOZ_ASSERT(IsStringSequence(), "Wrong type!");
    return mValue.mStringSequence.Value();
  }

  inline const Sequence<nsString>&
  GetAsStringSequence() const
  {
    MOZ_ASSERT(IsStringSequence(), "Wrong type!");
    return mValue.mStringSequence.Value();
  }

  inline binding_detail::FastConstrainDOMStringParameters&
  RawSetAsConstrainDOMStringParameters()
  {
    if (mType == eConstrainDOMStringParameters) {
      return mValue.mConstrainDOMStringParameters.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eConstrainDOMStringParameters;
    return mValue.mConstrainDOMStringParameters.SetValue();
  }

  inline binding_detail::FastConstrainDOMStringParameters&
  SetAsConstrainDOMStringParameters()
  {
    if (mType == eConstrainDOMStringParameters) {
      return mValue.mConstrainDOMStringParameters.Value();
    }
    Uninit();
    mType = eConstrainDOMStringParameters;
    return mValue.mConstrainDOMStringParameters.SetValue();
  }

  inline bool
  IsConstrainDOMStringParameters() const
  {
    return mType == eConstrainDOMStringParameters;
  }

  inline binding_detail::FastConstrainDOMStringParameters&
  GetAsConstrainDOMStringParameters()
  {
    MOZ_ASSERT(IsConstrainDOMStringParameters(), "Wrong type!");
    return mValue.mConstrainDOMStringParameters.Value();
  }

  inline const ConstrainDOMStringParameters&
  GetAsConstrainDOMStringParameters() const
  {
    MOZ_ASSERT(IsConstrainDOMStringParameters(), "Wrong type!");
    return mValue.mConstrainDOMStringParameters.Value();
  }

  inline void
  Uninit()
  {
    switch (mType) {
      case eUninitialized: {
        break;
      }
      case eString: {
        DestroyString();
        break;
      }
      case eStringSequence: {
        DestroyStringSequence();
        break;
      }
      case eConstrainDOMStringParameters: {
        DestroyConstrainDOMStringParameters();
        break;
      }
    }
  }

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

private:
  inline void
  DestroyString()
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    mValue.mString.Destroy();
    mType = eUninitialized;
  }

  inline void
  DestroyStringSequence()
  {
    MOZ_ASSERT(IsStringSequence(), "Wrong type!");
    mValue.mStringSequence.Destroy();
    mType = eUninitialized;
  }

  inline void
  DestroyConstrainDOMStringParameters()
  {
    MOZ_ASSERT(IsConstrainDOMStringParameters(), "Wrong type!");
    mValue.mConstrainDOMStringParameters.Destroy();
    mType = eUninitialized;
  }
};


class OwningStringOrStringSequenceOrConstrainDOMStringParameters : public AllOwningUnionBase
{
  friend void ImplCycleCollectionUnlink(OwningStringOrStringSequenceOrConstrainDOMStringParameters& aUnion);
  enum Type
  {
    eUninitialized,
    eString,
    eStringSequence,
    eConstrainDOMStringParameters
  };

  union Value
  {
    UnionMember<nsString > mString;
    UnionMember<Sequence<nsString> > mStringSequence;
    UnionMember<ConstrainDOMStringParameters > mConstrainDOMStringParameters;

  };

  Type mType;
  Value mValue;

public:
  explicit inline OwningStringOrStringSequenceOrConstrainDOMStringParameters()
    : mType(eUninitialized)
  {
  }

  explicit inline OwningStringOrStringSequenceOrConstrainDOMStringParameters(const OwningStringOrStringSequenceOrConstrainDOMStringParameters& aOther)
    : mType(eUninitialized)
  {
    *this = aOther;
  }

  inline ~OwningStringOrStringSequenceOrConstrainDOMStringParameters()
  {
    Uninit();
  }

  nsString&
  RawSetAsString();

  nsString&
  SetAsString();

  bool
  TrySetToString(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline void
  SetStringData(const nsString::char_type* aData, nsString::size_type aLength)
  {
    RawSetAsString().Assign(aData, aLength);
  }

  inline bool
  IsString() const
  {
    return mType == eString;
  }

  inline nsString&
  GetAsString()
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    return mValue.mString.Value();
  }

  inline nsString const &
  GetAsString() const
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    return mValue.mString.Value();
  }

  Sequence<nsString>&
  RawSetAsStringSequence();

  Sequence<nsString>&
  SetAsStringSequence();

  bool
  TrySetToStringSequence(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsStringSequence() const
  {
    return mType == eStringSequence;
  }

  inline Sequence<nsString>&
  GetAsStringSequence()
  {
    MOZ_ASSERT(IsStringSequence(), "Wrong type!");
    return mValue.mStringSequence.Value();
  }

  inline Sequence<nsString> const &
  GetAsStringSequence() const
  {
    MOZ_ASSERT(IsStringSequence(), "Wrong type!");
    return mValue.mStringSequence.Value();
  }

  ConstrainDOMStringParameters&
  RawSetAsConstrainDOMStringParameters();

  ConstrainDOMStringParameters&
  SetAsConstrainDOMStringParameters();

  bool
  TrySetToConstrainDOMStringParameters(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsConstrainDOMStringParameters() const
  {
    return mType == eConstrainDOMStringParameters;
  }

  inline ConstrainDOMStringParameters&
  GetAsConstrainDOMStringParameters()
  {
    MOZ_ASSERT(IsConstrainDOMStringParameters(), "Wrong type!");
    return mValue.mConstrainDOMStringParameters.Value();
  }

  inline ConstrainDOMStringParameters const &
  GetAsConstrainDOMStringParameters() const
  {
    MOZ_ASSERT(IsConstrainDOMStringParameters(), "Wrong type!");
    return mValue.mConstrainDOMStringParameters.Value();
  }

  void
  Uninit();

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceUnion(JSTracer* trc);

  void
  operator=(const OwningStringOrStringSequenceOrConstrainDOMStringParameters& aOther);

private:
  void
  DestroyString();

  void
  DestroyStringSequence();

  void
  DestroyConstrainDOMStringParameters();
};


struct MediaTrackConstraintSet : public DictionaryBase
{
  Optional<int64_t> mBrowserWindow;
  OwningStringOrStringSequenceOrConstrainDOMStringParameters mFacingMode;
  OwningDoubleOrConstrainDoubleRange mFrameRate;
  OwningLongOrConstrainLongRange mHeight;
  nsString mMediaSource;
  Optional<bool> mScrollWithPage;
  OwningLongOrConstrainLongRange mWidth;

  MediaTrackConstraintSet();

  explicit inline MediaTrackConstraintSet(const FastDictionaryInitializer& )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline MediaTrackConstraintSet(const MediaTrackConstraintSet& aOther)
  {
    *this = aOther;
  }

  bool
  Init(JSContext* cx, JS::Handle<JS::Value> val, const char* sourceDescription = "Value", bool passedToJSImpl = false);

  bool
  Init(const nsAString& aJSON);

  bool
  ToObjectInternal(JSContext* cx, JS::MutableHandle<JS::Value> rval) const;

  bool
  ToJSON(nsAString& aJSON) const;

  void
  TraceDictionary(JSTracer* trc);

  void
  operator=(const MediaTrackConstraintSet& aOther);

private:
  static bool
  InitIds(JSContext* cx, MediaTrackConstraintSetAtoms* atomsCache);
};

namespace binding_detail {
struct FastMediaTrackConstraintSet : public MediaTrackConstraintSet
{
  inline FastMediaTrackConstraintSet()
    : MediaTrackConstraintSet(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_MediaTrackConstraintSetBinding_h
