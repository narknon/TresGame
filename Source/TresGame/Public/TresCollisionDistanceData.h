#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCollisionDistanceData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FTresCollisionDistanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExclusionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Length;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> ClassArray;
    
    TRESGAME_API FTresCollisionDistanceData();
};

