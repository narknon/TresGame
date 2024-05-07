#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresPhilharmonicData.generated.h"

USTRUCT(BlueprintType)
struct FTresPhilharmonicData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProgramMoviePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProgramNameTextID;
    
    TRESGAME_API FTresPhilharmonicData();
};

