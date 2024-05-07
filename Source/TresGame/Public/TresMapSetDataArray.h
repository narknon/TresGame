#pragma once
#include "CoreMinimal.h"
#include "TresMapSetData.h"
#include "TresMapSetDataArray.generated.h"

USTRUCT(BlueprintType)
struct TRESGAME_API FTresMapSetDataArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresMapSetData> DataArray;
    
    FTresMapSetDataArray();
};

