#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipEnemyGroupWipeOutData.h"
#include "ETresGumiShipBattleMissionRankType.h"
#include "TresGumiShipActorCompoBase.h"
#include "ETresGumiShipBattleMissionEndFactorType.h"
#include "ETresGumiShipBonusType.h"
#include "TresGumiShipMissionMgr.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipMissionMgr : public UTresGumiShipActorCompoBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresGumiShipTeardownBattleMission, const ETresGumiShipBattleMissionEndFactorType, eEndType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipStartResult);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipStartDrawHUDWhenStartBattle);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipStartBattleMission);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresGumiShipRankConfirmedResult, const TEnumAsByte<ETresGumiShipBattleMissionRankType>, eRank);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTresGumiShipGetBattleBonus, TEnumAsByte<ETresGumiShipBonusType>, eType, int32, dPoint);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresGumiShipFinishedBattleMission, const ETresGumiShipBattleMissionEndFactorType, eEndType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipDefeatedBossToHaveKey);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTresGumiShipChangeRank, const TEnumAsByte<ETresGumiShipBattleMissionRankType>, eOldRank, const TEnumAsByte<ETresGumiShipBattleMissionRankType>, eNewRank);
    
    UTresGumiShipMissionMgr();
protected:
    UFUNCTION(BlueprintCallable)
    void _OnTargetWipeOut();
    
    UFUNCTION(BlueprintCallable)
    void _OnResultRetry();
    
    UFUNCTION(BlueprintCallable)
    void _OnRankConfirmedResult();
    
    UFUNCTION(BlueprintCallable)
    void _OnOneEnemyGroupWipeOut(const FTresGumiShipEnemyGroupWipeOutData& rEnemyGroupWipeOutData);
    
    UFUNCTION(BlueprintCallable)
    void _OnFinishedResultConfirm(int32 dSelectedIndex);
    
    UFUNCTION(BlueprintCallable)
    void _OnFinishedResult();
    
    UFUNCTION(BlueprintCallable)
    void _OnFinishedRailSlide();
    
    UFUNCTION(BlueprintCallable)
    void _OnFinishedInfomation();
    
    UFUNCTION(BlueprintCallable)
    void _OnDefeated(const AActor* pTarget);
    
    UFUNCTION(BlueprintCallable)
    void _OnChangeHpOfPlayer(const int32 dOldHp, const int32 dNewHp, const float fRatio);
    
    UFUNCTION(BlueprintCallable)
    void _OnCauseDamage(const AActor* pTarget, const float fDamage);
    
};

