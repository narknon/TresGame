#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresEnemy_e_ex773_EncloseFlareParam.h"
#include "TresProjectileGenerator_e_ex773_EncloseFlare.generated.h"

UCLASS(Blueprintable)
class ATresProjectileGenerator_e_ex773_EncloseFlare : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemy_e_ex773_EncloseFlareParam> m_EncloseFlareParamArray;
    
    ATresProjectileGenerator_e_ex773_EncloseFlare(const FObjectInitializer& ObjectInitializer);
};

