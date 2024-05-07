#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipFSMPlayerMovementStateBase.h"
#include "TresGumiShipFSMPlayerMovementState.generated.h"

class AActor;

UCLASS(Blueprintable)
class UTresGumiShipFSMPlayerMovementState : public UTresGumiShipFSMPlayerMovementStateBase {
    GENERATED_BODY()
public:
    UTresGumiShipFSMPlayerMovementState();
protected:
    UFUNCTION(BlueprintCallable)
    void RequestRailSlideInterpoletion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRailSliding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetRailSlideActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool _IsTrackingRailSliding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool _IsRouteRailSliding() const;
    
};

