#pragma once
#include "CoreMinimal.h"
#include "TresSpawnPointFilter.h"
#include "TresSpawnPointOrFilter.generated.h"

UCLASS(Blueprintable, NonTransient)
class TRESGAME_API UTresSpawnPointOrFilter : public UTresSpawnPointFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTresSpawnPointFilter*> m_Filters;
    
    UTresSpawnPointOrFilter();
};

