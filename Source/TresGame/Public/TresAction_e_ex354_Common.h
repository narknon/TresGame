#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "EEX354_CommonAction.h"
#include "TresAction_e_ex354_Common.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction_e_ex354_Common : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<EEX354_CommonAction> m_Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDisappearOnChangeField;
    
    UTresAction_e_ex354_Common();
};

