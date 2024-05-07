#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SQEX_SplineActor.h"
#include "ETresFNPC_AI_LeadMode.h"
#include "ETresFNPC_AI_LeadMoveType.h"
#include "ETresFNPC_AI_LeadFinish.h"
#include "ETresFNPC_AI_LeadGoalAction.h"
#include "ETresFNPC_AI_LeadGoalWaitRelease.h"
#include "ETresChrUniqueID.h"
#include "SQEX_SplineActor.h"
#include "UObject/NoExportTypes.h"
#include "TresNpcAILeadFinishBySplineActorDelegate.h"
#include "TresNpcAILeadSplineActor.generated.h"

class AActor;

UCLASS(Blueprintable)
class ATresNpcAILeadSplineActor : public ASQEX_SplineActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bStartPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresFNPC_AI_LeadMode> m_Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresFNPC_AI_LeadMoveType> m_MoveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_PredictionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LeadWaitEnterDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LeadRestartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor m_SplineColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bReleaseDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ReleaseDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresFNPC_AI_LeadFinish> m_FinishTiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresFNPC_AI_LeadGoalAction> m_GoalAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresFNPC_AI_LeadGoalWaitRelease> m_GoalWaitReleaseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bGoalWaitReleaseDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_GoalWaitReleaseDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bGoalWaitReleaseSplineTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_GoalWaitReleaseSplineTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bWaitEnterPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bChangeMoveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresFNPC_AI_LeadMoveType> m_ChangeMoveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bGoalTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_GoalTurnAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bGoalLookAtCharaID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresChrUniqueID m_GoalLookAtCharaID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TWeakObjectPtr<AActor> m_GoalLookAtActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_EQSItemOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_GoalDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> m_SubLeadOffsets;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresNpcAILeadFinishBySplineActor OnLeadFinish;
    
    ATresNpcAILeadSplineActor(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGoalActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLocationClosest(const FVector& InLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLastPointLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInputKeyClosestRatio(const FVector& InLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInputKeyClosest(const FVector& InLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDirectionClosest(const FVector& InLocation) const;
    
};

