#pragma once
#include "CoreMinimal.h"
#include "ETresTeam.h"
#include "UObject/NoExportTypes.h"
#include "TresTeamDebugColor.generated.h"

USTRUCT(BlueprintType)
struct FTresTeamDebugColor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresTeam::Type> TeamID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    TRESGAME_API FTresTeamDebugColor();
};

