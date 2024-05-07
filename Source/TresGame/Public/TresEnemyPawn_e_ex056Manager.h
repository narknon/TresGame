#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "TresEnemyPawn_e_ex056Manager.generated.h"

class ATresEnemyPawn_e_ex056;
class ASQEX_SplineActor;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex056Manager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresEnemyPawn_e_ex056> m_FlyPuddingClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresEnemyPawn_e_ex056> m_BonusPuddingClass;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<TWeakObjectPtr<ASQEX_SplineActor>> m_FlyPuddingSplines;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<TWeakObjectPtr<ASQEX_SplineActor>> m_BonusPuddingSplines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SpawnWaitTimeMax;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ATresEnemyPawn_e_ex056*> m_pFlyPuddings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ATresEnemyPawn_e_ex056*> m_pBonusPuddings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bNotifyStop;
    
public:
    ATresEnemyPawn_e_ex056Manager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    bool SpawnFlyPudding(const int32 Num, const int32 SplineIndex, const float MoveSpeed);
    
    UFUNCTION(BlueprintCallable)
    bool SpawnBonusPudding(const int32 SplineIndex, const float MoveSpeed, const float FluffyMoveSpeed, const float FluffyMoveRange, const float SelfKillDistance);
    
    UFUNCTION(BlueprintCallable)
    void NotifyStop();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFlyPuddingRequestNum(const int32 SplineIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFlyPuddingNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBonusPuddingNum() const;
    
    UFUNCTION(BlueprintCallable)
    void AddWave();
    
};

