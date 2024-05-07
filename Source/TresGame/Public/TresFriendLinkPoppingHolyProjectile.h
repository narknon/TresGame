#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "UObject/NoExportTypes.h"
#include "TresFriendLinkPoppingHolyProjectile.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresFriendLinkPoppingHolyProjectile : public ATresProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRisingThresholdHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fGravityScaleWhenRising;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fGravityScaleWhenFalling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLifeTimeWhenFalling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fBattleAreaOutsideFallingThresholdHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vBrakingVelocityScaleWhenFallingStarted;
    
public:
    ATresFriendLinkPoppingHolyProjectile(const FObjectInitializer& ObjectInitializer);
};

