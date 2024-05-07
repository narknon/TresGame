#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "TresEnvQueryContext_PlayerFloorPositionFromNavmesh.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTresEnvQueryContext_PlayerFloorPositionFromNavmesh : public UEnvQueryContext {
    GENERATED_BODY()
public:
    UTresEnvQueryContext_PlayerFloorPositionFromNavmesh();
};

