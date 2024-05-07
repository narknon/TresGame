#pragma once
#include "CoreMinimal.h"
#include "GCReference.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FGCReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UObject* Object;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 RefCount;
    
    SCALEFORMUI_API FGCReference();
};

