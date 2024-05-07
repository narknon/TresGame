#pragma once
#include "CoreMinimal.h"
#include "TCPATH_SPLINEGROUP.generated.h"

class ATresCameraPathSplineActor;

USTRUCT(BlueprintType)
struct FTCPATH_SPLINEGROUP {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ATresCameraPathSplineActor*> AryActor;
    
    TRESGAME_API FTCPATH_SPLINEGROUP();
};

