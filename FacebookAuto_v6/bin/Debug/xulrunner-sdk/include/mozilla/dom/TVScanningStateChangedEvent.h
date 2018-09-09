/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* vim:set ts=2 sw=2 sts=2 et cindent: */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

/* THIS FILE IS AUTOGENERATED FROM TVScanningStateChangedEvent.webidl BY Codegen.py - DO NOT EDIT */

#ifndef mozilla_dom_TVScanningStateChangedEvent_h
#define mozilla_dom_TVScanningStateChangedEvent_h

#include "TVScanningStateChangedEventBinding.h"
#include "mozilla/Attributes.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingUtils.h"
#include "mozilla/dom/Event.h"
#include "mozilla/dom/TVScanningStateChangedEventBinding.h"

struct JSContext;
namespace mozilla {
namespace dom {

class TVScanningStateChangedEvent : public Event
{
public:
  NS_DECL_ISUPPORTS_INHERITED
  NS_DECL_CYCLE_COLLECTION_SCRIPT_HOLDER_CLASS_INHERITED(TVScanningStateChangedEvent, Event)
protected:
  virtual ~TVScanningStateChangedEvent();
  explicit TVScanningStateChangedEvent(mozilla::dom::EventTarget* aOwner);

  TVScanningState mState;
  nsRefPtr<TVChannel> mChannel;

public:
  virtual TVScanningStateChangedEvent* AsTVScanningStateChangedEvent() override;

  virtual JSObject* WrapObjectInternal(JSContext* aCx, JS::Handle<JSObject*> aGivenProto) override;

  static already_AddRefed<TVScanningStateChangedEvent> Constructor(mozilla::dom::EventTarget* aOwner, const nsAString& aType, const TVScanningStateChangedEventInit& aEventInitDict);

  static already_AddRefed<TVScanningStateChangedEvent> Constructor(const GlobalObject& aGlobal, const nsAString& aType, const TVScanningStateChangedEventInit& aEventInitDict, ErrorResult& aRv);

  TVScanningState State() const;

  TVChannel* GetChannel() const;
};

} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_TVScanningStateChangedEvent_h
