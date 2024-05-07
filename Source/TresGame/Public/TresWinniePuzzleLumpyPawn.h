#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleCharacterPawn.h"
#include "TresWinniePuzzleLumpyPawn.generated.h"

UCLASS(Blueprintable)
class ATresWinniePuzzleLumpyPawn : public ATresWinniePuzzleCharacterPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecreaseMoveStartYFromLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecreaseMoveEndYFromLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecreaseMoveStartYFromRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecreaseMoveEndYFromRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReadyMoveEndY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecreaseMoveSpeed;
    
    ATresWinniePuzzleLumpyPawn(const FObjectInitializer& ObjectInitializer);
};

