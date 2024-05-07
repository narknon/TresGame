#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresEnemy_e_ex027_ThundagaParam.h"
#include "TresProjectileGenerator_e_ex027_Thundaga.generated.h"

class UParticleSystem;

UCLASS(Blueprintable)
class ATresProjectileGenerator_e_ex027_Thundaga : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemy_e_ex027_ThundagaParam> m_ThundagaParam;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_ThundagaEffData;
    
public:
    ATresProjectileGenerator_e_ex027_Thundaga(const FObjectInitializer& ObjectInitializer);
};

