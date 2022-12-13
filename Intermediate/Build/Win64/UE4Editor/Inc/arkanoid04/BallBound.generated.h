// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef ARKANOID04_BallBound_generated_h
#error "BallBound.generated.h already included, missing '#pragma once' in BallBound.h"
#endif
#define ARKANOID04_BallBound_generated_h

#define arkanoid04_Singleton_Source_arkanoid04_BallBound_h_14_SPARSE_DATA
#define arkanoid04_Singleton_Source_arkanoid04_BallBound_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define arkanoid04_Singleton_Source_arkanoid04_BallBound_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define arkanoid04_Singleton_Source_arkanoid04_BallBound_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABallBound(); \
	friend struct Z_Construct_UClass_ABallBound_Statics; \
public: \
	DECLARE_CLASS(ABallBound, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/arkanoid04"), NO_API) \
	DECLARE_SERIALIZER(ABallBound)


#define arkanoid04_Singleton_Source_arkanoid04_BallBound_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABallBound(); \
	friend struct Z_Construct_UClass_ABallBound_Statics; \
public: \
	DECLARE_CLASS(ABallBound, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/arkanoid04"), NO_API) \
	DECLARE_SERIALIZER(ABallBound)


#define arkanoid04_Singleton_Source_arkanoid04_BallBound_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABallBound(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABallBound) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABallBound); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABallBound); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABallBound(ABallBound&&); \
	NO_API ABallBound(const ABallBound&); \
public:


#define arkanoid04_Singleton_Source_arkanoid04_BallBound_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABallBound(ABallBound&&); \
	NO_API ABallBound(const ABallBound&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABallBound); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABallBound); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABallBound)


#define arkanoid04_Singleton_Source_arkanoid04_BallBound_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BoxCollisionBall() { return STRUCT_OFFSET(ABallBound, BoxCollisionBall); }


#define arkanoid04_Singleton_Source_arkanoid04_BallBound_h_11_PROLOG
#define arkanoid04_Singleton_Source_arkanoid04_BallBound_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	arkanoid04_Singleton_Source_arkanoid04_BallBound_h_14_PRIVATE_PROPERTY_OFFSET \
	arkanoid04_Singleton_Source_arkanoid04_BallBound_h_14_SPARSE_DATA \
	arkanoid04_Singleton_Source_arkanoid04_BallBound_h_14_RPC_WRAPPERS \
	arkanoid04_Singleton_Source_arkanoid04_BallBound_h_14_INCLASS \
	arkanoid04_Singleton_Source_arkanoid04_BallBound_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define arkanoid04_Singleton_Source_arkanoid04_BallBound_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	arkanoid04_Singleton_Source_arkanoid04_BallBound_h_14_PRIVATE_PROPERTY_OFFSET \
	arkanoid04_Singleton_Source_arkanoid04_BallBound_h_14_SPARSE_DATA \
	arkanoid04_Singleton_Source_arkanoid04_BallBound_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	arkanoid04_Singleton_Source_arkanoid04_BallBound_h_14_INCLASS_NO_PURE_DECLS \
	arkanoid04_Singleton_Source_arkanoid04_BallBound_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARKANOID04_API UClass* StaticClass<class ABallBound>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID arkanoid04_Singleton_Source_arkanoid04_BallBound_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
