#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "EBX901_CommonAction.h"
#include "TresAction_e_bx901_Common.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction_e_bx901_Common : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<EBX901_CommonAction> m_Action;
    
    UTresAction_e_bx901_Common();
};

