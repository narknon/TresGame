#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresEffectActor.generated.h"

class UTresRootComponent;

UCLASS(Blueprintable)
class ATresEffectActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresRootComponent* MyRoot;
    
    ATresEffectActor(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void ResetEffect(int32 in_GroupID);
    
    UFUNCTION(BlueprintCallable)
    void LoopEnd(int32 in_GroupID);
    
    UFUNCTION(BlueprintCallable)
    void FadeEffect(bool in_FadeOut, float in_FadeTime, int32 in_GroupID);
    
    UFUNCTION(BlueprintCallable)
    void ActivateEffect(bool in_Active, int32 in_GroupID);
    
};

