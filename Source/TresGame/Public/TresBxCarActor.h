#pragma once
#include "CoreMinimal.h"
#include "TresGimmickBxCarManagerActor.h"
#include "TresGimmickDitherFadeInterface.h"
#include "ETresGimmickBxCarTyreType.h"
#include "TresBxCarActor.generated.h"

class UTresGimmickObstacleComponent;
class UTresStaticMeshComponent;
class USoundBase;
class UInstancedStaticMeshComponent;
class USQEXSEADZeroOneSeComponent;

UCLASS(Abstract, Blueprintable)
class ATresBxCarActor : public ATresGimmickBxCarManagerActor, public ITresGimmickDitherFadeInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* CarMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* DriverStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresGimmickObstacleComponent* GimmickObstacle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInstancedStaticMeshComponent* InstancedStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGimmickBxCarTyreType TyreType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ColorTextureIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* BrakeSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USQEXSEADZeroOneSeComponent* CarTravelSeComponent;
    
    ATresBxCarActor(const FObjectInitializer& ObjectInitializer);
    
    // Fix for true pure virtual functions not being implemented
};

