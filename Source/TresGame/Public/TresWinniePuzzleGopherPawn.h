#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresWinniePuzzleCharacterPawn.h"
#include "TresWinniePuzzleGopherPawn.generated.h"

UCLASS(Blueprintable)
class ATresWinniePuzzleGopherPawn : public ATresWinniePuzzleCharacterPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MinScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MaxScale;
    
    ATresWinniePuzzleGopherPawn(const FObjectInitializer& ObjectInitializer);
};

