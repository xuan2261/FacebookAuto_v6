/* -*- Mode: C++; tab-width: 8; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* vim: set ts=8 sts=2 et sw=2 tw=80: */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef mozilla_dom_Event_h_
#define mozilla_dom_Event_h_

#include "mozilla/Attributes.h"
#include "mozilla/BasicEvents.h"
#include "nsIDOMEvent.h"
#include "nsISupports.h"
#include "nsCOMPtr.h"
#include "nsPIDOMWindow.h"
#include "nsPoint.h"
#include "nsCycleCollectionParticipant.h"
#include "nsAutoPtr.h"
#include "mozilla/dom/EventBinding.h"
#include "nsIScriptGlobalObject.h"
#include "Units.h"
#include "js/TypeDecls.h"
#include "nsIGlobalObject.h"

class nsIContent;
class nsIDOMEventTarget;
class nsPresContext;

namespace mozilla {
namespace dom {

class EventTarget;
class WantsPopupControlCheck;
#define GENERATED_EVENT(EventClass_) class EventClass_;
#include "mozilla/dom/GeneratedEventList.h"
#undef GENERATED_EVENT
// ExtendableEvent is a ServiceWorker event that is not
// autogenerated since it has some extra methods.
namespace workers {
class ExtendableEvent;
} // namespace workers

// Dummy class so we can cast through it to get from nsISupports to
// Event subclasses with only two non-ambiguous static casts.
class EventBase : public nsIDOMEvent
{
};

class Event : public EventBase,
              public nsWrapperCache
{
public:
  Event(EventTarget* aOwner,
        nsPresContext* aPresContext,
        WidgetEvent* aEvent);
  explicit Event(nsPIDOMWindow* aWindow);

protected:
  virtual ~Event();

private:
  void ConstructorInit(EventTarget* aOwner,
                       nsPresContext* aPresContext,
                       WidgetEvent* aEvent);

public:
  static Event* FromSupports(nsISupports* aSupports)
  {
    nsIDOMEvent* event =
      static_cast<nsIDOMEvent*>(aSupports);
#ifdef DEBUG
    {
      nsCOMPtr<nsIDOMEvent> target_qi =
        do_QueryInterface(aSupports);

      // If this assertion fires the QI implementation for the object in
      // question doesn't use the nsIDOMEvent pointer as the
      // nsISupports pointer. That must be fixed, or we'll crash...
      MOZ_ASSERT(target_qi == event, "Uh, fix QI!");
    }
#endif
    return static_cast<Event*>(event);
  }

  NS_DECL_CYCLE_COLLECTING_ISUPPORTS
  NS_DECL_CYCLE_COLLECTION_SCRIPT_HOLDER_CLASS(Event)

  nsIGlobalObject* GetParentObject()
  {
    return mOwner;
  }

  virtual JSObject* WrapObject(JSContext* aCx, JS::Handle<JSObject*> aGivenProto) override final;

  virtual JSObject* WrapObjectInternal(JSContext* aCx, JS::Handle<JSObject*> aGivenProto);

#define GENERATED_EVENT(EventClass_) \
  virtual EventClass_* As##EventClass_()  \
  {                                       \
    return nullptr;                       \
  }
#include "mozilla/dom/GeneratedEventList.h"
#undef GENERATED_EVENT

  // ExtendableEvent is a ServiceWorker event that is not
  // autogenerated since it has some extra methods.
  virtual workers::ExtendableEvent* AsExtendableEvent()
  {
    return nullptr;
  }

  // nsIDOMEvent Interface
  NS_DECL_NSIDOMEVENT

  void InitPresContextData(nsPresContext* aPresContext);

  // Returns true if the event should be trusted.
  bool Init(EventTarget* aGlobal);

  static PopupControlState GetEventPopupControlState(WidgetEvent* aEvent,
                                                     nsIDOMEvent* aDOMEvent = nullptr);

  static void PopupAllowedEventsChanged();

  static void Shutdown();

  static const char* GetEventName(uint32_t aEventType);
  static CSSIntPoint GetClientCoords(nsPresContext* aPresContext,
                                     WidgetEvent* aEvent,
                                     LayoutDeviceIntPoint aPoint,
                                     CSSIntPoint aDefaultPoint);
  static CSSIntPoint GetPageCoords(nsPresContext* aPresContext,
                                   WidgetEvent* aEvent,
                                   LayoutDeviceIntPoint aPoint,
                                   CSSIntPoint aDefaultPoint);
  static LayoutDeviceIntPoint GetScreenCoords(nsPresContext* aPresContext,
                                              WidgetEvent* aEvent,
                                              LayoutDeviceIntPoint aPoint);
  static CSSIntPoint GetOffsetCoords(nsPresContext* aPresContext,
                                     WidgetEvent* aEvent,
                                     LayoutDeviceIntPoint aPoint,
                                     CSSIntPoint aDefaultPoint);

  static already_AddRefed<Event> Constructor(const GlobalObject& aGlobal,
                                             const nsAString& aType,
                                             const EventInit& aParam,
                                             ErrorResult& aRv);

  // Implemented as xpidl method
  // void GetType(nsString& aRetval) {}

  EventTarget* GetTarget() const;
  EventTarget* GetCurrentTarget() const;

  uint16_t EventPhase() const;

  // xpidl implementation
  // void StopPropagation();

  // xpidl implementation
  // void StopImmediatePropagation();

  bool Bubbles() const
  {
    return mEvent->mFlags.mBubbles;
  }

  bool Cancelable() const
  {
    return mEvent->mFlags.mCancelable;
  }

  // xpidl implementation
  // void PreventDefault();

  // You MUST NOT call PreventDefaultJ(JSContext*) from C++ code.  A call of
  // this method always sets Event.defaultPrevented true for web contents.
  // If default action handler calls this, web applications meet wrong
  // defaultPrevented value.
  void PreventDefault(JSContext* aCx);

  // You MUST NOT call DefaultPrevented(JSContext*) from C++ code.  This may
  // return false even if PreventDefault() has been called.
  // See comments in its implementation for the detail.
  bool DefaultPrevented(JSContext* aCx) const;

  bool DefaultPrevented() const
  {
    return mEvent->mFlags.mDefaultPrevented;
  }

  bool MultipleActionsPrevented() const
  {
    return mEvent->mFlags.mMultipleActionsPrevented;
  }

  bool IsTrusted() const
  {
    return mEvent->mFlags.mIsTrusted;
  }

  bool IsSynthesized() const
  {
    return mEvent->mFlags.mIsSynthesizedForTests;
  }

  double TimeStamp() const;

  void InitEvent(const nsAString& aType, bool aBubbles, bool aCancelable,
                 ErrorResult& aRv)
  {
    aRv = InitEvent(aType, aBubbles, aCancelable);
  }

  EventTarget* GetOriginalTarget() const;
  EventTarget* GetExplicitOriginalTarget() const;
  EventTarget* GetComposedTarget() const;

  bool GetPreventDefault() const;

  /**
   * @param aCalledByDefaultHandler     Should be true when this is called by
   *                                    C++ or Chrome.  Otherwise, e.g., called
   *                                    by a call of Event.preventDefault() in
   *                                    content script, false.
   */
  void PreventDefaultInternal(bool aCalledByDefaultHandler);

  bool IsMainThreadEvent()
  {
    return mIsMainThreadEvent;
  }

  /**
   * For a given current target, returns the related target adjusted with
   * shadow DOM retargeting rules. Returns nullptr if related target
   * is not adjusted.
   */
  static nsIContent* GetShadowRelatedTarget(nsIContent* aCurrentTarget,
                                            nsIContent* aRelatedTarget);

protected:

  // Internal helper functions
  void SetEventType(const nsAString& aEventTypeArg);
  already_AddRefed<nsIContent> GetTargetFromFrame();

  friend class WantsPopupControlCheck;
  void SetWantsPopupControlCheck(bool aCheck)
  {
    mWantsPopupControlCheck = aCheck;
  }

  bool GetWantsPopupControlCheck()
  {
    return IsTrusted() && mWantsPopupControlCheck;
  }

  /**
   * IsChrome() returns true if aCx is chrome context or the event is created
   * in chrome's thread.  Otherwise, false.
   */
  bool IsChrome(JSContext* aCx) const;

  mozilla::WidgetEvent*       mEvent;
  nsRefPtr<nsPresContext>     mPresContext;
  nsCOMPtr<EventTarget>       mExplicitOriginalTarget;
  nsCOMPtr<nsIGlobalObject>   mOwner;
  bool                        mEventIsInternal;
  bool                        mPrivateDataDuplicated;
  bool                        mIsMainThreadEvent;
  // True when popup control check should rely on event.type, not
  // WidgetEvent.message.
  bool                        mWantsPopupControlCheck;
};

class MOZ_STACK_CLASS WantsPopupControlCheck
{
public:
  explicit WantsPopupControlCheck(nsIDOMEvent* aEvent) :
    mEvent(aEvent->InternalDOMEvent())
  {
    mOriginalWantsPopupControlCheck = mEvent->GetWantsPopupControlCheck();
    mEvent->SetWantsPopupControlCheck(mEvent->IsTrusted());
  }

