#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx773_AttractBT04Param.generated.h"

class ATresActor_e_ex773_Attract;
class AActor;

USTRUCT(BlueprintType)
struct FTresEnemyEx773_AttractBT04Param {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresActor_e_ex773_Attract* m_pAttract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_pTarget;
    
    TRESGAME_API FTresEnemyEx773_AttractBT04Param();
};

