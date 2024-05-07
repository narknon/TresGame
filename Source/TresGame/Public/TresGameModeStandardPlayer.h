#pragma once
#include "CoreMinimal.h"
#include "TresGameMode.h"
#include "TresGameModeStandardPlayer.generated.h"

UCLASS(Blueprintable, NonTransient)
class ATresGameModeStandardPlayer : public ATresGameMode {
    GENERATED_BODY()
public:
    ATresGameModeStandardPlayer(const FObjectInitializer& ObjectInitializer);
};

