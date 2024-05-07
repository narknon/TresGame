#pragma once
#include "CoreMinimal.h"
#include "TresPlayerControllerLowerBase.h"
#include "InputCoreTypes.h"
#include "Engine/EngineBaseTypes.h"
#include "ETresCommandKind.h"
#include "ETresDlcChallengeCode.h"
#include "ETresShootFlowKind.h"
#include "TresPlayerControllerBase.generated.h"

class UTresLockonTargetComponent;
class ATresCameraMultiLock;
class ATresCameraPreview;
class ATresCameraShootFlow;
class ATresProjectileBase;
class UTresUICommandInfoBase;
class AActor;
class UPrimitiveComponent;
class ATresCharPawnBase;

UCLASS(Blueprintable)
class ATresPlayerControllerBase : public ATresPlayerControllerLowerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDebugProjectileInfo: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDebugShowPlayerCollisionCheck: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDebugPlayerNoCheckAutoRun: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDebugPlayerNoCheckUnWalkable: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDebugShowPlayerClimbingCheck: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDebugShowPlayerWallRunCheck: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDebugShowPlayerSlopeSlideCheck: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDebugShowPlayerHoppingCheck: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDebugShowPlayerLockon: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDebugShowPlayerExternalExposure: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresCameraShootFlow* m_CameraShootFlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresCameraPreview* m_CameraPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUICommandInfoBase* m_pUICommandInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCameraMultiLock* m_CameraMultiLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTresLockonTargetComponent* m_pAthleticFlowStartPointDispComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_pAttackCameraTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresProjectileBase*> m_AvaterProjList;
    
