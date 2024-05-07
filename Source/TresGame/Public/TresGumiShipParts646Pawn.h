#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipEnemyPartsBase.h"
#include "TresGumiShipParts646Pawn.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresGumiShipParts646Pawn : public ATresGumiShipEnemyPartsBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AttackTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_EffectEndTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAdvanceDistance;
    
public:
    ATresGumiShipParts646Pawn(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool _StartAttack(FVector _target);
    
};

