// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NetworkClockStatics.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef NETWORKCLOCK_NetworkClockStatics_generated_h
#error "NetworkClockStatics.generated.h already included, missing '#pragma once' in NetworkClockStatics.h"
#endif
#define NETWORKCLOCK_NetworkClockStatics_generated_h

#define FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockStatics_h_15_SPARSE_DATA
#define FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockStatics_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockStatics_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockStatics_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNetworkWorldTimeDelta); \
	DECLARE_FUNCTION(execGetNetworkWorldTime);


#define FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockStatics_h_15_ACCESSORS
#define FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockStatics_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetworkClockStatics(); \
	friend struct Z_Construct_UClass_UNetworkClockStatics_Statics; \
public: \
	DECLARE_CLASS(UNetworkClockStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NetworkClock"), NO_API) \
	DECLARE_SERIALIZER(UNetworkClockStatics)


#define FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockStatics_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNetworkClockStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNetworkClockStatics(UNetworkClockStatics&&); \
	NO_API UNetworkClockStatics(const UNetworkClockStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetworkClockStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkClockStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetworkClockStatics) \
	NO_API virtual ~UNetworkClockStatics();


#define FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockStatics_h_12_PROLOG
#define FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockStatics_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockStatics_h_15_SPARSE_DATA \
	FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockStatics_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockStatics_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockStatics_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockStatics_h_15_ACCESSORS \
	FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockStatics_h_15_INCLASS_NO_PURE_DECLS \
	FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockStatics_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKCLOCK_API UClass* StaticClass<class UNetworkClockStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockStatics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
