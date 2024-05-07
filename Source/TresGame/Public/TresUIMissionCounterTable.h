#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresUIMissionCounterTable.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FTresUIMissionCounterTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TAssetPtr<UTexture> IconAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CounterTextLocNameSpaceKey;
    
    TRESGAME_API FTresUIMissionCounterTable();
};

