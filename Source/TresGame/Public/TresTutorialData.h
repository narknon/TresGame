#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresUIGameFlagData.h"
#include "ETresGameHelp.h"
#include "TresTutorialData.generated.h"

USTRUCT(BlueprintType)
struct FTresTutorialData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DetailTextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresUIGameFlagData GameFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGameHelp GameHelp;
    
    TRESGAME_API FTresTutorialData();
};

