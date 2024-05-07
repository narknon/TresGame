#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProj_LaserLineTrace.generated.h"

UCLASS(Blueprintable)
class ATresProj_LaserLineTrace : public ATresProjectileBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresOnShutDown);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresOnLaserTerminate);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsLifeOverWhenArrivedLaserTerminate;
    
public:
    ATresProj_LaserLineTrace(const FObjectInitializer& ObjectInitializer);
private:
    UFUNCTION(BlueprintCallable)
    void _OnShutdownFromLaser();
    
};

