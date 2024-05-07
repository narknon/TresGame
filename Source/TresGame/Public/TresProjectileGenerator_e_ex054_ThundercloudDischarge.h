#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresEnemy_e_ex054_DischargeInfo.h"
#include "TresProjectileGenerator_e_ex054_ThundercloudDischarge.generated.h"

class UParticleSystem;

UCLASS(Blueprintable)
class ATresProjectileGenerator_e_ex054_ThundercloudDischarge : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemy_e_ex054_DischargeInfo> m_DischargeInfo;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pro_DischargeEffData;
    
public:
    ATresProjectileGenerator_e_ex054_ThundercloudDischarge(const FObjectInitializer& ObjectInitializer);
};

