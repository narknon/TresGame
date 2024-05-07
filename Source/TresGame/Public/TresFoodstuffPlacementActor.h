#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresFoodstuffPlacementActor.generated.h"

class UTresFoodstuffRootComponent;

UCLASS(Blueprintable)
class ATresFoodstuffPlacementActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresFoodstuffRootComponent* MyRootComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_KeyName;
    
    ATresFoodstuffPlacementActor(const FObjectInitializer& ObjectInitializer);
};

