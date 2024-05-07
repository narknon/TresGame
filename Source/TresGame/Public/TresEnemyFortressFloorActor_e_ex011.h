#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresActorInterface.h"
#include "TresEnemyFortressFloorActor_e_ex011.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class ATresEnemyFortressFloorActor_e_ex011 : public AActor, public ITresActorInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* FloorBoxComponent;
    
public:
    ATresEnemyFortressFloorActor_e_ex011(const FObjectInitializer& ObjectInitializer);
    
    // Fix for true pure virtual functions not being implemented
};

