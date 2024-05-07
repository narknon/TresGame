#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "TresGumiShipShootWeaponBase.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipAttachedBulletWeapon.generated.h"

class UParticleSystem;
class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipAttachedBulletWeapon : public UTresGumiShipShootWeaponBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipPostDestroyBullet);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pChargeEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vChargeEffectScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAutoStopAttackWhenBulletEndPlay;
    
public:
    UTresGumiShipAttachedBulletWeapon();
private:
    UFUNCTION()
    void _OnBulletEndPlay(AActor* pActor, TEnumAsByte<EEndPlayReason::Type> EEndPlayReason);
    
    UFUNCTION(BlueprintCallable)
    void _OnBulletDestroyOverride();
    
};

