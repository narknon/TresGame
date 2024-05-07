#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipFreeFlightTypeEnemyBase.h"
#include "TresGumiShipEnemy602Pawn.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresGumiShipEnemy602Pawn : public ATresGumiShipFreeFlightTypeEnemyBase {
    GENERATED_BODY()
public:
    ATresGumiShipEnemy602Pawn(const FObjectInitializer& ObjectInitializer);
};

