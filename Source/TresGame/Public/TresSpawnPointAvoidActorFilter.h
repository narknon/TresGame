#pragma once
#include "CoreMinimal.h"
#include "TresSpawnPointFilter.h"
#include "TresSpawnPointAvoidActorFilter.generated.h"

UCLASS(Blueprintable, NonTransient)
class TRESGAME_API UTresSpawnPointAvoidActorFilter : public UTresSpawnPointFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Radius;
    
    UTresSpawnPointAvoidActorFilter();
};

