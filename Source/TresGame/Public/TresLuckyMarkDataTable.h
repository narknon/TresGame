#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresLuckyMarkDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresLuckyMarkDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName World;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MarkIndex;
    
    TRESGAME_API FTresLuckyMarkDataTable();
};

