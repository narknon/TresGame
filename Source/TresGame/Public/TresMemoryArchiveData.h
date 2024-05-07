#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresMemoryArchiveData.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FTresMemoryArchiveData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EpisodeNameTextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TAssetPtr<UTexture> IconAsset;
    
    TRESGAME_API FTresMemoryArchiveData();
};

