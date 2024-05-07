#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresParam_e_ex773_SpawnParam.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FTresParam_e_ex773_SpawnParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Interval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> SpawnClass;
    
    TRESGAME_API FTresParam_e_ex773_SpawnParam();
};

