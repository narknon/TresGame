#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleBombInterferedParam.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleBombInterferedParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInterfereUnits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceWithInterferedUnitOnSimulate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInterfereUnitsFloat;
    
    TRESGAME_API FTresWinniePuzzleBombInterferedParam();
};

