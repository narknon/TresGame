#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresBinaryResource.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UTresBinaryResource : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<uint8> DataArray;
    
    UTresBinaryResource();
};

