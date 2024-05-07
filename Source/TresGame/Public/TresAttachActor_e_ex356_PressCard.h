#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresAttachActor_e_ex356_PressCard.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class ATresAttachActor_e_ex356_PressCard : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MyRoot;
    
    ATresAttachActor_e_ex356_PressCard(const FObjectInitializer& ObjectInitializer);
};

