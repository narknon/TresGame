#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "TresProjectileGenerator_e_ex773_Eclipse13.generated.h"

class USceneComponent;
class UParticleSystemComponent;
class UTresParam_e_ex773_Eclipse13;

UCLASS(Abstract, Blueprintable)
class ATresProjectileGenerator_e_ex773_Eclipse13 : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MyRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* MyParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresParam_e_ex773_Eclipse13* ParameterAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShootTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GeneratorIndex;
    
    ATresProjectileGenerator_e_ex773_Eclipse13(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWaitTime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector BPE_GetFireLocation();
    
};

