#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "ETresEnemyUniqueID.h"
#include "TresNpcEnvQueryTest_DirectTargetEnemy.generated.h"

UCLASS(Blueprintable)
class UTresNpcEnvQueryTest_DirectTargetEnemy : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresEnemyUniqueID m_EnemyUID;
    
    UTresNpcEnvQueryTest_DirectTargetEnemy();
};

