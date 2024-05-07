#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "TresGameCheatManager.generated.h"

class ATresCharPawnBase;
class ATresEnemyPawnBase;

UCLASS(Blueprintable)
class UTresGameCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    UTresGameCheatManager();
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllPhotoHologram();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TresTeleport(FName InTag, bool bResetCamera, bool bStateClear);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TresSceneCapture(bool InIsEnableInvGamma);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleHitchProfilerSmartphoneScreenshot();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleHitchProfilerDebugScreenshot();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowOctreeDebugDraw(int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowNavigationGroup(int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowInfluenceMap(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowInfluenceEmitter(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowDebugAIBodyCollision(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPhotoHologramUseDebugMenu(bool bUse);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPhotoHologramEnableStopActorMeshBonamik(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPhotoHologramEnableKeepActorMeshBonamikInEdit(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPhotoHologramEnableInputPoseOffsetSupport(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPhotoHologramDebugInfo(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPhotoHologramActorDebugInfo(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetDebugShowDetectMarkerInfoFlag(int32 Type);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetDebugShowDanceInfoFlag(int32 Type);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemyMakeAllRecipeSuccess();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemyMakeAllRecipeGreatSuccess();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PhotoHologramSetInverseRotationInput(bool bInverse);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PhotoHologramSetInverseRollInput(bool bInverse);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PhotoHologramSetInversePitchInput(bool bInverse);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PhotoHologramResetDataTableNewMarkIndex(int32 Type);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PhotoHologramAutoInputDataTableNewMarkIndex(int32 Type);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugVerumRexSetSec(float sec);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugVerumRexSetScore(int32 Score);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugVerumRexSetRank(int32 Rank);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugVerumRexSetContinuousChain(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugVerumRexSetChain(int32 chain);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugVehicleSpecialShipStockMax(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugVehicleSpecialShipDisableOsc(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugVehicleSpecialShipCompDebugDisp(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugVehicleSpecialShipCheckMode(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugVehicleSpecialShipCannonTrack(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugVehicleGigasLifeTimeLimit(float InTime);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugVehicleGigasEnemyGaugeDisp(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugVehicleGigasBoostMax(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIWipe(bool bOut, const FString& World);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIUnlockMenu(FName Name, bool Flag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIUnloadAllUI();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIUnderWater(bool IntoWater);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIUltimaLock(int32 Command, float fGauge);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIStopFullscreenVideo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISituationTimerInfinity(bool IsInfinity);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISimplexActionCommand(int32 nAction, int32 nKind, float fTimer);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIShowNaviMapInfo(bool bShow);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIShowMoviePlayerList(bool bShow);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIShowHudCommandSituation(int32 nKind);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIShowAutoSave(bool IsShow);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIShowAllHud();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetVisibleTargetStatus(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetVisibleSubtitle(bool Visible);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetVisibleSRideHud(int32 nVisible);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetVisibleSpecialShipHud(int32 nVisible);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetVisibleSpecialShipGoalMarker(int32 nVisible);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetVisibleSpecialShipGoalArrow(int32 nVisibleL, int32 nVisibleR);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetVisibleSpecialShipCannonScope(int32 nVisible);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetVisiblePusuButton(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetVisiblePlayerStatus(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetVisibleOperationGuide(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetVisibleMapName(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetVisibleKairiCounter(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetVisibleInformation(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetVisibleGigasHudParts(int32 nVisible);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetVisibleGigasHud(int32 nVisible);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetVisibleBxMarker(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetVisibleBxLiveFeed(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetVisibleButtonNotice(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetTargetEnemy(bool onoff, bool IsTargetFix);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetSubCommandCount(int32 Type, int32 count);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetStylePointGauge(float StylePointGauge);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetSRideHud(int32 nAction);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetSpecialShipScopeType(int32 nType);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetSpecialShipRestrictCommand(int32 nAction, int32 nKind);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetSpecialShipHud(int32 nAction, int32 nMode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetSpecialShipGoalMarker(int32 nPosX, int32 nPosY, int32 nDistance);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetSpecialShipGoalArrow(int32 nDistance);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetSpecialShipCannonScopePosition(float fPosX, float fPosY);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetSpecialShipAlert(int32 nAlert);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetSpecialShipActionCommand(int32 nKind);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetShortcutPage2(int32 Page, int32 Slot, const FString& KindName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetShortcutPage(int32 Page, int32 Slot, int32 Kind);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetShortcutCommand(FName Key, int32 ShortcutType);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetScoreHud(int32 nAction, int32 nKind, int32 nNum, int32 nRecord);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetScoreChainBonus(float fRate, int32 nCounter);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetScore(int32 nScore);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetSaixStatus(int32 nKind);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetSaixHud(int32 nAction);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetSaixGauge(float fGauge);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetRailScopeTargetPosition(float fPosX, float fPosY);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetRailScopeHud(int32 nAction);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetPushCommand(int32 nAction, int32 nType, int32 nKind);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetPuddingStartCountDown(int32 nCount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetPuddingFinishCountDown(int32 nCount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetPowerUpWindow(int32 nAction);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetPlatform(const FString& Platform);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetPlaneMissileCursor(int32 nAction);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetPlaneHud(int32 nAction);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetPlaneBossHud(int32 nAction);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetOperationHud(int32 nAction, int32 nType);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetOperationGuide(int32 nType);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetNauticalChart(int32 nAction);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetMainCommandRightIcon();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetMagicSubCommand(FName Key);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetLuxord(int32 nKind);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetLinkSubCommand(FName Key);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetLinkCommandNone(bool isNone);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetKairiCounter(int32 nKind);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetItemSubCommand(FName Key);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetHudRightAll(int32 nAction);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetHudRalphBlockStock(int32 SlotIndex, int32 Stock);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetHudLeftAll(int32 nAction);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetHudDrawDeubg(bool IsEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetHudCommandSneeze(int32 nMode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetHudCommandRestrictFinish(int32 nAction);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetHudCommandRestrict(int32 nKind);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetHudCommandExWorkshop(int32 nAction);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetHudCommandExBaymax(int32 nAction);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetHudCommandAttack(int32 nMode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetHpGigasHud(int32 nMode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetHitCountHud(int32 nAction, int32 nRecord);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetHitCount(int32 nHit);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetGigasHud(int32 nAction, int32 nId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetEnableGigasHudCharaMarkerLimitTypeAll(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetEnableGigasHudCharaMarkerLimitNum(int32 Num);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetEnableGigasHudCharaMarkerFriend(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetEnableGigasHudCharaMarkerEnemy(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetEnableFloatTexture(bool IsEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetEnableCommandEx(int32 nIndex, int32 nEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetDisplayScore(int32 nMode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetDisplayHitCount(int32 nMode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetDisableShootFlowCommandText(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetDisableDraw(bool DisableDraw);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetDanceResult(int32 nAction, int32 nRank);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetDanceRapunzel(int32 nAction);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetDanceHud(int32 nAction, int32 nRevisit, int32 nScore, int32 nChain);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetDanceGauge(int32 nGauge, int32 nMax);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetDanceChain(int32 nChain, int32 nRapunzel);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetDanceAddedTime(float fTime);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetDanceActionCommandMission(int32 nAction, int32 nKind);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetDanceActionCommand(int32 nAction, int32 nKind);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetCrabWindow(int32 nAction, int32 nNum);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetCommandMagic(int32 Kind);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetButtonCount(float Time);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetBlackPearlChaseMeter(float fMeter, int32 nKind);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetBlackPearlChaseHud(int32 nAction, float fStart, float fGoal);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetBaymaxScore(int32 nScore);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetBaymaxResult(int32 nAction, int32 nRank);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetBaymaxLiveFeed(int32 nAction, int32 nKind);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetBaymaxHud(int32 nAction, int32 nKind);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetBaymaxCountDown(int32 nCount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetBasicShortcut();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetAllHudCommand(FName Key);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISetActionCommand(int32 Num);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUISelectHudRalphBlockSlot(int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIScreenFilter(bool IsShow, int32 Type);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIResetUIPartsProfileTime();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIResetPadBtnText();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIPushButtonMark(int32 nKind);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIPlayFullscreenVideo(const FString& MovieFilePath);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIPCConfigSetting(FName ConfigName, float Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIPauseActionCommandTimer(bool IsOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIOpenTimer(int32 nPos);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIOpenStreamingLoadScreen();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIOpenSPCamera(int32 _mode, bool _bBlur);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIOpenShootLockResult();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIOpenShootLock();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIOpenSaveMenu();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIOpenPushCommand();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIOpenPlayerSelectLR(const FString& NameL, const FString& NameR);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIOpenNormalLoadScreen();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIOpenNextLv(int32 Exp);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIOpenMissionGage(FName dataTableKey);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIOpenLoadMenu();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIOpenLevelUp(int32 ParamNum, int32 Num);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIOpenInfomation();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIOpenHundredGame();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIOpenHudUx();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIOpenHudRightAll(int32 nAction);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIOpenHudRalph();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIOpenHudLeftAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIOpenGetMunny(int32 munny);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIOpenGetItem();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIOpenGetBonus(int32 ParamNum, int32 Num);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIOpenGameOverGumi(int32 HintIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIOpenGameOver(int32 HintIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIOpenGameHelp(int32 GameHelpID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIOpenExtraLoadScreen(int32 _index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIOpenEventItem(int32 ItemIDInt);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIOpenConfigScreenMenu();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIOpenConfigBrightnessMenu();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIOpenClearDataSaveMenu();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIOpenCampMenu();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIOpenButtonCount(float Time);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUINaviMapMarkerTest(int32 MapMarkerType, int32 PosX, int32 PosY);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUINaviMapMarkerPcStart(bool IsSet);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIMoviePlayerInvokeLog(bool bShowLog, int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUILuckyMarkMenuDebugMode(bool _debug);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUILStickInput(int32 nKind);
    
    UFUNCTION(Exec)
    void DebugUILSIButtonSetGameMode(int32 GameModeType, uint8 GameModeIndex);
    
    UFUNCTION(Exec)
    void DebugUILSIButtonSet(uint8 LSIGameItemIDIndex, bool bClose);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUILoadNaviMap(FName MapName, bool OverwriteMap);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIKeyHole(int32 nKind);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIHudXehanort(int32 nKind);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIHudCommandTimeBreak(float fBreakTimer);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIHideHudCommandSituation(int32 nKind);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIHideAllHud();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIGameHelpFlag(bool Enable, int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIForceUnlockSaveTopMenu(bool IsForceUnlock);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIForceShowNaviMap(bool bShow);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIForceScaleformGC();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIForceExtraLoadScreen(bool _force);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIFixFocusLabel();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIEnableSubtitleSkip(bool IsEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIEnableInvoke(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIDisplayNaviMap(int32 DataTableIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIDeleteTargetCursor(const FString& TargetActorFName, int32 CursorType, bool bDecision);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIDeleteActionCommand();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUICreateUIParts(const FString& AssetPath);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIConfigSetting(FName ConfigName, int32 Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUICodeMenu(int32 nKind);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUICloseTimer(int32 nPos);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUICloseStreamingLoadScreen();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUICloseSPCamera();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUICloseShootLock();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIClosePushCommand();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUICloseNormalLoadScreen();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUICloseInfomation();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUICloseHundredGame();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUICloseHudUx();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUICloseHudRightAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUICloseHudRalph();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUICloseHudLeftAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUICloseExtraLoadScreen();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUICloseButtonCount(bool IsCancel);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUICheatAchievement(int32 nKind);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIChangeWorldHudCommand(const FString& strWorld);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIChangeGigasHudCommandText(int32 nKind);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIChallengeScore(int32 nKind);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIAddTargetCursor(const FString& TargetActorName, int32 CursorType);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugTsPuddingSpawn(const int32 PuddingType);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugTsPuddingSetSpawnLimit(const int32 Num);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugTsPuddingDisplayNum(const bool bDisplay);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugTsPuddingDisableTickManager(const bool bDisable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugTsPuddingDisableRemove(const bool bDisable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugTsPuddingAddRemove(const int32 AddNum);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugTresToolLevelActorOnlyVisible();
    
    UFUNCTION(BlueprintCallable, Exec)
    ATresCharPawnBase* DebugSpawnVehicle(int32 nId, float OffsetX, float OffsetY, float OffsetZ);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSnowCurlingSetSec(float sec);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSnowCurlingSetScore(int32 Score);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSmartphonePCShadowOff(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    ATresEnemyPawnBase* DebugSimpleEnemySet_MaterialReduction(FName EnemyID, FName MaterialIdx, float OffsetX, float OffsetY, float OffsetZ);
    
    UFUNCTION(BlueprintCallable, Exec)
    ATresEnemyPawnBase* DebugSimpleEnemySet_DifferentSet(FName EnemyID, int32 SetIdx, float OffsetX, float OffsetY, float OffsetZ);
    
    UFUNCTION(BlueprintCallable, Exec)
    ATresEnemyPawnBase* DebugSimpleEnemySet_DifferentKindSet(FName EnemyID, FName Kind, float OffsetX, float OffsetY, float OffsetZ);
    
    UFUNCTION(BlueprintCallable, Exec)
    ATresEnemyPawnBase* DebugSimpleEnemySet(FName EnemyID, float OffsetX, float OffsetY, float OffsetZ);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowValidNavmeshDebug(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowStaticEQSItemDebug(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowSpecialPerformActorAttachInfo(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowSmartphoneDebugInfo(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowSevenPrincessInfo(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowPhotoSaveInfo(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowPhotoMissionInfo(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowNpcSmartphoneReactionInfo(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowNavigationBuildTime(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowGameplayDebugger(int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowExistencePrizeNum(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowEQSDebug(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowEnemyParam(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowEmitterPool(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowDetectMarkerInfo(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowCoopDebug(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowCinematicStopAIDebug(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowCharacter(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowBackground(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowAttackPermissionDebug(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowAIDebug(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetVisibleDebugTextRender(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetUsePS4OutputRestrict(bool bUse);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetSmartphoneHLODOff(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetRaPuddingGrade(int32 grade);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetRaPuddingForceMissionContinue(bool bContinue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetPhotoMissionRecordedByID(int32 missionID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetPhotoJpegCompressQuality(int32 Quality);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetPhotoExport(bool IsExport);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetLuckyMarkRecordedByID(int32 markID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetLuckyMarkRecordedByCount(int32 count);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetEnemyHitPointRate(float InRate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetEnemyHitPoint(int32 InHitPoint);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetEnableR2PadTriggerDownMode(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetDefaultPawnNameBTAllSet(const FString& PawnName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetDefaultPawnNameBT(const FString& PawnName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetDefaultBT(FName ID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetDanceEffectColorMode(int32 mode);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetCameraLocation(float X, float Y, float Z, float Pitch, float Yaw, float Roll);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void DebugRaycastDisp(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugR2Damage(int32 TgtNo, int32 DamageNo);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugR2BadStat(int32 TgtNo, int32 BadStatNo);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugR2AndPadUpDamage(int32 TgtNo, int32 DamageNo);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugR2AndPadRightDamage(int32 TgtNo, int32 DamageNo);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugR2AndPadLeftDamage(int32 TgtNo, int32 DamageNo);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugR2AndPadDownDamage(int32 TgtNo, int32 DamageNo);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPuddingStopGameTimer(const bool bStop);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPuddingSetScore(const int32 Score);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPuddingFinishGame();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPuddingDisplayScore(const bool bDisplay);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPuddingDisableGameFinish(const bool bDisable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPuddingAddScore(const int32 Score);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugOutputLogTaskList();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugNpcSwitchBT(FName NpcID, const FString& BTFileName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugNpcSwitchAIBT(FName NpcID, const FString& BTFileName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugNpcAIStyleBattleAll(int32 Style);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMiRxSwitchDispDebugInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMiRxChangeEnemyState(const int32 dID, const bool bIsLoop);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMiPuddingDisplayKillNum(const bool bDisplay);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMiPuddingDisableAttack(const bool bDisable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugLoadLevelLoop(int32 loopNum, float WaitTime);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugLgRxSetZeroRelZ(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugLgRxSetRxRushRate(float InRate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugLgRxSetRxAttackRate(float InRate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugLgRxSetPhase(int32 InPhase);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugLgRxSetExecuteIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugLgRxSetDispLine(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugLgRxSetDispInfoPart(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugLgRxSetDispInfoAll(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugLgRxSetDisableSpecificAction(bool bDisable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugLgRxSetDebugPad(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugLgRxSetCmdAutoPopup(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugLevelRequestStopGimmick(const FString& ActorName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugLevelRequestStopedGimmick(const FString& ActorName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugLevelRequestStartGimmick(const FString& ActorName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugLevelRequestStartedGimmick(const FString& ActorName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugLevelRequestResetGimmick(const FString& ActorName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugLevelRequestForceStopedGimmick(const FString& ActorName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugLevelRequestForceStartedGimmick(const FString& ActorName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugLevelRequestForceDestroyedGimmick(const FString& ActorName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugLevelRequestDestroyGimmickFromLevelName(const FName& LevelName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugLevelRequestDestroyGimmick(const FString& ActorName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugLevelRequestDestroyedGimmickFromLevelName(const FName& LevelName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugLevelRequestDestroyedGimmick(const FString& ActorName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugLevelGimmickDamageCheckFree(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugLevelActorVisibleOnly(const FName& LevelName, int32 NO);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugLevelActorVisible(const FName& LevelName, int32 NO, bool Visible);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugHePuddingSpeedUpDown(const bool bUp);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugHePuddingDisplayNum(const bool bDisplay);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugHePuddingDisableSpeedDown(const bool bDisable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugFzPuddingDisplayKillNum(const bool bDisplay);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugFullPathSwitchPawnNameBTAllSet(const FString& PawnName, const FString& BTFilePath);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugFullPathSwitchPawnNameBT(const FString& PawnName, const FString& BTFilePath);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugFullPathSwitchClassNameBTAllSet(const FString& ClassName, const FString& BTFilePath);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugFullPathSwitchBT(FName ID, const FString& BTFilePath);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugFriendWarpHome(bool bAdjustCameraBack);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugFriendStopAI(bool bStop);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugFriendPlayCameraAnim(FName ID, const FString& BTFilePath, int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugFriendLinkPointMax(int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugFriendLinkPointLine(int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugFriendLinkPoint(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugFriendHpKeep(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugFriendDispSmartphoneCamera(FName FriendID, bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugFriendDispPrizeRange(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugFriendDispLineAndSphere(FName FriendID, bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugFriendDispLine(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugFriendDispInfo(FName FriendID, bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugFriendDispAnimInfo(FName FriendID, bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugForceUnlockBattlePortalRewardActions(int32 clearCount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugForceRaPuddingReload();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugForceFestivalDanceClear();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugFlashTracerSetSec(float sec);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugFlashTracerSetScore(int32 Score);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugFlashTracerSetRank(int32 Rank);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugFlashTracerForceFinish();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugFestivalDanceSetTimerStop(bool bStop);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugFestivalDanceSetChainCount(int32 chainCount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugFestivalDanceForceSpecialPerform();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugFestivalDanceForceRapunzelDance();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugFestivalDanceEnableInfiniteChain(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugExistEnemyAnnihilation();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEQSQueryItemNumList(const FString& FileName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnemyWallHitTest(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnemyWallHitReactionTest(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnemySwitchBT(FName EnemyID, const FString& BTFileName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnemySwitchAIBT(FName EnemyID, const FString& BTFileName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnemyStrongPointZero(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnemyRespawn(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnemyRalphBindTestIdx(int32 Idx);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnemyPadControlEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnemyHpKeep(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnemyBlowRevenge(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnemyBlowDeath(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnemyAnnihilation();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnemy_He001a_ShowHpInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnemy_He001a_ShowCollision(int32 DispType);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnemy_He001a_ShowAction();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnemy_Gigas_GimmickGigasOff();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnemy_dw407_ShowSpawnProjectileLocation(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnemy_dw401_WaveScrollTest(bool bScroll);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnemy_dw401_StartMickeyRide();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnemy_dw401_CameraCollTest(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnemy711TornadoInvolveTest(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnemy711ObjectTest(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnableItemEvaluation(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnableFriendLinkPoint(int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnableCutSceneLights(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnableAbilityBattlePhotographer(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEEX771SetDebrisBlowNum(int32 Num);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugDropItem(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugDrawTresLineTrace(bool bDraw);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugDispEEX771(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugDispEEX054(bool bEnable);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void DebugDispCameraLocation();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void DebugDiffAnalysisGPU();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugComNpcVoicePlay(bool bPlay);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugComNpcUniqueDeleteAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugComNpcStopMove(bool bStop);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugComNpcStopMasterPose(bool bStop);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugComNpcStopAction(bool bStop);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugComNpcSetVoiceMeshType(FName inMeshName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugComNpcSetVoiceMeshIndex(int32 nIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugComNpcSetMoveActorNum(int32 nNum);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugComNpcSetGroup(FName InGroupName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugComNpcSetGreetType(int32 nGreet);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugComNpcSetDispActorNum(int32 nNum);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugComNpcSetCameraScale(float fScale);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugComNpcSetCameraMotion(FName inRecordName, int32 nIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugComNpcSetAction(FName inSeqName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugComNpcDeleteAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugComNpcDelete();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugComNpcDebugDispType(int32 nMode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugComNpcDebugDisp(bool bDisp);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugComNpcAdd(FName inSubName, FName inNpcName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugCharPawnAnnihilation();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugCaPuddingMoveSpeed(const float Speed);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugCaPuddingDisplayWave(const bool bDisplay);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugCaPuddingDisableCooldownBell(const bool bDisable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugCallEnemyFunctionNameClassName(FName ClassName, FName FunctionName, FName Param);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugCallEnemyFunctionIntClassName(FName ClassName, FName FunctionName, int32 Param);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugCallEnemyFunctionInt(FName EnemyID, FName FunctionName, int32 Param);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugCallEnemyFunctionFloat(FName EnemyID, FName FunctionName, float Param);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugCallEnemyFunctionClassName(FName ClassName, FName FunctionName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugCallEnemyFunction(FName EnemyID, FName FunctionName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugBxPuddingInduction(const int32 Type);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugBxPuddingDisplayAreaJumpTarget(const bool bDisplay);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugBxPuddingChangeType(const int32 Type);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugBPEM_SetNextEP_ClampMode(int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugBPEM_SetEnabledTelemetryLog(bool InbEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugBPEM_SetEnabledStatusLog(bool InbEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugBPEM_SetEnabledEPLog(bool InbEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugBPEM_SetEnabledEmotionMap(bool InbEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugBPEM_SetEnabledActionLog(int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAlwaysEnableLookAt(FName PawnName, int32 mode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAlwaysEnableIK(FName PawnName, int32 mode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAllEnemySwitchTurnMove();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAllEnemySwitchAI(bool bStop);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAllEnemyForceStuck();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAllEnemyForceFallenAbyss();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAlbumPhotoLoadTest(bool bLoad);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugActorVisibleFromActorList(bool Visible);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugActorCollisionEnableFromActorList(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAccompanyPawnDispManualOverlap(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAccompanyPawnDispDebugInfo(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAccompanyPawnDispCollisionCheck(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAccompanyPawnDisableLandSpawn(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAccompanyPawnDisableAutoMove(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AllDebugAlwaysEnableLookAt(int32 mode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AllDebugAlwaysEnableIK(int32 mode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AllAIDebugDisplay();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AIDebugDisplay(FName PawnName);
    
};

