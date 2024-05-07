#pragma once
#include "CoreMinimal.h"
#include "TresUIGameFlagText.h"
#include "TresStoryEpisodeData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FTresStoryEpisodeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresUIGameFlagText EpisodeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TAssetPtr<UTexture2D> IconAsset;
    
    TRESGAME_API FTresStoryEpisodeData();
};

