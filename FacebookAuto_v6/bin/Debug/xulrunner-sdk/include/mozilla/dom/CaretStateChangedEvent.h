/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* vim:set ts=2 sw=2 sts=2 et cindent: */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

/* THIS FILE IS AUTOGENERATED FROM CaretStateChangedEvent.webidl BY Codegen.py - DO NOT EDIT */

#ifndef mozilla_dom_CaretStateChangedEvent_h
#define mozilla_dom_CaretStateChangedEvent_h

#include "CaretStateChangedEventBinding.h"
#include "mozilla/Attributes.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingUtils.h"
#include "mozilla/dom/CaretStateChangedEventBinding.h"
#include "mozilla/dom/Event.h"

struct JSContext;
namespace mozilla {
namespace dom {

class CaretStateChangedEvent : public Event
{
public:
  NS_DECL_ISUPPORTS_INHERITED
  NS_DECL_CYCLE_COLLECTION_SCRIPT_HOLDER_CLASS_INHERITED(CaretStateChangedEvent, Event)
protected:
  virtual ~CaretStateChangedEvent();
  explicit CaretStateChangedEvent(mozilla::dom::EventTarget* aOwner);

  bool mCollapsed;
  nsRefPtr<DOMRectReadOnly> mBoundingClientRect;
  CaretChangedReason mReason;
  bool mCaretVisible;
  bool mSelectionVisible;

public:
  virtual CaretStateChangedEvent* AsCaretStateChangedEvent() override;

  virtual JSObject* WrapObjectInternal(JSContext* aCx, JS::Handle<JSObject*> aGivenProto) override;

  static already_AddRefed<CaretStateChangedEvent> Constructor(mozilla::dom::EventTarget* aOwner, const nsAString& aType, const CaretStateChangedEventInit& aEventInit);

  static already_AddRefed<CaretStateChangedEvent> Constructor(const GlobalObject& aGlobal, const nsAString& aType, const CaretStateChangedEventInit& aEventInit, ErrorResult& aRv);

  bool Collapsed() const;

  DOMRectReadOnly* GetBoundingClientRect() const;

  CaretChangedReason Reason() const;

  bool CaretVisible() const;

  bool SelectionVisible() const;
};

} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_CaretStateChangedEvent_h
