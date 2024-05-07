#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresUICharaID.h"
#include "TresUILoadingScreenDataDefinitions.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FTresUILoadingScreenDataDefinitions : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresUICharaID FromChara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CharaTextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TAssetPtr<UTexture> ImageAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CommentTextID;
    
    TRESGAME_API FTresUILoadingScreenDataDefinitions();
};

