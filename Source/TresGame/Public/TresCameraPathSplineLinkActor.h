#pragma once
#include "CoreMinimal.h"
#include "TresCameraPathSplineActor.h"
#include "TresCameraPathSplineLinkActor.generated.h"

class ASQEX_SplineActor;

UCLASS(Blueprintable)
class ATresCameraPathSplineLinkActor : public ATresCameraPathSplineActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASQEX_SplineActor* m_LinkSplineActor;
    
    ATresCameraPathSplineLinkActor(const FObjectInitializer& ObjectInitializer);
};

