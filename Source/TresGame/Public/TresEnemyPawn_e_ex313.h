#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyXIIIPawnBase.h"
#include "TresEnemyPawn_e_ex313.generated.h"

class ATresEnemyXIIIAManager;
class ATresProjectileGenerator_e_ex313_DarkMine;
class ATresProjectileGenerator_e_ex313_DarkHand_Thunder;
class UParticleSystem;
class UParticleSystemComponent;
class USoundBase;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex313 : public ATresEnemyXIIIPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAura;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileGenerator_e_ex313_DarkMine> m_pro_DarkMineGeneratorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileGenerator_e_ex313_DarkHand_Thunder> m_pro_DarkHand_ThunderGeneratorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_pro_PartnerDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_pro_TestPartnerDead;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresProjectileGenerator_e_ex313_DarkMine* m_DarkMineManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pro_KabutowariDecalEffData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_KabutowariDecalEff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_DarkBiteVoiceDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_DarkBiteCoopVoiceDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_RevengeVoiceDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_VoiceSocketName;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresEnemyXIIIAManager> m_pro_XIIIAManagerClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresEnemyXIIIAManager* m_XIIIAManager;
    
public:
    ATresEnemyPawn_e_ex313(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable)
    bool IsThunderGenerator();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsPartnerDead();
    
    UFUNCTION(BlueprintCallable, Exec)
    bool IsDuringDarkMineCooldown();
    
    UFUNCTION(BlueprintCallable, Exec)
    bool IsDuringDarkAuraKabutowariCooldown();
    
    UFUNCTION(BlueprintCallable, Exec)
    bool CanUseDarkAuraKabutowari();
    
};

