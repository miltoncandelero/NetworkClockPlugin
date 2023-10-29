// Copyright 2023 Elemental Code (Milton Candelero). All Rights Reserved.

#include "NetworkClockStatics.h"
#include "NetworkClockPlayerController.h"
#include "NetworkClockLog.h"
#include "Logging/StructuredLog.h"
#include "Engine/World.h"
#include "UObject/Object.h"
#include "Engine/Engine.h"
#include "Engine/GameInstance.h"



float UNetworkClockStatics::GetNetworkWorldTime(const UObject* WorldContextObject)
{
	if (!WorldContextObject) return 0.f;
	const UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::ReturnNull);
	if (!World) return 0.f;
	const UGameInstance* GameInstance = World->GetGameInstance();
	if (!GameInstance) return World->GetTimeSeconds();
	const ANetworkClockPlayerController* PlayerController = Cast<ANetworkClockPlayerController>(GameInstance->GetFirstLocalPlayerController(World));
	if (!PlayerController)
	{
		UE_LOGFMT(LogNetworkClock, Warning, "No NetworkClockPlayerController found in GameInstance while getting Network World Time. Returning World->GetTimeSeconds()");
		return World->GetTimeSeconds();
	}
	return PlayerController->GetNetworkWorldTime();
}

float UNetworkClockStatics::GetNetworkWorldTimeDelta(const UObject* WorldContextObject)
{
	if (!WorldContextObject) return 0.f;
	const UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::ReturnNull);
	if (!World) return 0.f;
	const UGameInstance* GameInstance = World->GetGameInstance();
	if (!GameInstance) return 0.f;
	const ANetworkClockPlayerController* PlayerController = Cast<ANetworkClockPlayerController>(GameInstance->GetFirstLocalPlayerController(World));
	if (!PlayerController)
	{
		UE_LOGFMT(LogNetworkClock, Warning, "No NetworkClockPlayerController found in GameInstance while getting Network World Time Delta. Returning 0.f");
		return 0.f;
	}
	return PlayerController->GetNetworkWorldTimeDelta();
}
