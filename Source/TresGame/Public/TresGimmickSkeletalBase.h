#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "ETresGimmickLookAtTrackingType.h"
#include "Animation/AnimInstance.h"
#include "Animation/AnimInstance.h"
#include "ETresGimmickLookAtType.h"
#include "ETresAnimNotifyBpEventID.h"
#include "TresGimmickSkeletalBase.generated.h"

class UTresRootComponent;
class UTresSkeletalMeshComponent;
class UTresEffectAttachComponent;
class UTresAnimSet;
class UAnimationAsset;
class USQEX_KBD_Component;

UCLASS(Abstract, Blueprintable)
class ATresGimmickSkeletalBase : public ATresGimmickActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresRootComponent* MyRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresSkeletalMeshComponent* MyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresEffectAttachComponent* MyEffectAtt;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMontageStartedMCDelegate OnAnimationStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMontageEndedMCDelegate OnAnimationEnded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresGimmickLookAtTrackingType> m_GltTrackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LookAtRateMultiRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LookAtParamA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresGimmickLookAtType> m_GltLookAtType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTresAnimSet*> m_AppendAnimSetMap;
    
public:
    ATresGimmickSkeletalBase(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveNotifyProjectileAttackHitBpEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveNotifyAttackHitBpEvent();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveAnimNotifyStartBpEvent(FName AnimSeqName, ETresAnimNotifyBpEventID EventID, int32 Param);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveAnimNotifyEndBpEvent(FName AnimSeqName, ETresAnimNotifyBpEventID EventID, int32 Param);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveAnimationStarted(UAnimationAsset* AnimAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveAnimationEnded(UAnimationAsset* AnimAsset, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USQEX_KBD_Component* GetKBDComponent() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_NotifyTiming(int32 InParam);
    
public:
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
    
};

