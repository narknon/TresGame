#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionWeaponBase.h"
#include "TresAttack_e_ex367_WeaponAttackBase.generated.h"

class UTresStateBase;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack_e_ex367_WeaponAttackBase : public UTresAttackDefinitionWeaponBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresStateBase> m_AttackState;
    
    UTresAttack_e_ex367_WeaponAttackBase();
};

