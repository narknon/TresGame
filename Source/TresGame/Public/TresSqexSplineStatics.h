#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresSplineTransformArray.h"
#include "UObject/NoExportTypes.h"
#include "TresSqexSplineNearestInfo.h"
#include "SQEX_SplineMoverExecutor.h"
#include "TresSqexSplineStatics.generated.h"

class ASQEX_SplineActor;
class USQEX_SplineComponent;
class USplineComponent;

UCLASS(Abstract, Blueprintable, NotPlaceable)
class UTresSqexSplineStatics : public UObject {
    GENERATED_BODY()
public:
    UTresSqexSplineStatics();
    UFUNCTION(BlueprintCallable)
    static bool TresConvertUnrealSplineComponent(ASQEX_SplineActor* splineActor, USplineComponent* SplineComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetSplineTransformArrayFromNum(TArray<FTresSplineTransformArray>& outTransformArray, ASQEX_SplineActor* splineActor, int32 Num, float StartOffset, float endProhibitedArea);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetSplineTransformArrayFromInterval(TArray<FTresSplineTransformArray>& outTransformArray, ASQEX_SplineActor* splineActor, float Interval, float StartOffset, float endProhibitedArea);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetSplineSectionTransformArrayFromNum(TArray<FTresSplineTransformArray>& outTransformArray, ASQEX_SplineActor* splineActor, ASQEX_SplineActor* splineSectionStart, ASQEX_SplineActor* splineSectionEnd, int32 Num, float StartOffset, float endProhibitedArea);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetSplineSectionTransformArrayFromInterval(TArray<FTresSplineTransformArray>& outTransformArray, ASQEX_SplineActor* splineActor, ASQEX_SplineActor* splineSectionStart, ASQEX_SplineActor* splineSectionEnd, float Interval, float StartOffset, float endProhibitedArea, int32 MaxNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetSplineComponentLocationFromRate(USQEX_SplineComponent* SplineComponent, float Rate, FVector& OutLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetSplineActorLocationFromRate(ASQEX_SplineActor* splineActor, float Rate, FVector& OutLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetNearPoint(ASQEX_SplineActor* splineActor, const FVector& WorldLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ASQEX_SplineActor* GetNearestSplineActor(ASQEX_SplineActor* splineActor, const FVector& WorldLocation, bool bLocationXy);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetNearestInfo(ASQEX_SplineActor* splineActor, const FVector& WorldLocation, FTresSqexSplineNearestInfo& Info);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ASQEX_SplineActor* GetFarthestSplineActor(ASQEX_SplineActor* splineActor, const FVector& WorldLocation, bool bLocationXy);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ApplySplineMoverFromWorldLocation(const FVector& WorldLocation, FSQEX_SplineMoverExecutor& mover);
    
};

