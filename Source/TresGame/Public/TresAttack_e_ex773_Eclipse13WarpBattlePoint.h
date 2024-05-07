#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex773_Eclipse13Base.h"
#include "TresAttack_e_ex773_Eclipse13WarpBattlePoint.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack_e_ex773_Eclipse13WarpBattlePoint : public UTresAttack_e_ex773_Eclipse13Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ForceWarpPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GapTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLastWarp;
    
    UTresAttack_e_ex773_Eclipse13WarpBattlePoint();
};

