#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TresAIController.h"
#include "TresAIController_BT.generated.h"

UCLASS(Blueprintable)
class ATresAIController_BT : public ATresAIController {
    GENERATED_BODY()
public:
    ATresAIController_BT(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    bool SetAttackPermissionTicket(FGameplayTag RequiredAttackGroup, bool bCheckOnly);
    
    UFUNCTION(BlueprintCallable)
    bool SetAttackPermission(FGameplayTag RequiredAttackGroup);
    
    UFUNCTION(BlueprintCallable)
    void ResetAttackPermissionTicket();
    
    UFUNCTION(BlueprintCallable)
    void ResetAttackPermission();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAttackPermissionTicket();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAttackPermission();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeSinceAIStarted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetCurrentAttackPermissionTicket();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetCurrentAttackPermission();
    
};

