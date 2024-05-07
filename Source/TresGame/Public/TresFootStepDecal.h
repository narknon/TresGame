#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresFootStepDecal.generated.h"

class UDecalComponent;
class UMaterialInterface;

UCLASS(Blueprintable)
class ATresFootStepDecal : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecalComponent* m_Decal;
    
    ATresFootStepDecal(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetFootStepDecalMaterial(UMaterialInterface* NewDecalMaterial);
    
};

