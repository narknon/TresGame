#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresSqexSplineNearestInfo.generated.h"

class ASQEX_SplineActor;
class USQEX_SplineComponent;

USTRUCT(BlueprintType)
struct FTresSqexSplineNearestInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector nearPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASQEX_SplineActor* splineActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASQEX_SplineActor* nextSplineActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USQEX_SplineComponent* SplineComponent;
    
    TRESGAME_API FTresSqexSplineNearestInfo();
};

