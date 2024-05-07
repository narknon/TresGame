#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "UObject/NoExportTypes.h"
#include "WaveOneCollInfo_e_ex359.h"
#include "WaveSet_e_ex359.h"
#include "Engine/EngineTypes.h"
#include "TresProjectile_e_ex355_Claymore_Base.generated.h"

class USceneComponent;
class UTresProjectileMeshComponent_e_ex359;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex355_Claymore_Base : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MyRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresProjectileMeshComponent_e_ex359* MyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_NoDestroyOnImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveSet_e_ex359 m_WaveSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveOneCollInfo_e_ex359 m_WaveOneColl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIgnorWaveHitAfterProjectileHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_AuraEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_AuraEffectComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fParticleStartDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bParticleStartDelayTime;
    
    ATresProjectile_e_ex355_Claymore_Base(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SpawnWave_OneColl(int32 InParam, bool bOwnerLoc, FVector inOwnerLoc, bool bOwnerYaw, float inOwnerYaw);
    
    UFUNCTION(BlueprintCallable)
    void SpawnWave(int32 InParam, bool bOwnerLoc, FVector inOwnerLoc, bool bOwnerYaw, float inOwnerYaw);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShutDownCalled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsImpactCalled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGroundHit(FHitResult inHit) const;
    
    UFUNCTION(BlueprintCallable)
    void DoEnableAttackColl();
    
    UFUNCTION(BlueprintCallable)
    void BpPostWaveSpawned();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BpNotifyExplode(const FHitResult& Impact);
    
    UFUNCTION(BlueprintCallable)
    void BpDoDisableAttackColl();
    
};

