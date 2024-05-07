#pragma once
#include "CoreMinimal.h"
#include "TresASProxy.h"
#include "TresUIP_HudCommandMainParts.generated.h"

class UGFxObject;

UCLASS(Blueprintable, NonTransient)
class UTresUIP_HudCommandMainParts : public UTresASProxy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_mcCmdText1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_txCmdName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_txtFieldCmdText;
    
public:
    UTresUIP_HudCommandMainParts();
};

