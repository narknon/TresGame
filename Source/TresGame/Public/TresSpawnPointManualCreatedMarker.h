#pragma once
#include "CoreMinimal.h"
#include "TresSpawnPointMarker.h"
#include "TresSpawnPointManualCreatedMarker.generated.h"

UCLASS(Blueprintable, NonTransient)
class TRESGAME_API ATresSpawnPointManualCreatedMarker : public ATresSpawnPointMarker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Height;
    
    ATresSpawnPointManualCreatedMarker(const FObjectInitializer& ObjectInitializer);
};

