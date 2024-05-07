#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_DarkSide_Base.generated.h"

class UParticleSystem;

UCLASS(Blueprintable)
class ATresProjectile_DarkSide_Base : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_LandHitEffData;
    
    ATresProjectile_DarkSide_Base(const FObjectInitializer& ObjectInitializer);
};

