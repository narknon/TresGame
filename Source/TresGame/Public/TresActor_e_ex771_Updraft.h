#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "TresActor_e_ex771_Updraft.generated.h"

class UCurveFloat;
class ATresProjectileBase;
class UCapsuleComponent;
class ATresWaterCurrentSplineActor;

UCLASS(Blueprintable)
class ATresActor_e_ex771_Updraft : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_ForceRateCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresProjectileBase* m_Projectile;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* MyUpdraftComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresWaterCurrentSplineActor> m_UpdraftSplineClass;
    
public:
    ATresActor_e_ex771_Updraft(const FObjectInitializer& ObjectInitializer);
};

