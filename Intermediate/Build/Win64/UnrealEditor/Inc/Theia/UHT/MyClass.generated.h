// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEIA_MyClass_generated_h
#error "MyClass.generated.h already included, missing '#pragma once' in MyClass.h"
#endif
#define THEIA_MyClass_generated_h

#define FID_Theia_Source_Theia_MyClass_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyClass(); \
	friend struct Z_Construct_UClass_AMyClass_Statics; \
public: \
	DECLARE_CLASS(AMyClass, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Theia"), NO_API) \
	DECLARE_SERIALIZER(AMyClass)


#define FID_Theia_Source_Theia_MyClass_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyClass(AMyClass&&); \
	AMyClass(const AMyClass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyClass); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyClass) \
	NO_API virtual ~AMyClass();


#define FID_Theia_Source_Theia_MyClass_h_9_PROLOG
#define FID_Theia_Source_Theia_MyClass_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Theia_Source_Theia_MyClass_h_12_INCLASS_NO_PURE_DECLS \
	FID_Theia_Source_Theia_MyClass_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEIA_API UClass* StaticClass<class AMyClass>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Theia_Source_Theia_MyClass_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
