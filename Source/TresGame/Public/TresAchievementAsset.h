#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresAchievementAsset.generated.h"

UCLASS(Blueprintable)
class TRESGAME_API UTresAchievementAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> DataArray;
    
    UTresAchievementAsset();
};

