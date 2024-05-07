#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresProjectile_e_ex353_Base.h"
#include "TresProjectile_e_ex353_LaserShotSphere.generated.h"

class ATresProjectileBase;
class UParticleSystem;

UCLASS(Blueprintable, HideDropdown)
class ATresProjectile_e_ex353_LaserShotSphere : public ATresProjectile_e_ex353_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_LaserShotProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_LaserShotFireAsset;
    
    ATresProjectile_e_ex353_LaserShotSphere(const FObjectInitializer& ObjectInitializer);
};

