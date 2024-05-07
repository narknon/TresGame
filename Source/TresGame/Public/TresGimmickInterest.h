#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresGimmickInterest.generated.h"

class UTresRootComponent;

UCLASS(Abstract, Blueprintable, Config=Game)
class ATresGimmickInterest : public ATresGimmickActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresRootComponent* MyRoot;
    
public:
    ATresGimmickInterest(const FObjectInitializer& ObjectInitializer);
};

