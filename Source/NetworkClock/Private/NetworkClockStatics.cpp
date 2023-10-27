// Fill out your copyright notice in the Description page of Project Settings.

#include "NetworkClockStatics.h"
#include "NetworkClockPlayerController.h"
#include "NetworkClockLog.h"
#include "Logging/StructuredLog.h"

float UNetworkClockStatics::GetNetworkWorldTime(UObject* WorldContextObject)
{
	if (!WorldContextObject) return 0.f;
	UWorld* const World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::ReturnNull);
	if (!World) return 0.f;
	UGameInstance* const GameInstance = World->GetGameInstance();
	if (!GameInstance) return World->GetTimeSeconds();
	ANetworkClockPlayerController* const PlayerController = Cast<ANetworkClockPlayerController>(GameInstance->GetFirstLocalPlayerController(World));
	if (!PlayerController)
	{
		UE_LOGFMT(LogNetworkClock, Warning, "No NetworkClockPlayerController found in GameInstance while getting Network World Time. Returning World->GetTimeSeconds()");
		return World->GetTimeSeconds();
	}
	return PlayerController->GetNetworkWorldTime();
}

float UNetworkClockStatics::GetNetworkWorldTimeDelta(UObject* WorldContextObject)
{
	if (!WorldContextObject) return 0.f;
	UWorld* const World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::ReturnNull);
	if (!World) return 0.f;
	UGameInstance* const GameInstance = World->GetGameInstance();
	if (!GameInstance) return 0.f;
	ANetworkClockPlayerController* const PlayerController = Cast<ANetworkClockPlayerController>(GameInstance->GetFirstLocalPlayerController(World));
	if (!PlayerController)
	{
		UE_LOGFMT(LogNetworkClock, Warning, "No NetworkClockPlayerController found in GameInstance while getting Network World Time Delta. Returning 0.f");
		return 0.f;
	}
	return PlayerController->GetNetworkWorldTimeDelta();
}
