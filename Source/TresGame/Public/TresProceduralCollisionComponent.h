#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "PhysicsEngine/ConvexElem.h"
#include "TresProceduralCollisionComponent.generated.h"

class UBodySetup;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresProceduralCollisionComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBodySetup* ProcMeshBodySetup;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKConvexElem> CollisionConvexElems;
    
public:
    UTresProceduralCollisionComponent();
};

