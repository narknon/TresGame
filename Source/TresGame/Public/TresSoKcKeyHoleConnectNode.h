#pragma once
#include "CoreMinimal.h"
#include "TresSoKcKeyHoleConnectNode.generated.h"

class ATresSoKcKeyHoleGimmickActor;

USTRUCT(BlueprintType)
struct FTresSoKcKeyHoleConnectNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TWeakObjectPtr<ATresSoKcKeyHoleGimmickActor> ConnectableKeyHole;
    
    TRESGAME_API FTresSoKcKeyHoleConnectNode();
};

