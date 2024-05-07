#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "ETresEnvQueryTest_MercunaWallDistanceDir.h"
#include "TresEnvQueryTest_MercunaWallDistance.generated.h"

UCLASS(Blueprintable)
class UTresEnvQueryTest_MercunaWallDistance : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue m_Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresEnvQueryTest_MercunaWallDistanceDir::Type> m_Dir;
    
    UTresEnvQueryTest_MercunaWallDistance();
};

