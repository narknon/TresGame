#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "EEX734_CommonAction.h"
#include "TresAction_e_ex734_Common.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction_e_ex734_Common : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<EEX734_CommonAction> m_Action;
    
    UTresAction_e_ex734_Common();
};

