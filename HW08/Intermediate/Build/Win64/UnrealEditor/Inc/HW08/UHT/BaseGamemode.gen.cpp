// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW08/Public/BaseGamemode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseGamemode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
HW08_API UClass* Z_Construct_UClass_ABaseGamemode();
HW08_API UClass* Z_Construct_UClass_ABaseGamemode_NoRegister();
UPackage* Z_Construct_UPackage__Script_HW08();
// End Cross Module References

// Begin Class ABaseGamemode
void ABaseGamemode::StaticRegisterNativesABaseGamemode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseGamemode);
UClass* Z_Construct_UClass_ABaseGamemode_NoRegister()
{
	return ABaseGamemode::StaticClass();
}
struct Z_Construct_UClass_ABaseGamemode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BaseGamemode.h" },
		{ "ModuleRelativePath", "Public/BaseGamemode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseGamemode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABaseGamemode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_HW08,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGamemode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseGamemode_Statics::ClassParams = {
	&ABaseGamemode::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGamemode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseGamemode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseGamemode()
{
	if (!Z_Registration_Info_UClass_ABaseGamemode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseGamemode.OuterSingleton, Z_Construct_UClass_ABaseGamemode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseGamemode.OuterSingleton;
}
template<> HW08_API UClass* StaticClass<ABaseGamemode>()
{
	return ABaseGamemode::StaticClass();
}
ABaseGamemode::ABaseGamemode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseGamemode);
ABaseGamemode::~ABaseGamemode() {}
// End Class ABaseGamemode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Github_HW08_HW08_Source_HW08_Public_BaseGamemode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseGamemode, ABaseGamemode::StaticClass, TEXT("ABaseGamemode"), &Z_Registration_Info_UClass_ABaseGamemode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseGamemode), 2310165474U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Github_HW08_HW08_Source_HW08_Public_BaseGamemode_h_2167620852(TEXT("/Script/HW08"),
	Z_CompiledInDeferFile_FID_Unreal_Github_HW08_HW08_Source_HW08_Public_BaseGamemode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Github_HW08_HW08_Source_HW08_Public_BaseGamemode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
