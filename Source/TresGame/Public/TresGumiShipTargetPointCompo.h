#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipSceneCompoBase.h"
#include "TresGumiShipTargetPointCompo.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipTargetPointCompo : public UTresGumiShipSceneCompoBase {
    GENERATED_BODY()
public:
    UTresGumiShipTargetPointCompo();
};

