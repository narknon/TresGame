#pragma once
#include "CoreMinimal.h"
#include "TresUIGameFlagData.h"
#include "TresUIGameFlagText.generated.h"

USTRUCT(BlueprintType)
struct FTresUIGameFlagText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresUIGameFlagData GameFlag;
    
    TRESGAME_API FTresUIGameFlagText();
};

