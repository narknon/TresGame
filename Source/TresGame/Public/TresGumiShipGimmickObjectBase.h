#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipGimmickActorBase.h"
#include "UObject/NoExportTypes.h"
#include "ETresGumiShipWeaponSequencePort.h"
#include "Engine/EngineTypes.h"
#include "TresGumiShipGimmickObjectBase.generated.h"

class UTresGumiShipBodyCollisionSetCompo;
class USceneComponent;
class UTresStaticMeshComponent;
class UTresGumiShipWeaponSequence;
class USQEX_ParticleAttachDataAsset;
class UPrimitiveComponent;
class AActor;

UCLASS(Abstract, Blueprintable)
class ATresGumiShipGimmickObjectBase : public ATresGumiShipGimmickActorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* m_pMeshBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* m_pStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresGumiShipBodyCollisionSetCompo* m_pBodyCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresGumiShipWeaponSequence* m_pWeaponSequence;
    
public:
    ATresGumiShipGimmickObjectBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetVisibility(const bool bIn);
    
    UFUNCTION(BlueprintCallable)
    void SetMeshFadeRate(float fFadeRate, bool bCheckVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetInvincible(const bool bIn);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectAttach(const int32 dGloup);
    
    UFUNCTION(BlueprintCallable)
    void SetEffect(USQEX_ParticleAttachDataAsset* pAttachData, int32 dGroupID, bool bUseDesignatedData);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyCollisionEnable(const bool bIn, const bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseWeaponTrigger(const TEnumAsByte<ETresGumiShipWeaponSequencePort> ePort);
    
    UFUNCTION(BlueprintCallable)
    void PullWeaponTrigger(const TEnumAsByte<ETresGumiShipWeaponSequencePort> ePort, const bool bManual);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInvincible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void _ReceiveTakeDamage(const AActor* pDamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void _ReceiveHitSomething(UPrimitiveComponent* pHitComponent, AActor* pHitActor, const FHitResult& rHitInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void _ReceiveDead();
    
    UFUNCTION(BlueprintCallable)
    void _OnRootHit(UPrimitiveComponent* pHitComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, FVector vNormalImpulse, const FHitResult& rHit);
    
    UFUNCTION(BlueprintCallable)
    void _OnBodyHit(UPrimitiveComponent* pHitComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, FVector vNormalImpulse, const FHitResult& rHit);
    
    UFUNCTION(BlueprintCallable)
    void _InitializeHP(const int32 dMaxHp);
    
};

