#pragma once
#include "CoreMinimal.h"
#include "TresE_dw405ChainActionParam.h"
#include "TresE_dw405ChainActionParams.generated.h"

USTRUCT(BlueprintType)
struct FTresE_dw405ChainActionParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresE_dw405ChainActionParam> Params;
    
    TRESGAME_API FTresE_dw405ChainActionParams();
};

