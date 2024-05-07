#pragma once
#include "CoreMinimal.h"
#include "TresCharPawnBase.h"
#include "TresGimmickHePuddingBase.generated.h"

class UTres1dChainActorComponent;
class USphereComponent;
class UTresBodyCollPrimitive;
class UAnimationAsset;
class UTresLockonTargetComponent;

UCLASS(Abstract, Blueprintable)
class ATresGimmickHePuddingBase : public ATresCharPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresBodyCollPrimitive* BodyCollPrimitiveComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresLockonTargetComponent* LockonTargetComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTres1dChainActorComponent* Chain1dComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocalDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HitPointPerAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxHitCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RestHitCount;
    
public:
    ATresGimmickHePuddingBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetDead(bool Set);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintCallable)
    void Dead();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPIE_StopFalling();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPIE_StartFalling();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPIE_DeadAnimation();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BP_AnimPlayAnimAsset(UAnimationAsset* InAsset, FName InSlotName, float InBlendInTime, bool InLoop, int32 InEffectGroup, float InPlayRate, int32 InVoiceGroup);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddScore();
    
};

