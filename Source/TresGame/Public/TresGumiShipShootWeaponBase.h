#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresGumiShipWeaponBase.h"
#include "ETresGumiShipMuzzleInfoCalcType.h"
#include "TresGumiShipMuzzleParam.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipShootWeaponBase.generated.h"

class ATresGumiShipProjectileBase;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipShootWeaponBase : public UTresGumiShipWeaponBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipPostShootBullet);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGumiShipMuzzleInfoCalcType m_eMuzzleInfoCalcType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_BaseMuzzleRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresGumiShipMuzzleParam> m_MuzzleParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCoolDownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDelayTimeOfStartShoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDispersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 m_bySimultaneousShotsCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresGumiShipProjectileBase> m_ProjectileType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseTargetDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPredictionTargetWhenUseTargetDirection;
    
public:
    UTresGumiShipShootWeaponBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnShootBullet(ATresGumiShipProjectileBase* pBullet);
    
private:
    UFUNCTION(BlueprintCallable)
    void _AddRecycleProjectile(ATresGumiShipProjectileBase* pProjectile, bool& rbWasRecycle);
    
};

