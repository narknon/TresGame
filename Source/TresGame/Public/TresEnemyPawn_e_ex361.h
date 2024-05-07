#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyXIIILPawnBase.h"
#include "TresEnemyEx361CounterAfterActionPeriodInfo.h"
#include "ETresStateID.h"
#include "TresEnemyPawn_e_ex361.generated.h"

class USoundBase;
class ATresProjectileGenerator_e_ex361_DarkMine;
class ATresProjectileGenerator_e_ex361_DarkHand_Thunder;
class UParticleSystemComponent;
class UParticleSystem;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex361 : public ATresEnemyXIIILPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAura;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileGenerator_e_ex361_DarkMine> m_pro_DarkMineGeneratorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileGenerator_e_ex361_DarkHand_Thunder> m_pro_DarkHand_ThunderGeneratorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_pro_bTestDeleteThunder: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemyEx361CounterAfterActionPeriodInfo> m_AfterActionPeriod;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresProjectileGenerator_e_ex361_DarkMine* m_DarkMineManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pro_KabutowariDecalEffData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_KabutowariDecalEff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_DarkBiteVoiceDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_RevengeVoiceDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_VoiceSocketName;
    
public:
    ATresEnemyPawn_e_ex361(const FObjectInitializer& ObjectInitializer);
    UFUNCTION()
    void OnDtorStateCallBack(TEnumAsByte<ETresStateID> inStateID);
    
    UFUNCTION()
    void OnCtorStateCallBack(TEnumAsByte<ETresStateID> inStateID);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsThunderGenerator();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsHitCounterAttack();
    
    UFUNCTION(BlueprintCallable)
    bool IsCounterSuccess();
    
    UFUNCTION(BlueprintCallable)
    float GetWarpAngle();
    
    UFUNCTION(BlueprintCallable)
    void BP_FinishDarkAura();
    
    UFUNCTION(BlueprintCallable)
    void BP_EndMasterLight();
    
};

