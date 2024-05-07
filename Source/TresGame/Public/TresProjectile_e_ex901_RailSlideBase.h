#pragma once
#include "CoreMinimal.h"
#include "TresProjectileStaticMeshBase.h"
#include "BX901_RailSlideProjectileInfo.h"
#include "BX901_RailSlideProjDropInfo.h"
#include "UObject/NoExportTypes.h"
#include "TresProjectile_e_ex901_RailSlideBase.generated.h"

class UTresBodyCollComponent;
class UParticleSystem;
class UParticleSystemComponent;
class UTresCharMovementComponent;
class AActor;

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex901_RailSlideBase : public ATresProjectileStaticMeshBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBX901_RailSlideProjectileInfo m_RailSlideProjInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_HitPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBX901_RailSlideProjDropInfo m_DropInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_FireParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_FireParticleComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_ExplodeParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_ExplodeParticleComp;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresCharMovementComponent* MyCharMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresBodyCollComponent* MyBodyColl;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_HomingTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRelativeVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vCurrentOffsetVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEndHoming;
    
public:
    ATresProjectile_e_ex901_RailSlideBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void RefreshAtkColl();
    
};

