#pragma once
#include "CoreMinimal.h"
#include "TresBTDecorator_ActorValueCheckBase.h"
#include "TresBTDecorator_ElapsedTimeSinceLastAttackStateStartCheck.generated.h"

UCLASS(Blueprintable)
class UTresBTDecorator_ElapsedTimeSinceLastAttackStateStartCheck : public UTresBTDecorator_ActorValueCheckBase {
    GENERATED_BODY()
public:
    UTresBTDecorator_ElapsedTimeSinceLastAttackStateStartCheck();
};

