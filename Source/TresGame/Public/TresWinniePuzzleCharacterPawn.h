#pragma once
#include "CoreMinimal.h"
#include "TresCharPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresWinniePuzzleCharacterPawn.generated.h"

UCLASS(Blueprintable)
class ATresWinniePuzzleCharacterPawn : public ATresCharPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InitialLocationRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator InitialRotationRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StandByLocationRef;
    
public:
    ATresWinniePuzzleCharacterPawn(const FObjectInitializer& ObjectInitializer);
};

