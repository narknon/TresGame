#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ETresChrUniqueID.h"
#include "ETresEnemyUniqueID.h"
#include "TresBTDecorator_DoesCharacterExist.generated.h"

UCLASS(Blueprintable)
class UTresBTDecorator_DoesCharacterExist : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETresChrUniqueID> m_FriendsUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETresEnemyUniqueID> m_EnemiesUID;
    
    UTresBTDecorator_DoesCharacterExist();
};

