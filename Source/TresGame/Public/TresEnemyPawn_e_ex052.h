#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "SpawnEx052Actors.h"
#include "TresEnemyPawn_e_ex052.generated.h"

class AActor;
class ATresCharPawnBase;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex052 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bBigPudding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpawnEx052Actors> m_SpawnActorsGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MoveSpeedMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MoveSpeedMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_EatContinueMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_EatContinueRate;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<TWeakObjectPtr<AActor>> m_TeleportActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_TeleportPlayerDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_ChildrenHaveMax;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ATresCharPawnBase> m_wpEatPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_EatStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bNotifyStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bCinematicIdleMotion;
    
public:
    ATresEnemyPawn_e_ex052(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetScore(const int32 Score);
    
    UFUNCTION(BlueprintCallable)
    void SetMinSpeed(const float MinSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxSpeed(const float MaxSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetEatContinueRate(const float Rate);
    
    UFUNCTION(BlueprintCallable)
    void SetEatContinueMax(const int32 Max);
    
    UFUNCTION(BlueprintCallable)
    void SetChildrenHaveMax(const int32 Max);
    
    UFUNCTION(BlueprintCallable)
    void NotifyStop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyStartEat(ATresCharPawnBase* pPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyEatPawn(ATresCharPawnBase* pPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void KillEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCanCreateChildren(const int32 CreateNum) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEatContinueRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEatContinueMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChildrenNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChildrenHaveMax() const;
    
    UFUNCTION(BlueprintCallable)
    void EatPawn(ATresCharPawnBase* pPawn);
    
    UFUNCTION(BlueprintCallable)
    int32 CreateChildren(const int32 CreateNum);
    
};

