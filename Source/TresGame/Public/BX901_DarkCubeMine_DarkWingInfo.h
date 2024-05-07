#pragma once
#include "CoreMinimal.h"
#include "BX901_DarkCubeMine_DarkWingInfo.generated.h"

USTRUCT(BlueprintType)
struct FBX901_DarkCubeMine_DarkWingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxMoveDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMinMoveDistance;
    
    TRESGAME_API FBX901_DarkCubeMine_DarkWingInfo();
};

