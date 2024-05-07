#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionLandCodeDriven.h"
#include "ETresBodyCollReactionType.h"
#include "TresMove_e_ex357_Base.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresMove_e_ex357_Base : public UTresLocomotionDefinitionLandCodeDriven {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableOverrideBodyCollReactionType: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresBodyCollReactionType m_OverrideBodyCollReactionType;
    
public:
    UTresMove_e_ex357_Base();
};

