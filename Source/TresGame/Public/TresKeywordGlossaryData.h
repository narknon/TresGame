#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresUIGameFlagText.h"
#include "ETresUIDataVersion.h"
#include "TresKeywordGlossaryData.generated.h"

USTRUCT(BlueprintType)
struct FTresKeywordGlossaryData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresUIGameFlagText KeywordText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DetailTextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresUIDataVersion Version;
    
    TRESGAME_API FTresKeywordGlossaryData();
};

