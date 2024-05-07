#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresLateralProjectionDecalActor.generated.h"

class USceneComponent;
class UDecalComponent;

UCLASS(Blueprintable, Config=Game)
class ATresLateralProjectionDecalActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecalComponent* DecalComponent;
    
    ATresLateralProjectionDecalActor(const FObjectInitializer& ObjectInitializer);
};

