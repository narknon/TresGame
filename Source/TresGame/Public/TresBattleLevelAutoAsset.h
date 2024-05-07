#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresBattleLevelAutoData.h"
#include "TresBattleLevelAutoAsset.generated.h"

UCLASS(Blueprintable)
class TRESGAME_API UTresBattleLevelAutoAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresBattleLevelAutoData> DataArray;
    
    UTresBattleLevelAutoAsset();
};

