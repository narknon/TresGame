#pragma once
#include "CoreMinimal.h"
#include "EX354_ClusterShotMoveInfo.generated.h"

class ATresProjectileBase;

USTRUCT(BlueprintType)
struct FEX354_ClusterShotMoveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresProjectileBase* m_Proj;
    
    TRESGAME_API FEX354_ClusterShotMoveInfo();
};

