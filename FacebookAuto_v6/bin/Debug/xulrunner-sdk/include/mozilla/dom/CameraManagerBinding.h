/* THIS FILE IS AUTOGENERATED FROM CameraManager.webidl BY Codegen.py - DO NOT EDIT */

#ifndef mozilla_dom_CameraManagerBinding_h
#define mozilla_dom_CameraManagerBinding_h

#include "js/RootingAPI.h"
#include "jspubtd.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/Nullable.h"

class nsDOMCameraManager;
struct nsDOMCameraManagerAtoms;

namespace mozilla {
namespace dom {

struct CameraConfigurationAtoms;
struct CameraSize;
struct CameraSizeAtoms;
struct NativePropertyHooks;
class ProtoAndIfaceCache;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {

enum class CameraMode : uint32_t {
  Unspecified,
  Picture,
  Video,
  EndGuard_
};

namespace CameraModeValues {
extern const EnumEntry strings[4];
} // namespace CameraModeValues


struct CameraSize : public DictionaryBase
{
  uint32_t mHeight;
  uint32_t mWidth;

  CameraSize();

  explicit inline CameraSize(const FastDictionaryInitializer& )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline CameraSize(const CameraSize& aOther)
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
  operator=(const CameraSize& aOther);

private:
  static bool
  InitIds(JSContext* cx, CameraSizeAtoms* atomsCache);
};

namespace binding_detail {
struct FastCameraSize : public CameraSize
{
  inline FastCameraSize()
    : CameraSize(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct CameraConfiguration : public DictionaryBase
{
  CameraMode mMode;
  CameraSize mPictureSize;
  CameraSize mPreviewSize;
  nsString mRecorderProfile;

  CameraConfiguration();

  explicit inline CameraConfiguration(const FastDictionaryInitializer& )
    : mPictureSize(FastDictionaryInitializer()),
      mPreviewSize(FastDictionaryInitializer())
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline CameraConfiguration(const CameraConfiguration& aOther)
    : mPictureSize(FastDictionaryInitializer()),
      mPreviewSize(FastDictionaryInitializer())
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
  operator=(const CameraConfiguration& aOther);

private:
  static bool
  InitIds(JSContext* cx, CameraConfigurationAtoms* atomsCache);
};

namespace binding_detail {
struct FastCameraConfiguration : public CameraConfiguration
{
  inline FastCameraConfiguration()
    : CameraConfiguration(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


namespace CameraManagerBinding {

  typedef nsDOMCameraManager NativeType;

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
  Wrap(JSContext* aCx, nsDOMCameraManager* aObject, nsWrapperCache* aCache, JS::Handle<JSObject*> aGivenProto, JS::MutableHandle<JSObject*> aReflector);

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

} // namespace CameraManagerBinding



} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_CameraManagerBinding_h
