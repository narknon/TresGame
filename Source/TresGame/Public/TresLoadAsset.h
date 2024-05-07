#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresLoadAsset.generated.h"

UCLASS(Abstract, Blueprintable)
class UTresLoadAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UTresLoadAsset();
};

