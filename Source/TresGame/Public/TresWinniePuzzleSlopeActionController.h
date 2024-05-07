#pragma once
#include "CoreMinimal.h"
#include "WinniePuzzleSlopeActionRemoveFindingTarget.h"
#include "TresWinniePuzzleComponentBase.h"
#include "TresWinniePuzzleSlopeActionController.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresWinniePuzzleSlopeActionController : public UTresWinniePuzzleComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StickSlopingValidValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnitMovingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    WinniePuzzleSlopeActionRemoveFindingTarget SlopeActionRemoveFindingTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InvokeSlopeActionUntilNoMovableUnit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlopePowerMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IncreasingPowerPerUnit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InvokeSlopeActionStoreTimesMax;
    
public:
    UTresWinniePuzzleSlopeActionController();
};

