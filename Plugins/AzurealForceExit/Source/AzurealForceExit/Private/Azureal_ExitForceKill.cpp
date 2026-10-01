// Fill out your copyright notice in the Description page of Project Settings.


#include "Azureal_ExitForceKill.h"
#include "HAL/PlatformProcess.h"

// Windows Silent Kill support
#if PLATFORM_WINDOWS
#include "Windows/WindowsHWrapper.h"
#endif

void UAzureal_ExitForceKill::ForceKillGame()
{
#if PLATFORM_WINDOWS
    // Windows: Silent, Instant Kill (Bypassing Crash Reporter)
    // 0 = Exit Code Success
    ::TerminateProcess(::GetCurrentProcess(), 0);
#else
    // Fallback (Quest/Android): the platform's own forced exit, which on Android quits through the Java
    // activity with code 0. FGenericPlatformMisc::RequestExit(true) called abort(), so every quit was
    // recorded as a crash.
    FPlatformMisc::RequestExit(true, TEXT("UAzureal_ExitForceKill::ForceKillGame"));
#endif
}

