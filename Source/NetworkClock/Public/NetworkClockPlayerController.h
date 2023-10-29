// Copyright 2023 Elemental Code (Milton Candelero). All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "NetworkClockPlayerController.generated.h"


UCLASS()
class NETWORKCLOCK_API ANetworkClockPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	/** Frequency that the client requests to adjust its local clock. Set to zero to disable periodic updates. */
	UPROPERTY(EditDefaultsOnly, Category=NetworkClock, meta=(ClampMin=0.f, Units=s))
	float NetworkClockUpdateFrequency = 1.f;

	/** How many samples to keep in the rolling buffer. */
	UPROPERTY(EditDefaultsOnly, Category=NetworkClock, meta=(ClampMin=1))
	int RollingBufferSize = 10;

	/** How many outliers to discard when calculating the average. Discards this amount from the top and from the bottom. Meaning this is clamped to [0, (RollingBufferSize-1)/2] */
	UPROPERTY(EditDefaultsOnly, Category=NetworkClock, meta=(ClampMin=0))
	int AmountOfOutliersToDiscard = 1;

	/**
	 * If the roundtrip is bigger than this value, it will be averaged with the engine reported ping.
	 * For some reason, this makes it more accurate on high pings.
	 */
	UPROPERTY(EditDefaultsOnly, Category=NetworkClock, meta=(ClampMin=0.f, Units=s))
	float AverageWithPingThreshold = 0.25;

private:

	float ServerWorldTimeDelta = 0.f;
	TArray<float> RTTCircularBuffer;

public:
#if WITH_EDITOR
	// Prevent wacky editor values
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

	/** Returns the current network time delta. (The difference between client's and server's World->GetTime()) */
	UFUNCTION(BlueprintPure, Category=NetworkClock, DisplayName="Network World Time Delta")
	float GetNetworkWorldTimeDelta() const;

	/** Returns the current network time. */
	UFUNCTION(BlueprintPure, Category=NetworkClock, DisplayName="Network World Time")
	float GetNetworkWorldTime() const;

	virtual void PostNetInit() override;

private:
	void RequestWorldTime_Internal();

	UFUNCTION(Server, Unreliable)
	void ServerRequestWorldTime(float ClientTimestamp);

	UFUNCTION(Client, Unreliable)
	void ClientUpdateWorldTime(float ClientTimestamp, float ServerTimestamp);
};
