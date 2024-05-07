#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_ex059.generated.h"

class UParticleSystem;
class UTresSkeletalMeshComponent;
class AActor;
class UTresBodyCollPrimitive;
class UParticleSystemComponent;
class UBehaviorTree;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex059 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresSkeletalMeshComponent* m_pMaskSkeletalMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresBodyCollPrimitive* m_pMaskBodyCollPrim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_AuraEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_MaskEyeEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_MaskBrokenEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vMaskBrokenEffectLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_rMaskBrokenEffectRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bMaskBrokenEffectOnChangePhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_AimOffsetTestActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_AuraEffectCmp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_MaskAuraEffectCmp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_MaskEyeEffectCmp;
    
    ATresEnemyPawn_e_ex059(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool ValidateRockShotMaskOff(FVector inTargetLocation, float inRollStartYawOffset, float inMaxRootHeightOffset, FText& outReason) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool ValidateBackStep(float RootMotionScale, float HeightAcceptance, FText& outReason) const;
    
    UFUNCTION(BlueprintCallable)
    void SetDebugBT(UBehaviorTree* BehaviorTree);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMasked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMaskBroken() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsInsideBattleArea(FVector inWorldLoc);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAtamaBoneAlpha();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTurnToTargetOnMoveEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator BP_GetAnimOffsetValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BP_GetAnimOffsetAlpha() const;
    
};

