#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "TresWaypointRenderingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresWaypointRenderingComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UTresWaypointRenderingComponent();
};

