#pragma once
#include "CoreMinimal.h"
#include "TresFeatherShotProjectileParam_e_ex081.generated.h"

USTRUCT(BlueprintType)
struct FTresFeatherShotProjectileParam_e_ex081 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ProjectileInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ShootPitchAngle;
    
    TRESGAME_API FTresFeatherShotProjectileParam_e_ex081();
};

