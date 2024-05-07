#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresSplineMeshActor.generated.h"

class USceneComponent;
class USplineMeshComponent;

UCLASS(Blueprintable, Config=Game)
class ATresSplineMeshActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineMeshComponent* SplineMeshComponent;
    
public:
    ATresSplineMeshActor(const FObjectInitializer& ObjectInitializer);
};

