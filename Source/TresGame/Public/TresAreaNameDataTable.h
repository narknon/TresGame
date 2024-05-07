#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresAreaNameDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresAreaNameDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AreaNameKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SubAreaNameKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MapNameKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NavMapNameKey;
    
    TRESGAME_API FTresAreaNameDataTable();
};

