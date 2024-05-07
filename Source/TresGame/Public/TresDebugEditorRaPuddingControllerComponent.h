#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "TresDebugEditorRaPuddingControllerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresDebugEditorRaPuddingControllerComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UTresDebugEditorRaPuddingControllerComponent();
};

