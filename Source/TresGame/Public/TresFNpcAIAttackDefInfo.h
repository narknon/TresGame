#pragma once
#include "CoreMinimal.h"
#include "ETresFNpcAIAttackDefType.h"
#include "ETresAbilityKind.h"
#include "TresFNpcAIAttackDefInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresFNpcAIAttackDefInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AttackParamKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresFNpcAIAttackDefType m_AttackDefType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresAbilityKind m_AttackAbilityKind;
    
    TRESGAME_API FTresFNpcAIAttackDefInfo();
};

