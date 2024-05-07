#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresGameLib.generated.h"

UCLASS(Abstract, Blueprintable, NotPlaceable)
class TRESGAME_API UTresGameLib : public UObject {
    GENERATED_BODY()
public:
    UTresGameLib();
};

