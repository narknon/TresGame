#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresEnemy_e_ex771_FlareShotEntryParam.h"
#include "TresEnemy_e_ex771_FlareShotSphereEntryParam.h"
#include "TresProjectileGenerator_e_ex771_FlareShot.generated.h"

class ATresProjectileBase;

UCLASS(Blueprintable)
class ATresProjectileGenerator_e_ex771_FlareShot : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<TWeakObjectPtr<ATresProjectileBase>> m_FlareShotArray;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemy_e_ex771_FlareShotEntryParam> m_FlareShotEntryParamArray;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemy_e_ex771_FlareShotSphereEntryParam> m_FlareShotSphereEntryParamArray;
    
    ATresProjectileGenerator_e_ex771_FlareShot(const FObjectInitializer& ObjectInitializer);
};

