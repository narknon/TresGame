#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresGimmickBxDarkCubeParts.generated.h"

class UTresRootComponent;

UCLASS(Blueprintable, Config=Game)
class ATresGimmickBxDarkCubeParts : public ATresGimmickActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTresRootComponent* MyRoot;
    
public:
    ATresGimmickBxDarkCubeParts(const FObjectInitializer& ObjectInitializer);
};

