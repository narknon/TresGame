#pragma once
#include "CoreMinimal.h"
#include "TresASProxy.h"
#include "TresASProxyTresControlsScrollBar.generated.h"

class UGFxObject;

UCLASS(Blueprintable, NonTransient)
class UTresASProxyTresControlsScrollBar : public UTresASProxy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_Thumb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_Bg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_ScrollTargetTextField;
    
public:
    UTresASProxyTresControlsScrollBar();
};

