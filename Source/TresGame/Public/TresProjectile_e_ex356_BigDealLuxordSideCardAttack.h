#pragma once
#include "CoreMinimal.h"
#include "TresProjectile_e_ex356_Base.h"
#include "TresProjectile_e_ex356_BigDealLuxordSideCardAttack.generated.h"

class UParticleSystem;

UCLASS(Blueprintable)
class ATresProjectile_e_ex356_BigDealLuxordSideCardAttack : public ATresProjectile_e_ex356_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RotationInterpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RollAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_MapParticleSystem;
    
public:
    ATresProjectile_e_ex356_BigDealLuxordSideCardAttack(const FObjectInitializer& ObjectInitializer);
};

