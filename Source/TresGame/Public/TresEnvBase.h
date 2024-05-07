#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresEnvBase.generated.h"

class USceneComponent;

UCLASS(Abstract, Blueprintable, Config=Game)
class ATresEnvBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    ATresEnvBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void RegistAllTickFunction(bool Enable, bool allComponent);
    
};

