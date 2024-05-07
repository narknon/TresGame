#pragma once
#include "CoreMinimal.h"
#include "TresSpawnPointScorer.h"
#include "UObject/NoExportTypes.h"
#include "TresSpawnPointDistanceScorer.generated.h"

UCLASS(Blueprintable, NonTransient)
class TRESGAME_API UTresSpawnPointDistanceScorer : public UTresSpawnPointScorer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_Position;
    
    UTresSpawnPointDistanceScorer();
};

