// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.


#include "FPSProjectGameModeBase.h"

void AFPSProjectGameModeBase::StartPlay()
{
    Super::StartPlay();

    if (GEngine)
    {
        // Display a debug message for five seconds. 
        // The -1 "Key" value (first argument) indicates that we will never need to update or refresh this message.
        GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello World, this is FPSGameMode!"));
    }
    // UE_LOG(LogTemp, Warning, TEXT("Hello, World!"));
}
