#pragma once
#include "CoreMinimal.h"
#include "EX359_BeamWaitMoveInfo.h"
#include "EX359_BeamSpinMoveInfo.h"
#include "EX359_BeamHomingMoveInfo.h"
#include "EX359_BeamMoveInfoSet.generated.h"

USTRUCT(BlueprintType)
struct FEX359_BeamMoveInfoSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEX359_BeamWaitMoveInfo m_WaitMoveInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bMoveWait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEX359_BeamSpinMoveInfo m_SpinMoveInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSpinMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEX359_BeamHomingMoveInfo m_HomingMoveInfo;
    
    TRESGAME_API FEX359_BeamMoveInfoSet();
};

