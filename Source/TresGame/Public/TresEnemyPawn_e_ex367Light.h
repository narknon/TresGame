#pragma once
#include "CoreMinimal.h"
#include "TresPawnBase.h"
#include "TresEnemyPawn_e_ex367Light.generated.h"

class UPointLightComponent;
class UDirectionalLightComponent;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex367Light : public ATresPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDirectionalLightComponent* MyDirectionalLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPointLightComponent* MyPointLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DirectionalIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_PointLightIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AllLightIntensity;
    
    ATresEnemyPawn_e_ex367Light(const FObjectInitializer& ObjectInitializer);
};

