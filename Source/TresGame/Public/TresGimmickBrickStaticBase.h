#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "TresGimmickActor.h"
#include "TresGimmickDitherFadeInterface.h"
#include "TresGimmickBrickStaticBase.generated.h"

class UTresStaticMeshComponent;
class UTresGimmickHitCountComponent;
class UTresNavModifierComponent;
class AActor;

UCLASS(Abstract, Blueprintable, Config=Game)
class ATresGimmickBrickStaticBase : public ATresGimmickActor, public ITresGimmickDitherFadeInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* MyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresGimmickHitCountComponent* TresGimmickHitCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresNavModifierComponent* TresNavModifier;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ImpulseRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ImpulseStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_DitherParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_DitherFadeInvert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DitherStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DitherTime;
    
    ATresGimmickBrickStaticBase(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable)
    void OnTresTakeDamageGimmickCallback(const FHitResult& HitInfo, AActor* DamageCauser);
    
    
    // Fix for true pure virtual functions not being implemented
};

