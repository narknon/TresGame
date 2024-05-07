#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_GetAttackPermission.generated.h"

UCLASS(Blueprintable)
class UTresBTDecorator_GetAttackPermission : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCheckOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ElapsedTimeSinceLastAttack;
    
    UTresBTDecorator_GetAttackPermission();
};

