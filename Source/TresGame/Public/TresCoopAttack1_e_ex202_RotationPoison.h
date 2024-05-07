#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionRanged.h"
#include "TresCoopAttack1_e_ex202_RotationPoison.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresCoopAttack1_e_ex202_RotationPoison : public UTresAttackDefinitionRanged {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LookAtHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SpeedRate;
    
public:
    UTresCoopAttack1_e_ex202_RotationPoison();
};

