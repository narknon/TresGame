#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyShip.h"
#include "ETresEnemyShipSubType.h"
#include "TresEnemyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "EnemyShipCoreData.h"
#include "EnemyShipDustEffectData.h"
#include "TresEnemyShipCoreSpawnData.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyShipFadeParameter.h"
#include "TresEnemyShipPawnBase.generated.h"

class UTresSkeletalMeshComponent;
class USQEX_ParticleAttachDataAsset;
class UTresMapMarkerComponent;
class UParticleSystemComponent;
class UTresCAShipComponent;
class UParticleSystem;

UCLASS(Blueprintable)
class ATresEnemyShipPawnBase : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresEnemyShipSubType m_ShipSubType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ShipSpeedDeclRateOnDestroyedMast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ShipCoreDamageWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ShipMastDamageWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDeadOnShipCoreAllDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ShipMastBlendMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SpankerCheckSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SpankerParamSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_KnockBackMovePower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_KnockBackRollPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_KnockBackYawPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SurfaceEffectDispSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SlowDownSpeedPerHitWindChaser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SlowDownTimerAfterWindChaser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MaxCannonNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_CannonCenterOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LifeTimeDustEffect;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 m_MaxNumDustEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDisableMastDamage: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bIsMastHpLimitOne: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSpawnedChildInheritGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FEnemyShipCoreData> m_CoreDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FEnemyShipDustEffectData> m_DustEffDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresMapMarkerComponent* m_MapMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresSkeletalMeshComponent* m_MastMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresSkeletalMeshComponent* m_DriverMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_SeaSurfaceParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresCAShipComponent* m_CAShipComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_ExpParticleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_CoreHitParticleAsset01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_CoreHitParticleAsset02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_CoreHitParticleAsset03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_MastHitParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_BodyHitParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_DustOnHitParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_CoreDestroyParticleAsset01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_CoreDestroyParticleAsset02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_CoreDestroyParticleAsset03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_CoreParticleAsset01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_CoreParticleAsset02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_CoreParticleAsset03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_CoreThonParticleFrontAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_CoreThonParticleSideAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_CoreThonParticleBackAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_SinkingExplosion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_EnterDestroyParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemyShipCoreSpawnData> m_CoreParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MinSpawnCoreNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MaxSpawnCoreNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SpawnCoreWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_CoreItemTypeSpawnWeight01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_CoreItemTypeSpawnWeight02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_CoreItemTypeSpawnWeight03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_CoreParamName01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_CoreParamName02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_CoreParamName03;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FFloatInterval m_StopAIOnMastBrakeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresEnemyShipFadeParameter m_FadeParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_BreakMastEff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_BreakMastGroupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_BreakMastNotifyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DisableForceFadeOutOnDeadNotifyID;
    
public:
    ATresEnemyShipPawnBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetShipAttackHitCollisionEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWarpOut() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSummonedShip() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSeaGodModeTidalWave() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSeaGodMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingBreakingMast() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFinishedOfWeaponAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDestroyedMast() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleModeCapturePlayerShip() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAliveShipCore(TEnumAsByte<ETresEnemyShip::Type> coreType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpankerMoveBlendRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetShipDamageCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetShipCoreNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMemberCountOfBlackShipSmall() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMemberCountOfBlackShipLarge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMastMoveBlendRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMastHP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool EnableSpawnBlackShipLarge() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_SetFadeIn(float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    void BP_ForceSetFadeOut();
    
};

