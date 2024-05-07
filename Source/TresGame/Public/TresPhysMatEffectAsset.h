#pragma once
#include "CoreMinimal.h"
#include "TresLoadAsset.h"
#include "TresPhysMatEffectAssetUnit.h"
#include "TresPhysMatEffectAsset.generated.h"

UCLASS(Blueprintable)
class UTresPhysMatEffectAsset : public UTresLoadAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FTresPhysMatEffectAssetUnit m_Effects[63];
    
    UTresPhysMatEffectAsset();
};

