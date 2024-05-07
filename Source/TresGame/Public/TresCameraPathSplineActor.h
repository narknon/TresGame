#pragma once
#include "CoreMinimal.h"
#include "SQEX_SplineActor.h"
#include "SQEX_SplineActor.h"
#include "TresCameraPathSplineActor.generated.h"

class ATresCameraPathSplineLinkActor;

UCLASS(Blueprintable, NotPlaceable)
class ATresCameraPathSplineActor : public ASQEX_SplineActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCameraPathSplineLinkActor* m_LinkSplineFromActor;
    
    ATresCameraPathSplineActor(const FObjectInitializer& ObjectInitializer);
};

