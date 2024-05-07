#pragma once
#include "CoreMinimal.h"
#include "EX359_BeamWaitMoveInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX359_BeamWaitMoveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bNotEndOnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUpdateMoveDir;
    
    TRESGAME_API FEX359_BeamWaitMoveInfo();
};

