#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "EEX359_ComboStartType.h"
#include "EX359_ComboTractionInfo.h"
#include "EX359_BeamInfoSet.h"
#include "EX359_ComboAttackIDModifySet.h"
#include "TresAttack1_e_ex359_Combo.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack1_e_ex359_Combo : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bForceCombo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<EEX359_ComboStartType> m_ComboStartType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEX359_ComboTractionInfo> m_TractionInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEX359_BeamInfoSet m_BeamInfoSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEX359_ComboAttackIDModifySet> m_AttackIDModifySetArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iEffectGoupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDebugDisp;
    
    UTresAttack1_e_ex359_Combo();
};

