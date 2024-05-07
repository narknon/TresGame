#pragma once
#include "CoreMinimal.h"
#include "TresCardActionParam_e_ex307.generated.h"

USTRUCT(BlueprintType)
struct FTresCardActionParam_e_ex307 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveScale;
    
    TRESGAME_API FTresCardActionParam_e_ex307();
};

