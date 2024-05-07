#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "TresGumiShipCompoNotifyInterface.h"
#include "TresGumiShipSceneCompoBase.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipSceneCompoBase : public USceneComponent, public ITresGumiShipCompoNotifyInterface {
    GENERATED_BODY()
public:
    UTresGumiShipSceneCompoBase();
    
    // Fix for true pure virtual functions not being implemented
};

