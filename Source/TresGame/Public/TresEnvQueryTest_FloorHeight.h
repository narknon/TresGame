#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "ETresFloorTestMode.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "DataProviders/AIDataProvider.h"
#include "TresEnvQueryTest_FloorHeight.generated.h"

UCLASS(Blueprintable)
class UTresEnvQueryTest_FloorHeight : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<EArithmeticKeyOperation::Type> Operation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue FloorHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue TestHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresFloorTestMode::Type> TestMode;
    
    UTresEnvQueryTest_FloorHeight();
};

