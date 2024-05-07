#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipUIParts.h"
#include "TresUIP_HelpGummiShip.generated.h"

class UGFxObject;
class UTresASProxyTresControlsList;

UCLASS(Blueprintable)
class UTresUIP_HelpGummiShip : public UTresGumiShipUIParts {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pHelpText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsList* m_pASProxyListItem;
    
public:
    UTresUIP_HelpGummiShip();
};

