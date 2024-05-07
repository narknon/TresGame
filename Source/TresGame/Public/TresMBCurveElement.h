#pragma once
#include "CoreMinimal.h"
#include "TresMBCurveKeyElement.h"
#include "TresMBCurveElement.generated.h"

USTRUCT(BlueprintType)
struct FTresMBCurveElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresMBCurveKeyElement> m_Keys;
    
    TRESGAME_API FTresMBCurveElement();
};

