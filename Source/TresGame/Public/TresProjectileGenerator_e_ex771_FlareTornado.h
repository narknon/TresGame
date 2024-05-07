#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresEnemy_e_ex771_FlareTornadoParam.h"
#include "TresEnemy_e_ex771_ExFlareTornadoParam.h"
#include "TresProjectileGenerator_e_ex771_FlareTornado.generated.h"

UCLASS(Blueprintable)
class ATresProjectileGenerator_e_ex771_FlareTornado : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemy_e_ex771_FlareTornadoParam> m_FlareTornadoParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemy_e_ex771_ExFlareTornadoParam> m_ExFlareTornadoParamArray;
    
    ATresProjectileGenerator_e_ex771_FlareTornado(const FObjectInitializer& ObjectInitializer);
};

