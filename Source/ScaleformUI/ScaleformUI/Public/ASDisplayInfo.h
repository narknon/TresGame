#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ASDisplayInfo.generated.h"

USTRUCT(BlueprintType)
struct SCALEFORMUI_API FASDisplayInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float XRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float YRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Visible;
    
    FASDisplayInfo();
};

