#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "EX359_CutDownTractionInfo.h"
#include "WaveOneCollInfo_e_ex359.h"
#include "TresCoopAttack3_e_ex359_CutDown.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, HideDropdown)
class UTresCoopAttack3_e_ex359_CutDown : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEX359_CutDownTractionInfo> m_TractionInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveOneCollInfo_e_ex359 m_OneCollInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_StartAnimMoveCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_LoopAnimMoveCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_EndAnimMoveCurve;
    
    UTresCoopAttack3_e_ex359_CutDown();
};

