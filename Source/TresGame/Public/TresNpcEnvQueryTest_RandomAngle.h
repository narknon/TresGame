#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "TresNpcEnvQueryTest_RandomAngle.generated.h"

UCLASS(Blueprintable)
class UTresNpcEnvQueryTest_RandomAngle : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue m_AngleYaw;
    
    UTresNpcEnvQueryTest_RandomAngle();
};

