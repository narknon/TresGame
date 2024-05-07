#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "TresEnvQueryContext_SpawnPointFromPlayerLocation.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTresEnvQueryContext_SpawnPointFromPlayerLocation : public UEnvQueryContext {
    GENERATED_BODY()
public:
    UTresEnvQueryContext_SpawnPointFromPlayerLocation();
};

