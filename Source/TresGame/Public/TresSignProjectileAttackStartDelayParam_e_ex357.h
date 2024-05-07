#pragma once
#include "CoreMinimal.h"
#include "TresSignProjectileAttackStartDelayParam_e_ex357.generated.h"

USTRUCT(BlueprintType)
struct FTresSignProjectileAttackStartDelayParam_e_ex357 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttackCollisionGroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackStartDelayTime;
    
    TRESGAME_API FTresSignProjectileAttackStartDelayParam_e_ex357();
};

