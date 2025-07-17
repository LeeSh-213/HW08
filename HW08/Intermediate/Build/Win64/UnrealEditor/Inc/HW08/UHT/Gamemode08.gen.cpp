// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW08/Public/Gamemode08.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGamemode08() {}

// Begin Cross Module References
HW08_API UClass* Z_Construct_UClass_ABaseGamemode();
HW08_API UClass* Z_Construct_UClass_AGamemode08();
HW08_API UClass* Z_Construct_UClass_AGamemode08_NoRegister();
UPackage* Z_Construct_UPackage__Script_HW08();
// End Cross Module References

// Begin Class AGamemode08
void AGamemode08::StaticRegisterNativesAGamemode08()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGamemode08);
UClass* Z_Construct_UClass_AGamemode08_NoRegister()
{
	return AGamemode08::StaticClass();
}
struct Z_Construct_UClass_AGamemode08_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Gamemode08.h" },
		{ "ModuleRelativePath", "Public/Gamemode08.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGamemode08>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGamemode08_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseGamemode,
	(UObject* (*)())Z_Construct_UPackage__Script_HW08,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGamemode08_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGamemode08_Statics::ClassParams = {
	&AGamemode08::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGamemode08_Statics::Class_MetaDataParams), Z_Construct_UClass_AGamemode08_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGamemode08()
{
	if (!Z_Registration_Info_UClass_AGamemode08.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGamemode08.OuterSingleton, Z_Construct_UClass_AGamemode08_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGamemode08.OuterSingleton;
}
template<> HW08_API UClass* StaticClass<AGamemode08>()
{
	return AGamemode08::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGamemode08);
AGamemode08::~AGamemode08() {}
// End Class AGamemode08

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Github_HW08_HW08_Source_HW08_Public_Gamemode08_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGamemode08, AGamemode08::StaticClass, TEXT("AGamemode08"), &Z_Registration_Info_UClass_AGamemode08, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGamemode08), 654781936U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Github_HW08_HW08_Source_HW08_Public_Gamemode08_h_634846493(TEXT("/Script/HW08"),
	Z_CompiledInDeferFile_FID_Unreal_Github_HW08_HW08_Source_HW08_Public_Gamemode08_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Github_HW08_HW08_Source_HW08_Public_Gamemode08_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
