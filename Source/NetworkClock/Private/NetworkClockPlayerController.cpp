// Copyright 2023 Elemental Code (Milton Candelero). All Rights Reserved.

#include "NetworkClockPlayerController.h"

#include "GameFramework/PlayerState.h"
#include "Logging/StructuredLog.h"
#include "NetworkClockLog.h"
#include "Engine/World.h"
#include "TimerManager.h" 

#if WITH_EDITOR
void ANetworkClockPlayerController::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	AmountOfOutliersToDiscard = FMath::Clamp(AmountOfOutliersToDiscard, 0, (RollingBufferSize-1) / 2);
}
#endif

float ANetworkClockPlayerController::GetNetworkWorldTimeDelta() const
{
	return ServerWorldTimeDelta;
}

float ANetworkClockPlayerController::GetNetworkWorldTime() const
{
	return GetWorld()->GetTimeSeconds() + ServerWorldTimeDelta;
}

void ANetworkClockPlayerController::PostNetInit()
{
	Super::PostNetInit();
	if (GetLocalRole() != ROLE_Authority)
	{
		RequestWorldTime_Internal();
		if (NetworkClockUpdateFrequency > 0.f)
		{
			FTimerHandle TimerHandle;
			GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &ThisClass::RequestWorldTime_Internal,
			                                       NetworkClockUpdateFrequency, true);
		}
	}
}

void ANetworkClockPlayerController::RequestWorldTime_Internal()
{
	ServerRequestWorldTime(GetWorld()->GetTimeSeconds());
}

void ANetworkClockPlayerController::ClientUpdateWorldTime_Implementation(float ClientTimestamp, float ServerTimestamp)
{
	float RoundTripTime = GetWorld()->GetTimeSeconds() - ClientTimestamp;

	if (RoundTripTime > AverageWithPingThreshold)
	{
		APlayerState* PS = GetPlayerState<APlayerState>();
		if (PS)
		{
			RoundTripTime += PS->GetPingInMilliseconds() / 1000.f;
			RoundTripTime /= 2.f;
		}
	}

	RTTCircularBuffer.Add(RoundTripTime);
	float AdjustedRTT = 0;
	if (RTTCircularBuffer.Num() == RollingBufferSize)
	{
		TArray<float> tmp = RTTCircularBuffer;
		tmp.Sort();
		for (int i = AmountOfOutliersToDiscard; i < RollingBufferSize - AmountOfOutliersToDiscard; ++i)
		{
			AdjustedRTT += tmp[i];
		}
		AdjustedRTT /= RollingBufferSize - AmountOfOutliersToDiscard * 2;
		RTTCircularBuffer.RemoveAt(0);
	}
	else
	{
		AdjustedRTT = RoundTripTime;
	}

	ServerWorldTimeDelta = ServerTimestamp - ClientTimestamp - AdjustedRTT / 2.f;
	UE_LOGFMT(LogNetworkClock, Log, "Updated Network Clock. Current Network Time: {0}",
	          GetWorld()->GetTimeSeconds() + ServerWorldTimeDelta);
}

void ANetworkClockPlayerController::ServerRequestWorldTime_Implementation(float ClientTimestamp)
{
	const float Timestamp = GetWorld()->GetTimeSeconds();
	ClientUpdateWorldTime(ClientTimestamp, Timestamp);
}
