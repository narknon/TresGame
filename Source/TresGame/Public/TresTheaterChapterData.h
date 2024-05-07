#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresUIDataVersion.h"
#include "TresTheaterChapterData.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FTresTheaterChapterData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ChapterNameNamespaceKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TAssetPtr<UTexture> IconAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresUIDataVersion Version;
    
    TRESGAME_API FTresTheaterChapterData();
};

