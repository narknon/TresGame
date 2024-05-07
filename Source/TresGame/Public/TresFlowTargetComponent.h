#pragma once
#include "CoreMinimal.h"
#include "TresFlowComponentBase.h"
#include "TresFlowTargetComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresFlowTargetComponent : public UTresFlowComponentBase {
    GENERATED_BODY()
public:
    UTresFlowTargetComponent();
};

