#pragma once
#include "CoreMinimal.h"
#include "TresSkeletalMeshComponent.h"
#include "TresDecoPartsComponent.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresDecoPartsComponent : public UTresSkeletalMeshComponent {
    GENERATED_BODY()
public:
    UTresDecoPartsComponent();
};

