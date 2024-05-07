#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsButton.h"
#include "TresASProxyRSLTopMenuCmd.generated.h"

class UGFxObject;

UCLASS(Blueprintable, NonTransient)
class UTresASProxyRSLTopMenuCmd : public UTresASProxyTresControlsButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_HelpMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_CategoryIcon;
    
public:
    UTresASProxyRSLTopMenuCmd();
};

