#pragma once
#include "CoreMinimal.h"
#include "TresNameEntryTextData.h"
#include "Engine/DataTable.h"
#include "TresNameEntryTextDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresNameEntryTextDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FTresNameEntryTextData TextList[9];
    
    TRESGAME_API FTresNameEntryTextDataTable();
};

