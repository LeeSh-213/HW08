// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW08/HW08GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHW08GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
HW08_API UClass* Z_Construct_UClass_AHW08GameMode();
HW08_API UClass* Z_Construct_UClass_AHW08GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_HW08();
// End Cross Module References

// Begin Class AHW08GameMode
void AHW08GameMode::StaticRegisterNativesAHW08GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHW08GameMode);
UClass* Z_Construct_UClass_AHW08GameMode_NoRegister()
{
	return AHW08GameMode::StaticClass();
}
struct Z_Construct_UClass_AHW08GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "HW08GameMode.h" },
		{ "ModuleRelativePath", "HW08GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHW08GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AHW08GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HW08,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHW08GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHW08GameMode_Statics::ClassParams = {
	&AHW08GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHW08GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AHW08GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHW08GameMode()
{
	if (!Z_Registration_Info_UClass_AHW08GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHW08GameMode.OuterSingleton, Z_Construct_UClass_AHW08GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHW08GameMode.OuterSingleton;
}
template<> HW08_API UClass* StaticClass<AHW08GameMode>()
{
	return AHW08GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHW08GameMode);
AHW08GameMode::~AHW08GameMode() {}
// End Class AHW08GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Github_HW08_HW08_Source_HW08_HW08GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHW08GameMode, AHW08GameMode::StaticClass, TEXT("AHW08GameMode"), &Z_Registration_Info_UClass_AHW08GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHW08GameMode), 1273546426U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Github_HW08_HW08_Source_HW08_HW08GameMode_h_1641117378(TEXT("/Script/HW08"),
	Z_CompiledInDeferFile_FID_Unreal_Github_HW08_HW08_Source_HW08_HW08GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Github_HW08_HW08_Source_HW08_HW08GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
