#pragma once
#include "CoreMinimal.h"
#include "TresProjectileSkeletalMeshBase.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresProjectile_e_ex110_Dice.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex110_Dice : public ATresProjectileSkeletalMeshBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_DiceEff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_DiceEffData;
    
    ATresProjectile_e_ex110_Dice(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable)
    void OnProjectileBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    
};

