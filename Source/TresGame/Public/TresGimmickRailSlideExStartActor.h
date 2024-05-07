#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "ETresSavePointDispType.h"
#include "TresGimmickRailSlideExStartActor.generated.h"

class USceneComponent;
class UTresReactorComponent;
class UParticleSystemComponent;
class UParticleSystem;

UCLASS(Abstract, Blueprintable, Config=Game)
class ATresGimmickRailSlideExStartActor : public ATresGimmickActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MyRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresReactorComponent* MyReactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_EffectBodyComp;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_Effect_Body;
    
    ATresGimmickRailSlideExStartActor(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable)
    void OnChangeRailSlideExStartActorDispType(ETresSavePointDispType InDispType);
    
};

