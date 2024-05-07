#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipEnemyPartsBase.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipParts648Pawn.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresGumiShipParts648Pawn : public ATresGumiShipEnemyPartsBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAnglespeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_debug_rotator;
    
public:
    ATresGumiShipParts648Pawn(const FObjectInitializer& ObjectInitializer);
};

