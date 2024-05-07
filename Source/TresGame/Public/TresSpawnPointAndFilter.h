#pragma once
#include "CoreMinimal.h"
#include "TresSpawnPointFilter.h"
#include "TresSpawnPointAndFilter.generated.h"

UCLASS(Blueprintable, NonTransient)
class TRESGAME_API UTresSpawnPointAndFilter : public UTresSpawnPointFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTresSpawnPointFilter*> m_Filters;
    
    UTresSpawnPointAndFilter();
};

