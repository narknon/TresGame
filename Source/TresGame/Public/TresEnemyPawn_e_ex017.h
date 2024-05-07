#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex017.generated.h"

class USQEX_ParticleAttachDataAsset;
class ATresProjectileBase;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex017 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresProjectileBase* m_pMagicSquare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bMagicSquare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_pro_EffDataAsset;
    
    ATresEnemyPawn_e_ex017(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    bool IsMagicSquare();
    
    UFUNCTION(BlueprintCallable)
    void Debug_ForcingCancelMagicSquare();
    
};

