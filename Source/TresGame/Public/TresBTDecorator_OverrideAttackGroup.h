#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "GameplayTagContainer.h"
#include "TresBTDecorator_OverrideAttackGroup.generated.h"

UCLASS(Blueprintable)
class UTresBTDecorator_OverrideAttackGroup : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AttackGroup;
    
    UTresBTDecorator_OverrideAttackGroup();
};

