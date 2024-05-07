#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresEwEnvRotatorSwitch.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class ATresEwEnvRotatorSwitch : public ATresGimmickActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MyRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RemoteEventName;
    
    ATresEwEnvRotatorSwitch(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetMoving(bool bMoving);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoving();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_SetMoving(bool bMoving);
    
};

