#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionRanged.h"
#include "TresAttack4_e_ex072_FrillPowder.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack4_e_ex072_FrillPowder : public UTresAttackDefinitionRanged {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fShotOffset;
    
    UTresAttack4_e_ex072_FrillPowder();
};

