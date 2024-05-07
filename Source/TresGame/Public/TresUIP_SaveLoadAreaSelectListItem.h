#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_SaveLoadAreaSelectListItem.generated.h"

class UGFxObject;
class UTresASProxyTresControlsIcon;

UCLASS(Blueprintable, NonTransient)
class UTresUIP_SaveLoadAreaSelectListItem : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_AreaSelectListItemAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_MapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_AreaName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsIcon* m_AreaIcon;
    
public:
    UTresUIP_SaveLoadAreaSelectListItem();
};

