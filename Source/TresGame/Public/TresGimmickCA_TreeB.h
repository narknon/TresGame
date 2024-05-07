#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickCA_TreeBase.h"
#include "TresGimmickCA_TreeB.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresGimmickCA_TreeB : public ATresGimmickCA_TreeBase {
    GENERATED_BODY()
public:
    ATresGimmickCA_TreeB(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_RequestStartDropSeed(FTransform SpawnLocation);
    
};

