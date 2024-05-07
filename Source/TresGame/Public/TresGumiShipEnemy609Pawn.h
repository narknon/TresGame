#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipSplinePathMoveTypeEnemyBase.h"
#include "TresGumiShipEnemy609Pawn.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresGumiShipEnemy609Pawn : public ATresGumiShipSplinePathMoveTypeEnemyBase {
    GENERATED_BODY()
public:
    ATresGumiShipEnemy609Pawn(const FObjectInitializer& ObjectInitializer);
};

