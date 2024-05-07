#pragma once
#include "CoreMinimal.h"
#include "TresPawnOverlapComponentBase.h"
#include "TresOxygenPoolComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresOxygenPoolComponent : public UTresPawnOverlapComponentBase {
    GENERATED_BODY()
public:
    UTresOxygenPoolComponent();
};

