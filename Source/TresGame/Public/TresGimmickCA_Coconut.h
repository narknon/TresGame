#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresGimmickCA_Coconut.generated.h"

UCLASS(Blueprintable, Config=Game)
class ATresGimmickCA_Coconut : public AActor {
    GENERATED_BODY()
public:
    ATresGimmickCA_Coconut(const FObjectInitializer& ObjectInitializer);
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckEnableSpawnPrize(const AActor* OtherActor) const;
    
};

