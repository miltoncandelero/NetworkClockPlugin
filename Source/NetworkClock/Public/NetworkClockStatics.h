// Copyright 2023 Elemental Code (Milton Candelero). All Rights Reserved.

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
	static float GetNetworkWorldTime(const UObject* WorldContextObject);
	
	/** Returns the current network time delta. (The difference between client's and server's World->GetTime()) */
	UFUNCTION(BlueprintPure, Category=NetworkClock, meta=(WorldContext="WorldContextObject"))
	static float GetNetworkWorldTimeDelta(const UObject* WorldContextObject);
	
};
