#pragma once
#include "CoreMinimal.h"
#include "TresGimmickGeneratorBase.h"
#include "TresSplineMeshExtensionStaticMeshInfo.h"
#include "TresSplineMeshGenerator.generated.h"

class ASQEX_SplineActor;
class USplineMeshComponent;
class UStaticMesh;

UCLASS(Abstract, Blueprintable)
class ATresSplineMeshGenerator : public ATresGimmickGeneratorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASQEX_SplineActor* FirstSplineActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresSplineMeshExtensionStaticMeshInfo> MeshInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASQEX_SplineActor* EndSplineActor;
    
public:
    ATresSplineMeshGenerator(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void Create(ASQEX_SplineActor* splineActor, UStaticMesh* StaticMesh, UStaticMesh* collisionStaticMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetupMesh(USplineMeshComponent* Mesh, bool isEnableCollision, float Length);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USplineMeshComponent* BP_GenerateMesh();
    
};

