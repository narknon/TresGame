#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase.h"
#include "TresEx048BladeEffectMan.h"
#include "ETresDamageKind.h"
#include "TresEnemyPawn_e_ex048.generated.h"

class UParticleSystem;
class UTresAnimSet;
class ATresProjectileBase;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex048 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresAnimSet* m_LandModeAnimSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_BladeEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<TEnumAsByte<ETresDamageKind>> m_ChangeFlyModeReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_MissileProjectileAsset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresEx048BladeEffectMan m_BladeEffectManager;
    
public:
    ATresEnemyPawn_e_ex048(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFlyMode() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_DebugSetBT();
    
};

