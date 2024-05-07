#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionWeaponBase.h"
#include "EX359_BeamInfoSet.h"
#include "TresAttack8_e_ex359_Beam.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack8_e_ex359_Beam : public UTresAttackDefinitionWeaponBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEX359_BeamInfoSet m_BeamInfoSet;
    
    UTresAttack8_e_ex359_Beam();
};

