// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseGamemode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HW08_BaseGamemode_generated_h
#error "BaseGamemode.generated.h already included, missing '#pragma once' in BaseGamemode.h"
#endif
#define HW08_BaseGamemode_generated_h

#define FID_Unreal_Github_HW08_HW08_Source_HW08_Public_BaseGamemode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseGamemode(); \
	friend struct Z_Construct_UClass_ABaseGamemode_Statics; \
public: \
	DECLARE_CLASS(ABaseGamemode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/HW08"), NO_API) \
	DECLARE_SERIALIZER(ABaseGamemode)


#define FID_Unreal_Github_HW08_HW08_Source_HW08_Public_BaseGamemode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseGamemode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABaseGamemode(ABaseGamemode&&); \
	ABaseGamemode(const ABaseGamemode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseGamemode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseGamemode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseGamemode) \
	NO_API virtual ~ABaseGamemode();


#define FID_Unreal_Github_HW08_HW08_Source_HW08_Public_BaseGamemode_h_12_PROLOG
#define FID_Unreal_Github_HW08_HW08_Source_HW08_Public_BaseGamemode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Github_HW08_HW08_Source_HW08_Public_BaseGamemode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Github_HW08_HW08_Source_HW08_Public_BaseGamemode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HW08_API UClass* StaticClass<class ABaseGamemode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Github_HW08_HW08_Source_HW08_Public_BaseGamemode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
