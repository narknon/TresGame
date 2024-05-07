#pragma once
#include "CoreMinimal.h"
#include "TresBTDecorator_ActorValueCheckBase.h"
#include "TresBTDecorator_TimeSinceAIStartedCheck.generated.h"

UCLASS(Blueprintable)
class UTresBTDecorator_TimeSinceAIStartedCheck : public UTresBTDecorator_ActorValueCheckBase {
    GENERATED_BODY()
public:
    UTresBTDecorator_TimeSinceAIStartedCheck();
};

