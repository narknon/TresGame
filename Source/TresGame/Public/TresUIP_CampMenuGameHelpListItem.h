#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_CampMenuGameHelpListItem.generated.h"

class UGFxObject;

UCLASS(Blueprintable, NonTransient)
class UTresUIP_CampMenuGameHelpListItem : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_DlcMark;
    
public:
    UTresUIP_CampMenuGameHelpListItem();
};

