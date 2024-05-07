#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ex064Parameter.generated.h"

USTRUCT(BlueprintType)
struct Fex064Parameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AnimDamageWaitTime;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FFloatInterval m_WallPartsSpawnTimeRange;
    
    TRESGAME_API Fex064Parameter();
};

