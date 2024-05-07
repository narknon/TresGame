#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "TresPointDamageEvent.generated.h"

USTRUCT(BlueprintType)
struct FTresPointDamageEvent : public FPointDamageEvent {
    GENERATED_BODY()
public:
    TRESGAME_API FTresPointDamageEvent();
};

