#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresStoryEpisodeData.h"
#include "ETresUIDataVersion.h"
#include "TresStoryData.generated.h"

USTRUCT(BlueprintType)
struct FTresStoryData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WorldNameTextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresStoryEpisodeData> EpisodeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresUIDataVersion Version;
    
    TRESGAME_API FTresStoryData();
};

