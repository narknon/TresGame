#pragma once
#include "CoreMinimal.h"
#include "TresMiRxReplicaStatePattern.h"
#include "TresMiRxReplicaStateTable.generated.h"

USTRUCT(BlueprintType)
struct FTresMiRxReplicaStateTable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresMiRxReplicaStatePattern> m_Patterns;
    
public:
    TRESGAME_API FTresMiRxReplicaStateTable();
};

