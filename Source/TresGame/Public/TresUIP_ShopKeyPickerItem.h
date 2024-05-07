#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresCoreAnchorComponent.h"
#include "TresUIP_ShopKeyPickerItem.generated.h"

class UGFxObject;
class UTresASProxyTresControlsIcon;

UCLASS(Blueprintable, NonTransient)
class UTresUIP_ShopKeyPickerItem : public UTresASProxyTresCoreAnchorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_InAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_SelectAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsIcon* m_Icon;
    
public:
    UTresUIP_ShopKeyPickerItem();
};

