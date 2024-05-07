#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionMercunaBase.h"
#include "TresNpcLocomotionDefinitionSwim.generated.h"

UCLASS(Blueprintable)
class UTresNpcLocomotionDefinitionSwim : public UTresLocomotionDefinitionMercunaBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MinWaterSurfaceSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MaxWaterSurfaceSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MinUnderWaterSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MaxUnderWaterSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOnlyWaterSurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_InViewportSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_OutViewportSpeedRate;
    
public:
    UTresNpcLocomotionDefinitionSwim();
};

