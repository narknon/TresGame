#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "ETresStateID.h"
#include "TresEnvQueryTest_IsCharacterState.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class UTresEnvQueryTest_IsCharacterState : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> Context;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresStateID> m_State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bContextStateCheck;
    
    UTresEnvQueryTest_IsCharacterState();
};

