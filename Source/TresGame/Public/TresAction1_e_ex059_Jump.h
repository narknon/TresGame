#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction1_e_ex059_Jump.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction1_e_ex059_Jump : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fJumpHeight;
    
    UTresAction1_e_ex059_Jump();
};

