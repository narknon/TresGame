#pragma once
#include "CoreMinimal.h"
#include "TresEnemy_e_ex773_LivelyFlarePillarGenClass.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex773_LivelyFlarePillarGenClass {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttackName;
    
    TRESGAME_API FTresEnemy_e_ex773_LivelyFlarePillarGenClass();
};

