#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresTsDancingPlant.generated.h"

class UTresStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class ATresTsDancingPlant : public ATresGimmickActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* MyMesh;
    
    ATresTsDancingPlant(const FObjectInitializer& ObjectInitializer);
};

