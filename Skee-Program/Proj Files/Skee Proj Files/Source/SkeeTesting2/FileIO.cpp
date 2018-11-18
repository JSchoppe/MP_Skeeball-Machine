#include "FileIO.h"
#include "FileHelper.h"
#include "Paths.h"
#include "PlatformFilemanager.h"
#include "UnrealMathUtility.h"
#include "GenericPlatformProcess.h"
#include "UnrealMathUtility.h"



// Basic math function for random number generation without repeating.
// Used as a persistent variable in the function below.
int PreviousInt = 0;

///<summary>Returns a random integer within a range that cannot be what the function returned previously.</summary>
///<param name="Min">The lowest possible integer to return.</param>
///<param name="Max">The highest possible integer to return.</param>
int UFileIO::RandIntInRangeNoRepeat(int Min, int Max)
{
	int attempts = 0;
	int GeneratedInt = PreviousInt;
	while (GeneratedInt == PreviousInt)
	{
		GeneratedInt = FMath::RandRange(Min, Max);
		attempts++;
		if (attempts > 100) //If somehow the random function rolls the same number 100 times, break the loop
		{
			break;
		}
	}
	PreviousInt = GeneratedInt;
	return GeneratedInt;
}



// Functions for the leaderboard txt file management.

///<summary>Writes a string to a txt file, returns true if the write succeeded.</summary>
///<param name="WriteThis">The string to write</param>
///<param name="ToThisFile">The entire path of the file, including extension, to write this to</param>
bool UFileIO::FileSaveString(FString WriteThis, FString ToThisFile)
{
	return FFileHelper::SaveStringToFile(WriteThis, *(ToThisFile));
}

///<summary>
///Reads a string from a txt file, returns false if it could not read the file
///</summary>
///<param name="ReadThisFile">The entire file path of the txt file to read, including extension</param>
///<param name="ContainedString">The returned string containing the file contents</param>
bool UFileIO::FileLoadString(FString ReadThisFile, FString & ContainedString)
{
	return FFileHelper::LoadFileToString(ContainedString, *(ReadThisFile));
}

///<summary>
///Returns true if the file exists
///</summary>
///<param name="ThisFile">The entire path of the file, including extension</param>
bool UFileIO::DoesFileExist(FString ThisFile)
{
	return FPaths::FileExists(ThisFile);
}

///<summary>
///Returns true if the file directory/folder exists
///</summary>
///<param name="ThisDirectory">The entire path of the directory</param>
bool UFileIO::DoesDirectoryExist(FString ThisDirectory)
{
	return FPaths::DirectoryExists(ThisDirectory);
}

///<summary>
///Returns true if the file is successfully deleted
///</summary>
///<param name="TargetFile">The entire path of the file, including extension</param>
bool UFileIO::DeleteFile(FString TargetFile)
{
	return FPlatformFileManager::Get().GetPlatformFile().DeleteFile(*TargetFile);
}

///<summary>
///Duplicates a file from one directory to another
///</summary>
///<param name="CopyThis">The entire path of the file, including extension</param>
///<param name="ToThis">The entire path of the destination folder</param>
bool UFileIO::CopyFileTo(FString CopyThis, FString ToThis)
{
	return FPlatformFileManager::Get().GetPlatformFile().CopyFile(*ToThis, *CopyThis);
}

///<summary>
///Returns true if a new directory is successfully created
///</summary>
///<param name="Directory">The entire path of the directory</param>
bool UFileIO::CreateDirectory(FString Directory)
{
	return FPlatformFileManager::Get().GetPlatformFile().CreateDirectory(*Directory);
}

//Required for communication
#include "Windows.h"

//Required to return the DWORD format as a string
#include <string>
#include <iostream>
#include <sstream>

///<summary>Runs a windows CMD to shutdown the PC in 4 seconds.</summary>
void UFileIO::ShutdownPC()
{
	system("shutdown /s /f /t 7");
}

#include <fstream>

FString UFileIO::GetBatteryStatus()
{
	std::ifstream file("C:/apcupsd/etc/apcupsd/apcupsd.events");

	if (file)
	{
		std::string line;
		while (file >> std::ws && std::getline(file, line));

		FString batStatus = line.c_str();
		
		//Determine the current state of the UPS battery based on the APCUPS log
		if (batStatus.Contains("startup succeeded")) //APCUPS started (on battery power)
		{
			return ("Plugged");
		}
		else if (batStatus.Contains("Mains returned")) //Not on battery power
		{
			return ("Plugged");
		}
		else if (batStatus.Contains("Power is back")) //Not on battery power
		{
			return ("Plugged");
		}
		else if (batStatus.Contains("Power failure")) //On battery power
		{
			return ("Battery");
		}
		else if (batStatus.Contains("Running on UPS batteries")) //On battery power
		{
			return ("Battery");
		}
		else if (batStatus.Contains("Initiating system shutdown")) //APCUPS force shutdown
		{
			return ("Low Battery");
		}
		else if (batStatus.Contains("User logins prohibited")) //APCUPS force shutdown
		{
			return ("Low Battery");
		}
		else
		{
			return ("Status Unknown");
		}
	}
	else
	{
		return ("Could not open APCUPS log");
	}
	
}

// Function for turning the monitor on and off(can crash the editor).
///<summary>Turns the monitor on and off(experimental).</summary>
void UFileIO::SetMonitorPower(bool Is_On)
{
	if (Is_On)
	{
		SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM) 2); //Turns off the monitor power
	}
	else
	{
		SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM) -1); //Turns on the monitor power
	}
}