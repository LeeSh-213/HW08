// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW08/Public/BigCoin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBigCoin() {}

// Begin Cross Module References
HW08_API UClass* Z_Construct_UClass_ABigCoin();
HW08_API UClass* Z_Construct_UClass_ABigCoin_NoRegister();
HW08_API UClass* Z_Construct_UClass_ACoinItem();
UPackage* Z_Construct_UPackage__Script_HW08();
// End Cross Module References

// Begin Class ABigCoin
void ABigCoin::StaticRegisterNativesABigCoin()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABigCoin);
UClass* Z_Construct_UClass_ABigCoin_NoRegister()
{
	return ABigCoin::StaticClass();
}
struct Z_Construct_UClass_ABigCoin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BigCoin.h" },
		{ "ModuleRelativePath", "Public/BigCoin.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABigCoin>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABigCoin_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACoinItem,
	(UObject* (*)())Z_Construct_UPackage__Script_HW08,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABigCoin_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABigCoin_Statics::ClassParams = {
	&ABigCoin::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABigCoin_Statics::Class_MetaDataParams), Z_Construct_UClass_ABigCoin_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABigCoin()
{
	if (!Z_Registration_Info_UClass_ABigCoin.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABigCoin.OuterSingleton, Z_Construct_UClass_ABigCoin_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABigCoin.OuterSingleton;
}
template<> HW08_API UClass* StaticClass<ABigCoin>()
{
	return ABigCoin::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABigCoin);
ABigCoin::~ABigCoin() {}
// End Class ABigCoin

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Github_HW08_HW08_Source_HW08_Public_BigCoin_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABigCoin, ABigCoin::StaticClass, TEXT("ABigCoin"), &Z_Registration_Info_UClass_ABigCoin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABigCoin), 1308606763U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Github_HW08_HW08_Source_HW08_Public_BigCoin_h_2123086687(TEXT("/Script/HW08"),
	Z_CompiledInDeferFile_FID_Unreal_Github_HW08_HW08_Source_HW08_Public_BigCoin_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Github_HW08_HW08_Source_HW08_Public_BigCoin_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
