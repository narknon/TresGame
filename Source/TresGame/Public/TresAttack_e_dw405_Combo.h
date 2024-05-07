#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresE_dw405ComboParam.h"
#include "TresAttack_e_dw405_Combo.generated.h"

class UTresAttack_e_dw405_Base;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack_e_dw405_Combo : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresE_dw405ComboParam> m_ComboParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresAttack_e_dw405_Base* m_CurrentDefinition;
    
public:
    UTresAttack_e_dw405_Combo();
};

