#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/Tests/EnvQueryTest_Distance.h"
#include "TresEnvQueryTest_MinDistance.generated.h"

UCLASS(Blueprintable)
class UTresEnvQueryTest_MinDistance : public UEnvQueryTest_Distance {
    GENERATED_BODY()
public:
    UTresEnvQueryTest_MinDistance(const FObjectInitializer& ObjectInitializer);

    virtual void RunTest(FEnvQueryInstance& QueryInstance) const override;
    
};

