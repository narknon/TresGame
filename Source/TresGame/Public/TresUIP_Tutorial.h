#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_Tutorial.generated.h"

class UGFxObject;
class UTresASProxyRSLTutorialMenu;
class UTresASProxyRSLStageCategory;

UCLASS(Blueprintable)
class UTresUIP_Tutorial : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyRSLTutorialMenu* m_TutorialMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyRSLStageCategory* m_StageCategory;
    
public:
    UTresUIP_Tutorial();
};

