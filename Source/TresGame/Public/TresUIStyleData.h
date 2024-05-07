#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresCommandKind.h"
#include "TresUIStyleData.generated.h"

class USwfMovie;

USTRUCT(BlueprintType)
struct FTresUIStyleData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresCommandKind> m_CommandKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TAssetPtr<USwfMovie> m_SwfAsset;
    
    TRESGAME_API FTresUIStyleData();
};

