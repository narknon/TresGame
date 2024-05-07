#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "TresEnvQueryTest_OceanHeight.generated.h"

UCLASS(Blueprintable)
class UTresEnvQueryTest_OceanHeight : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue m_AmplitudeOffset;
    
    UTresEnvQueryTest_OceanHeight();
};

