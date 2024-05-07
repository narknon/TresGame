#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "TresDebugEditorRaFollowActorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresDebugEditorRaFollowActorComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UTresDebugEditorRaFollowActorComponent();
};

