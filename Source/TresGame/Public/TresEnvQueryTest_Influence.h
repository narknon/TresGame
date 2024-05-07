#pragma once
#include "CoreMinimal.h"
#include "ETresInfluenceMapLayer.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "TresEnvQueryTest_Influence.generated.h"

UCLASS(Blueprintable)
class UTresEnvQueryTest_Influence : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresInfluenceMapLayer::Type> Layer;
    
    UTresEnvQueryTest_Influence();
};

