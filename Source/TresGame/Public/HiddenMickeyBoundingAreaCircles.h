#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HiddenMickeyBoundingAreaCircles.generated.h"

USTRUCT(BlueprintType)
struct FHiddenMickeyBoundingAreaCircles {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Size;
    
    TRESGAME_API FHiddenMickeyBoundingAreaCircles();
};

