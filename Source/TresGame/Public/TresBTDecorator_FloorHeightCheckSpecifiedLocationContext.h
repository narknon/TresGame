#pragma once
#include "CoreMinimal.h"
#include "TresBTDecorator_FloorHeightCheck.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTDecorator_FloorHeightCheckSpecifiedLocationContext.generated.h"

UCLASS(Blueprintable)
class UTresBTDecorator_FloorHeightCheckSpecifiedLocationContext : public UTresBTDecorator_FloorHeightCheck {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector LocationContext;
    
public:
    UTresBTDecorator_FloorHeightCheckSpecifiedLocationContext();
};

