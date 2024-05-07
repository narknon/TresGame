#pragma once
#include "CoreMinimal.h"
#include "TresASProxy.h"
#include "TresUIP_HudUxMainCmdParts.generated.h"

class UGFxObject;

UCLASS(Blueprintable, NonTransient)
class UTresUIP_HudUxMainCmdParts : public UTresASProxy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_gfx_cmdText1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_gfx_txCmdName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_gfx_txtFieldCmdText;
    
public:
    UTresUIP_HudUxMainCmdParts();
};

