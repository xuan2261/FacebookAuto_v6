/* -*- Mode: C++; tab-width: 8; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* vim: set ts=8 sts=2 et sw=2 tw=80: */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef mozilla_dom_mobilemessage_SmsParent_h
#define mozilla_dom_mobilemessage_SmsParent_h

#include "mozilla/dom/mobilemessage/PSmsParent.h"
#include "mozilla/dom/mobilemessage/PSmsRequestParent.h"
#include "mozilla/dom/mobilemessage/PMobileMessageCursorParent.h"
#include "nsIDOMDOMCursor.h"
#include "nsIMobileMessageCallback.h"
#include "nsIMobileMessageCursorCallback.h"
#include "nsIObserver.h"

namespace mozilla {
namespace dom {

class ContentParent;

namespace mobilemessage {

class SmsParent : public PSmsParent
                , public nsIObserver
{
  friend class mozilla::dom::ContentParent;

public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIOBSERVER

protected:
  virtual bool
  RecvAddSilentNumber(const nsString& aNumber) override;

  virtual bool
  RecvRemoveSilentNumber(const nsString& aNumber) override;

  SmsParent();
  virtual ~SmsParent()
  {
    MOZ_COUNT_DTOR(SmsParent);
  }

  virtual void
  ActorDestroy(ActorDestroyReason aWhy) override;

  virtual bool
  RecvPSmsRequestConstructor(PSmsRequestParent* aActor,
                             const IPCSmsRequest& aRequest) override;

  virtual PSmsRequestParent*
  AllocPSmsRequestParent(const IPCSmsRequest& aRequest) override;

  virtual bool
  DeallocPSmsRequestParent(PSmsRequestParent* aActor) override;

  virtual bool
  RecvPMobileMessageCursorConstructor(PMobileMessageCursorParent* aActor,
                                      const IPCMobileMessageCursor& aCursor) override;

  virtual PMobileMessageCursorParent*
  AllocPMobileMessageCursorParent(const IPCMobileMessageCursor& aCursor) override;

  virtual bool
  DeallocPMobileMessageCursorParent(PMobileMessageCursorParent* aActor) override;

private:
  nsTArray<nsString> mSilentNumbers;
};

class SmsRequestParent : public PSmsRequestParent
                       , public nsIMobileMessageCallback
{
  friend class SmsParent;

  bool mActorDestroyed;

public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIMOBILEMESSAGECALLBACK

protected:
  SmsRequestParent()
    : mActorDestroyed(false)
  {
    MOZ_COUNT_CTOR(SmsRequestParent);
  }

  virtual ~SmsRequestParent()
  {
    MOZ_COUNT_DTOR(SmsRequestParent);
  }

  virtual void
  ActorDestroy(ActorDestroyReason aWhy) override;

  bool
  DoRequest(const SendMessageRequest& aRequest);

  bool
  DoRequest(const RetrieveMessageRequest& aRequest);

  bool
  DoRequest(const GetMessageRequest& aRequest);

  bool
  DoRequest(const DeleteMessageRequest& aRequest);

  bool
  DoRequest(const MarkMessageReadRequest& aRequest);

  bool
  DoRequest(const GetSegmentInfoForTextRequest& aRequest);

  bool
  DoRequest(const GetSmscAddressRequest& aRequest);

  bool
  DoRequest(const SetSmscAddressRequest& aRequest);

  nsresult
  SendReply(const MessageReply& aReply);
};

class MobileMessageCursorParent : public PMobileMessageCursorParent
                                , public nsIMobileMessageCursorCallback
{
  friend class SmsParent;

  nsCOMPtr<nsICursorContinueCallback> mContinueCallback;

public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIMOBILEMESSAGECURSORCALLBACK

protected:
  MobileMessageCursorParent()
  {
    MOZ_COUNT_CTOR(MobileMessageCursorParent);
  }

  virtual ~MobileMessageCursorParent()
  {
    MOZ_COUNT_DTOR(MobileMessageCursorParent);
  }

  virtual void
  ActorDestroy(ActorDestroyReason aWhy) override;

  virtual bool
  RecvContinue() override;

  bool
  DoRequest(const CreateMessageCursorRequest& aRequest);

  bool
  DoRequest(const CreateThreadCursorRequest& aRequest);
};

} // namespace mobilemessage
} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_mobilemessage_SmsParent_h
