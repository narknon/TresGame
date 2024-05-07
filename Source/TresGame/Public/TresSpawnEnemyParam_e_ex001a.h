#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresSpawnEnemyParam_e_ex001a.generated.h"

class ATresEnemyPawnBase;

USTRUCT(BlueprintType)
struct FTresSpawnEnemyParam_e_ex001a {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HpRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresEnemyPawnBase> SpawnEnemyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnNum;
    
    TRESGAME_API FTresSpawnEnemyParam_e_ex001a();
};

