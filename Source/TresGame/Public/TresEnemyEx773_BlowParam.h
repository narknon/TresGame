#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx773_BlowParam.generated.h"

class ATresActor_e_ex773_Attract;
class AActor;

USTRUCT(BlueprintType)
struct FTresEnemyEx773_BlowParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresActor_e_ex773_Attract* m_pBlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_pTarget;
    
    TRESGAME_API FTresEnemyEx773_BlowParam();
};

