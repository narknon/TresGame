#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionWeaponBase.h"
#include "TresAttack1_e_ex012_ShowerNeedle.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack1_e_ex012_ShowerNeedle : public UTresAttackDefinitionWeaponBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_AttackTime;
    
    UTresAttack1_e_ex012_ShowerNeedle();
};

