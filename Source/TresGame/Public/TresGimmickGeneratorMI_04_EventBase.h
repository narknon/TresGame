#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickGeneratorMI_04_Base.h"
#include "TresGimmickMI_04_EventDoor.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickGeneratorMI_04_EventBase.generated.h"

class ASQEX_SplineActor;

UCLASS(Abstract, Blueprintable)
class ATresGimmickGeneratorMI_04_EventBase : public ATresGimmickGeneratorMI_04_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTresGimmickMI_04_EventDoor> m_DoorDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DoorAnimSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DoorShakeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float DoorSpan;
    
public:
    ATresGimmickGeneratorMI_04_EventBase(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable)
    void Setup();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetRotatorOffset(const FRotator& Rotator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDelta();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASQEX_SplineActor* FindSplineActorByTag(FName TagName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Setup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Execute();
    
};

