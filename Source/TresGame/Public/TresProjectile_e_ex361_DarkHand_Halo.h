#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex361_DarkHand_Halo.generated.h"

class UParticleSystem;

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex361_DarkHand_Halo : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pro_HaloEffData;
    
    ATresProjectile_e_ex361_DarkHand_Halo(const FObjectInitializer& ObjectInitializer);
};

