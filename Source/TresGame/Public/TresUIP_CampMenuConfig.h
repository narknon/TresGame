#pragma once
#include "CoreMinimal.h"
#include "TresUIP_CampMenuSubParts.h"
#include "TresUIP_CampMenuConfig.generated.h"

class UTresASProxyRSLConfig;
class UTresASProxyRSLStageCategory;

UCLASS(Blueprintable, NonTransient)
class UTresUIP_CampMenuConfig : public UTresUIP_CampMenuSubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyRSLConfig* m_ConfigRSL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyRSLStageCategory* m_StageCategory;
    
public:
    UTresUIP_CampMenuConfig();
};

