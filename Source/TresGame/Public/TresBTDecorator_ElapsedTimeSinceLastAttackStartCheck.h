#pragma once
#include "CoreMinimal.h"
#include "TresBTDecorator_ActorValueCheckBase.h"
#include "TresBTDecorator_ElapsedTimeSinceLastAttackStartCheck.generated.h"

UCLASS(Blueprintable)
class UTresBTDecorator_ElapsedTimeSinceLastAttackStartCheck : public UTresBTDecorator_ActorValueCheckBase {
    GENERATED_BODY()
public:
    UTresBTDecorator_ElapsedTimeSinceLastAttackStartCheck();
};

