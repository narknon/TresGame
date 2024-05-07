#pragma once
#include "CoreMinimal.h"
#include "EX359_BeamInfoSet.h"
#include "TresActionDefinitionBase.h"
#include "EX359_BeamOnRateInfo.h"
#include "EEX359_SplineMoveVelocityType.h"
#include "TresMove_e_ex359_FastMoveS.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresMove_e_ex359_FastMoveS : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fWarpDisappearTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxMoveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<EEX359_SplineMoveVelocityType> m_VelocityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fVelocityExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fWaveWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTangentSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bReverse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEX359_BeamInfoSet m_BeamInfoSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEX359_BeamOnRateInfo> m_BeamOnRateInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDebugDsip;
    
    UTresMove_e_ex359_FastMoveS();
};

