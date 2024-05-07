#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx773_FlareAttractParam.generated.h"

class ATresActor_e_ex773_Attract;
class AActor;

USTRUCT(BlueprintType)
struct FTresEnemyEx773_FlareAttractParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresActor_e_ex773_Attract* m_pAttract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_pTarget;
    
    TRESGAME_API FTresEnemyEx773_FlareAttractParam();
};

