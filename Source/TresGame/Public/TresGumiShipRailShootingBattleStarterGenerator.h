#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipEnemyGenerator.h"
#include "TresGumiShipSplinePathMoveParameter.h"
#include "Engine/EngineTypes.h"
#include "TresGumiShipRailShootingBattleStarterGenerator.generated.h"

class UPrimitiveComponent;
class ATresGumiShipEnemyMoveRouteSpline;
class ATriggerBase;
class AActor;

UCLASS(Blueprintable)
class ATresGumiShipRailShootingBattleStarterGenerator : public ATresGumiShipEnemyGenerator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGumiShipSplinePathMoveParameter m_EncountSymbolMovementParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresGumiShipEnemyMoveRouteSpline* m_pEncountSymbolMoveRouteSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATriggerBase* m_pEncountSymbolActivateTrigger;
    
public:
    ATresGumiShipRailShootingBattleStarterGenerator(const FObjectInitializer& ObjectInitializer);
private:
    UFUNCTION(BlueprintCallable)
    void _OnLeaveActivateTriggerVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void _OnEnterActivateTriggerVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

