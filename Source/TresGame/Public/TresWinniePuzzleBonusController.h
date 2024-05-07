#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleComponentBase.h"
#include "TresWinniePuzzleBonusController.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresWinniePuzzleBonusController : public UTresWinniePuzzleComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BonusTurnsNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UnitTypeCandidateNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> BonusUnitRandomRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> BonusUnitRandomRateWhenPrevTypeExist;
    
public:
    UTresWinniePuzzleBonusController();
};

