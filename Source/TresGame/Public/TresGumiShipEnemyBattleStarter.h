#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipGimmickActorBase.h"
#include "ETresGumiShipBattleMissionRankType.h"
#include "TresGumiShipEnemyGroupWipeOutData.h"
#include "ETresGumiShipEnemyBattleFinishType.h"
#include "TresGumiShipRailShootingBattleSetData.h"
#include "ETresGumiShipEnemyBattleStartType.h"
#include "ETresGumiShipEnemyTerritoryID.h"
#include "ETresGumiShipBattleMissionEndFactorType.h"
#include "Engine/EngineTypes.h"
#include "TresGumiShipEnemyBattleStarter.generated.h"

class ATriggerBase;
class AActor;
class ATresGumiShipEnemyTerritoryPoint;
class UObject;
class ATresGumiShipBattleArenaMeshActor;
class ATresGumiShipFieldBattleEnemyGenerator;
class ATresGumiShipExternalEnemyGenerator;
class ATresGumiShipActualRailSlideArrangement;
class ATresGumiShipRailShootingBattleStarterGenerator;
class ATresGumiShipWorldSymbolActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class ATresGumiShipEnemyBattleStarter : public ATresGumiShipGimmickActorBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyGroupWipeOutSignature, const FTresGumiShipEnemyGroupWipeOutData&, EnemyGroupWipeOutData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyBattleRankConfirmedSignature, const TEnumAsByte<ETresGumiShipBattleMissionRankType>, eRank);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyBattleFinishSignature, ETresGumiShipEnemyBattleFinishType, BattleFinishType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAllEnemyGroupWipeOutSignature);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyBattleFinishSignature OnEnemyBattleFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyBattleRankConfirmedSignature OnEnemyBattleRankConfirmed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyGroupWipeOutSignature OnOneEnemyGroupWipeOut;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAllEnemyGroupWipeOutSignature OnAllEnemyGroupWipeOut;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGumiShipEnemyBattleStartType m_eBattleStartType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGumiShipEnemyTerritoryID m_eEnemyTerritoryID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresGumiShipEnemyTerritoryPoint* m_pBoundEnemyTerritoryPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresGumiShipBattleArenaMeshActor* m_pBattleArenaMeshActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDisableStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATriggerBase* m_pFieldBattleTriggerVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresGumiShipFieldBattleEnemyGenerator*> m_FieldBattleEnemyGeneratorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_BossEnemyAppearRemoteEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fBossEnemyAppearEventFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsHideBossEnemyOnFieldEncounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATriggerBase* m_pRevengeMatchBossBattleStartTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresGumiShipExternalEnemyGenerator*> m_BossEnemyUsingEnemyGeneratorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresGumiShipActualRailSlideArrangement* m_pRailShootingRouteSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATriggerBase* m_pRailShootingBattleStartTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresGumiShipRailShootingBattleStarterGenerator* m_pRailShootingBattleStarterGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresGumiShipRailShootingBattleSetData> m_RailShootingBattleSetDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATriggerBase* m_pEnemyDisappearTriggerAtSplineEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bHideGuideMarkerFirstBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bForbiddenRetryFirstClear;
    
public:
    ATresGumiShipEnemyBattleStarter(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresGumiShipActualRailSlideArrangement* GetRailShootingRouteSpline() const;
    
    UFUNCTION(BlueprintCallable)
    void Enable();
    
    UFUNCTION(BlueprintCallable)
    void Disable();
    
private:
    UFUNCTION(BlueprintCallable)
    void _SpawnHiddenSettingBossEnemy(bool bHiddenBoss);
    
    UFUNCTION(BlueprintCallable)
    void _SetRevengeMatchBossFlag(bool bIsRevengeMatchBoss);
    
    UFUNCTION(BlueprintCallable)
    bool _SetLockWorldSymbolActorByBoss(ATresGumiShipWorldSymbolActor* LockTargetWorldSymbol);
    
    UFUNCTION()
    void _OnRailShootingBattleResultRankConfirmed(const TEnumAsByte<ETresGumiShipBattleMissionRankType> eRank);
    
    UFUNCTION(BlueprintCallable)
    void _OnRailShootingBattleResultEnter();
    
    UFUNCTION(BlueprintCallable)
    void _OnRailShootingBattleMissionClear(const ETresGumiShipBattleMissionEndFactorType eEndType);
    
    UFUNCTION(BlueprintCallable)
    void _OnRailShootingBattleFinalize(const ETresGumiShipBattleMissionEndFactorType eEndType);
    
    UFUNCTION(BlueprintCallable)
    void _OnLeaveFieldBattleTriggerVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void _OnLeaveBattleStartTriggerVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void _OnEnterFieldBattleTriggerVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void _OnEnterEnemyDisappearTriggerVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void _OnEnterBattleStartTriggerVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void _OnEnemyGroupWipeOut(const FTresGumiShipEnemyGroupWipeOutData& rEnemyGroupWipeOutData);
    
    UFUNCTION(BlueprintCallable)
    static bool _HideCurrentBattleArenaMeshActor(const UObject* WorldContextObject, bool bHide);
    
};