  ~WantsPopupControlCheck()
  {
    mEvent->SetWantsPopupControlCheck(mOriginalWantsPopupControlCheck);
  }

private:
  Event* mEvent;
  bool mOriginalWantsPopupControlCheck;
};

} // namespace dom
} // namespace mozilla

#define NS_FORWARD_TO_EVENT \
  NS_FORWARD_NSIDOMEVENT(Event::)

#define NS_FORWARD_NSIDOMEVENT_NO_SERIALIZATION_NO_DUPLICATION(_to) \
  NS_IMETHOD GetType(nsAString& aType) override { return _to GetType(aType); } \
  NS_IMETHOD GetTarget(nsIDOMEventTarget** aTarget) override { return _to GetTarget(aTarget); } \
  NS_IMETHOD GetCurrentTarget(nsIDOMEventTarget** aCurrentTarget) override { return _to GetCurrentTarget(aCurrentTarget); } \
  NS_IMETHOD GetEventPhase(uint16_t* aEventPhase) override { return _to GetEventPhase(aEventPhase); } \
  NS_IMETHOD GetBubbles(bool* aBubbles) override { return _to GetBubbles(aBubbles); } \
  NS_IMETHOD GetCancelable(bool* aCancelable) override { return _to GetCancelable(aCancelable); } \
  NS_IMETHOD GetTimeStamp(DOMTimeStamp* aTimeStamp) override { return _to GetTimeStamp(aTimeStamp); } \
  NS_IMETHOD StopPropagation(void) override { return _to StopPropagation(); } \
  NS_IMETHOD StopCrossProcessForwarding(void) override { return _to StopCrossProcessForwarding(); } \
  NS_IMETHOD PreventDefault(void) override { return _to PreventDefault(); } \
  NS_IMETHOD InitEvent(const nsAString& eventTypeArg, bool canBubbleArg, bool cancelableArg) override { return _to InitEvent(eventTypeArg, canBubbleArg, cancelableArg); } \
  NS_IMETHOD GetDefaultPrevented(bool* aDefaultPrevented) override { return _to GetDefaultPrevented(aDefaultPrevented); } \
  NS_IMETHOD StopImmediatePropagation(void) override { return _to StopImmediatePropagation(); } \
  NS_IMETHOD GetOriginalTarget(nsIDOMEventTarget** aOriginalTarget) override { return _to GetOriginalTarget(aOriginalTarget); } \
  NS_IMETHOD GetExplicitOriginalTarget(nsIDOMEventTarget** aExplicitOriginalTarget) override { return _to GetExplicitOriginalTarget(aExplicitOriginalTarget); } \
  NS_IMETHOD GetPreventDefault(bool* aRetval) override { return _to GetPreventDefault(aRetval); } \
  NS_IMETHOD GetIsTrusted(bool* aIsTrusted) override { return _to GetIsTrusted(aIsTrusted); } \
  NS_IMETHOD SetTarget(nsIDOMEventTarget* aTarget) override { return _to SetTarget(aTarget); } \
  NS_IMETHOD_(bool) IsDispatchStopped(void) override { return _to IsDispatchStopped(); } \
  NS_IMETHOD_(WidgetEvent*) GetInternalNSEvent(void) override { return _to GetInternalNSEvent(); } \
  NS_IMETHOD_(void) SetTrusted(bool aTrusted) override { _to SetTrusted(aTrusted); } \
  NS_IMETHOD_(void) SetOwner(EventTarget* aOwner) override { _to SetOwner(aOwner); } \
  NS_IMETHOD_(Event*) InternalDOMEvent() override { return _to InternalDOMEvent(); }

#define NS_FORWARD_TO_EVENT_NO_SERIALIZATION_NO_DUPLICATION \
  NS_FORWARD_NSIDOMEVENT_NO_SERIALIZATION_NO_DUPLICATION(Event::)

inline nsISupports*
ToSupports(mozilla::dom::Event* e)
{
  return static_cast<nsIDOMEvent*>(e);
}

inline nsISupports*
ToCanonicalSupports(mozilla::dom::Event* e)
{
  return static_cast<nsIDOMEvent*>(e);
}

#endif // mozilla_dom_Event_h_
