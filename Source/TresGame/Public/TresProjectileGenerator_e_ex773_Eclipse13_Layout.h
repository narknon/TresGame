#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresProjectileGenerator_e_ex773_Eclipse13_Layout.generated.h"

class USceneComponent;

UCLASS(Abstract, Blueprintable)
class ATresProjectileGenerator_e_ex773_Eclipse13_Layout : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MyRoot;
    
    ATresProjectileGenerator_e_ex773_Eclipse13_Layout(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    static void SetHiddenEclipse13Layout(bool bHiddenObject);
    
};

