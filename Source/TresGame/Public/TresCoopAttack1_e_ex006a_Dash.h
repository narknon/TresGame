#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresCoopAttack1_e_ex006a_Dash.generated.h"

class UEnvQuery;

UCLASS(Blueprintable, HideDropdown)
class UTresCoopAttack1_e_ex006a_Dash : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MaxTackleMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_TackleMoveDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* m_EQSQuery;
    
public:
    UTresCoopAttack1_e_ex006a_Dash();
};

