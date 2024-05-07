#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresCardWallControlActor_e_ex356.generated.h"

class USceneComponent;

UCLASS(Blueprintable, HideDropdown)
class ATresCardWallControlActor_e_ex356 : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MyRoot;
    
public:
    ATresCardWallControlActor_e_ex356(const FObjectInitializer& ObjectInitializer);
};

