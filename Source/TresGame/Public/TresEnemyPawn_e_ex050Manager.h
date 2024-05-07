#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "TresEx050SpawnInfo.h"
#include "TresEx050PuddingNum.h"
#include "TresEnemyPawn_e_ex050Manager.generated.h"

class ATresEnemyPawn_e_ex050;
class ATresEnemyPawnBase;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex050Manager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CheckPlayerDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CheckFlyPuddingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEx050SpawnInfo> m_SmallPuddingSpawnInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEx050SpawnInfo> m_BigPuddingSpawnInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEx050SpawnInfo> m_FlyPuddingSpawnInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEx050SpawnInfo> m_ChasePuddingSpawnInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEx050SpawnInfo> m_SmallPuddingSpawnInfoForMode2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEx050SpawnInfo> m_BigPuddingSpawnInfoForMode2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEx050SpawnInfo> m_FlyPuddingSpawnInfoForMode2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEx050SpawnInfo> m_SmallPuddingSpawnInfoForMode3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEx050SpawnInfo> m_BigPuddingSpawnInfoForMode3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEx050SpawnInfo> m_FlyPuddingSpawnInfoForMode3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresEnemyPawnBase> m_SmallPuddingClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresEnemyPawnBase> m_BigPuddingClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresEnemyPawnBase> m_FlyPuddingClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresEnemyPawnBase> m_ChasePuddingClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SpawnPuddingNumLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresEx050PuddingNum m_SmallPuddingNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresEx050PuddingNum m_BigPuddingNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresEx050PuddingNum m_FlyPuddingNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresEx050PuddingNum m_ChasePuddingNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SpawnRequestSmallNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SpawnRequestBigNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SpawnRequestFlyNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SpawnRequestChaseNum;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ATresEnemyPawn_e_ex050*> m_pSmallPuddings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ATresEnemyPawn_e_ex050*> m_pBigPuddings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ATresEnemyPawn_e_ex050*> m_pFlyPuddings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ATresEnemyPawn_e_ex050*> m_pChasePuddings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_SpawnPuddingNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bNotifyStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_SpawnMode;
    
public:
    ATresEnemyPawn_e_ex050Manager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void UpdateSmallPuddingNum();
    
    UFUNCTION(BlueprintCallable)
    void UpdateFlyPuddingNum();
    
    UFUNCTION(BlueprintCallable)
    void UpdateChasePuddingNum();
    
    UFUNCTION(BlueprintCallable)
    void UpdateBigPuddingNum();
    
    UFUNCTION(BlueprintCallable)
    int32 SpawnSmallPudding(const int32 SmallPuddingNum);
    
    UFUNCTION(BlueprintCallable)
    int32 SpawnFlyPudding(const int32 FlyPuddingNum);
    
    UFUNCTION(BlueprintCallable)
    int32 SpawnChasePudding(const int32 ChasePuddingNum);
    
    UFUNCTION(BlueprintCallable)
    int32 SpawnBigPudding(const int32 BigPuddingNum);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableRailMove(const bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    void NotifyStop();
    
    UFUNCTION(BlueprintCallable)
    void ChangeSpawnPuddingMode(const int32 mode);
    
};

