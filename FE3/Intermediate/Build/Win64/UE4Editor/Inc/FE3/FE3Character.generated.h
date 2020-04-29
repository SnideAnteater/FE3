// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FE3_FE3Character_generated_h
#error "FE3Character.generated.h already included, missing '#pragma once' in FE3Character.h"
#endif
#define FE3_FE3Character_generated_h

#define FE3_Source_FE3_FE3Character_h_12_RPC_WRAPPERS
#define FE3_Source_FE3_FE3Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FE3_Source_FE3_FE3Character_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFE3Character(); \
	friend struct Z_Construct_UClass_AFE3Character_Statics; \
public: \
	DECLARE_CLASS(AFE3Character, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FE3"), NO_API) \
	DECLARE_SERIALIZER(AFE3Character)


#define FE3_Source_FE3_FE3Character_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFE3Character(); \
	friend struct Z_Construct_UClass_AFE3Character_Statics; \
public: \
	DECLARE_CLASS(AFE3Character, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FE3"), NO_API) \
	DECLARE_SERIALIZER(AFE3Character)


#define FE3_Source_FE3_FE3Character_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFE3Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFE3Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFE3Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFE3Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFE3Character(AFE3Character&&); \
	NO_API AFE3Character(const AFE3Character&); \
public:


#define FE3_Source_FE3_FE3Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFE3Character(AFE3Character&&); \
	NO_API AFE3Character(const AFE3Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFE3Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFE3Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFE3Character)


#define FE3_Source_FE3_FE3Character_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(AFE3Character, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AFE3Character, CameraBoom); }


#define FE3_Source_FE3_FE3Character_h_9_PROLOG
#define FE3_Source_FE3_FE3Character_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FE3_Source_FE3_FE3Character_h_12_PRIVATE_PROPERTY_OFFSET \
	FE3_Source_FE3_FE3Character_h_12_RPC_WRAPPERS \
	FE3_Source_FE3_FE3Character_h_12_INCLASS \
	FE3_Source_FE3_FE3Character_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FE3_Source_FE3_FE3Character_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FE3_Source_FE3_FE3Character_h_12_PRIVATE_PROPERTY_OFFSET \
	FE3_Source_FE3_FE3Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FE3_Source_FE3_FE3Character_h_12_INCLASS_NO_PURE_DECLS \
	FE3_Source_FE3_FE3Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FE3_API UClass* StaticClass<class AFE3Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FE3_Source_FE3_FE3Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
