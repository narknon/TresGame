#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "TresEnvQueryContext_PlayerCamera.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTresEnvQueryContext_PlayerCamera : public UEnvQueryContext {
    GENERATED_BODY()
public:
    UTresEnvQueryContext_PlayerCamera();
};

