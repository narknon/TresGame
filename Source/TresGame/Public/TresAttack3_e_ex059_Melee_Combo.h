#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionMelee.h"
#include "TresAttack3_e_ex059_Melee_Combo.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack3_e_ex059_Melee_Combo : public UTresAttackDefinitionMelee {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AnimName;
    
    UTresAttack3_e_ex059_Melee_Combo();
};

