#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "TresActor_e_ex771_Descent.generated.h"

class UCurveFloat;
class UCapsuleComponent;
class ATresWaterCurrentSplineActor;

UCLASS(Blueprintable)
class ATresActor_e_ex771_Descent : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_ForceRateCurve;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* MyDescentComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresWaterCurrentSplineActor> m_DescentSplineClass;
    
public:
    ATresActor_e_ex771_Descent(const FObjectInitializer& ObjectInitializer);
};

