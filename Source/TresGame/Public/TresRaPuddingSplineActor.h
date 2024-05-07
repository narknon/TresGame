#pragma once
#include "CoreMinimal.h"
#include "SQEX_SplineActor.h"
#include "SQEX_SplineActor.h"
#include "TresRaPuddingSplineActor.generated.h"

UCLASS(Blueprintable)
class ATresRaPuddingSplineActor : public ASQEX_SplineActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_PointID;
    
    ATresRaPuddingSplineActor(const FObjectInitializer& ObjectInitializer);
};

