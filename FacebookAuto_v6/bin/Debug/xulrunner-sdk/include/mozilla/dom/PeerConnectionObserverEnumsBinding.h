/* THIS FILE IS AUTOGENERATED FROM PeerConnectionObserverEnums.webidl BY Codegen.py - DO NOT EDIT */

#ifndef mozilla_dom_PeerConnectionObserverEnumsBinding_h
#define mozilla_dom_PeerConnectionObserverEnumsBinding_h

#include "js/RootingAPI.h"
#include "jspubtd.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/Nullable.h"

namespace mozilla {
namespace dom {

struct NativePropertyHooks;
class ProtoAndIfaceCache;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {

enum class PCObserverStateType : uint32_t {
  None,
  IceConnectionState,
  IceGatheringState,
  SdpState,
  SipccState,
  SignalingState,
  EndGuard_
};

namespace PCObserverStateTypeValues {
extern const EnumEntry strings[7];
} // namespace PCObserverStateTypeValues


} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_PeerConnectionObserverEnumsBinding_h
