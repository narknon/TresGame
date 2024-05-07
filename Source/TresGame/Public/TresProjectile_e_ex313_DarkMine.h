#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex313_DarkMine.generated.h"

class UParticleSystemComponent;
class UParticleSystem;

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex313_DarkMine : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_DarkMineBootEff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pro_DarkMineBootEffData;
    
    ATresProjectile_e_ex313_DarkMine(const FObjectInitializer& ObjectInitializer);
};

