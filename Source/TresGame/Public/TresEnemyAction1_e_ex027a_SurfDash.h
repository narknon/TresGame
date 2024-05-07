#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresEnemyAction1_e_ex027a_SurfDash.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresEnemyAction1_e_ex027a_SurfDash : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DashSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DashTime;
    
    UTresEnemyAction1_e_ex027a_SurfDash();
};

