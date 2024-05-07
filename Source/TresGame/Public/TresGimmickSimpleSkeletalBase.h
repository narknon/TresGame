#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresGimmickDitherFadeInterface.h"
#include "Animation/AnimInstance.h"
#include "Animation/AnimInstance.h"
#include "TresGimmickSimpleSkeletalBase.generated.h"

class UAnimationAsset;
class UTresSkeletalMeshComponent;

UCLASS(Abstract, Blueprintable, Config=Game)
class ATresGimmickSimpleSkeletalBase : public ATresGimmickActor, public ITresGimmickDitherFadeInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMontageStartedMCDelegate OnAnimationStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMontageEndedMCDelegate OnAnimationEnded;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresSkeletalMeshComponent* MyMesh;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_GimmickClipDitherParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsGimmickClipDitherParamInvert;
    
    ATresGimmickSimpleSkeletalBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveAnimationStarted(UAnimationAsset* AnimAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveAnimationEnded(UAnimationAsset* AnimAsset, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    bool BP_IsAnimEnd(FName InSlotName);
    
    UFUNCTION(BlueprintCallable)
    void BP_AnimStop(FName InSlotName);
    
    UFUNCTION(BlueprintCallable)
    void BP_AnimSetCurrentTime(float InTime, FName InSlotName);
    
    UFUNCTION(BlueprintCallable)
    void BP_AnimPlayAnimset(FName InAnimName, FName InSlotName, float InBlendInTime, bool InLoop, int32 InEffectGroup, float InPlayRate, int32 InVoiceGroup);
    
    UFUNCTION(BlueprintCallable)
    void BP_AnimPlayAnimAsset(UAnimationAsset* InAsset, FName InSlotName, float InBlendInTime, bool InLoop, int32 InEffectGroup, float InPlayRate, int32 InVoiceGroup);
    
    UFUNCTION(BlueprintCallable)
    float BP_AnimGetCurrentTime(FName InSlotName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void _OnAnimStarted(UAnimationAsset* InAnimAsset);
    
    UFUNCTION(BlueprintCallable)
    void _OnAnimEnded(UAnimationAsset* InAnimAsset, bool bInterrupted);
    
    
    // Fix for true pure virtual functions not being implemented
};

