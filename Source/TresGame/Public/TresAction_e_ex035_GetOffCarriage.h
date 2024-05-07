#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction_e_ex035_GetOffCarriage.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction_e_ex035_GetOffCarriage : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseBBKeyDestination;
    
    UTresAction_e_ex035_GetOffCarriage();
};

