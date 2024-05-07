#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresGumiShipHitEffectDataTable.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FTresGumiShipHitEffectDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pHitEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseScaleFromCameraDistTo;
    
    TRESGAME_API FTresGumiShipHitEffectDataTable();
};

