#pragma once
#include "CoreMinimal.h"
#include "TresPawnBase.h"
#include "TresEnemyPawn_e_ex301Light.generated.h"

class UPointLightComponent;
class UDirectionalLightComponent;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex301Light : public ATresPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDirectionalLightComponent* MyDirectionalLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPointLightComponent* MyPointLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DirectionalIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_PointLightIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AllLightIntensity;
    
    ATresEnemyPawn_e_ex301Light(const FObjectInitializer& ObjectInitializer);
};

