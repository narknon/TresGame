#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Mercuna3DMovementProperties.generated.h"

USTRUCT(BlueprintType)
struct FMercuna3DMovementProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector MaxAccel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxAngSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxAngAccel;
    
    MERCUNA3DMOVEMENT_API FMercuna3DMovementProperties();
};

