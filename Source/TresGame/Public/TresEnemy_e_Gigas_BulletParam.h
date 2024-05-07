#pragma once
#include "CoreMinimal.h"
#include "TresEnemy_e_Gigas_BulletParam.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemy_e_Gigas_BulletParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_HomingInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_HomingEndDist;
    
    TRESGAME_API FTresEnemy_e_Gigas_BulletParam();
};

