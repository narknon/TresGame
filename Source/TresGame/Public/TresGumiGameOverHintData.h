#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresGumiGameOverHintData.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiGameOverHintData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HintNameLocSpaceKey;
    
    TRESGAME_API FTresGumiGameOverHintData();
};

