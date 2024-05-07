#pragma once
#include "CoreMinimal.h"
#include "TresPawnOverlapComponentBase.h"
#include "TresSavePointRecoverComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresSavePointRecoverComponent : public UTresPawnOverlapComponentBase {
    GENERATED_BODY()
public:
    UTresSavePointRecoverComponent();
};

