#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "WaveOneCollInfo_e_ex359.h"
#include "TresCoopAttack3_e_ex355_CutDown.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresCoopAttack3_e_ex355_CutDown : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveOneCollInfo_e_ex359 m_OneCollInfo;
    
    UTresCoopAttack3_e_ex355_CutDown();
};

