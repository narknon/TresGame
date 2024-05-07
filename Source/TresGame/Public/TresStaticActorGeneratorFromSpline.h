#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresStaticActorGeneratorFromSplineSimple.h"
#include "Engine/EngineTypes.h"
#include "TresStaticActorGeneratorFromSpline.generated.h"

class USphereComponent;
class AActor;
class UPrimitiveComponent;

UCLASS(Abstract, Blueprintable)
class ATresStaticActorGeneratorFromSpline : public ATresStaticActorGeneratorFromSplineSimple {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_GenerateTriggerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bGenerateLater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bHiddenWhenFar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USphereComponent* triggerSphereComponent_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> triggerTargetClass;
    
    ATresStaticActorGeneratorFromSpline(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void OnGenerateOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnGenerateOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPEV_OverlapEndSphere(AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPEV_OverlapBeginSphere(AActor* OtherActor);
    
};

