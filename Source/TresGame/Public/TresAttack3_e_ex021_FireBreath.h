#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionWeaponBase.h"
#include "TresAttack3_e_ex021_FireBreath.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack3_e_ex021_FireBreath : public UTresAttackDefinitionWeaponBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_BreathTime;
    
public:
    UTresAttack3_e_ex021_FireBreath();
};

