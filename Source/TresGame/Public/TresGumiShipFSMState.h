#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresGumiShipStateArgs.h"
#include "TresGumiShipFSMState.generated.h"

class AActor;

UCLASS(Blueprintable)
class UTresGumiShipFSMState : public UObject {
    GENERATED_BODY()
public:
    UTresGumiShipFSMState();
    UFUNCTION(BlueprintCallable)
    void Setup(AActor* pUser, const int32 dStateID, const FName& StateName);
    
    UFUNCTION(BlueprintCallable)
    void SetStep(int32 dIn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTick(const float fDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFinishedState() const;
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    void IncrementStep();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStep() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetStateName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStateID() const;
    
    UFUNCTION(BlueprintCallable)
    void DecrementStep();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCancelState() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void _SetEnableCancelState(bool bIn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTresGumiShipStateArgs _GetArgs() const;
    
    UFUNCTION(BlueprintCallable)
    void _FinishState();
    
};

