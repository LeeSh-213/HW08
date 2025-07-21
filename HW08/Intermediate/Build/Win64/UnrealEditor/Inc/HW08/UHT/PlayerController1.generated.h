// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerController1.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
#ifdef HW08_PlayerController1_generated_h
#error "PlayerController1.generated.h already included, missing '#pragma once' in PlayerController1.h"
#endif
#define HW08_PlayerController1_generated_h

#define FID_Unreal_Github_HW08_HW08_Source_HW08_Public_PlayerController1_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStartGame); \
	DECLARE_FUNCTION(execShowMainMenu); \
	DECLARE_FUNCTION(execShowGameHUD); \
	DECLARE_FUNCTION(execGetHUDWidget);


#define FID_Unreal_Github_HW08_HW08_Source_HW08_Public_PlayerController1_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerController1(); \
	friend struct Z_Construct_UClass_APlayerController1_Statics; \
public: \
	DECLARE_CLASS(APlayerController1, ABasePlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HW08"), NO_API) \
	DECLARE_SERIALIZER(APlayerController1)


#define FID_Unreal_Github_HW08_HW08_Source_HW08_Public_PlayerController1_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlayerController1(APlayerController1&&); \
	APlayerController1(const APlayerController1&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerController1); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerController1); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerController1) \
	NO_API virtual ~APlayerController1();


#define FID_Unreal_Github_HW08_HW08_Source_HW08_Public_PlayerController1_h_13_PROLOG
#define FID_Unreal_Github_HW08_HW08_Source_HW08_Public_PlayerController1_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Github_HW08_HW08_Source_HW08_Public_PlayerController1_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Github_HW08_HW08_Source_HW08_Public_PlayerController1_h_16_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Github_HW08_HW08_Source_HW08_Public_PlayerController1_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HW08_API UClass* StaticClass<class APlayerController1>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Github_HW08_HW08_Source_HW08_Public_PlayerController1_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
