#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipEnemyGroupWipeOutData.h"
#include "TresGumiShipActorCompoBase.h"
#include "TresGumiShipPlayRecorder.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipPlayRecorder : public UTresGumiShipActorCompoBase {
    GENERATED_BODY()
public:
    UTresGumiShipPlayRecorder();
protected:
    UFUNCTION(BlueprintCallable)
    void _OnEnemyGroupWipeOutInBattleArea(const FTresGumiShipEnemyGroupWipeOutData& rEnemyGroupWipeOutData);
    
    UFUNCTION(BlueprintCallable)
    void _OnDefeated(const AActor* pTarget);
    
    UFUNCTION(BlueprintCallable)
    void _OnAllEnemyGroupWipeOutInBattleArea();
    
};

