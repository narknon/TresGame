#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack2_e_ex071_Restraint.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack2_e_ex071_Restraint : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RestraintTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_RestraintDamageAttackIDName;
    
public:
    UTresAttack2_e_ex071_Restraint();
};

