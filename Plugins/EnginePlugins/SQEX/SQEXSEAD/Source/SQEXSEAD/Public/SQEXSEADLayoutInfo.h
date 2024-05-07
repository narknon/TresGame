#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEADLayoutType.h"
#include "UObject/NoExportTypes.h"
#include "SQEXSEADLayoutInfo.generated.h"

USTRUCT(BlueprintType)
struct FSQEXSEADLayoutInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ESQEXSEADLayoutType::Type> LayoutType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    float InnerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    float OuterRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    float OcclusionLPF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    float OcclusionVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<FVector> LayoutPointLocations;
    
    SQEXSEAD_API FSQEXSEADLayoutInfo();
};

