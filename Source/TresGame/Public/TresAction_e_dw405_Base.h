#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction_e_dw405_Interface.h"
#include "TresAction_e_dw405_Base.generated.h"

class UEnvQuery;

UCLASS(Blueprintable, HideDropdown)
class UTresAction_e_dw405_Base : public UTresActionDefinitionBase, public ITresAction_e_dw405_Interface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* m_ActionEQSQuery;
    
public:
    UTresAction_e_dw405_Base();
    
    // Fix for true pure virtual functions not being implemented
};

