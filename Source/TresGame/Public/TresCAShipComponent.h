#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TresShipDamageParam.h"
#include "SmokeTrigger.h"
#include "TresCAShipComponent.generated.h"

class USkeletalMeshComponent;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresCAShipComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOscEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_PitchPowFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RollPowFactor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresShipDamageParam> m_ShipDamageParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresShipDamageParam> m_ShipGuardParamArray;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSmokeTrigger> m_SmokeTriggerArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_DamageSmokeParticle;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystemComponent*> m_DamageSmokeParticleComponentArray;
    
public:
    UTresCAShipComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void BP_ResetAllDamageSmoke();
    
    UFUNCTION(BlueprintCallable)
    void BP_CreateDamageSmoke(USkeletalMeshComponent* inMesh, float lifePer);
    
};

