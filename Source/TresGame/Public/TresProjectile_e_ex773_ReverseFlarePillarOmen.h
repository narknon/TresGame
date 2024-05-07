#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "TresProjectileBase.h"
#include "UObject/NoExportTypes.h"
#include "TresProjectile_e_ex773_ReverseFlarePillarOmen.generated.h"

class UParticleSystemComponent;
class UParticleSystem;
class ATresActor_e_ex773_Updraft;
class UCurveFloat;
class AActor;

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex773_ReverseFlarePillarOmen : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_FlarePillarOmenEff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pro_FlarePillarOmenEffData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_Omen1Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_Omen2Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_HeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator FlarePillarRotator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresActor_e_ex773_Updraft> m_pro_UpdraftClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_FixedHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_UpdraftForceRateCurve;
    
    ATresProjectile_e_ex773_ReverseFlarePillarOmen(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void CreateUpdraft();
    
    UFUNCTION(BlueprintCallable)
    void CreateSurfacingEffect();
    
    UFUNCTION(BlueprintCallable)
    void CreateFlarePillarOmenEff();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_StartOmen(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector BPE_GetFlarePillarSpawnLocation(AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float BPE_CalcUpdraftForce(float srcPower, float nowHeight);
    
};

