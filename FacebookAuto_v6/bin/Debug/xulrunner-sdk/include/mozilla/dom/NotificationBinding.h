/* THIS FILE IS AUTOGENERATED FROM Notification.webidl BY Codegen.py - DO NOT EDIT */

#ifndef mozilla_dom_NotificationBinding_h
#define mozilla_dom_NotificationBinding_h

#include "js/RootingAPI.h"
#include "jspubtd.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/CallbackFunction.h"
#include "mozilla/dom/Nullable.h"
#include "mozilla/dom/ToJSValue.h"

namespace mozilla {
namespace dom {

struct GetNotificationOptionsAtoms;
struct NativePropertyHooks;
class Notification;
struct NotificationAtoms;
struct NotificationBehavior;
struct NotificationBehaviorAtoms;
struct NotificationOptionsAtoms;
class NotificationPermissionCallback;
class ProtoAndIfaceCache;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {

enum class NotificationPermission : uint32_t {
  Default,
  Denied,
  Granted,
  EndGuard_
};

namespace NotificationPermissionValues {
extern const EnumEntry strings[4];
} // namespace NotificationPermissionValues


enum class NotificationDirection : uint32_t {
  Auto,
  Ltr,
  Rtl,
  EndGuard_
};

namespace NotificationDirectionValues {
extern const EnumEntry strings[4];
} // namespace NotificationDirectionValues


struct GetNotificationOptions : public DictionaryBase
{
  Optional<nsString> mTag;

  GetNotificationOptions();

  explicit inline GetNotificationOptions(const FastDictionaryInitializer& )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline GetNotificationOptions(const GetNotificationOptions& aOther)
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
  operator=(const GetNotificationOptions& aOther);

private:
  static bool
  InitIds(JSContext* cx, GetNotificationOptionsAtoms* atomsCache);
};

namespace binding_detail {
struct FastGetNotificationOptions : public GetNotificationOptions
{
  inline FastGetNotificationOptions()
    : GetNotificationOptions(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct NotificationBehavior : public DictionaryBase
{
  bool mNoclear;
  bool mNoscreen;
  bool mShowOnlyOnce;
  nsString mSoundFile;
  Optional<Sequence<uint32_t>> mVibrationPattern;

  NotificationBehavior();

  explicit inline NotificationBehavior(const FastDictionaryInitializer& )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline NotificationBehavior(const NotificationBehavior& aOther)
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
  operator=(const NotificationBehavior& aOther);

private:
  static bool
  InitIds(JSContext* cx, NotificationBehaviorAtoms* atomsCache);
};

namespace binding_detail {
struct FastNotificationBehavior : public NotificationBehavior
{
  inline FastNotificationBehavior()
    : NotificationBehavior(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct NotificationOptions : public DictionaryBase
{
  nsString mBody;
  JS::Value mData;
  NotificationDirection mDir;
  nsString mIcon;
  nsString mLang;
  NotificationBehavior mMozbehavior;
  nsString mTag;

  NotificationOptions();

  explicit inline NotificationOptions(const FastDictionaryInitializer& )
    : mData(JS::UndefinedValue()),
      mMozbehavior(FastDictionaryInitializer())
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  NotificationOptions(const NotificationOptions&) = delete;
  void operator=(const NotificationOptions) = delete;

  static bool
  InitIds(JSContext* cx, NotificationOptionsAtoms* atomsCache);

public:
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
};

namespace binding_detail {
struct FastNotificationOptions : public NotificationOptions
{
  inline FastNotificationOptions()
    : NotificationOptions(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


class NotificationPermissionCallback : public CallbackFunction
{
public:
  explicit inline NotificationPermissionCallback(JS::Handle<JSObject*> aCallback, nsIGlobalObject* aIncumbentGlobal)
    : CallbackFunction(aCallback, aIncumbentGlobal)
  {
    MOZ_ASSERT(JS::IsCallable(mCallback));
  }

  explicit inline NotificationPermissionCallback(CallbackFunction* aOther)
    : CallbackFunction(aOther)
  {
  }

  template <typename T>
  inline void
  Call(const T& thisVal, NotificationPermission permission, ErrorResult& aRv, const char* aExecutionReason = nullptr, ExceptionHandling aExceptionHandling = eReportExceptions, JSCompartment* aCompartment = nullptr)
  {
    if (!aExecutionReason) {
      aExecutionReason = "NotificationPermissionCallback";
    }
    CallSetup s(this, aRv, aExecutionReason, aExceptionHandling, aCompartment);
    if (!s.GetContext()) {
      aRv.Throw(NS_ERROR_UNEXPECTED);
      return;
    }
    JS::Rooted<JS::Value> thisValJS(s.GetContext());
    if (!ToJSValue(s.GetContext(), thisVal, &thisValJS)) {
      aRv.Throw(NS_ERROR_FAILURE);
      return;
    }
    return Call(s.GetContext(), thisValJS, permission, aRv);
  }

  inline void
  Call(NotificationPermission permission, ErrorResult& aRv, const char* aExecutionReason = nullptr, ExceptionHandling aExceptionHandling = eReportExceptions, JSCompartment* aCompartment = nullptr)
  {
    if (!aExecutionReason) {
      aExecutionReason = "NotificationPermissionCallback";
    }
    CallSetup s(this, aRv, aExecutionReason, aExceptionHandling, aCompartment);
    if (!s.GetContext()) {
      aRv.Throw(NS_ERROR_UNEXPECTED);
      return;
    }
    return Call(s.GetContext(), JS::UndefinedHandleValue, permission, aRv);
  }

  inline bool
  operator==(const NotificationPermissionCallback& aOther) const
  {
    return CallbackFunction::operator==(aOther);
  }

private:
  void Call(JSContext* cx, JS::Handle<JS::Value> aThisVal, NotificationPermission permission, ErrorResult& aRv);
};


namespace NotificationBinding {

  typedef mozilla::dom::Notification NativeType;

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
  Wrap(JSContext* aCx, mozilla::dom::Notification* aObject, nsWrapperCache* aCache, JS::Handle<JSObject*> aGivenProto, JS::MutableHandle<JSObject*> aReflector);

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

} // namespace NotificationBinding



} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_NotificationBinding_h