public:
    ATresPlayerControllerBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SimulateKeypress(FKey Key, TEnumAsByte<EInputEvent> EventType, float AmountDepressed, bool bGamepad);
    
    UFUNCTION(Exec)
    void NotifyStartActionCommand(TEnumAsByte<ETresCommandKind> inCommand);
    
    UFUNCTION(Exec)
    void NotifySetSpecialCommand(TEnumAsByte<ETresCommandKind> inCommand);
    
    UFUNCTION(BlueprintCallable, Exec)
    void NotifySetDlcChallengeCodeEnable(ETresDlcChallengeCode InCode);
    
    UFUNCTION(BlueprintCallable, Exec)
    bool NotifySetDiveAttackCommand(UTresLockonTargetComponent* InTarget);
    
    UFUNCTION(Exec)
    void NotifySetActionCommand(TEnumAsByte<ETresCommandKind> inCommand, float inTimer, UTresUICommandInfoBase* pUICommandInfo);
    
    UFUNCTION(Exec)
    void NotifyResetSpecialCommand(TEnumAsByte<ETresCommandKind> inCommand);
    
    UFUNCTION(Exec)
    void NotifyEndActionCommand(TEnumAsByte<ETresCommandKind> inCommand);
    
    UFUNCTION(Exec)
    void NotifyDeleteActionCommand(TEnumAsByte<ETresCommandKind> inCommand);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugWallKick(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUseMP0();
    
    UFUNCTION(Exec)
    void DebugTestMode(uint32 InMode);
    
    UFUNCTION(Exec)
    void DebugSuperSlideLv(uint32 InLv);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSuperJump(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugStartPlayerWarpMode();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSituationTimerInfinity(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowStyleInfo(bool bDispEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowProjectileInfo(bool bDispEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowPlayerWallRunCheck();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowPlayerSlopeSlideCheck();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowPlayerLockon();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowPlayerHUD(bool bDispEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowPlayerHoppingCheck();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowPlayerExternalExposure();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowPlayerCollisionCheck();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowPlayerClimbingCheck();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowPlayerAnimationInfo(bool bDispEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowNetPlayerHUD(bool bDispEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowFriend(bool disp);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetWarpDelayCamera(float InRate, float InLimit);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetWandanyanParam(float InSpeed, float InCamAimZ, float InCamDist, float InCamPitch, float InCamAngle);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetWandanyanJumpRate(float InLv1, float InLv2, float InLv3, float InLv4, float InLv5);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetWallTurnWithoutAnim(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetWallRunParam(float fSideAngle, float fDownAngle, float fSideMoveSpeed);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetStyleTimeLimit(float InTime);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetStylePointAddWithoutHit(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetStylePoint(int32 inSP, int32 inAttrP, int32 inAttrF, int32 inAttrB, int32 inAttrT, int32 inAttrW, int32 inAttrA, int32 inAttrD, int32 inAttrN);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetStyleFix(int32 inStyle);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetStyleCommandEntryTime(float InTime);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetStyleChangeChargeEffect(int32 InLevel);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetSprintMode(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetSonicAttackMode(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetSmallJumpGravityScale(float fGravityScale);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetShootLockSlowRate(float InRate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetShootFlow(int32 inShootFlowId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetShooterModeInputType(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetShieldAutoGrowup(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetRiseAttackParam(float fThreshold, float fRate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetPlayerSlopeSlideParam(float MaxSpeed, float AccTime, float MinSpeed);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetPlayerPos(float InX, float InY, float InZ);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetPlayerExternalExposureColor(uint8 InR, uint8 InG, uint8 InB, uint8 InA);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetIgnoreShootLockModeTimer(bool InIgnore);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetHPPer(int32 HP);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetHP(int32 HP);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetHopRotateMode(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetGlobalGameSpeed(float InSpeed, float InInterpTime);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetFriendHP(int32 Index, int32 HP);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetFriend(int32 inIdx, FName inNpcName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetFocusPoint(int32 InFP);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetFinishAutoPopup(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugSetFinish(uint32 InId, bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetEnableDiveFall(bool bEnable, float inPitch, float inDist, float inAngle, float InOffset);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetDiveFallStartHeight(float fHeight);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetDiveFallMovement(float inRotateScale, float InGravityScale, float inMoveSpeed);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetDarkScreenRate(float InRate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetDamageEndChancelTime(float InTime);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetComboPlus(int32 InGround, int32 InAir);
    
    UFUNCTION(Exec)
    void DebugSetAttraction(uint32 InId, bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetAttackMoveLimit(float fDist);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetAttackFirstAirMoveRate(float fRate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetAttackCollType(FName InName);
    
    UFUNCTION(Exec)
    void DebugSetAthleticVersion(uint32 InVersion, float inRootSpeed);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetAthleticSlideParam(float InTime, float InSpeed, float inKickAnim);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetAthleticLockonRange(float InRange);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetAthleticLockonLimit(float InLimit);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetAthleticDelayCamera(float InRate, float InLimit, int32 InMode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetAthleticAttackParam(float inSlowRate, float inSlowTime);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetAllFriendFinish(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugSetActionCommand(TEnumAsByte<ETresCommandKind> inCommand, float inTimer);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSet2ndJumpParam(float fEnableMinVZ);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugRiskDodge(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugRevengeImpact(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugRevengeEx(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugRevengeDive(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugResetPlayerLocation();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugProjectileLimitOff();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPoleSwing(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPoleSpin(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPlayerWarpToTaggedPlayerStart(FName InTag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPlayerWallRunStartOff(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPlayerPad(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPlayerNoCheckUnWalkable();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPlayerNoCheckAutoRun();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPlayerForceL1Cancel(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPlayerControllerStop();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMpCharge(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugModePlayerClimbing();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugInfinityJump(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugHighJump(uint32 InLv);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGuardCounter(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGuard(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGlide(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugFriendsWarp();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugFpCharge(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugFPAutoRecovery();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugForceUseSpawnPointVolume(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnemyTurn(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnableWaterMagic(bool InEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnableShootLockonMax();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnablePlayerWallRun(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnablePlayerNoHpDamage(bool bNoHpDamage);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnablePlayerNoDamageResponse(bool bNoDamageResponse);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnablePlayerLookAt(int32 InEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnablePlayerInvincible(bool bInvincible);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnablePlayerIK(int32 InEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnablePlayerControl(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnablePlayerClimbing(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnableHighQualityScreenShot(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnableFestivalDanceCmd(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnableCommandMenu(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugDodgeCounter(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugDodge(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugDispPrizeRange(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugDispNearSpawnPoint(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugDisableGameOver(bool bDisable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugDisableDarkScreen(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugDeleteFriendAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugDamageBlowTest();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugCreateRollerCoaster();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugCreateFriend();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugComboMaster(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugChargeBerserkTest(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugChangeWearform(int32 InForm);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugChangeNextWeaponForm();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugChangeNextProjectile();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugChangeFriendPadControl(int32 Index, bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugChangeDecoParts(int32 InPartIdx, int32 InItemID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugBlowCounter(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAirRecoveryInputChange(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAirRecovery(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAirDodge(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddStylePoint(float inAddPoint, int32 inAttr);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddFriendPoint(float inAddPoint);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Debug2ndJump(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void BP_TresCinematicDelayRunWalkStop(float fDelayRunStop, float fDelayWalkStop, float fForceYawRate, float fForceYaw);
    
    UFUNCTION(BlueprintCallable)
    void BP_TresCinematicDelayRunStop(float fDelayRunStop, bool bForceYaw, float fForceYaw);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetShootLockonLimit(float InShootLockonLimit);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetRestrictWeapon(bool bRestrict);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetRestrictStyle(bool bRestrict);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetRestrictSituation(bool bRestrict);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetRestrictShootLock(bool bRestrict);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetRestrictRun(bool bRestrict);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetRestrictMagic(bool bRestrict);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetRestrictLink(bool bRestrict);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetRestrictJump(bool bRestrict);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetRestrictItem(bool bRestrict);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetRestrictGuard(bool bRestrict);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetRestrictFriend(bool bRestrict);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetRestrictDiveFall(bool bRestrict);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetRestrictAttraction(bool bRestrict);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetRestrictAttack(bool bRestrict);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetRestrictAntiForm(bool bRestrict);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetNearTargetSingle(bool InEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetManualLockonLimit(float InManualLockonLimit, float InManualLockonOff);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetLookAtActor(AActor* inActor);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetForceEnemyHpKeep(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetDisableRestrictVolumeDetect(bool InDisable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetDisableManualLockon(bool InDisable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetDisableGimmickLockon(bool InDisable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetDisableAutoLockon(bool InDisable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetAbilityWallRun(bool InEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetAbilityStyleChange(bool InEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetAbilityShortCutMenu(bool InEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetAbilityShootFlow(bool InEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetAbilityMagic(bool InEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetAbilityFreeFlow(bool InEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetAbilityAttractionFlow(bool InEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetAbilityAttack(bool InEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetAbilityAthleticFlow(bool InEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetAbilityAirSlide(bool InEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetAbility2ndJump(bool InEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_ResetShootLockonLimit();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_ResetManualLockonLimit();
    
    UFUNCTION(BlueprintCallable)
    void BP_ResetLookAtActor();
    
    UFUNCTION(BlueprintCallable, Exec)
    bool BP_NotifyStartSpecialAntiForm();
    
    UFUNCTION(BlueprintCallable)
    void BP_NotifySetSpecialCommand(TEnumAsByte<ETresCommandKind> inCommand);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_NotifySetSpecialAction(bool inSw);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_NotifySetFloatingMode(bool IsOn, bool IsSpecial);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_NotifySetAntiFormCommand();
    
    UFUNCTION(BlueprintCallable)
    void BP_NotifySetActionCommand1(TEnumAsByte<ETresCommandKind> inCommand, float inTimer, AActor* inActor, UPrimitiveComponent* InComponent);
    
    UFUNCTION(BlueprintCallable)
    void BP_NotifyResetSpecialCommand();
    
    UFUNCTION(BlueprintCallable)
    void BP_NotifyRegisterEnemyGaugeTarget(ATresCharPawnBase* InTarget);
    
    UFUNCTION(BlueprintCallable)
    void BP_NotifyPauseSituationTimer(bool IsOn);
    
    UFUNCTION(BlueprintCallable)
    void BP_NotifyPauseActionCommandTimer(bool IsOn);
    
    UFUNCTION(BlueprintCallable)
    void BP_NotifyDeleteActionCommand(TEnumAsByte<ETresCommandKind> inCommand);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Exec)
    bool BP_IsNowNoSpeak() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Exec)
    bool BP_IsNowAntiForm() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Exec)
    bool BP_IsDisableManualLockon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Exec)
    bool BP_IsDisableAutoLockon() const;
    
    UFUNCTION(BlueprintCallable)
    AActor* BP_GetShootFlowTargetActor_AvatarRush();
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<ETresShootFlowKind> BP_GetPlayShootFlow();
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<ETresCommandKind> BP_GetPlayActionCommand();
    
    UFUNCTION(BlueprintCallable)
    void BP_EndManualLockon();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_DebugAbilityEnable(bool InEnable);
    
};

