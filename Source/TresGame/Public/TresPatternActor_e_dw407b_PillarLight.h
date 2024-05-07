#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresPatternActor_e_dw407b_PillarLight.generated.h"

class USplineComponent;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class ATresPatternActor_e_dw407b_PillarLight : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bIsAimTarget: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bHaveVariability: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_VariabilityMinTime;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_VariabilityMaxTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
public:
    ATresPatternActor_e_dw407b_PillarLight(const FObjectInitializer& ObjectInitializer);
};

