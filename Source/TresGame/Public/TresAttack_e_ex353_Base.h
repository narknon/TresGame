#pragma once
#include "CoreMinimal.h"
#include "ETresBodyCollReactionType.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack_e_ex353_Base.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack_e_ex353_Base : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresBodyCollReactionType m_BodyCollReactionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bCanbeCancelAction: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bSingleShotCancelToClearVelocity: 1;
    
    UTresAttack_e_ex353_Base();
};

