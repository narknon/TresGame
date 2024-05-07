#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipGenericProjectileParam.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FTresGumiShipGenericProjectileParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pAttachEffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ProjectileDataName;
    
    TRESGAME_API FTresGumiShipGenericProjectileParam();
};

