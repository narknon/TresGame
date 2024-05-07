#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresTextColor.generated.h"

USTRUCT(BlueprintType)
struct FTresTextColor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Color;
    
    TRESGAME_API FTresTextColor();
};

