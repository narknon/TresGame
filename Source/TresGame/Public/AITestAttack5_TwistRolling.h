#pragma once
#include "CoreMinimal.h"
#include "AITestAttack_Jump.h"
#include "AITestAttack5_TwistRolling.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UAITestAttack5_TwistRolling : public UAITestAttack_Jump {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SlashPitchMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SlashPitchMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SlashYawMinMax;
    
public:
    UAITestAttack5_TwistRolling();
};

