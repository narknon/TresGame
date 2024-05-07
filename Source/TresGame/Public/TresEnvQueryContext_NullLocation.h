#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "TresEnvQueryContext_NullLocation.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTresEnvQueryContext_NullLocation : public UEnvQueryContext {
    GENERATED_BODY()
public:
    UTresEnvQueryContext_NullLocation();
};

