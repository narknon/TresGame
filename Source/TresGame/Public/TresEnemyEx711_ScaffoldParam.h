#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx711_ScaffoldParam.generated.h"

class AStaticMeshActor;

USTRUCT(BlueprintType)
struct FTresEnemyEx711_ScaffoldParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStaticMeshActor* m_pActor;
    
    TRESGAME_API FTresEnemyEx711_ScaffoldParam();
};

