#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "TresEnvQueryContext_PlayerFloorPositionFromNavmeshAndCollisionCheck.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTresEnvQueryContext_PlayerFloorPositionFromNavmeshAndCollisionCheck : public UEnvQueryContext {
    GENERATED_BODY()
public:
    UTresEnvQueryContext_PlayerFloorPositionFromNavmeshAndCollisionCheck();
};

