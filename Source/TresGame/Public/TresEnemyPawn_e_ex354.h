#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyXIIILPawnBase.h"
#include "EX354_FieldChangeRemote.h"
#include "EX354_RemoteEventID.h"
#include "TresEnemyPawn_e_ex354.generated.h"

class USoundBase;
class ATresEnemyPawn_e_ex313;
class AActor;
class UParticleSystem;
class UParticleSystemComponent;
class ATresProjectile_e_ex354_WarpArm;
class ATresProjectileBase;
class ATresEnemyXIIILAManager;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex354 : public ATresEnemyXIIILPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bFlyMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAura;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresEnemyPawn_e_ex313* e_ex313Pawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresEnemyXIIILPawnBase* e_ex316Pawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_BattleAIPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_pro_PartnerDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_pro_TestPartnerDead;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fWarpAppearWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_BattleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_pro_BattleEndHitPointPer;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pro_ArrowRainSkyEffData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_ArrowRainSkyEff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresProjectileBase* m_pArrowRain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresProjectile_e_ex354_WarpArm* m_WarpArmLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresProjectile_e_ex354_WarpArm* m_WarpArmRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_pro_MagazineNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_pro_ClusterShotMagazine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_pro_ArrowRainMagazine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_ClusterShotVoiceDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_ClusterShotCoopVoiceDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_RunShotVoiceDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_ArtemaRunShotVoiceDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_ArtemaSpinShotStartVoiceDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_ArtemaSpinShotSingleVoiceDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_FieldChangeVoiceDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_RevengeVoiceDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_VoiceSocketName;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresEnemyXIIILAManager> m_pro_XIIILAManagerClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresEnemyXIIILAManager* m_XIIILAManager;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_QuickBattleCommandStartHitCountArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bNoUseLastElementOfQuickBattleCommandStartHitCountArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCountOnlyStandardFieldQuickBattleCommandStartHitCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bResetQuickBattleCommandStartHitCountOnChangeField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_iQuickBattleCommandMaxHitIgnoreTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_QuickBattleProjectileClassForSora;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* m_pQuickBattleBGMAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDebugDispQuickBattleHitCount;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresProjectileBase* m_QuickBattleProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEX354_FieldChangeRemote> m_FieldChangeRemoteArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFieldChangeMinTime_Doughnut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFieldChangeMinTime_Narrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDebugDispFieldChangeTime;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FEX354_RemoteEventID m_RemoteEventIDArray[6];
    
public:
    ATresEnemyPawn_e_ex354(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetDebugDispFlag(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsZeroMagazine();
    
    UFUNCTION(BlueprintCallable)
    bool IsWarpShotMagazine();
    
    UFUNCTION(BlueprintCallable)
    bool IsReflectDamageShotMagazine();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQuickBattleEndWaiting() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsPartnerDead();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNowKeepBodyCollReaction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNowDestroyChargeShotOnDamage() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsNormalShotMagazine();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNoAppearOnRevengeWarp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHitOnCounterAttackWait() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFlyMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsField_Standard() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsField_Narrow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsField_Doughnut() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    bool IsDuringWalkCooldown();
    
    UFUNCTION(BlueprintCallable, Exec)
    bool IsDuringArrowRainCooldown();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDamageBodyReactionCoroutineFinished() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCounterAttackWait() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsClusterShotMagazine();
    
    UFUNCTION(BlueprintCallable)
    bool IsArrowRainMagazine();
    
    UFUNCTION(BlueprintCallable)
    void DebugSetDispQuickBattleHitCount(int32 inSet);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetDispFieldChangeTime(int32 inSet);
    
    UFUNCTION(BlueprintCallable)
    void DebugFinishDoughnutChangeTime();
    
    UFUNCTION(BlueprintCallable)
    void DebugFinishArtemaChangeTime();
    
    UFUNCTION(BlueprintCallable)
    void DebugCallFieldChangeRemote(int32 InNum);
    
    UFUNCTION(BlueprintCallable, Exec)
    bool CanUseArrowRain();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanChangeField_Narrow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanChangeField_Doughnut() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    static void BP_OnReceiveRemoteEvent(FName inEventName);
    
};

