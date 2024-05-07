#pragma once
#include "CoreMinimal.h"
#include "TresRemyCookingGameDataTableBase.h"
#include "TresRemyFlambeDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresRemyFlambeDataTable : public FTresRemyCookingGameDataTableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftStickFlambeValue;
    
    TRESGAME_API FTresRemyFlambeDataTable();
};

