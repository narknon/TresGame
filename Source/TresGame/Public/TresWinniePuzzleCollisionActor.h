#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresWinniePuzzleCollisionActor.generated.h"

class USphereComponent;

UCLASS(Blueprintable)
class ATresWinniePuzzleCollisionActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereComponent;
    
public:
    ATresWinniePuzzleCollisionActor(const FObjectInitializer& ObjectInitializer);
};

