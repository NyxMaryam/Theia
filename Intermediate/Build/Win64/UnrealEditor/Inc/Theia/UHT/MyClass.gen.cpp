// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Theia/MyClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyClass() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
THEIA_API UClass* Z_Construct_UClass_AMyClass();
THEIA_API UClass* Z_Construct_UClass_AMyClass_NoRegister();
UPackage* Z_Construct_UPackage__Script_Theia();
// End Cross Module References

// Begin Class AMyClass
void AMyClass::StaticRegisterNativesAMyClass()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyClass);
UClass* Z_Construct_UClass_AMyClass_NoRegister()
{
	return AMyClass::StaticClass();
}
struct Z_Construct_UClass_AMyClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyClass.h" },
		{ "ModuleRelativePath", "MyClass.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyClass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyClass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Theia,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyClass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyClass_Statics::ClassParams = {
	&AMyClass::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyClass_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyClass_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyClass()
{
	if (!Z_Registration_Info_UClass_AMyClass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyClass.OuterSingleton, Z_Construct_UClass_AMyClass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyClass.OuterSingleton;
}
template<> THEIA_API UClass* StaticClass<AMyClass>()
{
	return AMyClass::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyClass);
AMyClass::~AMyClass() {}
// End Class AMyClass

// Begin Registration
struct Z_CompiledInDeferFile_FID_Theia_Source_Theia_MyClass_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyClass, AMyClass::StaticClass, TEXT("AMyClass"), &Z_Registration_Info_UClass_AMyClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyClass), 1943541098U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Theia_Source_Theia_MyClass_h_3807240830(TEXT("/Script/Theia"),
	Z_CompiledInDeferFile_FID_Theia_Source_Theia_MyClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Theia_Source_Theia_MyClass_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
