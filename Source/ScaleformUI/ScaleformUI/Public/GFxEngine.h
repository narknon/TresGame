#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GCReference.h"
#include "GFxEngine.generated.h"

UCLASS(MinimalAPI, Transient)
class UGFxEngine : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FGCReference> GCReferences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 RefCount;
    
    UGFxEngine();
};

