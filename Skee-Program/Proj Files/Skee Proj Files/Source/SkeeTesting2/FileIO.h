// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FileIO.generated.h"

/**
 * 
 */
UCLASS()
class SKEETESTING2_API UFileIO : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "save")
	static bool FileSaveString(FString WriteThis, FString ToThisFile);

	UFUNCTION(BlueprintPure, Category = "save")
	static bool FileLoadString(FString ReadThisFile, FString& ContainedString);

	UFUNCTION(BlueprintPure, Category = "save")
	static bool DoesFileExist(FString ThisFile);

	UFUNCTION(BlueprintPure, Category = "file")
	static bool DoesDirectoryExist(FString ThisDirectory);

	UFUNCTION(BlueprintCallable, Category = "save")
	static bool DeleteFile(FString TargetFile);

	UFUNCTION(BlueprintCallable, Category = "save")
	static bool CopyFileTo(FString CopyThis, FString ToThis);

	UFUNCTION(BlueprintCallable, Category = "file")
	static bool CreateDirectory(FString Directory);

	UFUNCTION(BlueprintPure, Category = "MPmath")
	static int RandIntInRangeNoRepeat(int Min, int Max);

	UFUNCTION(BlueprintCallable, Category = "PCSystem")
	static void ShutdownPC();

	UFUNCTION(BlueprintCallable, Category = "PCSystem")
	static FString GetBatteryStatus();

	UFUNCTION(BlueprintCallable, Category = "PCSystem")
	static void SetMonitorPower(bool Is_On);
};
