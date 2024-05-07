#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleComponentBase.h"
#include "TresWinniePuzzleAutoIncreaseSpeedParam.h"
#include "TresWinniePuzzleChallengeModeAutoIncreaseSpeedCoeffParam.h"
#include "TresWinniePuzzleAutoIncreaseController.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresWinniePuzzleAutoIncreaseController : public UTresWinniePuzzleComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableAutoIncreaseWhenShootWait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableResetIncreaseWhenSameKindUnitsRemoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableResetIncreaseWhenInvokeCharacterBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoIncreaseGaugeMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresWinniePuzzleAutoIncreaseSpeedParam> AutoIncreaseSpeedParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresWinniePuzzleChallengeModeAutoIncreaseSpeedCoeffParam> ChallengeModeAutoIncreaseSpeedCoeffParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoIncreaseMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoIncreaseWarningVibrationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ForceIncreaseMinColumns;
    
public:
    UTresWinniePuzzleAutoIncreaseController();
};

