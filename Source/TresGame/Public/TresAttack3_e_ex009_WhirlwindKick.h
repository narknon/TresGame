#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack3_e_ex009_WhirlwindKick.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack3_e_ex009_WhirlwindKick : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MaxJumpHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_GravityScale;
    
public:
    UTresAttack3_e_ex009_WhirlwindKick();
};

