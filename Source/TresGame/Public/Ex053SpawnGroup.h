#pragma once
#include "CoreMinimal.h"
#include "Ex053SpawnGroup.generated.h"

USTRUCT(BlueprintType)
struct FEx053SpawnGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SpawnDataIndexArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCluster;
    
    TRESGAME_API FEx053SpawnGroup();
};

