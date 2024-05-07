#pragma once
#include "CoreMinimal.h"
#include "TresRemyCookingGameDataTableBase.h"
#include "TresRemyEggCrackingV2DataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresRemyEggCrackingV2DataTable : public FTresRemyCookingGameDataTableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RightStickEggCrackingValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TooInclinedPercent;
    
    TRESGAME_API FTresRemyEggCrackingV2DataTable();
};

