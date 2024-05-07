#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresShortcutCommandPageData.h"
#include "TresShortcutCommandData.generated.h"

USTRUCT(BlueprintType)
struct FTresShortcutCommandData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresShortcutCommandPageData Page1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresShortcutCommandPageData Page2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresShortcutCommandPageData Page3;
    
    TRESGAME_API FTresShortcutCommandData();
};

