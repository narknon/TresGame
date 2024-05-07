#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction5_e_bx901_RailSlideMove.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction5_e_bx901_RailSlideMove : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMoveVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bReset;
    
    UTresAction5_e_bx901_RailSlideMove();
};

