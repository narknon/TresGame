#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresSpawnPointMarker.generated.h"

class ATresSpawnPointManagementVolume;

UCLASS(Blueprintable, Transient)
class TRESGAME_API ATresSpawnPointMarker : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresSpawnPointManagementVolume* m_ManagementVolume;
    
    ATresSpawnPointMarker(const FObjectInitializer& ObjectInitializer);
};

