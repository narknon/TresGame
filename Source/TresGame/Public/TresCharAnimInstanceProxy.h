#pragma once
#include "CoreMinimal.h"
#include "TresAnimInstanceProxy.h"
#include "TresCharAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct TRESGAME_API FTresCharAnimInstanceProxy : public FTresAnimInstanceProxy {
    GENERATED_BODY()
public:
    FTresCharAnimInstanceProxy();
};

