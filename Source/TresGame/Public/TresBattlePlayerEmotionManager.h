#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ETresPlayerSpecificActionID.h"
#include "Components/ActorComponent.h"
#include "TresEmotionPoint.h"
#include "ETresBPEM_BattleType.h"
#include "ETresCommandKind.h"
#include "TresTakeDamageLogInfo.h"
#include "TresStartAttackLogInfo.h"
#include "TresStateLogInfo.h"
#include "TresRecoveryHpMpFpLogInfo.h"
#include "TresAttackHitInvincibleCharLogInfo.h"
#include "ETresEnemyXIIIPhaseType.h"
#include "TresBattlePlayerEmotionManager.generated.h"

class UCurveFloat;
class UCurveVector;
class UUserWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresBattlePlayerEmotionManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ComboScore_Max_Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ComboScore_Max_Enemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ComboScore_PlayerHit_PlayerIncrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ComboScore_PlayerHit_EnemyDecrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ComboScore_EnemyHit_EnemyIncrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ComboScore_EnemyHit_PlayerDecrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ComboScore_PlayerMiss_PlayerDecrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ComboScore_EnemyMiss_EnemyDecrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ComboScore_EnemyGuarded_EnemyDecrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AttackHitLogLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AttackMissLogLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SpecialActionLogLifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CurrentEPUpdateTimeSpan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_NextEPUpdateTimeSpan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_GoalEPUpdateTimeSpan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CurrentHope_HitIncreaseBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CurrentHope_HitIncreaseBase_Magic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CurrentHope_HitIncreaseBase_NoReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_CurrentHope_kLatestHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_CurrentHope_kComboScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_CurrentHope_kDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_CurrentHope_DecreaseHitlessTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CurrentHope_MissDecreaseBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_CurrentHope_kLatestMiss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_CurrentHope_EnemyHPIncrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CurrentFear_HitIncreaseBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CurrentFear_HitIncreaseBase_NoReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_CurrentFear_kLatestHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_CurrentFear_kComboScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_CurrentFear_kDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_CurrentFear_DecreaseHitlessTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CurrentFear_MissDecreaseBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_CurrentFear_kLatestMiss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CurrentFear_GuardedDecreaseBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_CurrentFear_kLatestGuarded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_CurrentFear_DyingTimeIncreaseBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CurrentFear_kMPCharging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CurrentFear_kUsableRecoveryItem_Potion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CurrentFear_kUsableRecoveryItem_HiPotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CurrentFear_kUsableRecoveryItem_MegaPotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CurrentFear_kUsableRecoveryItem_Ether;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CurrentFear_kUsableRecoveryItem_HiEther;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CurrentFear_kUsableRecoveryItem_MegaEther;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CurrentFear_kUsableRecoveryItem_Elixir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CurrentFear_kUsableRecoveryItem_LastElixir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CurrentFear_kUsableRecoveryItem_FocusSupplement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CurrentFear_kUsableRecoveryItem_HiFocusSupplement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CurrentFear_kUsableRecoveryItem_AllCure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CurrentFear_kUsableRecoveryItem_MognetMedal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* m_GoalEP_kShaking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_NextEP_Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresEmotionPoint m_FutureEP_RangeMin_BeginBattle_XIIIA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresEmotionPoint m_FutureEP_RangeMax_BeginBattle_XIIIA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresEmotionPoint m_FutureEP_RangeMin_EndBattle_XIIIA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresEmotionPoint m_FutureEP_RangeMax_EndBattle_XIIIA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> m_ProgressionRate_Phase_XIIIA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_ProgressionRate_EnemyHP_XIIIA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_FutureEP_RangeInterpolation_XIIIA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresEmotionPoint m_FutureEP_RangeMin_BeginBattle_XIIIB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresEmotionPoint m_FutureEP_RangeMax_BeginBattle_XIIIB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresEmotionPoint m_FutureEP_RangeMin_EndBattle_XIIIB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresEmotionPoint m_FutureEP_RangeMax_EndBattle_XIIIB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> m_ProgressionRate_Phase_XIIIB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_ProgressionRate_EnemyHP_XIIIB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_FutureEP_RangeInterpolation_XIIIB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresEmotionPoint m_FutureEP_RangeMin_BeginBattle_XIIIE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresEmotionPoint m_FutureEP_RangeMax_BeginBattle_XIIIE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresEmotionPoint m_FutureEP_RangeMin_EndBattle_XIIIE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresEmotionPoint m_FutureEP_RangeMax_EndBattle_XIIIE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> m_ProgressionRate_Phase_XIIIE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_ProgressionRate_EnemyHP_XIIIE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_FutureEP_RangeInterpolation_XIIIE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> m_DebugEmotionMapWidgetClass;
    
    UTresBattlePlayerEmotionManager();
    UFUNCTION(BlueprintCallable)
    void SetUseDynamicRangeToFutureEP(bool InbUse);
    
    UFUNCTION(BlueprintCallable)
    void SetRangeFutureEP(FTresEmotionPoint InMin, FTresEmotionPoint InMax);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabledDebugTelemetryLog(bool InbEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabledDebugStatusLog(bool InbEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabledDebugEPLog(bool InbEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabledDebugEmotionMap(bool InbEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabledDebugActionLogOnViewport(bool InbEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabledDebugActionLogOnOutputLog(bool InbEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleType(ETresBPEM_BattleType InBattleType);
    
    UFUNCTION(BlueprintCallable)
    void RespondToOnStartBossDefeatEffect();
    
    UFUNCTION()
    void RespondToOnPlayerSpecificAction(TEnumAsByte<ETresPlayerSpecificActionID> InActionID, int32 InSubID);
    
    UFUNCTION()
    void RespondToOnPlayerEndCommandAction(TEnumAsByte<ETresCommandKind> InCommandKind);
    
    UFUNCTION()
    void RespondToOnPlayerBeginCommandAction(TEnumAsByte<ETresCommandKind> InCommandKind);
    
    UFUNCTION(BlueprintCallable)
    void RespondToOnNotificationTakeDamageLogInfo(FTresTakeDamageLogInfo InLog);
    
    UFUNCTION(BlueprintCallable)
    void RespondToOnNotificationStartAttackLogInfo(FTresStartAttackLogInfo InLog);
    
    UFUNCTION(BlueprintCallable)
    void RespondToOnNotificationStartAIAttackLogInfo(FTresStateLogInfo InLog);
    
    UFUNCTION(BlueprintCallable)
    void RespondToOnNotificationRecoveryHpMpFpLogInfo(FTresRecoveryHpMpFpLogInfo InLog);
    
    UFUNCTION(BlueprintCallable)
    void RespondToOnNotificationDtorStateLogInfo(FTresStateLogInfo InLog);
    
    UFUNCTION(BlueprintCallable)
    void RespondToOnNotificationCtorStateLogInfo(FTresStateLogInfo InLog);
    
    UFUNCTION(BlueprintCallable)
    void RespondToOnNotificationAttackHitInvincibleCharLogInfo(FTresAttackHitInvincibleCharLogInfo InLog);
    
    UFUNCTION(BlueprintCallable)
    void RespondToOnChangeCinematicMode(bool InIsCinematicMode);
    
    UFUNCTION(BlueprintCallable)
    void RespondToOnChangeBattleMode(bool InIsBattleMode);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeXIIIPhase(ETresEnemyXIIIPhaseType InNewPhaseType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabledDebugTelemetryLog() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabledDebugStatusLog() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabledDebugEPLog() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabledDebugEmotionMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabledDebugActionLogOnViewport() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabledDebugActionLogOnOutputLog() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTresEmotionPoint GetRangeFutureEP_Min() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTresEmotionPoint GetRangeFutureEP_Max() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTresEmotionPoint GetNextEP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTresEmotionPoint GetGoalEP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTresEmotionPoint GetCurrentEP() const;
    
};

