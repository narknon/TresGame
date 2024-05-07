#pragma once
#include "CoreMinimal.h"
#include "TresSpawnPointFilter.h"
#include "TresSpawnPointIDFilter.generated.h"

UCLASS(Blueprintable, NonTransient)
class TRESGAME_API UTresSpawnPointIDFilter : public UTresSpawnPointFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_ValidIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_InvalidIDs;
    
    UTresSpawnPointIDFilter();
};

