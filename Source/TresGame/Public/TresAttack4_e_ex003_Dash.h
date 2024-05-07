#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionDash.h"
#include "TresAttack4_e_ex003_Dash.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack4_e_ex003_Dash : public UTresAttackDefinitionDash {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_TurnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_InitialSpeed;
    
public:
    UTresAttack4_e_ex003_Dash();
};

