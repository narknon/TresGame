#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionMelee.h"
#include "TresAttack4_e_ex059_Smash.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack4_e_ex059_Smash : public UTresAttackDefinitionMelee {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AnimName;
    
    UTresAttack4_e_ex059_Smash();
};

