#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresGimmickGeneratorMI_02Base.h"
#include "TresGimmickGeneratorMI_02_PositionRateType.generated.h"

class ATresGimmickActor;
class UCurveFloat;
class AActor;

UCLASS(Abstract, Blueprintable)
class ATresGimmickGeneratorMI_02_PositionRateType : public ATresGimmickGeneratorMI_02Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CreateNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveCompleteTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ObjectLifes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> GeneratedClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresGimmickActor> m_InterventionActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_InterventionRuleParamArray;
    
public:
    ATresGimmickGeneratorMI_02_PositionRateType(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void spawn();
    
    UFUNCTION(BlueprintCallable)
    void RefreshPosition(float Position);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMoveSpeedOneframe();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMoveSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_TickStop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_TickMove();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_MoveStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_MoveEnd();
    
};

