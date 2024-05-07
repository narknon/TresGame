#pragma once
#include "CoreMinimal.h"
#include "TresProjectileSkeletalMeshBase.h"
#include "TresProjectile_e_ex017_MagicSquare.generated.h"

class UParticleSystem;
class UParticleSystemComponent;
class USQEX_ParticleAttachDataAsset;

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex017_MagicSquare : public ATresProjectileSkeletalMeshBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export)
    UParticleSystemComponent* m_JointEff[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_JointEffData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MoveRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_HoveringHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_HoveringSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_pro_EffDataAsset;
    
    ATresProjectile_e_ex017_MagicSquare(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRevolverBoneRoll() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRevolverBoneBlendRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHoveringZ() const;
    
};

