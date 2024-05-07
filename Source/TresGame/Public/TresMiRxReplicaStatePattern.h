#pragma once
#include "CoreMinimal.h"
#include "ETresStateID.h"
#include "TresMiRxReplicaStateInfo.h"
#include "TresMiRxReplicaStatePattern.generated.h"

USTRUCT(BlueprintType)
struct FTresMiRxReplicaStatePattern {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsFirstTimeUseOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_dTransitionPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresStateID> m_eStateIDWhenInterrupt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresMiRxReplicaStateInfo> m_StateInfos;
    
public:
    TRESGAME_API FTresMiRxReplicaStatePattern();
};

