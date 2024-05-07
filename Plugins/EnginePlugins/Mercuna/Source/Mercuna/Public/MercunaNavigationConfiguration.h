#pragma once
#include "CoreMinimal.h"
#include "MercunaNavigationConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FMercunaNavigationConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    float MaxPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    float MaxRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    bool MoveOnlyInLookDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    bool StopAtDestination;
    
    MERCUNA_API FMercunaNavigationConfiguration();
};

