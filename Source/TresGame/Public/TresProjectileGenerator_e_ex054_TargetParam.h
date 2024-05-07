#pragma once
#include "CoreMinimal.h"
#include "TresProjectileGenerator_e_ex054_TargetParam.generated.h"

class ATresCharPawnBase;

USTRUCT(BlueprintType)
struct FTresProjectileGenerator_e_ex054_TargetParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCharPawnBase* m_pTarget;
    
    TRESGAME_API FTresProjectileGenerator_e_ex054_TargetParam();
};

