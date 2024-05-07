#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyXIIILBPawnBase.h"
#include "TresAction_e_ex356_Interface.h"
#include "ETresDamageKind.h"
#include "TresTimeGaugeParam_e_ex356.h"
#include "Engine/EngineTypes.h"
#include "TresDamageInfo.h"
#include "UObject/NoExportTypes.h"
#include "ETresStateID.h"
#include "ETresBigDealRemoteEvent_e_ex356.h"
#include "TresEnemyPawn_e_ex356.generated.h"

class ATresGimmick_e_ex356_Card;
class ATresBodyPushPawn_e_ex356;
class UEnvQuery;
class ATresProjectileBase;
class UParticleSystem;
class AActor;
class UObject;
class USoundBase;
class AController;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex356 : public ATresEnemyXIIILBPawnBase, public ITresAction_e_ex356_Interface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresGimmick_e_ex356_Card> m_CardClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_TargetExplodeProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_BigDealProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_BigDealEndProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_WarpInEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_SmokeEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_CardWallParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* m_StunDamageEndEnvQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* m_HideAndSeekFieldOutCardEnvQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresDamageKind> m_CardWallSuccessDamageKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CardWallSuccessDamagePowerScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_CardWallSuccessDamageParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresBodyPushPawn_e_ex356> m_BigDealBodyPushPawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_BigDealMapCenterParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_BigDealCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_BigDealStartTransitionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_BigDealEndTransitionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_BigDealLuxordSideCardAttackParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_BigDealLuxordSideCardAttackProjectileClass;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FTresTimeGaugeParam_e_ex356 m_TimeGaugeParam[2];
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    float m_PlayerTimeGaugeDamageGameLevelRate[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bTimeGaugeDamageGameLevelRateCeil: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RevengeTimeGaugeDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FirstBigDealFailedTimeGaugeDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SecondBigDealFailedTimeGaugeDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LastBigDealFailedTimeGaugeDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FirstBigDealSuccesTimeGaugeHealValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SecondBigDealSuccesTimeGaugeHealValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LastBigDealSuccesTimeGaugeDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_HideAndSeekSuccesVoiceDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_HideAndSeekFailedVoiceDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_HideAndSeekExplodeCardAttackStartVoiceDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_CardWallFailedVoiceDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_FirstBigDealSuccesVoiceDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_SecondBigDealSuccesVoiceDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_LastBigDealSuccesVoiceDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_FirstSecondBigDealFailedVoiceDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_BigDealAttackVoiceDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_BigDealShuffleVoiceDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_BigDealLuxordSideCardAttackVoiceDataList;
    
public:
    ATresEnemyPawn_e_ex356(const FObjectInitializer& ObjectInitializer);
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerTakeDamage(float DamagePoint, AController* InstigatedBy, const FHitResult& HitInfo, const FTresDamageInfo& DamageInfo, FVector ShotFromDirection, AActor* DamageCauser);
    
public:
    UFUNCTION()
    void OnCtorStateCallBack(TEnumAsByte<ETresStateID> inStateID);
    
    UFUNCTION(BlueprintCallable)
    bool IsStun() const;
    
    UFUNCTION(BlueprintCallable)
    float GetPlayerTimeGaugeRate() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetPlayerTimeGaugePer() const;
    
    UFUNCTION(BlueprintCallable)
    float GetPlayerTimeGauge() const;
    
    UFUNCTION(BlueprintCallable)
    float GetLuxordTimeGaugeRate() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetLuxordTimeGaugePer() const;
    
    UFUNCTION(BlueprintCallable)
    float GetLuxordTimeGauge() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSpawnHideAndSeekCard(int32 Num);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSpawnCard(int32 CardDesignType);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSpawnBigDealProjectile();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetTimeGaugeRatePlayer(float InRate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetTimeGaugeRateLuxord(float InRate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetEnableDrawLockonHighPriorityCard(int32 Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetEnableDrawHideAndSeekShuffleTargetLocation(int32 Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetEnableCardLockonHighPriorityInRange(int32 Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetDisableHideAndSeekCardSpawn(int32 Disable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetDisableBigDealCardRotation(int32 Disable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugBigDealLuxordCardDestroy();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugBigDealFailedEnd();
    
    UFUNCTION(BlueprintCallable)
    static void BigDealRemoteEventForLevelBP(UObject* WorldContextObject, TEnumAsByte<ETresBigDealRemoteEvent_e_ex356::Type> InRemoteType);
    
    UFUNCTION(BlueprintCallable)
    static void BigDealCinematicStartForLevelBP(UObject* WorldContextObject, int32 InRandomSeed, float InOneCardScaleUpTime, float InAllCardScaleUpTime);
    
    
    // Fix for true pure virtual functions not being implemented
};

