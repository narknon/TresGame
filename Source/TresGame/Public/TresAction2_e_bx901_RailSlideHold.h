#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction2_e_bx901_RailSlideHold.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction2_e_bx901_RailSlideHold : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxHoldTime;
    
    UTresAction2_e_bx901_RailSlideHold();
};

