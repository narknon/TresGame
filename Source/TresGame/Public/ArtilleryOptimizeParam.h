#pragma once
#include "CoreMinimal.h"
#include "ArtilleryOptimizeParam.generated.h"

USTRUCT(BlueprintType)
struct FArtilleryOptimizeParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_OffsetIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AttackName;
    
    TRESGAME_API FArtilleryOptimizeParam();
};

