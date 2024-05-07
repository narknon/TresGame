#pragma once
#include "CoreMinimal.h"
#include "TresCockpitParts.h"
#include "TresUIP_HudRight.generated.h"

class UTresUIP_HudRightMissionCounter;
class UTresUIP_HudRightLevelUp;
class UTresUIP_HudRightGetBonus;
class UTresUIP_HudRightNaviMap;
class UTresUIP_HudRightEnmHpPack;
class UTresUIP_HudRightTimer;
class UTresUIP_HudRightKairiCounter;

UCLASS(Blueprintable)
class UTresUIP_HudRight : public UTresCockpitParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudRightMissionCounter* m_MissionCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTresUIP_HudRightLevelUp*> m_LevelUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTresUIP_HudRightGetBonus*> m_GetBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudRightNaviMap* m_NaviMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudRightEnmHpPack* m_EnmHpPack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudRightTimer* m_Timer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudRightKairiCounter* m_KairiCounter;
    
public:
    UTresUIP_HudRight();
    UFUNCTION(BlueprintCallable)
    int32 OnCallback(int32 ID, int32 Param);
    
};

