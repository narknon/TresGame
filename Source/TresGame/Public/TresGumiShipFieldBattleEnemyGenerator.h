#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipEnemyGenerator.h"
#include "TresGumiShipFieldBattleEnemyGenerator.generated.h"

UCLASS(Blueprintable)
class ATresGumiShipFieldBattleEnemyGenerator : public ATresGumiShipEnemyGenerator {
    GENERATED_BODY()
public:
    ATresGumiShipFieldBattleEnemyGenerator(const FObjectInitializer& ObjectInitializer);
};

