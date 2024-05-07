#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "TresNpcEnvQueryTest_FreeWalkHeightCheck.generated.h"

UCLASS(Blueprintable)
class UTresNpcEnvQueryTest_FreeWalkHeightCheck : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue m_HeightBorder;
    
    UTresNpcEnvQueryTest_FreeWalkHeightCheck();
};

