#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EMerObstacleType.h"
#include "MercunaObstacleComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MERCUNA_API UMercunaObstacleComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    EMerObstacleType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    float Radius;
    
    UMercunaObstacleComponent();
};

