#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "TresDebugEditorRaButterflyActorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresDebugEditorRaButterflyActorComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UTresDebugEditorRaButterflyActorComponent();
};

