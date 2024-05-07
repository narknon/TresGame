#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionWeaponBase.h"
#include "Tres_e_ex352_DarkShotSpawnParam.h"
#include "TresAttack9_e_ex352_DarkShot.generated.h"

class UParticleSystem;
class UAnimationAsset;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack9_e_ex352_DarkShot : public UTresAttackDefinitionWeaponBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTres_e_ex352_DarkShotSpawnParam> m_DarkShotSpawnParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* m_AttackAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_FireEffectData;
    
public:
    UTresAttack9_e_ex352_DarkShot();
};

