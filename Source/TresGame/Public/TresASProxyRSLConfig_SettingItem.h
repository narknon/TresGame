#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsButton.h"
#include "TresASProxyRSLConfig_SettingItem.generated.h"

class UGFxObject;

UCLASS(Blueprintable, NonTransient)
class UTresASProxyRSLConfig_SettingItem : public UTresASProxyTresControlsButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pItemNameObject;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pSelectValueObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pArrawLeftObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pArrawRightObject;
    
public:
    UTresASProxyRSLConfig_SettingItem();
};

