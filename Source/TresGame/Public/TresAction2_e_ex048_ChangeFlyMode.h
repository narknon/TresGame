#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction2_e_ex048_ChangeFlyMode.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction2_e_ex048_ChangeFlyMode : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_JumpHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_UpGravityScale;
    
    UTresAction2_e_ex048_ChangeFlyMode();
};

