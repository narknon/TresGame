#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsButton.h"
#include "TresUIP_MobileLsiButton.generated.h"

class UTresASProxyTresControlsImageIcon;
class UGFxObject;

UCLASS(Blueprintable, NonTransient)
class UTresUIP_MobileLsiButton : public UTresASProxyTresControlsButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsImageIcon* m_ImageIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_CompleteMark;
    
public:
    UTresUIP_MobileLsiButton();
};

