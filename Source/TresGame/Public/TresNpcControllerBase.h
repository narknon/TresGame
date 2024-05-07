#pragma once
#include "CoreMinimal.h"
#include "ETresFNpcAINpcMode.h"
#include "TresAIController_BT.h"
#include "TresNpcAILeadFinishDelegate.h"
#include "TresNpcAILeadEndDelegate.h"
#include "ETresChrUniqueID.h"
#include "ETresFNpcAIStyle_Battle.h"
#include "TresNpcControllerBase.generated.h"

class UTresNpcAILeadSplineController;
class AActor;
class UTresNpcAIBattleController;
class ATresNpcAILeadSplineActor;
class UBehaviorTree;
class UBlackboardComponent;

UCLASS(Blueprintable)
class ATresNpcControllerBase : public ATresAIController_BT {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresNpcAILeadFinish OnLeadFinish;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresNpcAILeadEnd OnLeadEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresChrUniqueID m_ChrUniqueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresNpcAILeadSplineController* m_LeadSplineController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresNpcAIBattleController* m_BattleController;
    
public:
    ATresNpcControllerBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void StartNpcMode(ETresFNpcAINpcMode InNpcMode, FName InCancelEventName);
    
    UFUNCTION(BlueprintCallable)
    void StartLeadSub(int32 InIndex, AActor* InLeader, ATresNpcAILeadSplineActor* InLeadSplineActor, FName InLeadID);
    
    UFUNCTION(BlueprintCallable)
    void StartLead(AActor* InLeadSplineActor, FName InLeadID, FName InCancelEventName);
    
    UFUNCTION(BlueprintCallable)
    void StartGimmickWaitAI();
    
    UFUNCTION(BlueprintCallable)
    void SetNpcModeWalk(bool bWalk);
    
    UFUNCTION(BlueprintCallable)
    bool RunBehaviorTree(UBehaviorTree* BTAsset);
    
    UFUNCTION(BlueprintCallable)
    void ResetCancelEventName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerBeingAttackedByEnemy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNpcModeWalk() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeadSub() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeadMoveTypeToRun() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeadLeaderWaiting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeadGoal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTresNpcAILeadSplineController* GetLeadSplineController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETresFNpcAINpcMode GetCurrentNpcModeType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBlackboardComponent* GetBlackboardComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTresNpcAIBattleController* GetBattleController() const;
    
    UFUNCTION(BlueprintCallable)
    void EndGimmickWaitAI();
    
    UFUNCTION(BlueprintCallable)
    void DEBUG_SetNpcAIStyle_Battle(ETresFNpcAIStyle_Battle InNpcAIStyle_Battle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanNpcMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanLeadWait() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanLead() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelNpcMode(bool bCallCancelEvent);
    
    UFUNCTION(BlueprintCallable)
    void CancelLead();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanbeSwirlUpDamageReactionByEnemy() const;
    
};

