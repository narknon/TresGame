#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipPlayerPawnBase.h"
#include "TresGumiShipPlayerNotifyInterface.h"
#include "UObject/NoExportTypes.h"
#include "ETresGumiShipBattleMissionEndFactorType.h"
#include "ETresGumiShipBattleMissionRankType.h"
#include "Engine/LatentActionManager.h"
#include "TresGMInputResult.h"
#include "ETresGumiShipRailSlideType.h"
#include "TresGumiShipPlayer.generated.h"

class AActor;
class UTresGumiShipDirectSpeedCompo;
class USceneComponent;
class UTresGumiShipMultiLockonCompo;
class UTresGumiShipBoostDirectCompo;
class UTresGumiShipTargetPointCompo;
class UTresGumiShipRailSlideManager;
class UTresGumiShipPlayBonus;
class ATresGumiShipSpWeaponConnection;
class UTresGumiShipDefCollisionSetCompo;
class USphereComponent;
class UTresGumiShipPlayerParameterDataTableSet;
class UObject;
class ATresGumiShipPlayerControllerBase;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class ATresGumiShipPlayer : public ATresGumiShipPlayerPawnBase, public ITresGumiShipPlayerNotifyInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipPostSetup);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipPostReraise);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipPostCreateSpWeapon);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresGumiShipGetItem, int32, dItemId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipFinishedRailSlide);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTresGumiShipChangeSpPoint, const float, fOldPoint, const float, fNewPoint, const float, fRatio);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresGumiShipChangedLockonTarget, USceneComponent*, pTarget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTresGumiShipChangeBoostPoint, const float, fOldSeed, const float, fNewSpeed, const float, fRatio);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGumiShipChangeSpPoint m_OnChangeSpPointDispather;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGumiShipChangeBoostPoint m_OnChangeBoostPointDispather;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGumiShipChangedLockonTarget m_OnChangeLockonTargetDispather;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresGumiShipDirectSpeedCompo* m_pSpeedDirectCompo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresGumiShipBoostDirectCompo* m_pBoostDirectCompo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresGumiShipTargetPointCompo* m_pTargetCursorPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresGumiShipMultiLockonCompo* m_pLockonManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresGumiShipRailSlideManager* m_pRailSlideManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresGumiShipPlayBonus* m_pPlayBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TWeakObjectPtr<ATresGumiShipSpWeaponConnection> m_pSpWeaponConnection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresGumiShipDefCollisionSetCompo* m_pDefCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* m_pWarningCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* m_pLimitedCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fWarningAreaRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLimitedAreaRadius;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresGumiShipPlayerParameterDataTableSet* m_pParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_UseBaseParamRowName;
    
