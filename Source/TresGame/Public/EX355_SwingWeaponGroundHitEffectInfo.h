#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EX355_SwingWeaponGroundHitEffectInfo.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FEX355_SwingWeaponGroundHitEffectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iNotifyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_WeaponGroundHitEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vSpawnLocOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSpawnOnLandOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fHeightFromLand;
    
    TRESGAME_API FEX355_SwingWeaponGroundHitEffectInfo();
};

