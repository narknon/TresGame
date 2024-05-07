#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "TresEnvQueryContext_PlayerTeam.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTresEnvQueryContext_PlayerTeam : public UEnvQueryContext {
    GENERATED_BODY()
public:
    UTresEnvQueryContext_PlayerTeam();
};

