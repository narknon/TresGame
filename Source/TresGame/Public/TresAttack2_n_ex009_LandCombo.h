#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresAttack2_n_ex009_LandCombo.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack2_n_ex009_LandCombo : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ComboMax;
    
public:
    UTresAttack2_n_ex009_LandCombo();
};

