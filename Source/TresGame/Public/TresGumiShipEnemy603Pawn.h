#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipSplinePathMoveTypeEnemyBase.h"
#include "TresGumiShipEnemy603Pawn.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresGumiShipEnemy603Pawn : public ATresGumiShipSplinePathMoveTypeEnemyBase {
    GENERATED_BODY()
public:
    ATresGumiShipEnemy603Pawn(const FObjectInitializer& ObjectInitializer);
};

