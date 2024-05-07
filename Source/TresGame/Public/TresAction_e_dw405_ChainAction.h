#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresE_dw405ChainActionParams.h"
#include "TresAction_e_dw405_ChainAction.generated.h"

class UTresAction_e_dw405_Base;

UCLASS(Blueprintable, HideDropdown)
class UTresAction_e_dw405_ChainAction : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresE_dw405ChainActionParams> m_ActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresAction_e_dw405_Base* m_CurrentState;
    
public:
    UTresAction_e_dw405_ChainAction();
};

