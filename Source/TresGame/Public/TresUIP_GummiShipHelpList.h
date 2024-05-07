#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_GummiShipHelpList.generated.h"

class UGFxObject;

UCLASS(Blueprintable, NonTransient)
class UTresUIP_GummiShipHelpList : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pNewMark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pHelpText;
    
public:
    UTresUIP_GummiShipHelpList();
};

