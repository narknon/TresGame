#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "TresDebugEditorStaticEQSItemRenderingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresDebugEditorStaticEQSItemRenderingComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UTresDebugEditorStaticEQSItemRenderingComponent();
};

