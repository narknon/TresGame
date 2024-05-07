#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/TriggerBox.h"
#include "TresNotifyInterface.h"
#include "TresMapMarkerInterface.h"
#include "TresTriggerBox.generated.h"

class UShapeComponent;
class UNavArea;
class UTresStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class ATresTriggerBox : public ATriggerBox, public ITresNotifyInterface, public ITresMapMarkerInterface {
    GENERATED_BODY()
public:
    ATresTriggerBox(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetAreaClass(UShapeComponent* Component, TSubclassOf<UNavArea> AreaClass);
    
    UFUNCTION(BlueprintCallable)
    FString GetWorldMainFlagNameString();
    
    UFUNCTION(BlueprintCallable)
    UTresStaticMeshComponent* GetDebugStaticMeshComponent();
    
    
    // Fix for true pure virtual functions not being implemented
};

