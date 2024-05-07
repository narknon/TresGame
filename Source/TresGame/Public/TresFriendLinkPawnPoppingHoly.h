#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresFriendLinkUtilityPawn.h"
#include "ETresBodyPushPowerLevel.h"
#include "TresFriendLinkPawnPoppingHoly.generated.h"

class ATresCameraNormal;
class ATresProjectileBase;
class UParticleSystem;

UCLASS(Blueprintable)
class ATresFriendLinkPawnPoppingHoly : public ATresFriendLinkUtilityPawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_HolyProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_FinishAttackHolyProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pHolyBulletFiringEffectAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pKeyBladeAttachHolyEffectAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresCameraNormal> m_PoppingHolyCameraClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMoveDeceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCameraStartInterpolationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCameraEndInterpolationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresBodyPushPowerLevel m_eBodyCollisionPushPowerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFriendLinkFinishInvincibleTime;
    
public:
    ATresFriendLinkPawnPoppingHoly(const FObjectInitializer& ObjectInitializer);
};

