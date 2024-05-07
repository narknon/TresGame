#pragma once
#include "CoreMinimal.h"
#include "TresWeaponBase.h"
#include "TresWeapon_e_ex355_Claymore.generated.h"

class UParticleSystem;

UCLASS(Blueprintable, HideDropdown)
class ATresWeapon_e_ex355_Claymore : public ATresWeaponBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_WeaponChangeEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_WeaponEffectAttach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WeaponChangeDelayTime;
    
public:
    ATresWeapon_e_ex355_Claymore(const FObjectInitializer& ObjectInitializer);
};

