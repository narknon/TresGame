#pragma once
#include "CoreMinimal.h"
#include "TresEnemyXIIILBPawnBase.h"
#include "TresEnemyXIIILBCoopPawnBase.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresEnemyXIIILBCoopPawnBase : public ATresEnemyXIIILBPawnBase {
    GENERATED_BODY()
public:
    ATresEnemyXIIILBCoopPawnBase(const FObjectInitializer& ObjectInitializer);
};

