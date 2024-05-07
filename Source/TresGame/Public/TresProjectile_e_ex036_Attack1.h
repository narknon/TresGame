#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex036_Attack1.generated.h"

class UParticleSystemComponent;
class UParticleSystem;

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex036_Attack1 : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_TailEff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_TailEffData;
    
    ATresProjectile_e_ex036_Attack1(const FObjectInitializer& ObjectInitializer);
};

