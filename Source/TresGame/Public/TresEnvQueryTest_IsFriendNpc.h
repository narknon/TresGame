#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "ETresChrUniqueID.h"
#include "TresEnvQueryTest_IsFriendNpc.generated.h"

UCLASS(Blueprintable)
class UTresEnvQueryTest_IsFriendNpc : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresChrUniqueID FriendID;
    
    UTresEnvQueryTest_IsFriendNpc();
};

