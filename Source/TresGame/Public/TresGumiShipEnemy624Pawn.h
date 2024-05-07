#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipBossEnemyPawnBase.h"
#include "TresGumiShipEnemy624Pawn.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresGumiShipEnemy624Pawn : public ATresGumiShipBossEnemyPawnBase {
    GENERATED_BODY()
public:
    ATresGumiShipEnemy624Pawn(const FObjectInitializer& ObjectInitializer);
};

