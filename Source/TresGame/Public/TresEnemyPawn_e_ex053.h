#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex053.generated.h"

class UParticleSystem;
class UTresEnemyState_e_ex053_Jump;
class UParticleSystemComponent;
class ATresRailSlideActor;
class ATresDecalMeshSplineActor;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex053 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pDiveEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_DiveEffectAttachName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresEnemyState_e_ex053_Jump> m_JumpState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bShoted;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<TWeakObjectPtr<ATresRailSlideActor>> m_RailActorList;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<TWeakObjectPtr<ATresDecalMeshSplineActor>> m_SplineActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_DieTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_Score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_DieScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_FreezeDieScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_JumpPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_JumpGravityScale;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<UParticleSystemComponent> m_pDiveEffectCom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bNotifyStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bDiveGround;
    
public:
    ATresEnemyPawn_e_ex053(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void KillEvent(const bool IsFreeze);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFreezeDieScore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDieScore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DamageEvent(const bool IsDie);
    
};

