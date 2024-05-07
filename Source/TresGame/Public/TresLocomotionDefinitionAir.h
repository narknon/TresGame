#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinition3DBase.h"
#include "TresLocomotionDefinitionAir.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresLocomotionDefinitionAir : public UTresLocomotionDefinition3DBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAltitudeLimiter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MinAltitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MaxAltitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bKeepCurrentAltitude;
    
public:
    UTresLocomotionDefinitionAir();
};

