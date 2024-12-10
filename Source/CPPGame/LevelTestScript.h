#pragma once

#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "LevelTestScript.generated.h"

/**
* A class that behaves like a level blueprint and outputs debug messages.
*/
UCLASS()
class ALevelTestScript : public ALevelScriptActor
{
    GENERATED_BODY()

public:
    // Function to output debug messages
    UFUNCTION(BlueprintCallable, Category = "Debug")
    void PrintDebugMessage(const FString& Message, float Duration = 2.0f, FColor Color = FColor::Green);

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;
};