#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx711_Flotation.generated.h"

class AStaticMeshActor;

USTRUCT(BlueprintType)
struct FTresEnemyEx711_Flotation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStaticMeshActor* m_pActor;
    
    TRESGAME_API FTresEnemyEx711_Flotation();
};

