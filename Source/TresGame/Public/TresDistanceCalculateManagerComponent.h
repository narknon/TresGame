#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TresDistanceCalculateManagerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresDistanceCalculateManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UTresDistanceCalculateManagerComponent();
};

