#pragma once
#include "CoreMinimal.h"
#include "TresASProxy.h"
#include "TresASProxyTresControlsTabControl.generated.h"

class UGFxObject;

UCLASS(Blueprintable, NonTransient)
class UTresASProxyTresControlsTabControl : public UTresASProxy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_SwitchL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_SwitchR;
    
public:
    UTresASProxyTresControlsTabControl();
};

