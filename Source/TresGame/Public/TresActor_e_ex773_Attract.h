#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "TresActor_e_ex773_Attract.generated.h"

class UCapsuleComponent;
class ATresWaterCurrentSplineActor;

UCLASS(Blueprintable)
class ATresActor_e_ex773_Attract : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* MyAttractComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresWaterCurrentSplineActor> m_AttractSplineClass;
    
public:
    ATresActor_e_ex773_Attract(const FObjectInitializer& ObjectInitializer);
};

