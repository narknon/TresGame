#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ClusterInfo.generated.h"

USTRUCT(BlueprintType)
struct FClusterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VoxelSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox Bounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector VoxelNum;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    TMap<uint32, uint32> OverlapInfo;
    
    TRESGAME_API FClusterInfo();
};

