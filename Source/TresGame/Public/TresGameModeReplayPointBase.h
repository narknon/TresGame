#pragma once
#include "CoreMinimal.h"
#include "TresGameModeBase.h"
#include "TresGameModeReplayPointBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class ATresGameModeReplayPointBase : public ATresGameModeBase {
    GENERATED_BODY()
public:
    ATresGameModeReplayPointBase(const FObjectInitializer& ObjectInitializer);
};

