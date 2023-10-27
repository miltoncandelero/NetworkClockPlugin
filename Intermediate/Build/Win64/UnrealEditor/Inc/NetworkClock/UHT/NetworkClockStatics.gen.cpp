// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkClock/Public/NetworkClockStatics.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkClockStatics() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	NETWORKCLOCK_API UClass* Z_Construct_UClass_UNetworkClockStatics();
	NETWORKCLOCK_API UClass* Z_Construct_UClass_UNetworkClockStatics_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NetworkClock();
// End Cross Module References
	DEFINE_FUNCTION(UNetworkClockStatics::execGetNetworkWorldTimeDelta)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UNetworkClockStatics::GetNetworkWorldTimeDelta(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNetworkClockStatics::execGetNetworkWorldTime)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UNetworkClockStatics::GetNetworkWorldTime(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UNetworkClockStatics::StaticRegisterNativesUNetworkClockStatics()
	{
		UClass* Class = UNetworkClockStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNetworkWorldTime", &UNetworkClockStatics::execGetNetworkWorldTime },
			{ "GetNetworkWorldTimeDelta", &UNetworkClockStatics::execGetNetworkWorldTimeDelta },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNetworkClockStatics_GetNetworkWorldTime_Statics
	{
		struct NetworkClockStatics_eventGetNetworkWorldTime_Parms
		{
			UObject* WorldContextObject;
			float ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNetworkClockStatics_GetNetworkWorldTime_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkClockStatics_eventGetNetworkWorldTime_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNetworkClockStatics_GetNetworkWorldTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkClockStatics_eventGetNetworkWorldTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworkClockStatics_GetNetworkWorldTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkClockStatics_GetNetworkWorldTime_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkClockStatics_GetNetworkWorldTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetworkClockStatics_GetNetworkWorldTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "NetworkClock" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the current network time. */" },
#endif
		{ "ModuleRelativePath", "Public/NetworkClockStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current network time." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworkClockStatics_GetNetworkWorldTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworkClockStatics, nullptr, "GetNetworkWorldTime", nullptr, nullptr, Z_Construct_UFunction_UNetworkClockStatics_GetNetworkWorldTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkClockStatics_GetNetworkWorldTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNetworkClockStatics_GetNetworkWorldTime_Statics::NetworkClockStatics_eventGetNetworkWorldTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkClockStatics_GetNetworkWorldTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNetworkClockStatics_GetNetworkWorldTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkClockStatics_GetNetworkWorldTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNetworkClockStatics_GetNetworkWorldTime_Statics::NetworkClockStatics_eventGetNetworkWorldTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNetworkClockStatics_GetNetworkWorldTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNetworkClockStatics_GetNetworkWorldTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNetworkClockStatics_GetNetworkWorldTimeDelta_Statics
	{
		struct NetworkClockStatics_eventGetNetworkWorldTimeDelta_Parms
		{
			UObject* WorldContextObject;
			float ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNetworkClockStatics_GetNetworkWorldTimeDelta_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkClockStatics_eventGetNetworkWorldTimeDelta_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNetworkClockStatics_GetNetworkWorldTimeDelta_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkClockStatics_eventGetNetworkWorldTimeDelta_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworkClockStatics_GetNetworkWorldTimeDelta_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkClockStatics_GetNetworkWorldTimeDelta_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkClockStatics_GetNetworkWorldTimeDelta_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetworkClockStatics_GetNetworkWorldTimeDelta_Statics::Function_MetaDataParams[] = {
		{ "Category", "NetworkClock" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the current network time delta. (The difference between client's and server's World->GetTime()) */" },
#endif
		{ "ModuleRelativePath", "Public/NetworkClockStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current network time delta. (The difference between client's and server's World->GetTime())" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworkClockStatics_GetNetworkWorldTimeDelta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworkClockStatics, nullptr, "GetNetworkWorldTimeDelta", nullptr, nullptr, Z_Construct_UFunction_UNetworkClockStatics_GetNetworkWorldTimeDelta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkClockStatics_GetNetworkWorldTimeDelta_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNetworkClockStatics_GetNetworkWorldTimeDelta_Statics::NetworkClockStatics_eventGetNetworkWorldTimeDelta_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkClockStatics_GetNetworkWorldTimeDelta_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNetworkClockStatics_GetNetworkWorldTimeDelta_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkClockStatics_GetNetworkWorldTimeDelta_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNetworkClockStatics_GetNetworkWorldTimeDelta_Statics::NetworkClockStatics_eventGetNetworkWorldTimeDelta_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNetworkClockStatics_GetNetworkWorldTimeDelta()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNetworkClockStatics_GetNetworkWorldTimeDelta_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetworkClockStatics);
	UClass* Z_Construct_UClass_UNetworkClockStatics_NoRegister()
	{
		return UNetworkClockStatics::StaticClass();
	}
	struct Z_Construct_UClass_UNetworkClockStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetworkClockStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkClock,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkClockStatics_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UNetworkClockStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNetworkClockStatics_GetNetworkWorldTime, "GetNetworkWorldTime" }, // 1658149657
		{ &Z_Construct_UFunction_UNetworkClockStatics_GetNetworkWorldTimeDelta, "GetNetworkWorldTimeDelta" }, // 1716761183
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkClockStatics_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetworkClockStatics_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "NetworkClockStatics.h" },
		{ "ModuleRelativePath", "Public/NetworkClockStatics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetworkClockStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetworkClockStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetworkClockStatics_Statics::ClassParams = {
		&UNetworkClockStatics::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkClockStatics_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetworkClockStatics_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UNetworkClockStatics()
	{
		if (!Z_Registration_Info_UClass_UNetworkClockStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetworkClockStatics.OuterSingleton, Z_Construct_UClass_UNetworkClockStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNetworkClockStatics.OuterSingleton;
	}
	template<> NETWORKCLOCK_API UClass* StaticClass<UNetworkClockStatics>()
	{
		return UNetworkClockStatics::StaticClass();
	}
	UNetworkClockStatics::UNetworkClockStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetworkClockStatics);
	UNetworkClockStatics::~UNetworkClockStatics() {}
	struct Z_CompiledInDeferFile_FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockStatics_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockStatics_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNetworkClockStatics, UNetworkClockStatics::StaticClass, TEXT("UNetworkClockStatics"), &Z_Registration_Info_UClass_UNetworkClockStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetworkClockStatics), 433843427U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockStatics_h_850554989(TEXT("/Script/NetworkClock"),
		Z_CompiledInDeferFile_FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockStatics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockStatics_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
