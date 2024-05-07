#pragma once
#include "CoreMinimal.h"
#include "TresAttack2_e_ex761_WarpRushBase.h"
#include "TresAttack2_e_ex761_WarpRushVanish.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack2_e_ex761_WarpRushVanish : public UTresAttack2_e_ex761_WarpRushBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RushTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_EndDistance;
    
public:
    UTresAttack2_e_ex761_WarpRushVanish();
};

