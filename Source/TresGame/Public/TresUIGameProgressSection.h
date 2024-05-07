#pragma once
#include "CoreMinimal.h"
#include "TresUIGameFlagData.h"
#include "TresUIGameProgressSection.generated.h"

USTRUCT(BlueprintType)
struct FTresUIGameProgressSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresUIGameFlagData Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresUIGameFlagData End;
    
    TRESGAME_API FTresUIGameProgressSection();
};

