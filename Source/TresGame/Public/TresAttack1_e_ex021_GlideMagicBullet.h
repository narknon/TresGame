#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionWeaponBase.h"
#include "TresAttack1_e_ex021_GlideMagicBullet.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack1_e_ex021_GlideMagicBullet : public UTresAttackDefinitionWeaponBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 m_ShotNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ProjectileSpeed;
    
public:
    UTresAttack1_e_ex021_GlideMagicBullet();
};

