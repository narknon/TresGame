#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresMI_02GeneratorRuleParam.generated.h"

class ATresGimmickActor;

USTRUCT(BlueprintType)
struct FTresMI_02GeneratorRuleParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresGimmickActor> generateClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float nextLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 life;
    
    TRESGAME_API FTresMI_02GeneratorRuleParam();
};

