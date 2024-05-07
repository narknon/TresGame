#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresSpawnHandParam_e_ex702.h"
#include "TresEnemyPawn_e_ex702.generated.h"

class USQEX_ParticleAttachDataAsset;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex702 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_GroundEffectAttachDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresSpawnHandParam_e_ex702 m_ModeChangeHandSpawnParam;
    
public:
    ATresEnemyPawn_e_ex702(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    int32 GetNumTarHand() const;
    
};

