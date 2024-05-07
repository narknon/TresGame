#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ETresWaypointKind.h"
#include "TresWaypoint.generated.h"

class ATresWaypoint;

UCLASS(Blueprintable)
class ATresWaypoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresWaypointKind::Type> MyWaypointKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TWeakObjectPtr<ATresWaypoint> NextWaypoint;
    
    ATresWaypoint(const FObjectInitializer& ObjectInitializer);
};

