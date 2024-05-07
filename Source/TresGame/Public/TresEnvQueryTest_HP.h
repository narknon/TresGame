#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "TresEnvQueryTest_HP.generated.h"

UCLASS(Blueprintable)
class UTresEnvQueryTest_HP : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderBoolValue GetHP_AsPercentage;
    
    UTresEnvQueryTest_HP();
};

