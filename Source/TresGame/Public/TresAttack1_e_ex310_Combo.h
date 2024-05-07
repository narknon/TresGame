#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex310_Combo.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack1_e_ex310_Combo : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bForceCombo;
    
    UTresAttack1_e_ex310_Combo();
};

