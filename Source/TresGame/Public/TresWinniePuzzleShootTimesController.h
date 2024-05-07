#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleComponentBase.h"
#include "TresWinniePuzzleShootTimesController.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresWinniePuzzleShootTimesController : public UTresWinniePuzzleComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableShootTimesCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShootTimesInitValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShootTimesMaxValue;
    
public:
    UTresWinniePuzzleShootTimesController();
};

