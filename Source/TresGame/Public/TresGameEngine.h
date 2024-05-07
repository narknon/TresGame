#pragma once
#include "CoreMinimal.h"
#include "Engine/GameEngine.h"
#include "TresGameEngine.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UTresGameEngine : public UGameEngine {
    GENERATED_BODY()
public:
    UTresGameEngine();
};

