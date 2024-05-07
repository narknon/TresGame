#pragma once
#include "CoreMinimal.h"
#include "TresProj_MagicBase.h"
#include "TresProjectile_n_ex033_LaserRainCore.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresProjectile_n_ex033_LaserRainCore : public ATresProj_MagicBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nShotMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fShotWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fShotWaitShortTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nDistanceMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nRotMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bLandPut: 1;
    
public:
    ATresProjectile_n_ex033_LaserRainCore(const FObjectInitializer& ObjectInitializer);
};

