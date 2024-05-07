#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresWinniePuzzleBase.h"
#include "TresWinniePuzzleCharacterBonusDecreaseParam.h"
#include "TresWinniePuzzleFruit.generated.h"

class ATresWinniePuzzleLumpyPawn;
class ATresWinniePuzzleRabbitPawn;
class UTresWinniePuzzleUnitVibrationController;
class UTresWinniePuzzleAutoIncreaseController;

UCLASS(Blueprintable)
class ATresWinniePuzzleFruit : public ATresWinniePuzzleBase {
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
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresWinniePuzzleRabbitPawn* m_pRabbitPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresWinniePuzzleLumpyPawn* m_pLumpyPawn;
    
public:
    ATresWinniePuzzleFruit(const FObjectInitializer& ObjectInitializer);
};

