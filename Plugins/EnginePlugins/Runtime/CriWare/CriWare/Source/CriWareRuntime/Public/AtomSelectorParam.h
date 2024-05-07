#pragma once
#include "CoreMinimal.h"
#include "AtomSelectorParam.generated.h"

USTRUCT(BlueprintType)
struct FAtomSelectorParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    FString Selector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    FString label;
    
    CRIWARERUNTIME_API FAtomSelectorParam();
};

