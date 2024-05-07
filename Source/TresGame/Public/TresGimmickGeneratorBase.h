#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresGimmickGeneratorBase.generated.h"

class UTresRootComponent;
class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class ATresGimmickGeneratorBase : public ATresGimmickActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresRootComponent* MyRoot;
    
public:
    ATresGimmickGeneratorBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetStaticMeshParameter(UStaticMeshComponent* MeshComponent);
    
};

