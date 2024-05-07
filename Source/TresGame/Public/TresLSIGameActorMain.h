#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresLSIGameActorMain.generated.h"

UCLASS(Blueprintable)
class ATresLSIGameActorMain : public AActor {
    GENERATED_BODY()
public:
    ATresLSIGameActorMain(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLsiPause();
    
};

