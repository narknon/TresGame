#pragma once
#include "CoreMinimal.h"
#include "Engine/TargetPoint.h"
#include "TresGumiShipEnemyTerritoryPoint.generated.h"

UCLASS(Blueprintable)
class ATresGumiShipEnemyTerritoryPoint : public ATargetPoint {
    GENERATED_BODY()
public:
    ATresGumiShipEnemyTerritoryPoint(const FObjectInitializer& ObjectInitializer);
};

