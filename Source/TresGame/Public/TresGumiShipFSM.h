#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresGumiShipStateArgs.h"
#include "TresGumiShipActorCompoBase.h"
#include "TresGumiShipFSM.generated.h"

class UTresGumiShipFSMState;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipFSM : public UTresGumiShipActorCompoBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTresGumiShipFSMState*> m_States;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTresGumiShipFSMState*> m_StateStack;
    
public:
    UTresGumiShipFSM();
    UFUNCTION(BlueprintCallable)
    void RegisterState(const int32 dStateID, const FName& rstrStateName, const TSubclassOf<UTresGumiShipFSMState>& rStateClass);
    
    UFUNCTION(BlueprintCallable)
    void PushState(const int32 dStateID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFinishedCurrentState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentStateName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentStateID() const;
    
    UFUNCTION(BlueprintCallable)
    bool ChangeStateWithArgs(const int32 dStateID, const FTresGumiShipStateArgs& rArgs, const bool bForce);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeState(const int32 dStateID, const bool bForce);
    
};

