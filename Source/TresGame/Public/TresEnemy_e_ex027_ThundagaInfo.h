#pragma once
#include "CoreMinimal.h"
#include "TresEnemy_e_ex027_ThundagaInfo.generated.h"

class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex027_ThundagaInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_ThundagaEff;
    
    TRESGAME_API FTresEnemy_e_ex027_ThundagaInfo();
};

