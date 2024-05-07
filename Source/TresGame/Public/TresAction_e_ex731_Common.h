#pragma once
#include "CoreMinimal.h"
#include "EEX731_CommonAction.h"
#include "TresActionDefinitionBase.h"
#include "TresAction_e_ex731_Common.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction_e_ex731_Common : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<EEX731_CommonAction> m_Action;
    
    UTresAction_e_ex731_Common();
};

