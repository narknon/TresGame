#pragma once
#include "CoreMinimal.h"
#include "TresEnemy_e_ex773_ExFlareTornadoParam.h"
#include "GameFramework/Actor.h"
#include "TresEnemy_e_ex773_FlareTornadoParam.h"
#include "TresProjectileGenerator_e_ex773_FlareTornado.generated.h"

UCLASS(Blueprintable)
class ATresProjectileGenerator_e_ex773_FlareTornado : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemy_e_ex773_FlareTornadoParam> m_FlareTornadoParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemy_e_ex773_ExFlareTornadoParam> m_ExFlareTornadoParamArray;
    
    ATresProjectileGenerator_e_ex773_FlareTornado(const FObjectInitializer& ObjectInitializer);
};

