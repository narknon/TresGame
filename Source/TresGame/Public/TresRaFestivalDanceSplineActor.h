#pragma once
#include "CoreMinimal.h"
#include "SQEX_SplineActor.h"
#include "UObject/NoExportTypes.h"
#include "SQEX_SplineActor.h"
#include "TresRaFestivalDanceSplineActor.generated.h"

UCLASS(Blueprintable)
class ATresRaFestivalDanceSplineActor : public ASQEX_SplineActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor m_SplineColor;
    
    ATresRaFestivalDanceSplineActor(const FObjectInitializer& ObjectInitializer);
};

