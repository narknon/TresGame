#pragma once
#include "CoreMinimal.h"
#include "TresGimmickGeneratorBase.h"
#include "TresMI_02GeneratorRuleParam.h"
#include "TresGimmickGeneratorMI_02Base.generated.h"

class ASQEX_SplineActor;
class USplineComponent;
class AActor;

UCLASS(Abstract, Blueprintable)
class ATresGimmickGeneratorMI_02Base : public ATresGimmickGeneratorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASQEX_SplineActor* m_pSplineActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpSpeedRotate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FarLength;
    
public:
    ATresGimmickGeneratorMI_02Base(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void StopGimmick();
    
    UFUNCTION(BlueprintCallable)
    void spawn();
    
    UFUNCTION(BlueprintCallable)
    void SetWaterSpeed(float Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetExecModFrame(int32 mod);
    
    UFUNCTION(BlueprintCallable)
    void SetChildrenActorActive(bool bActive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASQEX_SplineActor* GetSplineActor();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPEV_StopGimmickActor(AActor* Actor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_RefreshActor(AActor* Actor, FTresMI_02GeneratorRuleParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_GenerateActor(AActor* Actor, FTresMI_02GeneratorRuleParam Param);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_AccessTriggerVolumeActor(bool In, AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_AccessTriggerVolume(bool In);
    
public:
    UFUNCTION(BlueprintCallable)
    void AccessTriggerVolume(bool In);
    
};

