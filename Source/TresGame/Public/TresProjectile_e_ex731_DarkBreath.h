#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex731_DarkBreath.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex731_DarkBreath : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bNoSmokeEffectOnGuard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSmokeEffectTime;
    
    ATresProjectile_e_ex731_DarkBreath(const FObjectInitializer& ObjectInitializer);
};

