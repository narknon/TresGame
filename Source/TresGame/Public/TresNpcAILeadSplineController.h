#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresNpcAILeadSplineController.generated.h"

class AActor;
class ATresNpcAILeadSplineActor;
class ATresNpcPawnBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresNpcAILeadSplineController : public UActorComponent {
    GENERATED_BODY()
public:
    UTresNpcAILeadSplineController();
    UFUNCTION(BlueprintCallable)
    void SetLeadSub(int32 InIndex, AActor* InLeader, ATresNpcAILeadSplineActor* InLeadSplineActor, FName InLeadID);
    
    UFUNCTION(BlueprintCallable)
    void SetLeadSplineActor(AActor* InLeadSplineActor, FName InLeadID, FName InCancelEventName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnLeadSubFinishFunc(FName ID);
    
    UFUNCTION(BlueprintCallable)
    void OnLeadSubEndFunc(FName ID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeadSub() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeaderWaiting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasLeadSplineActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLeadSubOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresNpcAILeadSplineActor* GetLeadSplineActorGoal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresNpcAILeadSplineActor* GetLeadSplineActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresNpcPawnBase* GetLeadLeader() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetLeadID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCharaClosestLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetBaseWayPointRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetBaseWayPoint() const;
    
    UFUNCTION(BlueprintCallable)
    void Cancel();
    
};

