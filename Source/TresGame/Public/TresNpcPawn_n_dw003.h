#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresNpcPawnBase.h"
#include "TresNpcPawn_n_dw003.generated.h"

class ATresAccompanyPawnBase;
class UParticleSystem;

UCLASS(Blueprintable)
class ATresNpcPawn_n_dw003 : public ATresNpcPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_EffDevilWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_PawnID;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_AppendCure;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresAccompanyPawnBase> m_FR_PopppingHolyPawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresAccompanyPawnBase> m_FR_UltimateEndPawnClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsAquaLinkMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AquaLinkTimer;
    
public:
    ATresNpcPawn_n_dw003(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    bool IsDevilWaveSlowMove() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsDevilWaveCycloneMode() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsDevilWaveCoreOpen() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsDevilEyeColorRed() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsAITargetDevilWave() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsAITargetDevilTower() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsAITargetDarkSide() const;
    
};

