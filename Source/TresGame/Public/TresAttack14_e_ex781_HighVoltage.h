#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack14_e_ex781_HighVoltage.generated.h"

UCLASS(Blueprintable)
class UTresAttack14_e_ex781_HighVoltage : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CraftWaitTime;
    
    UTresAttack14_e_ex781_HighVoltage();
};

