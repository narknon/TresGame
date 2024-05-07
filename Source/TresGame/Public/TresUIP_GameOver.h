#pragma once
#include "CoreMinimal.h"
#include "TresUISubParts.h"
#include "TresUIP_GameOver.generated.h"

class UTresASProxyTresControlsButton;
class UGFxObject;

UCLASS(Blueprintable, NonTransient)
class UTresUIP_GameOver : public UTresUISubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    UTresASProxyTresControlsButton* m_Button[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGFxObject* m_HintText;
    
public:
    UTresUIP_GameOver();
};

