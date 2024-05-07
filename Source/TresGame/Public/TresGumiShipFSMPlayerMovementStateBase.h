#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipFSMPlayerStateBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipFSMPlayerMovementStateBase.generated.h"

UCLASS(Blueprintable)
class UTresGumiShipFSMPlayerMovementStateBase : public UTresGumiShipFSMPlayerStateBase {
    GENERATED_BODY()
public:
    UTresGumiShipFSMPlayerMovementStateBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator _GetPlayerRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator _GetPlayerRelativeRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector _GetPlayerRelativeLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector _GetPlayerLocation() const;
    
    UFUNCTION(BlueprintCallable)
    void _EnableRotateModel(bool bIn);
    
    UFUNCTION(BlueprintCallable)
    void _AddWorldDeltaMovementInput(const FVector& vWorldMovement);
    
    UFUNCTION(BlueprintCallable)
    void _AddLocalDeltaMovementInput(const FVector& vLocalMovement);
    
};

