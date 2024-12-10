#include "LevelTestScript.h"
#include "Engine/Engine.h"

void ALevelTestScript::BeginPlay()
{
    Super::BeginPlay();

    // Example of a debug message during BeginPlay
    PrintDebugMessage(TEXT("LevelTestScript Initialized!"), 5.0f, FColor::Blue);
}

void ALevelTestScript::PrintDebugMessage(const FString& Message, float Duration, FColor Color)
{
    if (GEngine)
    {
        // Add a debug message to the screen
        GEngine->AddOnScreenDebugMessage(-1, Duration, Color, Message);

        // Add the message to the console
        UE_LOG(LogTemp, Warning, TEXT("%s"), *Message);
    }
}