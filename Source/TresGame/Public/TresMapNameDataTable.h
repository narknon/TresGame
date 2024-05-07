#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresMapNameDataTable.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FTresMapNameDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TAssetPtr<UTexture> IconAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NameKey;
    
    TRESGAME_API FTresMapNameDataTable();
};

