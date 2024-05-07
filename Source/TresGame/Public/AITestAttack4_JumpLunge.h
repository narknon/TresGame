#pragma once
#include "CoreMinimal.h"
#include "AITestAttack_Jump.h"
#include "AITestAttack4_JumpLunge.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UAITestAttack4_JumpLunge : public UAITestAttack_Jump {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_GravityScaleUp;
    
    UAITestAttack4_JumpLunge();
};

