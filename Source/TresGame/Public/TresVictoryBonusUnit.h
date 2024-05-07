#pragma once
#include "CoreMinimal.h"
#include "ETresVictoryBonusKind.h"
#include "ETresAbilityKind.h"
#include "TresVictoryBonusUnit.generated.h"

USTRUCT(BlueprintType)
struct FTresVictoryBonusUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresVictoryBonusKind m_Bonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresAbilityKind m_Ability;
    
    TRESGAME_API FTresVictoryBonusUnit();
};

