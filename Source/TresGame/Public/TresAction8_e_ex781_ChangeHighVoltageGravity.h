#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "ETresGimmickEx781GravitySphereGravityType.h"
#include "TresAction8_e_ex781_ChangeHighVoltageGravity.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class UTresAction8_e_ex781_ChangeHighVoltageGravity : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGimmickEx781GravitySphereGravityType m_GravityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_GravityPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_GravityTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_GravityRateCurve;
    
    UTresAction8_e_ex781_ChangeHighVoltageGravity();
};

