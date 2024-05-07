#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipEnemyGenerator.h"
#include "TresGumiShipEnemyGroupWipeOutData.h"
#include "TresGumiShipExternalEnemyGenerator.generated.h"

UCLASS(Blueprintable)
class ATresGumiShipExternalEnemyGenerator : public ATresGumiShipEnemyGenerator {
    GENERATED_BODY()
public:
    ATresGumiShipExternalEnemyGenerator(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable)
    void _OnGeneratedEnemyGroupWipeOut(const FTresGumiShipEnemyGroupWipeOutData& rEnemyGroupWipeOutData);
    
};

