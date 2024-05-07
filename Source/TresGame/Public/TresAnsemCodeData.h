#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresItemDefReport.h"
#include "TresAnsemCodeData.generated.h"

USTRUCT(BlueprintType)
struct FTresAnsemCodeData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresItemDefReport ItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DetailTextID;
    
    TRESGAME_API FTresAnsemCodeData();
};

