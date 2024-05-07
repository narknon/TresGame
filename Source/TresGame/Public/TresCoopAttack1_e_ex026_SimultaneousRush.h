#pragma once
#include "CoreMinimal.h"
#include "TresAttack1_e_ex026_DashAttack.h"
#include "TresCoopAttack1_e_ex026_SimultaneousRush.generated.h"

class UEnvQuery;

UCLASS(Blueprintable, HideDropdown)
class UTresCoopAttack1_e_ex026_SimultaneousRush : public UTresAttack1_e_ex026_DashAttack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* m_QueryTemplateWarp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_GapOffset;
    
public:
    UTresCoopAttack1_e_ex026_SimultaneousRush();
};

