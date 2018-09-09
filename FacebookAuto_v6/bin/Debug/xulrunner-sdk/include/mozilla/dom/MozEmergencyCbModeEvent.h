/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* vim:set ts=2 sw=2 sts=2 et cindent: */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

/* THIS FILE IS AUTOGENERATED FROM MozEmergencyCbModeEvent.webidl BY Codegen.py - DO NOT EDIT */

#ifndef mozilla_dom_MozEmergencyCbModeEvent_h
#define mozilla_dom_MozEmergencyCbModeEvent_h

#include "mozilla/Attributes.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingUtils.h"
#include "mozilla/dom/Event.h"
#include "mozilla/dom/MozEmergencyCbModeEventBinding.h"

struct JSContext;
namespace mozilla {
namespace dom {

class MozEmergencyCbModeEvent : public Event
{
public:
  NS_DECL_ISUPPORTS_INHERITED
  NS_DECL_CYCLE_COLLECTION_SCRIPT_HOLDER_CLASS_INHERITED(MozEmergencyCbModeEvent, Event)
protected:
  virtual ~MozEmergencyCbModeEvent();
  explicit MozEmergencyCbModeEvent(mozilla::dom::EventTarget* aOwner);

  bool mActive;
  uint32_t mTimeoutMs;

public:
  virtual MozEmergencyCbModeEvent* AsMozEmergencyCbModeEvent() override;

  virtual JSObject* WrapObjectInternal(JSContext* aCx, JS::Handle<JSObject*> aGivenProto) override;

  static already_AddRefed<MozEmergencyCbModeEvent> Constructor(mozilla::dom::EventTarget* aOwner, const nsAString& aType, const MozEmergencyCbModeEventInit& aEventInitDict);

  static already_AddRefed<MozEmergencyCbModeEvent> Constructor(const GlobalObject& aGlobal, const nsAString& aType, const MozEmergencyCbModeEventInit& aEventInitDict, ErrorResult& aRv);

  bool Active() const;

  uint32_t TimeoutMs() const;
};

} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_MozEmergencyCbModeEvent_h
