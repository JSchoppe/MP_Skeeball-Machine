// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SKEETESTING2_FileIO_generated_h
#error "FileIO.generated.h already included, missing '#pragma once' in FileIO.h"
#endif
#define SKEETESTING2_FileIO_generated_h

#define Skee_Proj_Files_Source_SkeeTesting2_FileIO_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMonitorPower) \
	{ \
		P_GET_UBOOL(Z_Param_Is_On); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFileIO::SetMonitorPower(Z_Param_Is_On); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBatteryStatus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFileIO::GetBatteryStatus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShutdownPC) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFileIO::ShutdownPC(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandIntInRangeNoRepeat) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Min); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UFileIO::RandIntInRangeNoRepeat(Z_Param_Min,Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateDirectory) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Directory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFileIO::CreateDirectory(Z_Param_Directory); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCopyFileTo) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CopyThis); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ToThis); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFileIO::CopyFileTo(Z_Param_CopyThis,Z_Param_ToThis); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_TargetFile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFileIO::DeleteFile(Z_Param_TargetFile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesDirectoryExist) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ThisDirectory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFileIO::DoesDirectoryExist(Z_Param_ThisDirectory); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesFileExist) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ThisFile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFileIO::DoesFileExist(Z_Param_ThisFile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFileLoadString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ReadThisFile); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ContainedString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFileIO::FileLoadString(Z_Param_ReadThisFile,Z_Param_Out_ContainedString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFileSaveString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_WriteThis); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ToThisFile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFileIO::FileSaveString(Z_Param_WriteThis,Z_Param_ToThisFile); \
		P_NATIVE_END; \
	}


#define Skee_Proj_Files_Source_SkeeTesting2_FileIO_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMonitorPower) \
	{ \
		P_GET_UBOOL(Z_Param_Is_On); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFileIO::SetMonitorPower(Z_Param_Is_On); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBatteryStatus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFileIO::GetBatteryStatus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShutdownPC) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFileIO::ShutdownPC(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandIntInRangeNoRepeat) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Min); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UFileIO::RandIntInRangeNoRepeat(Z_Param_Min,Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateDirectory) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Directory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFileIO::CreateDirectory(Z_Param_Directory); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCopyFileTo) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CopyThis); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ToThis); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFileIO::CopyFileTo(Z_Param_CopyThis,Z_Param_ToThis); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_TargetFile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFileIO::DeleteFile(Z_Param_TargetFile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesDirectoryExist) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ThisDirectory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFileIO::DoesDirectoryExist(Z_Param_ThisDirectory); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesFileExist) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ThisFile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFileIO::DoesFileExist(Z_Param_ThisFile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFileLoadString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ReadThisFile); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ContainedString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFileIO::FileLoadString(Z_Param_ReadThisFile,Z_Param_Out_ContainedString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFileSaveString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_WriteThis); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ToThisFile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFileIO::FileSaveString(Z_Param_WriteThis,Z_Param_ToThisFile); \
		P_NATIVE_END; \
	}


#define Skee_Proj_Files_Source_SkeeTesting2_FileIO_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFileIO(); \
	friend SKEETESTING2_API class UClass* Z_Construct_UClass_UFileIO(); \
public: \
	DECLARE_CLASS(UFileIO, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SkeeTesting2"), NO_API) \
	DECLARE_SERIALIZER(UFileIO) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Skee_Proj_Files_Source_SkeeTesting2_FileIO_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUFileIO(); \
	friend SKEETESTING2_API class UClass* Z_Construct_UClass_UFileIO(); \
public: \
	DECLARE_CLASS(UFileIO, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SkeeTesting2"), NO_API) \
	DECLARE_SERIALIZER(UFileIO) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Skee_Proj_Files_Source_SkeeTesting2_FileIO_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileIO(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileIO) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileIO); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileIO); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFileIO(UFileIO&&); \
	NO_API UFileIO(const UFileIO&); \
public:


#define Skee_Proj_Files_Source_SkeeTesting2_FileIO_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileIO(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFileIO(UFileIO&&); \
	NO_API UFileIO(const UFileIO&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileIO); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileIO); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileIO)


#define Skee_Proj_Files_Source_SkeeTesting2_FileIO_h_15_PRIVATE_PROPERTY_OFFSET
#define Skee_Proj_Files_Source_SkeeTesting2_FileIO_h_12_PROLOG
#define Skee_Proj_Files_Source_SkeeTesting2_FileIO_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Skee_Proj_Files_Source_SkeeTesting2_FileIO_h_15_PRIVATE_PROPERTY_OFFSET \
	Skee_Proj_Files_Source_SkeeTesting2_FileIO_h_15_RPC_WRAPPERS \
	Skee_Proj_Files_Source_SkeeTesting2_FileIO_h_15_INCLASS \
	Skee_Proj_Files_Source_SkeeTesting2_FileIO_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Skee_Proj_Files_Source_SkeeTesting2_FileIO_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Skee_Proj_Files_Source_SkeeTesting2_FileIO_h_15_PRIVATE_PROPERTY_OFFSET \
	Skee_Proj_Files_Source_SkeeTesting2_FileIO_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Skee_Proj_Files_Source_SkeeTesting2_FileIO_h_15_INCLASS_NO_PURE_DECLS \
	Skee_Proj_Files_Source_SkeeTesting2_FileIO_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Skee_Proj_Files_Source_SkeeTesting2_FileIO_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
