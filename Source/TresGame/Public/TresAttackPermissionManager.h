#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "ETresTeam.h"
#include "TresAttackPermissionManager.generated.h"

class UCurveVector;

UCLASS(Abstract, Blueprintable)
class UTresAttackPermissionManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AttackerGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresTeam::Type> AttackFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* MaxAttackerCurve;
    
    UTresAttackPermissionManager();
};

