#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionWeaponBase.h"
#include "TresAttack3_e_ex037_MoveThunderShot.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack3_e_ex037_MoveThunderShot : public UTresAttackDefinitionWeaponBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_FireInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_FireSpeed;
    
public:
    UTresAttack3_e_ex037_MoveThunderShot();
};

