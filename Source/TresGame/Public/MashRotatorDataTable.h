#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MashRotatorDataTable.generated.h"

USTRUCT(BlueprintType)
struct FMashRotatorDataTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName _Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator _Rotater;
    
    TRESGAME_API FMashRotatorDataTable();
};

