#pragma once
#include "CoreMinimal.h"
#include "TresHudBaymaxCharaMarkerInfo.h"
#include "TresCockpitParts.h"
#include "TresHudBaymaxPointInfo.h"
#include "TresHudBaymaxLocationMarkerInfo.h"
#include "TresHudBaymaxDarkCubeInfo.h"
#include "TresUIP_HudBaymax.generated.h"

class UTresUIP_HudParts;
class UGFxObject;
class UTresASProxyTresControlsIcon;
class UTresASProxyTresControlsBitmapNumber;
class UTresTimerTask;
class UTresUIDataAssetBaymax;
class UAudioComponent;

UCLASS(Blueprintable)
class UTresUIP_HudBaymax : public UTresCockpitParts {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresHudBaymaxPointInfo> m_pointInfoAry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresHudBaymaxLocationMarkerInfo m_locationInfo;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FTresHudBaymaxCharaMarkerInfo m_heroInfo[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresHudBaymaxCharaMarkerInfo m_enemyInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresHudBaymaxDarkCubeInfo m_darkcubeInfo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pHudBaymax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudParts* m_pHudPartsScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudParts* m_pHudPartsTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudParts* m_pHudPartsLiveFeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxLiveFeedMonitorGlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsIcon* m_pGFxLiveFeedIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxDarkCube;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxMissionResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxReadyGo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxFinishAnm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxRecordScoreSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxRecordScoreGlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxDataCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxRecordTimeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxRecordTimeGlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxTimeCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsBitmapNumber* m_pGFxScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsBitmapNumber* m_pGFxRecordScore;
    
    UPROPERTY(EditAnywhere, Transient)
    UTresASProxyTresControlsBitmapNumber* m_pGFxTime[3];
    
    UPROPERTY(EditAnywhere, Transient)
    UTresASProxyTresControlsBitmapNumber* m_pGFxRecordTime[3];
    
    UPROPERTY(EditAnywhere, Transient)
    UTresASProxyTresControlsBitmapNumber* m_pGFxResultTime[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsBitmapNumber* m_pGFxResultScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsBitmapNumber* m_pGFxResultBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsBitmapNumber* m_pGFxResultTotal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxResultNewRecordTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxResultNewRecordScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxResultRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresTimerTask* m_pTimerTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIDataAssetBaymax* m_pUIDataAssetBaymax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* m_ResultPointRollSEAudioComponent;
    
public:
    UTresUIP_HudBaymax();
    UFUNCTION(BlueprintCallable)
    int32 OnCallback(int32 ID, int32 Param);
    
};

