#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresUIActorBG.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class ATresUIActorBG : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
public:
    ATresUIActorBG(const FObjectInitializer& ObjectInitializer);
};

