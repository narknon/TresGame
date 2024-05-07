#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack_e_ex773_Eclipse13Base.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack_e_ex773_Eclipse13Base : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWarpUsePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WarpStartTime;
    
    UTresAttack_e_ex773_Eclipse13Base();
    UFUNCTION(BlueprintCallable)
    void StartEclipse13();
    
};

