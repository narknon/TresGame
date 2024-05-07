#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "TresEnvQueryTest_AttackDistance.generated.h"

UCLASS(Blueprintable)
class UTresEnvQueryTest_AttackDistance : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderBoolValue ExecutableAttacksOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderBoolValue DistanceForward;
    
    UTresEnvQueryTest_AttackDistance();
};

