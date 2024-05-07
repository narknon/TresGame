#pragma once
#include "CoreMinimal.h"
#include "TresAttack1_e_ex113_FoliageCut.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "TresAttack4_e_ex113_WarpFoliageCut.generated.h"

class UAnimSequenceBase;
class UEnvQuery;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack4_e_ex113_WarpFoliageCut : public UTresAttack1_e_ex113_FoliageCut {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* m_WarpStartAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* m_WarpEndAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* m_RevengeEnvQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<EEnvQueryRunMode::Type> m_EnvQueryRunMode;
    
public:
    UTresAttack4_e_ex113_WarpFoliageCut();
};

