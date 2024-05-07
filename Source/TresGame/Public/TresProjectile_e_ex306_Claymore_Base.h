#pragma once
#include "CoreMinimal.h"
#include "WaveOneCollInfo_e_ex310.h"
#include "TresProjectileBase.h"
#include "UObject/NoExportTypes.h"
#include "WaveSet_e_ex310.h"
#include "Engine/EngineTypes.h"
#include "TresProjectile_e_ex306_Claymore_Base.generated.h"

class USceneComponent;
class UTresProjectileMeshComponent_e_ex310;

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex306_Claymore_Base : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MyRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresProjectileMeshComponent_e_ex310* MyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_NoDestroyOnImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveSet_e_ex310 m_WaveSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveOneCollInfo_e_ex310 m_WaveOneColl;
    
    ATresProjectile_e_ex306_Claymore_Base(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SpawnWave_OneColl(int32 InParam, bool bOwnerLoc, FVector inOwnerLoc, bool bOwnerYaw, float inOwnerYaw);
    
    UFUNCTION(BlueprintCallable)
    void SpawnWave(int32 InParam, bool bOwnerLoc, FVector inOwnerLoc, bool bOwnerYaw, float inOwnerYaw);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShutDownCalled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGroundHit(FHitResult inHit) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BpNotifyExplode(const FHitResult& Impact);
    
    UFUNCTION(BlueprintCallable)
    void BpDoDisableAttackColl();
    
};

