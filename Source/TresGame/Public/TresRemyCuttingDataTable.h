#pragma once
#include "CoreMinimal.h"
#include "TresRemyCookingGameDataTableBase.h"
#include "RemyCuttingFoodType.h"
#include "RemyCookingCommand.h"
#include "TresRemyCuttingDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresRemyCuttingDataTable : public FTresRemyCookingGameDataTableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    RemyCuttingFoodType FoodType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StickCuttingValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StickReloadValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReloadStickNoInputValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReloadCutTimesRangeStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReloadCutTimesRangeEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<RemyCookingCommand> ReloadCommand1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<RemyCookingCommand> ReloadCommand2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReloadTime;
    
    TRESGAME_API FTresRemyCuttingDataTable();
};

