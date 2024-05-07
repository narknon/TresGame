#pragma once
#include "CoreMinimal.h"
#include "TresProjectileSkeletalMeshBase.h"
#include "TresProjectile_e_ex007_Arrow.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex007_Arrow : public ATresProjectileSkeletalMeshBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_VanishMapEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_VanishPawnEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_VanishEffectComponent;
    
public:
    ATresProjectile_e_ex007_Arrow(const FObjectInitializer& ObjectInitializer);
};

