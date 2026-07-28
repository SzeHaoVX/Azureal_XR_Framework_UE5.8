// Copyright Virtual X Sdn Bhd. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Application/IInputProcessor.h"

/**
 * Global editor input pre-processor. Watches for F1 and, only when keyboard
 * focus is inside a Blueprint graph editor, builds the Azr_Grab flow on that
 * Blueprint and consumes the key (so F1 does not fall through to Help). In any
 * other context it returns false and F1 behaves normally.
 */
class FAzrGrabHotkeyProcessor : public IInputProcessor
{
public:
	virtual void Tick(const float /*DeltaTime*/, FSlateApplication& /*SlateApp*/, TSharedRef<ICursor> /*Cursor*/) override {}
	virtual bool HandleKeyDownEvent(FSlateApplication& SlateApp, const FKeyEvent& InKeyEvent) override;
	virtual const TCHAR* GetDebugName() const override { return TEXT("AzrGrabHotkeyProcessor"); }
};
