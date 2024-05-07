#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresUIMissionGageColorType.h"
#include "TresUIMissionGageTable.generated.h"

class USwfMovie;

USTRUCT(BlueprintType)
struct FTresUIMissionGageTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TAssetPtr<USwfMovie> IconAsset;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 InitialValue;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresUIMissionGageColorType GageColorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GageTextLocSpaceKey;
    
    TRESGAME_API FTresUIMissionGageTable();
};

