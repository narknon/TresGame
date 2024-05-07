#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresGrassBumpAttachObj.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, HideDropdown, NotPlaceable, Transient)
class UTresGrassBumpAttachObj : public UObject {
    GENERATED_BODY()
public:
    UTresGrassBumpAttachObj();
};

