#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TresWinnieActorComponentBase.generated.h"

UCLASS(Abstract, Blueprintable, NotPlaceable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresWinnieActorComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
    UTresWinnieActorComponentBase();
};

