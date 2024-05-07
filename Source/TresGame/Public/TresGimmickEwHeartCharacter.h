#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "SQEX_SplineMoverExecutor.h"
#include "TresGimmickEwHeartCharacter.generated.h"

class USceneComponent;
class ASQEX_SplineActor;
class USkeletalMeshComponent;
class UParticleSystemComponent;

UCLASS(Abstract, Blueprintable)
class ATresGimmickEwHeartCharacter : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MyRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpacityCompleteTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAnimationOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSQEX_SplineMoverExecutor SplineMover;
    
public:
    ATresGimmickEwHeartCharacter(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetSplineActor(ASQEX_SplineActor* splineActor, float positionRate);
    
    UFUNCTION(BlueprintCallable)
    void SetAbsorbParticle(UParticleSystemComponent* cp);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_HitPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float BPE_GetDestroyCompleteTime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FRotator BPE_GetAbsorbParticleRotation();
    
};

