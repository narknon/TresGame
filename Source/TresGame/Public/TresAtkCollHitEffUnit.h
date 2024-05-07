#pragma once
#include "CoreMinimal.h"
#include "TresDecalData.h"
#include "TresAtkCollHitEffUnit.generated.h"

class UParticleSystem;
class USoundBase;

USTRUCT(BlueprintType)
struct FTresAtkCollHitEffUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_PawnHitEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* m_PawnHitSEAsset;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    UParticleSystem* m_PawnHitEffectPerAttr[8];
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    USoundBase* m_PawnHitSEAssetPerAttr[8];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_DirectHitEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bChangeMapHit: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_MapHitEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bChangeSEMapHit: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* m_MapHitSEAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableDecal: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NoClear, meta=(AllowPrivateAccess=true))
    FTresDecalData m_DecalData;
    
    TRESGAME_API FTresAtkCollHitEffUnit();
};

