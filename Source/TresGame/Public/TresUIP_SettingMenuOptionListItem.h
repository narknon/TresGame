#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_SettingMenuOptionListItem.generated.h"

class UGFxObject;

UCLASS(Blueprintable, NonTransient)
class UTresUIP_SettingMenuOptionListItem : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pOptionLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pOptionValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pCheckMark;
    
public:
    UTresUIP_SettingMenuOptionListItem();
};

