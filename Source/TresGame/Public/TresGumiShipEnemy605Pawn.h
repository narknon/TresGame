#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipSplinePathMoveTypeEnemyBase.h"
#include "TresGumiShipEnemy605Pawn.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresGumiShipEnemy605Pawn : public ATresGumiShipSplinePathMoveTypeEnemyBase {
    GENERATED_BODY()
public:
    ATresGumiShipEnemy605Pawn(const FObjectInitializer& ObjectInitializer);
};

