#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresGimmickBouncyPetArea.generated.h"

UCLASS(Blueprintable, Config=Game)
class ATresGimmickBouncyPetArea : public AActor {
    GENERATED_BODY()
public:
    ATresGimmickBouncyPetArea(const FObjectInitializer& ObjectInitializer);
};

