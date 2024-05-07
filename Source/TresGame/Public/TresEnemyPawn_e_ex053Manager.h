#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "Ex053SpawnData.h"
#include "Ex053SpawnGroup.h"
#include "TresEnemyPawn_e_ex053Manager.generated.h"

class ATresEnemyPawnBase;
class ATresEnemyPawn_e_ex053;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex053Manager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEx053SpawnData> m_SpawnDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEx053SpawnGroup> m_SpawnGroupArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresEnemyPawnBase> m_SpawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DieTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DieScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_FreezeDieScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CheckPlayerDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SpawnAcotrDisableTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_JumpPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_JumpGravityScale;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ATresEnemyPawn_e_ex053*> m_pFzPuddings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bFirstSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_SpawnRequestNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_SpawnWaitTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_SpawnWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bSpawnModeCluster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bNotifyStop;
    
public:
    ATresEnemyPawn_e_ex053Manager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SpawnFzPuddingRequest(const int32 SpawnNum, const float SpawnWaitTime, const bool bSpawnModeCluster);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnAcotrDisableTime(const float Time);
    
    UFUNCTION(BlueprintCallable)
    void SetScore(const int32 Score, const bool bAll);
    
    UFUNCTION(BlueprintCallable)
    void SetJumpPower(const float Power, const bool bAll);
    
    UFUNCTION(BlueprintCallable)
    void SetJumpGravityScale(const float Scale, const bool bAll);
    
    UFUNCTION(BlueprintCallable)
    void SetFreezeDieScore(const int32 Score, const bool bAll);
    
    UFUNCTION(BlueprintCallable)
    void SetDieTime(const int32 Time);
    
    UFUNCTION(BlueprintCallable)
    void SetDieScore(const int32 Score, const bool bAll);
    
    UFUNCTION(BlueprintCallable)
    void NotifyStop();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSpawnRequestNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSpawnAcotrDisableTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetJumpPower() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetJumpGravityScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFzPuddingNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFreezeDieScore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDieTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDieScore() const;
    
};

