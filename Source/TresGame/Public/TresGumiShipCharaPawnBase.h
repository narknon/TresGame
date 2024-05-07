#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipPawnBase.h"
#include "TresAnimInterface.h"
#include "UObject/NoExportTypes.h"
#include "ETresGumiShipBadStateType.h"
#include "Engine/EngineTypes.h"
#include "ETresGumiShipReactionType.h"
#include "TresGumiShipCharaPawnBase.generated.h"

class AActor;
class UTresGumiShipAtkCollisionSetCompo;
class UTresSkeletalMeshComponent;
class UTresGumiShipBodyCollisionSetCompo;
class USceneComponent;
class UTresGumiShipWeaponSequence;
class UTresEffectAttachComponent;
class UTresInterpGroup;
class UTresInterpGroupInst;
class UPrimitiveComponent;

UCLASS(Abstract, Blueprintable)
class TRESGAME_API ATresGumiShipCharaPawnBase : public ATresGumiShipPawnBase, public ITresAnimInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresGumiShipDefeated, const AActor*, pTarget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipDead);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTresGumiShipChangeHp, const int32, dOldHp, const int32, dNewHp, const float, fRatio);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTresGumiShipCauseDamage, const AActor*, pTarget, const float, fDamage);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGumiShipChangeHp m_OnChangeHpDispather;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* m_pCameraBasePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* m_pMeshBasePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresSkeletalMeshComponent* m_pSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresGumiShipBodyCollisionSetCompo* m_pBodyCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresGumiShipAtkCollisionSetCompo* m_pAtkComllision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresGumiShipWeaponSequence* m_pWeaponSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresEffectAttachComponent* m_pEffectAttach;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTresInterpGroup*> m_InterpGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTresInterpGroupInst*> m_InterpGroupInst;
    
    ATresGumiShipCharaPawnBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetVisibility(const bool bIn);
    
    UFUNCTION(BlueprintCallable)
    void SetMeshFadeRate(float fFadeRate, bool bCheckVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetInvincible(const bool bIn);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableReaction(bool bIn);
    
    UFUNCTION(BlueprintCallable)
    int32 SetEffectGroupID(int32 GroupID);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyCollisionEnable(const bool bIn, const bool bForce);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInvincible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCinematicMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHitResult GetLastHitResult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHPRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHPMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BP_IsAnimEnd(FName SlotName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BP_GetAnimCurrentTime(FName SlotName) const;
    
    UFUNCTION(BlueprintCallable)
    void BP_AnimStop(float fBlendOut, FName SlotName);
    
    UFUNCTION(BlueprintCallable)
    float BP_AnimPlay(FName AnimName, bool bIsLoop);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void _ReceiveTakeReaction(const ETresGumiShipReactionType eReactionType, const FVector& rvImpactNormal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void _ReceiveTakeDamage(const AActor* pDamageCauser, const UPrimitiveComponent* pHitComponent, const float fDamagePoint);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void _ReceiveTakeBadState(const ETresGumiShipBadStateType eBadStateType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void _ReceivePreTakeDamage(const AActor* pDamageCauser, const UPrimitiveComponent* pHitComponent, const float fDamagePoint);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void _ReceivePreDead();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void _ReceiveDead();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void _ReceiveChangeHp(const int32 dOldHp, const int32 dNewHp, const float fRatio);
    
private:
    UFUNCTION(BlueprintCallable)
    void _OnHitComponent(UPrimitiveComponent* pHitComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, FVector vNormalImpulse, const FHitResult& rHit);
    
    UFUNCTION(BlueprintCallable)
    void _OnBeginOverlapComponent(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 dOtherBodyIndex, bool bFromSweep, const FHitResult& rSweepResult);
    
    
    // Fix for true pure virtual functions not being implemented
};

