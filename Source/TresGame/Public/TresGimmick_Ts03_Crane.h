#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickSkeletalBase.h"
#include "TresGimmick_Ts03_Crane.generated.h"

class UTresBodyCollComponent;
class ASQEX_SplineActor;

UCLASS(Abstract, Blueprintable)
class ATresGimmick_Ts03_Crane : public ATresGimmickSkeletalBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresBodyCollComponent* BodyCollComponent;
    
public:
    ATresGimmick_Ts03_Crane(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetSplineActor(ASQEX_SplineActor* spline);
    
    UFUNCTION(BlueprintCallable)
    void SetSpeed(float Speed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSpeedVec() const;
    
};

