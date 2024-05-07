#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsButton.h"
#include "TresUIP_SaveLoadAutoSaveButton.generated.h"

class UTresUIP_SaveLoadSaveDataDisplayInfo;

UCLASS(Blueprintable, NonTransient)
class UTresUIP_SaveLoadAutoSaveButton : public UTresASProxyTresControlsButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_SaveLoadSaveDataDisplayInfo* m_DisplayInfo;
    
public:
    UTresUIP_SaveLoadAutoSaveButton();
};

