#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresWinniePuzzleBase.h"
#include "TresWinniePuzzleCharacterBonusBoundParam.h"
#include "TresWinniePuzzleVegetable.generated.h"

class ATresWinniePuzzleTiggerPawn;
class ATresWinniePuzzleRabbitPawn;

UCLASS(Blueprintable)
class ATresWinniePuzzleVegetable : public ATresWinniePuzzleBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresWinniePuzzleRabbitPawn> RabbitPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresWinniePuzzleTiggerPawn> TiggerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresWinniePuzzleCharacterBonusBoundParam BoundParam;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresWinniePuzzleRabbitPawn* m_pRabbitPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresWinniePuzzleTiggerPawn* m_pTiggerPawn;
    
public:
    ATresWinniePuzzleVegetable(const FObjectInitializer& ObjectInitializer);
};

