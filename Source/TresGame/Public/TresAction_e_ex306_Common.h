#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "ECommonAction_e_ex306.h"
#include "TresAction_e_ex306_Common.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction_e_ex306_Common : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECommonAction_e_ex306> m_Action;
    
    UTresAction_e_ex306_Common();
};

