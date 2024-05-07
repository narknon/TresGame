#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresE_dw405CounterAttackParam.generated.h"

class UTresAttackDefinitionBase;

USTRUCT(BlueprintType)
struct FTresE_dw405CounterAttackParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresAttackDefinitionBase> AttackDefinitionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActionIndex;
    
    TRESGAME_API FTresE_dw405CounterAttackParam();
};

