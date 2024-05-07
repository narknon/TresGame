#pragma once
#include "CoreMinimal.h"
#include "TresUIP_HudParts.h"
#include "TresUIPreloadInfo.h"
#include "TresUIP_HudLeftMissionGage.generated.h"

UCLASS(Blueprintable, NonTransient)
class UTresUIP_HudLeftMissionGage : public UTresUIP_HudParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTresUIPreloadInfo m_PreloadInfo;
    
public:
    UTresUIP_HudLeftMissionGage();
};

