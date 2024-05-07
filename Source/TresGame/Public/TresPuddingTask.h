#pragma once
#include "CoreMinimal.h"
#include "TresTaskBase.h"
#include "ETresPuddingResultRank.h"
#include "ETresPuddingTaskType.h"
#include "ETresUIGradeTextValue.h"
#include "TresPuddingTask.generated.h"

UCLASS(Blueprintable)
class UTresPuddingTask : public UTresTaskBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_GameTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_GameWarningTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_GameAlertTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_LimitScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_RankAScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_RankBScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresPuddingTaskType m_TaskType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bForceFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bStopGameTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_RecordScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Step;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bInGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresPuddingResultRank m_ResultRank;
    
public:
    UTresPuddingTask();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateScoreWidget(const int32 Score, const ETresUIGradeTextValue grade);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetScore(const int32 Score, const ETresUIGradeTextValue grade);
    
    UFUNCTION(BlueprintCallable)
    void SaveResult(int32 Score, const bool bClearRankA, const bool bClearRankB, const bool bClearRankC);
    
protected:
    UFUNCTION(BlueprintCallable)
    void NextStep();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInGame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisableGameFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETresPuddingResultRank GetResultRank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETresPuddingTaskType GetPuddingTaskType() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceFinishGame();
    
    UFUNCTION(BlueprintCallable)
    void CheckTrophy();
    
    UFUNCTION(BlueprintCallable)
    void AddScore(const int32 Score, const ETresUIGradeTextValue grade);
    
};

