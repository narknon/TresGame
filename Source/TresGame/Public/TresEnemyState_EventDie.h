#pragma once
#include "CoreMinimal.h"
#include "TresEnemyState_Die.h"
#include "TresEnemyState_EventDie.generated.h"

UCLASS(Blueprintable)
class UTresEnemyState_EventDie : public UTresEnemyState_Die {
    GENERATED_BODY()
public:
    UTresEnemyState_EventDie();
};

