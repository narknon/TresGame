#pragma once
#include "CoreMinimal.h"
#include "TresAction1_XIIILE_LeaderChangeWarpStart.h"
#include "TresAction2_e_ex351_WarpStart.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction2_e_ex351_WarpStart : public UTresAction1_XIIILE_LeaderChangeWarpStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bAfterImageWarp: 1;
    
    UTresAction2_e_ex351_WarpStart();
};

