// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkClock/Public/NetworkClockPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkClockPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	NETWORKCLOCK_API UClass* Z_Construct_UClass_ANetworkClockPlayerController();
	NETWORKCLOCK_API UClass* Z_Construct_UClass_ANetworkClockPlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NetworkClock();
// End Cross Module References
	DEFINE_FUNCTION(ANetworkClockPlayerController::execClientUpdateWorldTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ClientTimestamp);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ServerTimestamp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientUpdateWorldTime_Implementation(Z_Param_ClientTimestamp,Z_Param_ServerTimestamp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANetworkClockPlayerController::execServerRequestWorldTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ClientTimestamp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerRequestWorldTime_Implementation(Z_Param_ClientTimestamp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANetworkClockPlayerController::execGetNetworkWorldTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetNetworkWorldTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANetworkClockPlayerController::execGetNetworkWorldTimeDelta)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetNetworkWorldTimeDelta();
		P_NATIVE_END;
	}
	struct NetworkClockPlayerController_eventClientUpdateWorldTime_Parms
	{
		float ClientTimestamp;
		float ServerTimestamp;
	};
	struct NetworkClockPlayerController_eventServerRequestWorldTime_Parms
	{
		float ClientTimestamp;
	};
	static FName NAME_ANetworkClockPlayerController_ClientUpdateWorldTime = FName(TEXT("ClientUpdateWorldTime"));
	void ANetworkClockPlayerController::ClientUpdateWorldTime(float ClientTimestamp, float ServerTimestamp)
	{
		NetworkClockPlayerController_eventClientUpdateWorldTime_Parms Parms;
		Parms.ClientTimestamp=ClientTimestamp;
		Parms.ServerTimestamp=ServerTimestamp;
		ProcessEvent(FindFunctionChecked(NAME_ANetworkClockPlayerController_ClientUpdateWorldTime),&Parms);
	}
	static FName NAME_ANetworkClockPlayerController_ServerRequestWorldTime = FName(TEXT("ServerRequestWorldTime"));
	void ANetworkClockPlayerController::ServerRequestWorldTime(float ClientTimestamp)
	{
		NetworkClockPlayerController_eventServerRequestWorldTime_Parms Parms;
		Parms.ClientTimestamp=ClientTimestamp;
		ProcessEvent(FindFunctionChecked(NAME_ANetworkClockPlayerController_ServerRequestWorldTime),&Parms);
	}
	void ANetworkClockPlayerController::StaticRegisterNativesANetworkClockPlayerController()
	{
		UClass* Class = ANetworkClockPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientUpdateWorldTime", &ANetworkClockPlayerController::execClientUpdateWorldTime },
			{ "GetNetworkWorldTime", &ANetworkClockPlayerController::execGetNetworkWorldTime },
			{ "GetNetworkWorldTimeDelta", &ANetworkClockPlayerController::execGetNetworkWorldTimeDelta },
			{ "ServerRequestWorldTime", &ANetworkClockPlayerController::execServerRequestWorldTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANetworkClockPlayerController_ClientUpdateWorldTime_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClientTimestamp;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ServerTimestamp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANetworkClockPlayerController_ClientUpdateWorldTime_Statics::NewProp_ClientTimestamp = { "ClientTimestamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkClockPlayerController_eventClientUpdateWorldTime_Parms, ClientTimestamp), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANetworkClockPlayerController_ClientUpdateWorldTime_Statics::NewProp_ServerTimestamp = { "ServerTimestamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkClockPlayerController_eventClientUpdateWorldTime_Parms, ServerTimestamp), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANetworkClockPlayerController_ClientUpdateWorldTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetworkClockPlayerController_ClientUpdateWorldTime_Statics::NewProp_ClientTimestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetworkClockPlayerController_ClientUpdateWorldTime_Statics::NewProp_ServerTimestamp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetworkClockPlayerController_ClientUpdateWorldTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NetworkClockPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetworkClockPlayerController_ClientUpdateWorldTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetworkClockPlayerController, nullptr, "ClientUpdateWorldTime", nullptr, nullptr, Z_Construct_UFunction_ANetworkClockPlayerController_ClientUpdateWorldTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkClockPlayerController_ClientUpdateWorldTime_Statics::PropPointers), sizeof(NetworkClockPlayerController_eventClientUpdateWorldTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040C41, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkClockPlayerController_ClientUpdateWorldTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetworkClockPlayerController_ClientUpdateWorldTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkClockPlayerController_ClientUpdateWorldTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(NetworkClockPlayerController_eventClientUpdateWorldTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ANetworkClockPlayerController_ClientUpdateWorldTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetworkClockPlayerController_ClientUpdateWorldTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANetworkClockPlayerController_GetNetworkWorldTime_Statics
	{
		struct NetworkClockPlayerController_eventGetNetworkWorldTime_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANetworkClockPlayerController_GetNetworkWorldTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkClockPlayerController_eventGetNetworkWorldTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANetworkClockPlayerController_GetNetworkWorldTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetworkClockPlayerController_GetNetworkWorldTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetworkClockPlayerController_GetNetworkWorldTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "NetworkClock" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the current network time. */" },
#endif
		{ "DisplayName", "Network World Time" },
		{ "ModuleRelativePath", "Public/NetworkClockPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current network time." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetworkClockPlayerController_GetNetworkWorldTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetworkClockPlayerController, nullptr, "GetNetworkWorldTime", nullptr, nullptr, Z_Construct_UFunction_ANetworkClockPlayerController_GetNetworkWorldTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkClockPlayerController_GetNetworkWorldTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANetworkClockPlayerController_GetNetworkWorldTime_Statics::NetworkClockPlayerController_eventGetNetworkWorldTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkClockPlayerController_GetNetworkWorldTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetworkClockPlayerController_GetNetworkWorldTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkClockPlayerController_GetNetworkWorldTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ANetworkClockPlayerController_GetNetworkWorldTime_Statics::NetworkClockPlayerController_eventGetNetworkWorldTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ANetworkClockPlayerController_GetNetworkWorldTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetworkClockPlayerController_GetNetworkWorldTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANetworkClockPlayerController_GetNetworkWorldTimeDelta_Statics
	{
		struct NetworkClockPlayerController_eventGetNetworkWorldTimeDelta_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANetworkClockPlayerController_GetNetworkWorldTimeDelta_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkClockPlayerController_eventGetNetworkWorldTimeDelta_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANetworkClockPlayerController_GetNetworkWorldTimeDelta_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetworkClockPlayerController_GetNetworkWorldTimeDelta_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetworkClockPlayerController_GetNetworkWorldTimeDelta_Statics::Function_MetaDataParams[] = {
		{ "Category", "NetworkClock" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the current network time delta. (The difference between client's and server's World->GetTime()) */" },
#endif
		{ "DisplayName", "Network World Time Delta" },
		{ "ModuleRelativePath", "Public/NetworkClockPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current network time delta. (The difference between client's and server's World->GetTime())" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetworkClockPlayerController_GetNetworkWorldTimeDelta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetworkClockPlayerController, nullptr, "GetNetworkWorldTimeDelta", nullptr, nullptr, Z_Construct_UFunction_ANetworkClockPlayerController_GetNetworkWorldTimeDelta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkClockPlayerController_GetNetworkWorldTimeDelta_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANetworkClockPlayerController_GetNetworkWorldTimeDelta_Statics::NetworkClockPlayerController_eventGetNetworkWorldTimeDelta_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkClockPlayerController_GetNetworkWorldTimeDelta_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetworkClockPlayerController_GetNetworkWorldTimeDelta_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkClockPlayerController_GetNetworkWorldTimeDelta_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ANetworkClockPlayerController_GetNetworkWorldTimeDelta_Statics::NetworkClockPlayerController_eventGetNetworkWorldTimeDelta_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ANetworkClockPlayerController_GetNetworkWorldTimeDelta()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetworkClockPlayerController_GetNetworkWorldTimeDelta_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANetworkClockPlayerController_ServerRequestWorldTime_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClientTimestamp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANetworkClockPlayerController_ServerRequestWorldTime_Statics::NewProp_ClientTimestamp = { "ClientTimestamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkClockPlayerController_eventServerRequestWorldTime_Parms, ClientTimestamp), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANetworkClockPlayerController_ServerRequestWorldTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetworkClockPlayerController_ServerRequestWorldTime_Statics::NewProp_ClientTimestamp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetworkClockPlayerController_ServerRequestWorldTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NetworkClockPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetworkClockPlayerController_ServerRequestWorldTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetworkClockPlayerController, nullptr, "ServerRequestWorldTime", nullptr, nullptr, Z_Construct_UFunction_ANetworkClockPlayerController_ServerRequestWorldTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkClockPlayerController_ServerRequestWorldTime_Statics::PropPointers), sizeof(NetworkClockPlayerController_eventServerRequestWorldTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240C41, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkClockPlayerController_ServerRequestWorldTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetworkClockPlayerController_ServerRequestWorldTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkClockPlayerController_ServerRequestWorldTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(NetworkClockPlayerController_eventServerRequestWorldTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ANetworkClockPlayerController_ServerRequestWorldTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetworkClockPlayerController_ServerRequestWorldTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANetworkClockPlayerController);
	UClass* Z_Construct_UClass_ANetworkClockPlayerController_NoRegister()
	{
		return ANetworkClockPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ANetworkClockPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetworkClockUpdateFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NetworkClockUpdateFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RollingBufferSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RollingBufferSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmountOfOutliersToDiscard_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AmountOfOutliersToDiscard;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AverageWithPingThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AverageWithPingThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANetworkClockPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkClock,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkClockPlayerController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ANetworkClockPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANetworkClockPlayerController_ClientUpdateWorldTime, "ClientUpdateWorldTime" }, // 1227368803
		{ &Z_Construct_UFunction_ANetworkClockPlayerController_GetNetworkWorldTime, "GetNetworkWorldTime" }, // 3927036855
		{ &Z_Construct_UFunction_ANetworkClockPlayerController_GetNetworkWorldTimeDelta, "GetNetworkWorldTimeDelta" }, // 3951234438
		{ &Z_Construct_UFunction_ANetworkClockPlayerController_ServerRequestWorldTime, "ServerRequestWorldTime" }, // 1585379624
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkClockPlayerController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetworkClockPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "NetworkClockPlayerController.h" },
		{ "ModuleRelativePath", "Public/NetworkClockPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetworkClockPlayerController_Statics::NewProp_NetworkClockUpdateFrequency_MetaData[] = {
		{ "Category", "NetworkClock" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Frequency that the client requests to adjust its local clock. Set to zero to disable periodic updates. */" },
#endif
		{ "ModuleRelativePath", "Public/NetworkClockPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Frequency that the client requests to adjust its local clock. Set to zero to disable periodic updates." },
#endif
		{ "Units", "s" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANetworkClockPlayerController_Statics::NewProp_NetworkClockUpdateFrequency = { "NetworkClockUpdateFrequency", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetworkClockPlayerController, NetworkClockUpdateFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkClockPlayerController_Statics::NewProp_NetworkClockUpdateFrequency_MetaData), Z_Construct_UClass_ANetworkClockPlayerController_Statics::NewProp_NetworkClockUpdateFrequency_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetworkClockPlayerController_Statics::NewProp_RollingBufferSize_MetaData[] = {
		{ "Category", "NetworkClock" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How many samples to keep in the rolling buffer. */" },
#endif
		{ "ModuleRelativePath", "Public/NetworkClockPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How many samples to keep in the rolling buffer." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANetworkClockPlayerController_Statics::NewProp_RollingBufferSize = { "RollingBufferSize", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetworkClockPlayerController, RollingBufferSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkClockPlayerController_Statics::NewProp_RollingBufferSize_MetaData), Z_Construct_UClass_ANetworkClockPlayerController_Statics::NewProp_RollingBufferSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetworkClockPlayerController_Statics::NewProp_AmountOfOutliersToDiscard_MetaData[] = {
		{ "Category", "NetworkClock" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How many outliers to discard when calculating the average. Discards this amount from the top and from the bottom. Meaning this is clamped to [0, (RollingBufferSize-1)/2] */" },
#endif
		{ "ModuleRelativePath", "Public/NetworkClockPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How many outliers to discard when calculating the average. Discards this amount from the top and from the bottom. Meaning this is clamped to [0, (RollingBufferSize-1)/2]" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANetworkClockPlayerController_Statics::NewProp_AmountOfOutliersToDiscard = { "AmountOfOutliersToDiscard", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetworkClockPlayerController, AmountOfOutliersToDiscard), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkClockPlayerController_Statics::NewProp_AmountOfOutliersToDiscard_MetaData), Z_Construct_UClass_ANetworkClockPlayerController_Statics::NewProp_AmountOfOutliersToDiscard_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetworkClockPlayerController_Statics::NewProp_AverageWithPingThreshold_MetaData[] = {
		{ "Category", "NetworkClock" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If the roundtrip is bigger than this value, it will be averaged with the engine reported ping.\n\x09 * For some reason, this makes it more accurate on high pings.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/NetworkClockPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the roundtrip is bigger than this value, it will be averaged with the engine reported ping.\nFor some reason, this makes it more accurate on high pings." },
#endif
		{ "Units", "s" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANetworkClockPlayerController_Statics::NewProp_AverageWithPingThreshold = { "AverageWithPingThreshold", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetworkClockPlayerController, AverageWithPingThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkClockPlayerController_Statics::NewProp_AverageWithPingThreshold_MetaData), Z_Construct_UClass_ANetworkClockPlayerController_Statics::NewProp_AverageWithPingThreshold_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANetworkClockPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetworkClockPlayerController_Statics::NewProp_NetworkClockUpdateFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetworkClockPlayerController_Statics::NewProp_RollingBufferSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetworkClockPlayerController_Statics::NewProp_AmountOfOutliersToDiscard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetworkClockPlayerController_Statics::NewProp_AverageWithPingThreshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANetworkClockPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetworkClockPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANetworkClockPlayerController_Statics::ClassParams = {
		&ANetworkClockPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANetworkClockPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkClockPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkClockPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ANetworkClockPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkClockPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ANetworkClockPlayerController()
	{
		if (!Z_Registration_Info_UClass_ANetworkClockPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANetworkClockPlayerController.OuterSingleton, Z_Construct_UClass_ANetworkClockPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANetworkClockPlayerController.OuterSingleton;
	}
	template<> NETWORKCLOCK_API UClass* StaticClass<ANetworkClockPlayerController>()
	{
		return ANetworkClockPlayerController::StaticClass();
	}
	ANetworkClockPlayerController::ANetworkClockPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANetworkClockPlayerController);
	ANetworkClockPlayerController::~ANetworkClockPlayerController() {}
	struct Z_CompiledInDeferFile_FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANetworkClockPlayerController, ANetworkClockPlayerController::StaticClass, TEXT("ANetworkClockPlayerController"), &Z_Registration_Info_UClass_ANetworkClockPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANetworkClockPlayerController), 1788127626U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockPlayerController_h_2120447127(TEXT("/Script/NetworkClock"),
		Z_CompiledInDeferFile_FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
