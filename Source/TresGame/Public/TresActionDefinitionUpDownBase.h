#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresActionDefinitionUpDownBase.generated.h"

UCLASS(Abstract, Blueprintable)
class UTresActionDefinitionUpDownBase : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MaxVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Accel;
    
public:
    UTresActionDefinitionUpDownBase();
};

