#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresE_EX367_DarkShootingPatternParam.generated.h"

USTRUCT(BlueprintType)
struct FTresE_EX367_DarkShootingPatternParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ShotWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_Offset;
    
    TRESGAME_API FTresE_EX367_DarkShootingPatternParam();
};

