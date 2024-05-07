#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_InstallMessage.generated.h"

class UGFxObject;
class UTresASProxyTresControlsButton;

UCLASS(Blueprintable)
class UTresUIP_InstallMessage : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_Main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_TextMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_Gauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsButton* m_ButtonOK;
    
public:
    UTresUIP_InstallMessage();
};

