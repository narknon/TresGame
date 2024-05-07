#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "TresStaticEQSItemComponentInterface.h"
#include "TresStaticEQSItemBoxComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresStaticEQSItemBoxComponent : public UBoxComponent, public ITresStaticEQSItemComponentInterface {
    GENERATED_BODY()
public:
    UTresStaticEQSItemBoxComponent();
    
    // Fix for true pure virtual functions not being implemented
};

