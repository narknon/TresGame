#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TresOceanGridMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresOceanGridMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UTresOceanGridMeshComponent();
};

