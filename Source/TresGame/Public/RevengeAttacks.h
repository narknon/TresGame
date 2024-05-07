#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RevengeAttacks.generated.h"

class UTresActionDefinitionBase;

USTRUCT(BlueprintType)
struct FRevengeAttacks {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresActionDefinitionBase> RevengeAttackDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAir: 1;
    
    TRESGAME_API FRevengeAttacks();
};

