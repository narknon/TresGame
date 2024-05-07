#pragma once
#include "CoreMinimal.h"
#include "TresReactorComponent.h"
#include "TresPhotoHologramReactorComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresPhotoHologramReactorComponent : public UTresReactorComponent {
    GENERATED_BODY()
public:
    UTresPhotoHologramReactorComponent();
};

