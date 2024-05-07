#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipLockonCompo.h"
#include "TresGumiShipMultiLockonCompo.generated.h"

class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipMultiLockonCompo : public UTresGumiShipLockonCompo {
    GENERATED_BODY()
public:
    UTresGumiShipMultiLockonCompo();
private:
    UFUNCTION(BlueprintCallable)
    void _OnChangeLockonTargetForDist(USceneComponent* pTarget);
    
};

