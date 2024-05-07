#pragma once
#include "CoreMinimal.h"
#include "TresBTDecorator_ActorValueCheckBase.h"
#include "TresBTDecorator_ElapsedTimeSinceLastAttackCheck.generated.h"

UCLASS(Blueprintable)
class UTresBTDecorator_ElapsedTimeSinceLastAttackCheck : public UTresBTDecorator_ActorValueCheckBase {
    GENERATED_BODY()
public:
    UTresBTDecorator_ElapsedTimeSinceLastAttackCheck();
};

