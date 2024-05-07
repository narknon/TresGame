#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresTsDancingPlantSensor.generated.h"

class APointLight;
class ATresTsDancingPlant;

UCLASS(Abstract, Blueprintable)
class ATresTsDancingPlantSensor : public ATresGimmickActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresTsDancingPlant*> PlantsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APointLight*> PlantLights;
    
    ATresTsDancingPlantSensor(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ChangeRate(float Rate);
    
};

