#pragma once
#include "CoreMinimal.h"
#include "TresProjectile_e_ex355_Claymore_Base.h"
#include "UObject/NoExportTypes.h"
#include "TresProjectile_e_ex355_Claymore_Swing.generated.h"

class UParticleSystem;

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex355_Claymore_Swing : public ATresProjectile_e_ex355_Claymore_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_WeaponGroundHitEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vWeaponGroundHitEffectOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bWeaponGroundHitEffectOnlyOnLand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fWeaponGroundHitOnLandMaxHeight;
    
    ATresProjectile_e_ex355_Claymore_Swing(const FObjectInitializer& ObjectInitializer);
};

