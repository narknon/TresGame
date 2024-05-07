#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresEnemy_e_ex361_ThunderInfo.h"
#include "TresProjectileGenerator_e_ex361_DarkHand_Thunder.generated.h"

class UParticleSystem;

UCLASS(Blueprintable)
class ATresProjectileGenerator_e_ex361_DarkHand_Thunder : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemy_e_ex361_ThunderInfo> m_ThunderInfo;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pro_ThunderEffData;
    
public:
    ATresProjectileGenerator_e_ex361_DarkHand_Thunder(const FObjectInitializer& ObjectInitializer);
};