public:
    ATresGumiShipPlayer(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    static void WaitSetupPlayer(UObject* pWorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void RequestWorldSymbolStart(AActor* pWorldSymbolActor);
    
    UFUNCTION(BlueprintCallable)
    void RequestUseCameraForEnemyBattle(const float fInterpSec, const bool bIsTakeover);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRouteRailSliding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRailSliding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAutoPilotFromGimmick() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void GumiShip_ToggleDebug_SwitchEnableTrackingNoTimeLimit();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GumiShip_ToggleDebug_SwitchEnableTrackingDebugDraw();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GumiShip_ToggleDebug_DispPlayerParamInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GumiShip_ToggleDebug_DispPlayerInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GumiShip_ToggleDebug_ChangeMovementCompo(const FString& rCompoName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GumiShip_ToggleDebug_ChangeAccelCompo(const FString& rCompoName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GumiShip_Debug_SetSpWeaponNoCoolDownEnable(bool bIn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GumiShip_Debug_SetSpWeaponNoConsumePointEnable(bool bIn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GumiShip_Debug_SetOverrideParam(int32 dIndex, int32 dIn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GumiShip_Debug_SetInvincible(bool bIn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GumiShip_Debug_SetHpToOne();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GumiShip_Debug_SetForceBerserkMode(bool bIn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GumiShip_Debug_SetExplosion(bool bIn, float fSpeed, float fRot);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GumiShip_Debug_SetEnableOverrideParam(int32 dIndex, bool bIn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GumiShip_Debug_SetDontConsumeBoost(bool bIn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GumiShip_Debug_SetBerserkModeSuppression(bool bIn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GumiShip_Debug_SetBarrierHp(int32 dIn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GumiShip_Debug_RailSlide_SetCameraFOV(float fIn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GumiShip_Debug_RailSlide_SetCameraDegree(float fIn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GumiShip_Debug_RailSlide_SetCameraArmLength(float fIn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GumiShip_Debug_Lockon_SetDebugDraw(bool bIn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GumiShip_Debug_CreateTinyShip(bool bIsRight, int32 dKind, int32 dIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GumiShip_Debug_CreateSpWeapon(int32 dIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GumiShip_Debug_CreateGumiShip(int32 dKind, int32 dIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GumiShip_Debug_CleanAndSetWeapon(int32 dIndex);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Ability_SetToughnessUp(uint8 byNum);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Ability_SetStrikeUp(uint8 byNum);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Ability_SetSpeedUp(uint8 byNum);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Ability_SetSpecialUp(uint8 byNum);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Ability_SetSpecialConverter(uint8 byNum);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Ability_SetSpecialCharge(uint8 byNum);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Ability_SetShotUp(uint8 byNum);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Ability_SetShockAbsorber(uint8 byNum);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Ability_SetRollingPowerUp(uint8 byNum);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Ability_SetRollingExtend(uint8 byNum);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Ability_SetQuickStep(uint8 byNum);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Ability_SetPrizeBonusUp(uint8 byNum);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Ability_SetLaserUp(uint8 byNum);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Ability_SetHealUp(uint8 byNum);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Ability_SetFinalPower(uint8 byNum);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Ability_SetDrainShot(uint8 byNum);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Ability_SetCostConverter(uint8 byNum);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Ability_SetCharengeMode(uint8 byNum);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Ability_SetBorderLine(uint8 byNum);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Ability_SetBoostCharge(uint8 byNum);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Ability_SetAutoReraise(uint8 byNum);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Ability_SetAspirShot(uint8 byNum);
    
    UFUNCTION(BlueprintCallable)
    void EnableBoostEffect(bool bIn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTracking() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_SetLockAtTargetForRailSlide(AActor* pTarget, const float fInterpSec, const FVector vOffset);
    
    UFUNCTION(BlueprintCallable)
    void BP_Debug_SetLockAtTargetForRailSlide(AActor* pTarget, const float fInterpSec, const FVector vOffset);
    
private:
    UFUNCTION(BlueprintCallable)
    void _OnTeardownBattleMission(const ETresGumiShipBattleMissionEndFactorType eEndType);
    
    UFUNCTION(BlueprintCallable)
    void _OnStartBattleMission();
    
    UFUNCTION(BlueprintCallable)
    void _OnRefreshedBarrier(const int32 dIndex);
    
    UFUNCTION(BlueprintCallable)
    void _OnNeedRefrectionConfigSetting();
    
    UFUNCTION(BlueprintCallable)
    void _OnInputXButtonRP(const FTresGMInputResult& rResult, const ATresGumiShipPlayerControllerBase* pController);
    
    UFUNCTION(BlueprintCallable)
    void _OnInputSpWeaponButtonRP(const FTresGMInputResult& rResult, const ATresGumiShipPlayerControllerBase* pController);
    
    UFUNCTION(BlueprintCallable)
    void _OnInputSpButtonRP(const FTresGMInputResult& rResult, const ATresGumiShipPlayerControllerBase* pController);
    
    UFUNCTION(BlueprintCallable)
    void _OnInputR3ButtonRP(const FTresGMInputResult& rResult, const ATresGumiShipPlayerControllerBase* pController);
    
    UFUNCTION(BlueprintCallable)
    void _OnInputL3ButtonRP(const FTresGMInputResult& rResult, const ATresGumiShipPlayerControllerBase* pController);
    
    UFUNCTION(BlueprintCallable)
    void _OnInputCancelButtonRP(const FTresGMInputResult& rResult, const ATresGumiShipPlayerControllerBase* pController);
    
    UFUNCTION(BlueprintCallable)
    void _OnInputAutoHorizontalButtonRP(const FTresGMInputResult& rResult, const ATresGumiShipPlayerControllerBase* pController);
    
    UFUNCTION(BlueprintCallable)
    void _OnGraze(UPrimitiveComponent* pComponent, const FVector& rvGrazeLocation);
    
    UFUNCTION(BlueprintCallable)
    void _OnFinishedRailSlide(const ETresGumiShipRailSlideType eRailSlideType);
    
    UFUNCTION(BlueprintCallable)
    void _OnFinishedBattleMission(const ETresGumiShipBattleMissionEndFactorType eEndType);
    
    UFUNCTION(BlueprintCallable)
    void _OnChangeSpPoint(const float fOld, const float fNow, const float fRatio);
    
    UFUNCTION()
    void _OnChangeRankForBattleMission(const TEnumAsByte<ETresGumiShipBattleMissionRankType> eOldRank, const TEnumAsByte<ETresGumiShipBattleMissionRankType> eNewRank);
    
    UFUNCTION(BlueprintCallable)
    void _OnChangeLockonTargetForDist(USceneComponent* pNewTarget);
    
    UFUNCTION(BlueprintCallable)
    void _OnChangedLockonTarget(USceneComponent* pNewTarget);
    
    UFUNCTION(BlueprintCallable)
    void _OnBrokenBarrier(const int32 dIndex);
    
    
    // Fix for true pure virtual functions not being implemented
};

