#pragma once
#include "CoreMinimal.h"
#include "TresASProxy.h"
#include "TresASProxyRSLBtnInfo.generated.h"

class UGFxObject;

UCLASS(Blueprintable, NonTransient)
class UTresASProxyRSLBtnInfo : public UTresASProxy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_BtnInfoText;
    
public:
    UTresASProxyRSLBtnInfo();
};

