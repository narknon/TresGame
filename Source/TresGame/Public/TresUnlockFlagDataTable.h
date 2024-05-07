#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresUnlockFlagDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresUnlockFlagDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GameFlagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GameFlagLabel;
    
    TRESGAME_API FTresUnlockFlagDataTable();
};

