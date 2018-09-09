/* THIS FILE IS AUTOGENERATED FROM FetchEvent.webidl BY Codegen.py - DO NOT EDIT */

#ifndef mozilla_dom_FetchEventBinding_h
#define mozilla_dom_FetchEventBinding_h

#include "EventBinding.h"
#include "js/RootingAPI.h"
#include "jspubtd.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/BindingUtils.h"
#include "mozilla/dom/Nullable.h"
#include "mozilla/dom/Request.h"
#include "mozilla/dom/UnionMember.h"
#include "mozilla/dom/workers/bindings/ServiceWorkerClient.h"

namespace mozilla {
namespace dom {

struct FetchEventInitAtoms;
struct NativePropertyHooks;
class OwningResponseOrPromise;
class Promise;
class ProtoAndIfaceCache;
class Request;
class Response;

namespace workers {

class FetchEvent;
struct FetchEventAtoms;
class ServiceWorkerClient;

} // namespace workers

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {

void
ImplCycleCollectionTraverse(nsCycleCollectionTraversalCallback& aCallback, OwningResponseOrPromise& aUnion, const char* aName, uint32_t aFlags = 0);


void
ImplCycleCollectionUnlink(OwningResponseOrPromise& aUnion);


struct FetchEventInit : public EventInit
{
  Optional<OwningNonNull<mozilla::dom::workers::ServiceWorkerClient>> mClient;
  Optional<bool> mIsReload;
  Optional<OwningNonNull<mozilla::dom::Request>> mRequest;

  FetchEventInit();

  explicit inline FetchEventInit(const FastDictionaryInitializer& )
    : EventInit(FastDictionaryInitializer())
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline FetchEventInit(const FetchEventInit& aOther)
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
  operator=(const FetchEventInit& aOther);

private:
  static bool
  InitIds(JSContext* cx, FetchEventInitAtoms* atomsCache);
};

namespace binding_detail {
struct FastFetchEventInit : public FetchEventInit
{
  inline FastFetchEventInit()
    : FetchEventInit(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


class ResponseOrPromise
{
  friend class ResponseOrPromiseArgument;
  enum Type
  {
    eUninitialized,
    eResponse,
    ePromise
  };

  union Value
  {
    UnionMember<NonNull<mozilla::dom::Response> > mResponse;
    UnionMember<NonNull<mozilla::dom::Promise> > mPromise;

  };

  Type mType;
  Value mValue;

  ResponseOrPromise(const ResponseOrPromise&) = delete;
  void operator=(const ResponseOrPromise) = delete;
public:
  explicit inline ResponseOrPromise()
    : mType(eUninitialized)
  {
  }

  inline ~ResponseOrPromise()
  {
    Uninit();
  }

  inline NonNull<mozilla::dom::Response>&
  RawSetAsResponse()
  {
    if (mType == eResponse) {
      return mValue.mResponse.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eResponse;
    return mValue.mResponse.SetValue();
  }

  inline NonNull<mozilla::dom::Response>&
  SetAsResponse()
  {
    if (mType == eResponse) {
      return mValue.mResponse.Value();
    }
    Uninit();
    mType = eResponse;
    return mValue.mResponse.SetValue();
  }

  inline bool
  IsResponse() const
  {
    return mType == eResponse;
  }

  inline NonNull<mozilla::dom::Response>&
  GetAsResponse()
  {
    MOZ_ASSERT(IsResponse(), "Wrong type!");
    return mValue.mResponse.Value();
  }

  inline mozilla::dom::Response&
  GetAsResponse() const
  {
    MOZ_ASSERT(IsResponse(), "Wrong type!");
    return mValue.mResponse.Value();
  }

  inline NonNull<mozilla::dom::Promise>&
  RawSetAsPromise()
  {
    if (mType == ePromise) {
      return mValue.mPromise.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = ePromise;
    return mValue.mPromise.SetValue();
  }

  inline NonNull<mozilla::dom::Promise>&
  SetAsPromise()
  {
    if (mType == ePromise) {
      return mValue.mPromise.Value();
    }
    Uninit();
    mType = ePromise;
    return mValue.mPromise.SetValue();
  }

  inline bool
  IsPromise() const
  {
    return mType == ePromise;
  }

  inline NonNull<mozilla::dom::Promise>&
  GetAsPromise()
  {
    MOZ_ASSERT(IsPromise(), "Wrong type!");
    return mValue.mPromise.Value();
  }

  inline mozilla::dom::Promise&
  GetAsPromise() const
  {
    MOZ_ASSERT(IsPromise(), "Wrong type!");
    return mValue.mPromise.Value();
  }

  inline void
  Uninit()
  {
    switch (mType) {
      case eUninitialized: {
        break;
      }
      case eResponse: {
        DestroyResponse();
        break;
      }
      case ePromise: {
        DestroyPromise();
        break;
      }
    }
  }

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

private:
  inline void
  DestroyResponse()
  {
    MOZ_ASSERT(IsResponse(), "Wrong type!");
    mValue.mResponse.Destroy();
    mType = eUninitialized;
  }

  inline void
  DestroyPromise()
  {
    MOZ_ASSERT(IsPromise(), "Wrong type!");
    mValue.mPromise.Destroy();
    mType = eUninitialized;
  }
};


class OwningResponseOrPromise : public AllOwningUnionBase
{
  friend void ImplCycleCollectionUnlink(OwningResponseOrPromise& aUnion);
  enum Type
  {
    eUninitialized,
    eResponse,
    ePromise
  };

  union Value
  {
    UnionMember<OwningNonNull<mozilla::dom::Response> > mResponse;
    UnionMember<OwningNonNull<mozilla::dom::Promise> > mPromise;

  };

  Type mType;
  Value mValue;

public:
  explicit inline OwningResponseOrPromise()
    : mType(eUninitialized)
  {
  }

  explicit inline OwningResponseOrPromise(const OwningResponseOrPromise& aOther)
    : mType(eUninitialized)
  {
    *this = aOther;
  }

  inline ~OwningResponseOrPromise()
  {
    Uninit();
  }

  OwningNonNull<mozilla::dom::Response>&
  RawSetAsResponse();

  OwningNonNull<mozilla::dom::Response>&
  SetAsResponse();

  bool
  TrySetToResponse(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsResponse() const
  {
    return mType == eResponse;
  }

  inline OwningNonNull<mozilla::dom::Response>&
  GetAsResponse()
  {
    MOZ_ASSERT(IsResponse(), "Wrong type!");
    return mValue.mResponse.Value();
  }

  inline OwningNonNull<mozilla::dom::Response> const &
  GetAsResponse() const
  {
    MOZ_ASSERT(IsResponse(), "Wrong type!");
    return mValue.mResponse.Value();
  }

  OwningNonNull<mozilla::dom::Promise>&
  RawSetAsPromise();

  OwningNonNull<mozilla::dom::Promise>&
  SetAsPromise();

  bool
  TrySetToPromise(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsPromise() const
  {
    return mType == ePromise;
  }

  inline OwningNonNull<mozilla::dom::Promise>&
  GetAsPromise()
  {
    MOZ_ASSERT(IsPromise(), "Wrong type!");
    return mValue.mPromise.Value();
  }

  inline OwningNonNull<mozilla::dom::Promise> const &
  GetAsPromise() const
  {
    MOZ_ASSERT(IsPromise(), "Wrong type!");
    return mValue.mPromise.Value();
  }

  void
  Uninit();

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceUnion(JSTracer* trc);

  void
  operator=(const OwningResponseOrPromise& aOther);

private:
  void
  DestroyResponse();

  void
  DestroyPromise();
};


namespace FetchEventBinding {

  typedef mozilla::dom::workers::FetchEvent NativeType;

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

  bool
  ConstructorEnabled(JSContext* aCx, JS::Handle<JSObject*> aObj);

  const JSClass*
  GetJSClass();

  bool
  Wrap(JSContext* aCx, mozilla::dom::workers::FetchEvent* aObject, nsWrapperCache* aCache, JS::Handle<JSObject*> aGivenProto, JS::MutableHandle<JSObject*> aReflector);

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

} // namespace FetchEventBinding



} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_FetchEventBinding_h
