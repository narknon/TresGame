#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionRanged.h"
#include "TresAttack4_e_ex202_PoisonExhale.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack4_e_ex202_PoisonExhale : public UTresAttackDefinitionRanged {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LookAtHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_NotExecuteDistance;
    
public:
    UTresAttack4_e_ex202_PoisonExhale();
};

