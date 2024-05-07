#pragma once
#include "CoreMinimal.h"
#include "TresGimmickSkeletalBase.h"
#include "ETresBodyPushPowerLevel.h"
#include "TresGimmickTsUfo.generated.h"

class UTresBodyCollComponent;
class UTresLockonTargetComponent;
class UTresSplineMoverComponent;
class ASQEX_SplineActor;

UCLASS(Abstract, Blueprintable)
class ATresGimmickTsUfo : public ATresGimmickSkeletalBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresBodyCollComponent* BodyCollComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresSplineMoverComponent* SplineMoverComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConditionCanMoveRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConditionCanMoveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineUpdateLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresBodyPushPowerLevel BodyPushPowerLevel;
    
public:
    ATresGimmickTsUfo(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetSplineActor(ASQEX_SplineActor* spline);
    
    UFUNCTION(BlueprintCallable)
    void SetSpeed(float Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetReverse(bool Reverse);
    
    UFUNCTION(BlueprintCallable)
    void SetLockonTargetComponent(UTresLockonTargetComponent* InLockonTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetReverse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_CantMoveEvent(float moveSize);
    
};

