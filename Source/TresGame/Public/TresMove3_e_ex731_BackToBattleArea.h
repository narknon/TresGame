#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionFlyCodeDriven.h"
#include "ETresBodyCollReactionType.h"
#include "TresMove3_e_ex731_BackToBattleArea.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresMove3_e_ex731_BackToBattleArea : public UTresLocomotionDefinitionFlyCodeDriven {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bInvincible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresBodyCollReactionType m_BodyReactionType;
    
    UTresMove3_e_ex731_BackToBattleArea();
};

