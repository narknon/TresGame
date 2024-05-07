#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresWinniePuzzleBase.h"
#include "TresWinniePuzzleCharacterBonusDecreaseParam.h"
#include "TresWinniePuzzleFruitV0.generated.h"

class ATresWinniePuzzleLumpyPawn;
class ATresWinniePuzzleRabbitPawn;
class UTresWinniePuzzleUnitVibrationController;
class UTresWinniePuzzleAutoIncreaseController;
class UTresWinniePuzzleShootTimeLimitController;

UCLASS(Blueprintable)
class ATresWinniePuzzleFruitV0 : public ATresWinniePuzzleBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresWinniePuzzleRabbitPawn> RabbitPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresWinniePuzzleLumpyPawn> LumpyPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresWinniePuzzleCharacterBonusDecreaseParam DecreaseParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresWinniePuzzleUnitVibrationController* UnitVibrationCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresWinniePuzzleAutoIncreaseController* AutoIncreaseCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresWinniePuzzleShootTimeLimitController* ShootTimeLimitCtrl;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresWinniePuzzleRabbitPawn* m_pRabbitPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresWinniePuzzleLumpyPawn* m_pLumpyPawn;
    
public:
    ATresWinniePuzzleFruitV0(const FObjectInitializer& ObjectInitializer);
};

