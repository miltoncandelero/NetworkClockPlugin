// Copyright Epic Games, Inc. All Rights Reserved.

#include "NetworkClock.h"
#include "NetworkClockLog.h"

DEFINE_LOG_CATEGORY(LogNetworkClock);

#define LOCTEXT_NAMESPACE "FNetworkClockModule"



void FNetworkClockModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FNetworkClockModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FNetworkClockModule, NetworkClock)