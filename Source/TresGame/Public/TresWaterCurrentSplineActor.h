#pragma once
#include "CoreMinimal.h"
#include "SQEX_SplineActor.h"
#include "SQEX_SplineActor.h"
#include "TresWaterCurrentSplineActor.generated.h"

UCLASS(Blueprintable)
class ATresWaterCurrentSplineActor : public ASQEX_SplineActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDampingRate;
    
public:
    ATresWaterCurrentSplineActor(const FObjectInitializer& ObjectInitializer);
};

