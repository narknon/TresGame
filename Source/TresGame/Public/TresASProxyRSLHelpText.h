#pragma once
#include "CoreMinimal.h"
#include "TresASProxy.h"
#include "TresASProxyRSLHelpText.generated.h"

class UGFxObject;

UCLASS(Blueprintable, NonTransient)
class UTresASProxyRSLHelpText : public UTresASProxy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pTxHelpText;
    
public:
    UTresASProxyRSLHelpText();
};

