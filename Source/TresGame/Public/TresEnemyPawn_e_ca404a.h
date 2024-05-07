#pragma once
#include "CoreMinimal.h"
#include "TresEnemyLargeShipPawnBase.h"
#include "SQEX_SplineMoverExecutor.h"
#include "ca404aParam.h"
#include "ca404aSplineParam.h"
#include "TresEnemyPawn_e_ca404a.generated.h"

class UCurveVector;
class ASQEX_SplineActor;
class AActor;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ca404a : public ATresEnemyLargeShipPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEX_SplineMoverExecutor SplineMover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* m_VelocityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    Fca404aParam m_Parameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    Fca404aSplineParam m_SplineParam;
    
public:
    ATresEnemyPawn_e_ca404a(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable)
    void SetSplineActor(ASQEX_SplineActor* Actor);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetMissionStartTime(bool bStart);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetGoalActor(AActor* Actor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMissionStarted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeSinceMissionStarted() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_SetStopRunning(bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BP_IsStopRunning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BP_GetTargetShipSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BP_GetRestTimeDamageRecovery() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BP_GetDistanceToPlayerSideward() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BP_GetDistanceToPlayerForward() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BP_GetCurrentDamageCount() const;
    
};

