#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "TresGumiShipDamageEvent.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipDamageEvent : public FPointDamageEvent {
    GENERATED_BODY()
public:
    TRESGAME_API FTresGumiShipDamageEvent();
};

