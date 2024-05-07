#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresPhotoHologramMapSetDef.generated.h"

USTRUCT(BlueprintType)
struct FTresPhotoHologramMapSetDef : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ValidMapList;
    
    TRESGAME_API FTresPhotoHologramMapSetDef();
};

