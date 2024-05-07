#pragma once
#include "CoreMinimal.h"
#include "TresRemyCookingGameDataTableBase.h"
#include "TresRemyEggCrackingDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresRemyEggCrackingDataTable : public FTresRemyCookingGameDataTableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StickEggCrackingValue;
    
    TRESGAME_API FTresRemyEggCrackingDataTable();
};

