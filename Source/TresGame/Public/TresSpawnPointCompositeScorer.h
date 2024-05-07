#pragma once
#include "CoreMinimal.h"
#include "TresSpawnPointScorer.h"
#include "TresSpawnPointCompositeScorer.generated.h"

UCLASS(Blueprintable, NonTransient)
class TRESGAME_API UTresSpawnPointCompositeScorer : public UTresSpawnPointScorer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTresSpawnPointScorer*> m_Scorers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> m_Factors;
    
    UTresSpawnPointCompositeScorer();
};

