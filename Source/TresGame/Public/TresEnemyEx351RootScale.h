#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx351RootScale.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyEx351RootScale {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TractionMaxScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TractionMinScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMovedCorrection: 1;
    
    TRESGAME_API FTresEnemyEx351RootScale();
};

