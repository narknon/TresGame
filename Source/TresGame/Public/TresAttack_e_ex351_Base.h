#pragma once
#include "CoreMinimal.h"
#include "ETresBodyCollReactionType.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack_e_ex351_Base.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack_e_ex351_Base : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresBodyCollReactionType m_BodyCollReactionType;
    
    UTresAttack_e_ex351_Base();
};

