#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex006_Dash.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack1_e_ex006_Dash : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MaxTackleMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_TackleMoveDistance;
    
public:
    UTresAttack1_e_ex006_Dash();
};

