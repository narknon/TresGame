#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipSplineEventType.h"
#include "Components/ActorComponent.h"
#include "TresGumiShipEnemyUsableAttackMethodData.h"
#include "ETresGumiShipEnemyStateID.h"
#include "ETresGumiShipEnemyStateResult.h"
#include "TresGumiShipEnemyStateController.generated.h"

class ATresGumiShipEnemyPawnBase;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipEnemyStateController : public UActorComponent {
    GENERATED_BODY()
public:
    UTresGumiShipEnemyStateController();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Setup(ATresGumiShipEnemyPawnBase* ControllTargetEnemy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyStateFinish(ETresGumiShipEnemyStateID FinishStateID, ETresGumiShipEnemyStateResult Result);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyResultAttackPermissionRequest(bool Result, const TMap<FName, FTresGumiShipEnemyUsableAttackMethodData>& AttackableMethodList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyEnemyGroupMoveRouteSplineEvent(ETresGumiShipSplineEventType EventType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyArrivedEnemyGroupMoveRouteSplineEnd(int32 CurrentMoveRouteSplineIndex);
    
};

