#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresLevelEntityActorData.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TRESGAME_API UTresLevelEntityActorData : public UObject {
    GENERATED_BODY()
public:
    UTresLevelEntityActorData();
};

