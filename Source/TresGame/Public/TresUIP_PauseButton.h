#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsButton.h"
#include "TresUIP_PauseButton.generated.h"

class UGFxObject;

UCLASS(Blueprintable, NonTransient)
class UTresUIP_PauseButton : public UTresASProxyTresControlsButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGFxObject* m_InAnimation;
    
public:
    UTresUIP_PauseButton();
};

