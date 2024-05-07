#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "TresE_EX781BreakSlashPatternWaveParam.h"
#include "TresProjectileGenerator_e_ex781_SlashWave.generated.h"

class UParticleSystem;
class ATresProjectileBase;
class UParticleSystemComponent;
class ATresCharPawnBase;

UCLASS(Blueprintable)
class ATresProjectileGenerator_e_ex781_SlashWave : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_FinishParticleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_GrandSlashParticleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SignIntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ATresProjectileBase>> m_BulletProjectileList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresE_EX781BreakSlashPatternWaveParam> m_SlashPatternParam;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCharPawnBase* m_MyTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_SignParticle;
    
public:
    ATresProjectileGenerator_e_ex781_SlashWave(const FObjectInitializer& ObjectInitializer);
};

