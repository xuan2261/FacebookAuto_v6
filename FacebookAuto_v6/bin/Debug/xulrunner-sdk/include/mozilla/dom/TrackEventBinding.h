/* THIS FILE IS AUTOGENERATED FROM TrackEvent.webidl BY Codegen.py - DO NOT EDIT */

#ifndef mozilla_dom_TrackEventBinding_h
#define mozilla_dom_TrackEventBinding_h

#include "EventBinding.h"
#include "js/RootingAPI.h"
#include "jspubtd.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/BindingUtils.h"
#include "mozilla/dom/Nullable.h"
#include "mozilla/dom/UnionMember.h"

namespace mozilla {
namespace dom {

class AudioTrack;
struct NativePropertyHooks;
class OwningVideoTrackOrAudioTrackOrTextTrack;
class ProtoAndIfaceCache;
class TextTrack;
class TrackEvent;
struct TrackEventAtoms;
struct TrackEventInitAtoms;
class VideoTrack;
class VideoTrackOrAudioTrackOrTextTrack;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {

void
ImplCycleCollectionTraverse(nsCycleCollectionTraversalCallback& aCallback, OwningVideoTrackOrAudioTrackOrTextTrack& aUnion, const char* aName, uint32_t aFlags = 0);


void
ImplCycleCollectionUnlink(OwningVideoTrackOrAudioTrackOrTextTrack& aUnion);


class VideoTrackOrAudioTrackOrTextTrack
{
  friend class VideoTrackOrAudioTrackOrTextTrackArgument;
  enum Type
  {
    eUninitialized,
    eVideoTrack,
    eAudioTrack,
    eTextTrack
  };

  union Value
  {
    UnionMember<NonNull<mozilla::dom::VideoTrack> > mVideoTrack;
    UnionMember<NonNull<mozilla::dom::AudioTrack> > mAudioTrack;
    UnionMember<NonNull<mozilla::dom::TextTrack> > mTextTrack;

  };

  Type mType;
  Value mValue;

  VideoTrackOrAudioTrackOrTextTrack(const VideoTrackOrAudioTrackOrTextTrack&) = delete;
  void operator=(const VideoTrackOrAudioTrackOrTextTrack) = delete;
public:
  explicit inline VideoTrackOrAudioTrackOrTextTrack()
    : mType(eUninitialized)
  {
  }

  inline ~VideoTrackOrAudioTrackOrTextTrack()
  {
    Uninit();
  }

