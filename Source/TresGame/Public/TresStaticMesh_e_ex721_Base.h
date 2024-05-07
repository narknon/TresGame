#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresStaticMesh_e_ex721_Base.generated.h"

class UTresRootComponent;
class UTresStaticMeshComponent;

UCLASS(Blueprintable)
class ATresStaticMesh_e_ex721_Base : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresRootComponent* MyRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* MyMesh;
    
public:
    ATresStaticMesh_e_ex721_Base(const FObjectInitializer& ObjectInitializer);
};

