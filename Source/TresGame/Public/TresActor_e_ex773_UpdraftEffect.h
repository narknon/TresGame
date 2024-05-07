#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresActor_e_ex773_UpdraftEffect.generated.h"

class UParticleSystemComponent;
class UParticleSystem;
class UCurveFloat;

UCLASS(Blueprintable)
class ATresActor_e_ex773_UpdraftEffect : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_UpdraftEff;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pro_UpdraftEffData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_pro_UpdraftEffParticleNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_UpdraftEffSpeedZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_UpdraftEffScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_pro_UpdraftEffAlphaCurve;
    
public:
    ATresActor_e_ex773_UpdraftEffect(const FObjectInitializer& ObjectInitializer);
};

