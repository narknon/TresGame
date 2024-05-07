#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresE_ex773_Eclipse13_LandingPoint.generated.h"

class USceneComponent;

UCLASS(Abstract, Blueprintable)
class ATresE_ex773_Eclipse13_LandingPoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MyRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GeneratorIndex;
    
    ATresE_ex773_Eclipse13_LandingPoint(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_SetDisableLandingPointNavmesh(bool bDisable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_SetActive(bool B);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_LengthRate(float Rate);
    
};

