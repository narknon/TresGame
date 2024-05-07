#pragma once
#include "CoreMinimal.h"
#include "TresUISubParts.h"
#include "TresUIP_ShopSynthesisTop.generated.h"

class UGFxObject;
class UTresASProxyRSLTopMenuCmd;
class UTresASProxyRSLStageCategory;

UCLASS(Blueprintable, NonTransient)
class UTresUIP_ShopSynthesisTop : public UTresUISubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient)
    UTresASProxyRSLTopMenuCmd* m_TopButtons[5];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_CompleteMark[3];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_CreateLogCount[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_PhotoMissionLogText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyRSLStageCategory* m_StageCategory;
    
public:
    UTresUIP_ShopSynthesisTop();
};