  inline NonNull<mozilla::dom::VideoTrack>&
  RawSetAsVideoTrack()
  {
    if (mType == eVideoTrack) {
      return mValue.mVideoTrack.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eVideoTrack;
    return mValue.mVideoTrack.SetValue();
  }

  inline NonNull<mozilla::dom::VideoTrack>&
  SetAsVideoTrack()
  {
    if (mType == eVideoTrack) {
      return mValue.mVideoTrack.Value();
    }
    Uninit();
    mType = eVideoTrack;
    return mValue.mVideoTrack.SetValue();
  }

  inline bool
  IsVideoTrack() const
  {
    return mType == eVideoTrack;
  }

  inline NonNull<mozilla::dom::VideoTrack>&
  GetAsVideoTrack()
  {
    MOZ_ASSERT(IsVideoTrack(), "Wrong type!");
    return mValue.mVideoTrack.Value();
  }

  inline mozilla::dom::VideoTrack&
  GetAsVideoTrack() const
  {
    MOZ_ASSERT(IsVideoTrack(), "Wrong type!");
    return mValue.mVideoTrack.Value();
  }

  inline NonNull<mozilla::dom::AudioTrack>&
  RawSetAsAudioTrack()
  {
    if (mType == eAudioTrack) {
      return mValue.mAudioTrack.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eAudioTrack;
    return mValue.mAudioTrack.SetValue();
  }

  inline NonNull<mozilla::dom::AudioTrack>&
  SetAsAudioTrack()
  {
    if (mType == eAudioTrack) {
      return mValue.mAudioTrack.Value();
    }
    Uninit();
    mType = eAudioTrack;
    return mValue.mAudioTrack.SetValue();
  }

  inline bool
  IsAudioTrack() const
  {
    return mType == eAudioTrack;
  }

  inline NonNull<mozilla::dom::AudioTrack>&
  GetAsAudioTrack()
  {
    MOZ_ASSERT(IsAudioTrack(), "Wrong type!");
    return mValue.mAudioTrack.Value();
  }

  inline mozilla::dom::AudioTrack&
  GetAsAudioTrack() const
  {
    MOZ_ASSERT(IsAudioTrack(), "Wrong type!");
    return mValue.mAudioTrack.Value();
  }

  inline NonNull<mozilla::dom::TextTrack>&
  RawSetAsTextTrack()
  {
    if (mType == eTextTrack) {
      return mValue.mTextTrack.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eTextTrack;
    return mValue.mTextTrack.SetValue();
  }

  inline NonNull<mozilla::dom::TextTrack>&
  SetAsTextTrack()
  {
    if (mType == eTextTrack) {
      return mValue.mTextTrack.Value();
    }
    Uninit();
    mType = eTextTrack;
    return mValue.mTextTrack.SetValue();
  }

  inline bool
  IsTextTrack() const
  {
    return mType == eTextTrack;
  }

  inline NonNull<mozilla::dom::TextTrack>&
  GetAsTextTrack()
  {
    MOZ_ASSERT(IsTextTrack(), "Wrong type!");
    return mValue.mTextTrack.Value();
  }

  inline mozilla::dom::TextTrack&
  GetAsTextTrack() const
  {
    MOZ_ASSERT(IsTextTrack(), "Wrong type!");
    return mValue.mTextTrack.Value();
  }

  inline void
  Uninit()
  {
    switch (mType) {
      case eUninitialized: {
        break;
      }
      case eVideoTrack: {
        DestroyVideoTrack();
        break;
      }
      case eAudioTrack: {
        DestroyAudioTrack();
        break;
      }
      case eTextTrack: {
        DestroyTextTrack();
        break;
      }
    }
  }

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

private:
  inline void
  DestroyVideoTrack()
  {
    MOZ_ASSERT(IsVideoTrack(), "Wrong type!");
    mValue.mVideoTrack.Destroy();
    mType = eUninitialized;
  }

  inline void
  DestroyAudioTrack()
  {
    MOZ_ASSERT(IsAudioTrack(), "Wrong type!");
    mValue.mAudioTrack.Destroy();
    mType = eUninitialized;
  }

  inline void
  DestroyTextTrack()
  {
    MOZ_ASSERT(IsTextTrack(), "Wrong type!");
    mValue.mTextTrack.Destroy();
    mType = eUninitialized;
  }
};


class OwningVideoTrackOrAudioTrackOrTextTrack : public AllOwningUnionBase
{
  friend void ImplCycleCollectionUnlink(OwningVideoTrackOrAudioTrackOrTextTrack& aUnion);
  enum Type
  {
    eUninitialized,
    eVideoTrack,
    eAudioTrack,
    eTextTrack
  };

  union Value
  {
    UnionMember<OwningNonNull<mozilla::dom::VideoTrack> > mVideoTrack;
    UnionMember<OwningNonNull<mozilla::dom::AudioTrack> > mAudioTrack;
    UnionMember<OwningNonNull<mozilla::dom::TextTrack> > mTextTrack;

  };

  Type mType;
  Value mValue;

public:
  explicit inline OwningVideoTrackOrAudioTrackOrTextTrack()
    : mType(eUninitialized)
  {
  }

  explicit inline OwningVideoTrackOrAudioTrackOrTextTrack(const OwningVideoTrackOrAudioTrackOrTextTrack& aOther)
    : mType(eUninitialized)
  {
    *this = aOther;
  }

  inline ~OwningVideoTrackOrAudioTrackOrTextTrack()
  {
    Uninit();
  }

  OwningNonNull<mozilla::dom::VideoTrack>&
  RawSetAsVideoTrack();

  OwningNonNull<mozilla::dom::VideoTrack>&
  SetAsVideoTrack();

  bool
  TrySetToVideoTrack(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsVideoTrack() const
  {
    return mType == eVideoTrack;
  }

  inline OwningNonNull<mozilla::dom::VideoTrack>&
  GetAsVideoTrack()
  {
    MOZ_ASSERT(IsVideoTrack(), "Wrong type!");
    return mValue.mVideoTrack.Value();
  }

  inline OwningNonNull<mozilla::dom::VideoTrack> const &
  GetAsVideoTrack() const
  {
    MOZ_ASSERT(IsVideoTrack(), "Wrong type!");
    return mValue.mVideoTrack.Value();
  }

  OwningNonNull<mozilla::dom::AudioTrack>&
  RawSetAsAudioTrack();

  OwningNonNull<mozilla::dom::AudioTrack>&
  SetAsAudioTrack();

  bool
  TrySetToAudioTrack(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsAudioTrack() const
  {
    return mType == eAudioTrack;
  }

  inline OwningNonNull<mozilla::dom::AudioTrack>&
  GetAsAudioTrack()
  {
    MOZ_ASSERT(IsAudioTrack(), "Wrong type!");
    return mValue.mAudioTrack.Value();
  }

  inline OwningNonNull<mozilla::dom::AudioTrack> const &
  GetAsAudioTrack() const
  {
    MOZ_ASSERT(IsAudioTrack(), "Wrong type!");
    return mValue.mAudioTrack.Value();
  }

  OwningNonNull<mozilla::dom::TextTrack>&
  RawSetAsTextTrack();

  OwningNonNull<mozilla::dom::TextTrack>&
  SetAsTextTrack();

  bool
  TrySetToTextTrack(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsTextTrack() const
  {
    return mType == eTextTrack;
  }

  inline OwningNonNull<mozilla::dom::TextTrack>&
  GetAsTextTrack()
  {
    MOZ_ASSERT(IsTextTrack(), "Wrong type!");
    return mValue.mTextTrack.Value();
  }

  inline OwningNonNull<mozilla::dom::TextTrack> const &
  GetAsTextTrack() const
  {
    MOZ_ASSERT(IsTextTrack(), "Wrong type!");
    return mValue.mTextTrack.Value();
  }

  void
  Uninit();

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceUnion(JSTracer* trc);

  void
  operator=(const OwningVideoTrackOrAudioTrackOrTextTrack& aOther);

private:
  void
  DestroyVideoTrack();

  void
  DestroyAudioTrack();

  void
  DestroyTextTrack();
};


struct TrackEventInit : public EventInit
{
  Nullable<OwningVideoTrackOrAudioTrackOrTextTrack > mTrack;

  TrackEventInit();

  explicit inline TrackEventInit(const FastDictionaryInitializer& )
    : EventInit(FastDictionaryInitializer())
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline TrackEventInit(const TrackEventInit& aOther)
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
  operator=(const TrackEventInit& aOther);

private:
  static bool
  InitIds(JSContext* cx, TrackEventInitAtoms* atomsCache);
};

namespace binding_detail {
struct FastTrackEventInit : public TrackEventInit
{
  inline FastTrackEventInit()
    : TrackEventInit(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


namespace TrackEventBinding {

  typedef mozilla::dom::TrackEvent NativeType;

  // We declare this as an array so that retrieving a pointer to this
  // binding's property hooks only requires compile/link-time resolvable
  // address arithmetic.  Declaring it as a pointer instead would require
  // doing a run-time load to fetch a pointer to this binding's property
  // hooks.  And then structures which embedded a pointer to this structure
  // would require a run-time load for proper initialization, which would
  // then induce static constructors.  Lots of static constructors.
  extern const NativePropertyHooks sNativePropertyHooks[];

  JSObject*
  DefineDOMInterface(JSContext* aCx, JS::Handle<JSObject*> aGlobal, JS::Handle<jsid> id, bool aDefineOnGlobal);

  const JSClass*
  GetJSClass();

  bool
  Wrap(JSContext* aCx, mozilla::dom::TrackEvent* aObject, nsWrapperCache* aCache, JS::Handle<JSObject*> aGivenProto, JS::MutableHandle<JSObject*> aReflector);

  template <class T>
  inline JSObject* Wrap(JSContext* aCx, T* aObject, JS::Handle<JSObject*> aGivenProto)
  {
    JS::Rooted<JSObject*> reflector(aCx);
    return Wrap(aCx, aObject, aObject, aGivenProto, &reflector) ? reflector.get() : nullptr;
  }

  void
  CreateInterfaceObjects(JSContext* aCx, JS::Handle<JSObject*> aGlobal, ProtoAndIfaceCache& aProtoAndIfaceCache, bool aDefineOnGlobal);

  JS::Handle<JSObject*>
  GetProtoObjectHandle(JSContext* aCx, JS::Handle<JSObject*> aGlobal);

  JS::Handle<JSObject*>
  GetConstructorObjectHandle(JSContext* aCx, JS::Handle<JSObject*> aGlobal, bool aDefineOnGlobal = true);

  JSObject*
  GetConstructorObject(JSContext* aCx, JS::Handle<JSObject*> aGlobal);

} // namespace TrackEventBinding



} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_TrackEventBinding_h
