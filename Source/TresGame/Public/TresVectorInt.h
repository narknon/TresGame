#pragma once
#include "CoreMinimal.h"
#include "TresVectorInt.generated.h"

USTRUCT(BlueprintType)
struct FTresVectorInt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Z;
    
    TRESGAME_API FTresVectorInt();
};

