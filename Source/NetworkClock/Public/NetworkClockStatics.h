// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "NetworkClockStatics.generated.h"

/**
 * 
 */
UCLASS()
class NETWORKCLOCK_API UNetworkClockStatics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	/** Returns the current network time. */
	UFUNCTION(BlueprintPure, Category=NetworkClock, meta=(WorldContext="WorldContextObject"))
	static float GetNetworkWorldTime(UObject* WorldContextObject);
	
	/** Returns the current network time delta. (The difference between client's and server's World->GetTime()) */
	UFUNCTION(BlueprintPure, Category=NetworkClock, meta=(WorldContext="WorldContextObject"))
	static float GetNetworkWorldTimeDelta(UObject* WorldContextObject);
	
};
