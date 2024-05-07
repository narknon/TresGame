#pragma once
#include "CoreMinimal.h"
#include "TresRoarSpawnProjectileParam_e_dw407b.generated.h"

USTRUCT(BlueprintType)
struct FTresRoarSpawnProjectileParam_e_dw407b {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SpawnProjectileSameTimeNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SpawnProjectileRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AimTargetDirectionMinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AimTargetDirectionMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AimTargetDirectionAngle;
    
    TRESGAME_API FTresRoarSpawnProjectileParam_e_dw407b();
};

