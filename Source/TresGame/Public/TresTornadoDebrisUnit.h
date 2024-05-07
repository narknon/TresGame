#pragma once
#include "CoreMinimal.h"
#include "ETresTornadoDebrisStateName.h"
#include "TresTornadoDebrisTransformInfo.h"
#include "TresTornadoDebrisUnit.generated.h"

USTRUCT(BlueprintType)
struct FTresTornadoDebrisUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresTornadoDebrisStateName> StateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresTornadoDebrisTransformInfo> DebrisArray;
    
    TRESGAME_API FTresTornadoDebrisUnit();
};

