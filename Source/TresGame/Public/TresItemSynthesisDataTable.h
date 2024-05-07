#pragma once
#include "CoreMinimal.h"
#include "ETresItemSynthesisCondition.h"
#include "TresItemSynthesisDataTableBase.h"
#include "TresItemSynthesisDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresItemSynthesisDataTable : public FTresItemSynthesisDataTableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_FlagIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_RewardItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresItemSynthesisCondition m_Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ConditionName;
    
    TRESGAME_API FTresItemSynthesisDataTable();
};

