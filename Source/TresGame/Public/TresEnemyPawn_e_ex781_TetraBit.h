#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex781_TetraBit.generated.h"

class USQEX_ParticleAttachDataAsset;
class ATresCharPawnBase;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex781_TetraBit : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_UniqueEffectDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_OpacityFadeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DestroyWaitTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCharPawnBase* m_MyTarget;
    
public:
    ATresEnemyPawn_e_ex781_TetraBit(const FObjectInitializer& ObjectInitializer);
};

