#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex352_LightBulbScattering.generated.h"

class UParticleSystem;

UCLASS(Blueprintable, HideDropdown)
class ATresProjectile_e_ex352_LightBulbScattering : public ATresProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_DarkLaserEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_HitLandEffectData;
    
public:
    ATresProjectile_e_ex352_LightBulbScattering(const FObjectInitializer& ObjectInitializer);
};

