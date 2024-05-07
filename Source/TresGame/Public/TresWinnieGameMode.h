#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresGameModeBase.h"
#include "UObject/NoExportTypes.h"
#include "TresWinnieGameMode.generated.h"

class ATresWinniePuzzleManager;
class ATresWinniePuzzleBase;
class ATresWinniePuzzlePlayerPawn;

UCLASS(Blueprintable, NonTransient)
class ATresWinnieGameMode : public ATresGameModeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresWinniePuzzleManager> PuzzleManagerRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresWinniePuzzleBase> PuzzleGameRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresWinniePuzzlePlayerPawn> PlayerPawnRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlayerPawnSpawnLocationRef;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresWinniePuzzleManager* m_pPuzzleManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresWinniePuzzlePlayerPawn* m_pPlayerPawn;
    
public:
    ATresWinnieGameMode(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresWinniePuzzleManager* GetPuzzleManager() const;
    
};

