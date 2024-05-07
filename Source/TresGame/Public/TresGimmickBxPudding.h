#pragma once
#include "CoreMinimal.h"
#include "TresGimmickLauncher.h"
#include "ETresBxPuddingType.h"
#include "Engine/EngineTypes.h"
#include "TresGimmickBxPudding.generated.h"

class UParticleSystemComponent;
class UTresAtkCollComponent;
class ATresCharPawnBase;
class UTresDebugArrowComponent;
class USphereComponent;
class AActor;
class ASQEX_SplineActor;
class ATresGimmickBxPuddingManager;
class UTresSplineMoverComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class ATresGimmickBxPudding : public ATresGimmickLauncher {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresAtkCollComponent* m_pEatAttackColl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* m_pEntryTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_pAreaJumpEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_NormalAnimIdleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_CannibalAnimIdleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_CannibalAnimStartName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AnimMoveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AtkCollOnLen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AnimNormalLaunchName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AnimSpecialLaunchName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TWeakObjectPtr<AActor> m_wpAreaJumpTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AreaJumpAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AreaJumpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DisableChangeFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresBxPuddingType m_FirstPuddingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TWeakObjectPtr<ASQEX_SplineActor> m_wpSplineActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_AreaJumpScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CannibalTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CannibalTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_EatAttachName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LandAnimDelayTimeForAreaJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ETresBxPuddingType m_BxPuddingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bAttackCollision;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ATresCharPawnBase> m_wpHitPawn;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ATresGimmickBxPuddingManager> m_wpPuddingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bNotifyStop;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<UTresSplineMoverComponent> m_wpSplineMover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresDebugArrowComponent* m_pDebugArrowComponent;
    
public:
    ATresGimmickBxPudding(const FObjectInitializer& ObjectInitializer);
private:
    UFUNCTION(BlueprintCallable)
    void SetMoveSpeed(const float Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveLoop(const bool bLoop);
    
    UFUNCTION(BlueprintCallable)
    void SetLaunchHeight(const float Height);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableMove(const bool bEnable, const bool bLoop, const float Speed);
    
    UFUNCTION(BlueprintCallable)
    void OnEntryEndOverlap(UPrimitiveComponent* pOverlappedComp, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnEntryBeginOverlap(UPrimitiveComponent* pOverlappedComp, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void NextBxPuddingType();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNormalBxPudding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCannibalBxPudding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAreaJumpBxPudding() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMoveSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLaunchHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActiveScore() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EatPawn(ATresCharPawnBase* pPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangedBxPuddingType();
    
public:
    UFUNCTION(BlueprintCallable)
    bool ChangeBxPuddingType(const ETresBxPuddingType Type);
    
};

