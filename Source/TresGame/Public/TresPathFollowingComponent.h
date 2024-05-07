#pragma once
#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "TresPathFollowingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresPathFollowingComponent : public UPathFollowingComponent {
    GENERATED_BODY()
public:
    UTresPathFollowingComponent();
};

