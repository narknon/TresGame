#pragma once
#include "CoreMinimal.h"
#include "TresProjectile_DarkSide_Base.h"
#include "TresProjectile_e_dw407b_BigRoar.generated.h"

class UParticleSystemComponent;

UCLASS(Blueprintable)
class ATresProjectile_e_dw407b_BigRoar : public ATresProjectile_DarkSide_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AttackIDName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LandHitEffLifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_LandHitEffCmp;
    
    ATresProjectile_e_dw407b_BigRoar(const FObjectInitializer& ObjectInitializer);
};

