#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "TresEnvQueryContext_Enemies.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTresEnvQueryContext_Enemies : public UEnvQueryContext {
    GENERATED_BODY()
public:
    UTresEnvQueryContext_Enemies(const FObjectInitializer& ObjectInitializer);
    
};

