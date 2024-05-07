#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleBase.h"
#include "TresWinniePuzzleVegetableV0.generated.h"

class UTresWinniePuzzleUnitControllerBase;
class UTresWinniePuzzlePlayerUnitControllerBase;
class UTresWinniePuzzleBossController;
class UTresWinniePuzzleSlopeActionController;

UCLASS(Blueprintable)
class ATresWinniePuzzleVegetableV0 : public ATresWinniePuzzleBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresWinniePuzzleUnitControllerBase* UnitCtrlBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresWinniePuzzlePlayerUnitControllerBase* PlayerUnitCtrlBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresWinniePuzzleSlopeActionController* SlopeActionCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresWinniePuzzleBossController* BossCtrl;
    
public:
    ATresWinniePuzzleVegetableV0(const FObjectInitializer& ObjectInitializer);
};

