#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresDisneyMagicPawnBase.h"
#include "TresDisneyMagicPawnSimba.generated.h"

class UParticleSystem;
class USQEX_ParticleAttachDataAsset;
class ATresProjectileBase;
class UCameraShake;

UCLASS(Blueprintable)
class ATresDisneyMagicPawnSimba : public ATresDisneyMagicPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_EffAssetJumpAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShake> m_CameraShakeJumpAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_ProjRoar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_ProjFinishExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_EffDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_Param_bJumpAutoMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Param_JumpPressZ;
    
    ATresDisneyMagicPawnSimba(const FObjectInitializer& ObjectInitializer);
};

