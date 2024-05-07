#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresAction1_n_ex006_DodgeRoll.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction1_n_ex006_DodgeRoll : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_HomingStopDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_HomingAngleYaw;
    
public:
    UTresAction1_n_ex006_DodgeRoll();
};

