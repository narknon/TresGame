#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_SaveLoadListItem.generated.h"

class UGFxObject;
class UTresUIP_SaveLoadSaveDataDisplayInfo;

UCLASS(Blueprintable, NonTransient)
class UTresUIP_SaveLoadListItem : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_OrderNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_SaveLoadSaveDataDisplayInfo* m_DisplayInfo;
    
public:
    UTresUIP_SaveLoadListItem();
};

