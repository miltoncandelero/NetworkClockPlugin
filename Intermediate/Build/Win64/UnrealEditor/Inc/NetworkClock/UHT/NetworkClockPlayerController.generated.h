// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NetworkClockPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETWORKCLOCK_NetworkClockPlayerController_generated_h
#error "NetworkClockPlayerController.generated.h already included, missing '#pragma once' in NetworkClockPlayerController.h"
#endif
#define NETWORKCLOCK_NetworkClockPlayerController_generated_h

#define FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockPlayerController_h_13_SPARSE_DATA
#define FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockPlayerController_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockPlayerController_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockPlayerController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientUpdateWorldTime_Implementation(float ClientTimestamp, float ServerTimestamp); \
	virtual void ServerRequestWorldTime_Implementation(float ClientTimestamp); \
 \
	DECLARE_FUNCTION(execClientUpdateWorldTime); \
	DECLARE_FUNCTION(execServerRequestWorldTime); \
	DECLARE_FUNCTION(execGetNetworkWorldTime); \
	DECLARE_FUNCTION(execGetNetworkWorldTimeDelta);


#define FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockPlayerController_h_13_ACCESSORS
#define FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockPlayerController_h_13_CALLBACK_WRAPPERS
#define FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockPlayerController_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANetworkClockPlayerController(); \
	friend struct Z_Construct_UClass_ANetworkClockPlayerController_Statics; \
public: \
	DECLARE_CLASS(ANetworkClockPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkClock"), NO_API) \
	DECLARE_SERIALIZER(ANetworkClockPlayerController)


#define FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockPlayerController_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANetworkClockPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANetworkClockPlayerController(ANetworkClockPlayerController&&); \
	NO_API ANetworkClockPlayerController(const ANetworkClockPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANetworkClockPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANetworkClockPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANetworkClockPlayerController) \
	NO_API virtual ~ANetworkClockPlayerController();


#define FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockPlayerController_h_10_PROLOG
#define FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockPlayerController_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockPlayerController_h_13_SPARSE_DATA \
	FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockPlayerController_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockPlayerController_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockPlayerController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockPlayerController_h_13_ACCESSORS \
	FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockPlayerController_h_13_CALLBACK_WRAPPERS \
	FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockPlayerController_h_13_INCLASS_NO_PURE_DECLS \
	FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockPlayerController_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKCLOCK_API UClass* StaticClass<class ANetworkClockPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NetClockDemo_Plugins_NetworkClock_Source_NetworkClock_Public_NetworkClockPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
