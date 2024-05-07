#pragma once
#include "CoreMinimal.h"
#include "TresBTDecorator_RangeCheck.h"
#include "TresNpcBTDecorator_NpcRangeCheck.generated.h"

UCLASS(Blueprintable)
class UTresNpcBTDecorator_NpcRangeCheck : public UTresBTDecorator_RangeCheck {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseLockOnTargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSimpleCalculateRange;
    
    UTresNpcBTDecorator_NpcRangeCheck();
};

