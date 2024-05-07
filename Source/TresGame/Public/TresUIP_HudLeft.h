#pragma once
#include "CoreMinimal.h"
#include "TresCockpitParts.h"
#include "TresUIP_HudLeft.generated.h"

class UTresUIP_HudLeftMissionGage;
class UTresUIP_HudLeftInformation;
class UTresUIP_HudLeftTimer;
class UTresUIP_HudLeftScoreHit;
class UTresUIP_HudLeftGetItem;
class UTresUIP_HudLeftScore;
class UTresUIP_HudLeftNextLv;
class UTresUIP_HudLeftGetMunny;

UCLASS(Blueprintable)
class UTresUIP_HudLeft : public UTresCockpitParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIP_HudLeftInformation* m_Information;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIP_HudLeftMissionGage* m_MissionGage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIP_HudLeftTimer* m_Timer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIP_HudLeftGetItem* m_GetItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIP_HudLeftScore* m_Score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIP_HudLeftScoreHit* m_ScoreHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIP_HudLeftNextLv* m_NextLv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIP_HudLeftGetMunny* m_GetMunny;
    
public:
    UTresUIP_HudLeft();
    UFUNCTION(BlueprintCallable)
    int32 OnCallback(int32 nId, int32 nParam);
    
};

