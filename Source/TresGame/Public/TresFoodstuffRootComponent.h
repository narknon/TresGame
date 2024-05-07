#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "TresFoodstuffRootComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresFoodstuffRootComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UTresFoodstuffRootComponent();
};

