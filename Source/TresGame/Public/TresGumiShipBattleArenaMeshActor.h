#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "TresGumiShipBattleArenaMeshActor.generated.h"

UCLASS(Blueprintable)
class ATresGumiShipBattleArenaMeshActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
    ATresGumiShipBattleArenaMeshActor(const FObjectInitializer& ObjectInitializer);
};

