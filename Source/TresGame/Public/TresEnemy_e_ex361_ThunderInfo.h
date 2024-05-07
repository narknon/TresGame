#pragma once
#include "CoreMinimal.h"
#include "TresEnemy_e_ex361_ThunderInfo.generated.h"

class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex361_ThunderInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_ThunderEff;
    
    TRESGAME_API FTresEnemy_e_ex361_ThunderInfo();
};

