#pragma once
#include "CoreMinimal.h"
#include "EEX359_CommonAction.h"
#include "TresActionDefinitionBase.h"
#include "TresAction_e_ex359_Common.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction_e_ex359_Common : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<EEX359_CommonAction> m_Action;
    
    UTresAction_e_ex359_Common();
};

