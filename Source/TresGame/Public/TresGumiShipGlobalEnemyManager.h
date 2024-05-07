#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TresGumiShipGlobalEnemyManager.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipGlobalEnemyManager : public UActorComponent {
    GENERATED_BODY()
public:
    UTresGumiShipGlobalEnemyManager();
};

