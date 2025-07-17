// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW08/Public/PlayerController1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerController1() {}

// Begin Cross Module References
HW08_API UClass* Z_Construct_UClass_ABasePlayerController();
HW08_API UClass* Z_Construct_UClass_APlayerController1();
HW08_API UClass* Z_Construct_UClass_APlayerController1_NoRegister();
UPackage* Z_Construct_UPackage__Script_HW08();
// End Cross Module References

// Begin Class APlayerController1
void APlayerController1::StaticRegisterNativesAPlayerController1()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerController1);
UClass* Z_Construct_UClass_APlayerController1_NoRegister()
{
	return APlayerController1::StaticClass();
}
struct Z_Construct_UClass_APlayerController1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PlayerController1.h" },
		{ "ModuleRelativePath", "Public/PlayerController1.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerController1>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APlayerController1_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABasePlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_HW08,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController1_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerController1_Statics::ClassParams = {
	&APlayerController1::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController1_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerController1_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerController1()
{
	if (!Z_Registration_Info_UClass_APlayerController1.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerController1.OuterSingleton, Z_Construct_UClass_APlayerController1_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerController1.OuterSingleton;
}
template<> HW08_API UClass* StaticClass<APlayerController1>()
{
	return APlayerController1::StaticClass();
}
APlayerController1::APlayerController1() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerController1);
APlayerController1::~APlayerController1() {}
// End Class APlayerController1

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Github_HW08_HW08_Source_HW08_Public_PlayerController1_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerController1, APlayerController1::StaticClass, TEXT("APlayerController1"), &Z_Registration_Info_UClass_APlayerController1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerController1), 3841358493U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Github_HW08_HW08_Source_HW08_Public_PlayerController1_h_3573012131(TEXT("/Script/HW08"),
	Z_CompiledInDeferFile_FID_Unreal_Github_HW08_HW08_Source_HW08_Public_PlayerController1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Github_HW08_HW08_Source_HW08_Public_PlayerController1_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
