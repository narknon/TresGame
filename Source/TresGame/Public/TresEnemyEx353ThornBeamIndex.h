#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx353ThornBeamIndex.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyEx353ThornBeamIndex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ThornBeamIndex;
    
    TRESGAME_API FTresEnemyEx353ThornBeamIndex();
};

