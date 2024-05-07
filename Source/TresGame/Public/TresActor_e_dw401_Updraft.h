#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "TresActor_e_dw401_Updraft.generated.h"

class UCapsuleComponent;
class ATresWaterCurrentSplineActor;

UCLASS(Blueprintable)
class ATresActor_e_dw401_Updraft : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* MyUpdraftComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresWaterCurrentSplineActor> m_UpdraftSplineClass;
    
public:
    ATresActor_e_dw401_Updraft(const FObjectInitializer& ObjectInitializer);
};

