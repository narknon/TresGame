#pragma once
#include "CoreMinimal.h"
#include "TresHUDBase.h"
#include "ETresGameHelp.h"
#include "TresGumiShipBonusParameterDataTable.h"
#include "TresGMInputResult.h"
#include "ETresGumiShipBonusType.h"
#include "TresGumiShipHUD.generated.h"

class UTresUIP_HudGummiShip;
class USceneComponent;
class UTresUIP_MenuGummiShip;
class UTresUIP_MobileAlbum;
class ATresGumiShipBattleVolume;
class ATresGumiShipPlayerControllerBase;

UCLASS(Blueprintable, NonTransient)
class ATresGumiShipHUD : public ATresHUDBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipHudResultRetry);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipHudResultRankConfirmed);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipHudResultFinish);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipCloseInfomation);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiSettingMenuFinish);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiRecordMenuFinish);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGumiShipHudResultRankConfirmed OnRankConfirmedResultHudDispather;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGumiShipHudResultFinish OnFinishResultHudDispather;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGumiShipHudResultRetry OnRetryResultHudDispather;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudGummiShip* m_pHud;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_MenuGummiShip* m_pGummiMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_MobileAlbum* m_pAlbum;
    
public:
    ATresGumiShipHUD(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetSightEnable(bool bIn);
    
    UFUNCTION(BlueprintCallable)
    void OpenMissionClearWindow();
    
    UFUNCTION(BlueprintCallable)
    void OpenMessageWindow(const FString& strMessage, bool bAuto);
    
    UFUNCTION(BlueprintCallable)
    void OpenInfomationWithLabel(const FString& label);
    
    UFUNCTION(BlueprintCallable)
    void OpenInfomation();
    
    UFUNCTION(BlueprintCallable)
    void OpenGumiTutorialWindow(ETresGameHelp eOpenId, bool bWithPause);
    
    UFUNCTION(BlueprintCallable)
    void OpenCapture();
    
    UFUNCTION(BlueprintCallable)
    void DebugWorldGuideAllEnable(bool IsOn);
    
    UFUNCTION(BlueprintCallable)
    void DebugHudDrawSuppression(bool IsOn);
    
    UFUNCTION(BlueprintCallable)
    void DebugEnemyHPIgnore(bool IsOn);
    
    UFUNCTION(BlueprintCallable)
    void DebugEnemyHPEnable(bool IsOn);
    
    UFUNCTION(BlueprintCallable)
    void CloseMessageWindow(bool bAll);
    
    UFUNCTION(BlueprintCallable)
    void CloseInfomation();
    
private:
    UFUNCTION(BlueprintCallable)
    void _OnUpdateInfomation(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void _OnStartSpWeapon();
    
    UFUNCTION(BlueprintCallable)
    void _OnStartBattleMission();
    
    UFUNCTION(BlueprintCallable)
    void _OnResultHudRetry();
    
    UFUNCTION(BlueprintCallable)
    void _OnResultHudRankConfirmed();
    
    UFUNCTION(BlueprintCallable)
    void _OnResultHudFinish();
    
    UFUNCTION(BlueprintCallable)
    void _OnPostSetupPlayer();
    
    UFUNCTION(BlueprintCallable)
    void _OnPostCreateSpWeapon();
    
    UFUNCTION(BlueprintCallable)
    void _OnOutBattleMode(ATresGumiShipBattleVolume* pBattleVolume);
    
    UFUNCTION(BlueprintCallable)
    void _OnInBattleMode(ATresGumiShipBattleVolume* pBattleVolume);
    
    UFUNCTION(BlueprintCallable)
    void _OnGetItem(int32 eItemId);
    
    UFUNCTION(BlueprintCallable)
    void _OnDefeatedEnemy(const int32 dCount);
    
    UFUNCTION(BlueprintCallable)
    void _OnCoolTimeSpWeapon();
    
    UFUNCTION(BlueprintCallable)
    void _OnCoolEndSpWeapon();
    
    UFUNCTION(BlueprintCallable)
    void _OnCompletedBonus(const FTresGumiShipBonusParameterDataTable& rInfo);
    
    UFUNCTION(BlueprintCallable)
    void _OnClosedGameHelp(int32 UserParam);
    
    UFUNCTION(BlueprintCallable)
    void _OnChangeTinyShipFormation(const FTresGMInputResult& rResult, const ATresGumiShipPlayerControllerBase* pController);
    
    UFUNCTION(BlueprintCallable)
    void _OnChangeSpWeaponGauge(const float fOldPoint, const float fNewPoint, const float fRatio);
    
    UFUNCTION(BlueprintCallable)
    void _OnChangeSpeedGauge(const float fOldPoint, const float fNewPoint, const float fRatio);
    
    UFUNCTION(BlueprintCallable)
    void _OnChangeHpGauge(const int32 dOldHp, const int32 dNewHp, const float fRatio);
    
    UFUNCTION(BlueprintCallable)
    void _OnChangedLockonTarget(USceneComponent* pTarget);
    
    UFUNCTION()
    void _OnBattleBonus(TEnumAsByte<ETresGumiShipBonusType> eType, int32 dPoint);
    
};

