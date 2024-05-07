#pragma once
#include "CoreMinimal.h"
#include "ETresDetectCollShape2D.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresDetectCollShapeAssetUnit2D.generated.h"

USTRUCT(BlueprintType)
struct FTresDetectCollShapeAssetUnit2D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresDetectCollShape2D::Type> ShapeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RelativeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RelativeRocation;
    
    TRESGAME_API FTresDetectCollShapeAssetUnit2D();
};

