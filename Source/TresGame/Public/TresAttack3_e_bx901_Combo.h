#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "BX901_ComboInfo.h"
#include "TresAttack3_e_bx901_Combo.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack3_e_bx901_Combo : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fInitBrake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPredictionTime;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FBX901_ComboInfo m_ComboInfoArray[3];
    
    UTresAttack3_e_bx901_Combo();
};

