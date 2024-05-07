#pragma once
#include "CoreMinimal.h"
#include "TresPawnOverlapComponentBase.h"
#include "TresLockonPriorityOverlapComponent_e_ex356.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresLockonPriorityOverlapComponent_e_ex356 : public UTresPawnOverlapComponentBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableLimitAngle: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LimitAngle;
    
public:
    UTresLockonPriorityOverlapComponent_e_ex356();
};

